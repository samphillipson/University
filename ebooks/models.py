from django.db import models

# Create your models here.
class myBooks(models.Model):
    title=models.CharField(max_length=64)
    author=models.CharField(max_length=64)
    genre=models.CharField(max_length=64)
    price=models.DecimalField(max_digits=5, decimal_places=2)
    stock=models.IntegerField()

    def __str__(self):
        return f"title:{self.title},author{self.author},genre{self.genre},price{self.price},stock{self.stock}"