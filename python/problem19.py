months = { "January": 31,
        "February" : 28,
        "March" : 31,
        "April" : 30,
        "May" : 31,
        "June" : 30,
        "July" : 31,
        "August" : 31,
        "September" : 30,
        "October" : 31,
        "November" : 30,
        "December" : 31}

def countingSundays():
    day = 1
    sunday_count = 0

    for year in range(1901,2000):
        for m in months:
            day += months[m]
            if (year % 4 == 0 and year % 100 != 0 )and m == "February":
                day += 1
            if day % 7 == 0:
                sunday_count += 1
    return sunday_count
print ("Sundays:", countingSundays())