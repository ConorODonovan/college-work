import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.io.*;

public class Main {

    public static void main(String[] args) {

        JFrame frame = new JFrame();
        JPanel panel = new JPanel();

        panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));

        frame.add(panel);

        JLabel top = new JLabel("Please complete the following fields:");
        JLabel fileName = new JLabel("File Name");
        TextField fileNameText = new TextField();
        JLabel content = new JLabel("Content");
        TextArea contentText = new TextArea(5, 20);
        JButton save = new JButton("Save");

        save.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {

                PrintWriter fileOut;
                String nameOfFile = fileName.getText();
                String text = contentText.getText();

                try {

                    fileOut = new PrintWriter(nameOfFile);
                    fileOut.println(text);
                    fileOut.close();

                    int result = JOptionPane.showConfirmDialog(panel, "File created successfully!");

                    if (result == JOptionPane.YES_OPTION) {

                        fileNameText.setText("");
                        contentText.setText("");
                    }
                }
                catch (FileNotFoundException err) {

                    System.out.println("Error: " + err.getMessage());
                }
            }
        });

        panel.add(top);
        panel.add(fileName);
        panel.add(fileNameText);
        panel.add(content);
        panel.add(contentText);
        panel.add(save);


        frame.pack();
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
