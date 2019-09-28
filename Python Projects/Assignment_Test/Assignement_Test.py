import string, httplib2, csv

DATA_URL = "http://archive.ics.uci.edu/ml/machine-learning-databases/adult/adult.data"

h = httplib2.Http(".cache")
data_headers, data = h.request(DATA_URL)

data = data.decode()

data_csv = csv.reader(data)