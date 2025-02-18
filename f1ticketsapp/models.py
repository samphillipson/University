from django.db import models

# Create your models here.
class Ticket(models.Model):
    # We need a country, racetrack, number of days, and we need the price for that ticket.
    f1_country = models.CharField(max_length=64)
    f1_racetrack = models.CharField(max_length=64)
    f1_date = models.DateField()
    f1_price = models.IntegerField()

    # This is a string representation of the tickets
    def __str__(self):
        return (f"Round {self.id}: {self.f1_country}, {self.f1_racetrack}, {self.f1_date}, Single Ticket Price: £{self.f1_price}")