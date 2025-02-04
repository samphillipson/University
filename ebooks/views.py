from django.shortcuts import render
from .models import myBooks

# Create your views here.
def books(request):
    book=myBooks.objects.all()
    context={'book':book}
    return render (request, 'books.html', context )
