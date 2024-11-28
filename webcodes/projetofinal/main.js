const carouselInner = document.querySelector('.carousel-inner');
const items = document.querySelectorAll('.carousel-item');
const nextBtn = document.querySelector('.carousel-control.next');
const prevBtn = document.querySelector('.carousel-control.prev');
const dots = document.querySelectorAll('.dot');

let currentIndex = 0;

function updateCarousel() {
  // Move the carousel
  carouselInner.style.transform = `translateX(-${currentIndex * 100}%)`;

  // Update dots
  dots.forEach((dot, index) => {
    dot.classList.toggle('active', index === currentIndex);
  });
}

// Next button
nextBtn.addEventListener('click', () => {
  currentIndex = (currentIndex + 1) % items.length;
  updateCarousel();
});

// Previous button
prevBtn.addEventListener('click', () => {
  currentIndex = (currentIndex - 1 + items.length) % items.length;
  updateCarousel();
});

// Dots click
dots.forEach((dot) => {
  dot.addEventListener('click', (e) => {
    currentIndex = parseInt(e.target.getAttribute('data-slide'));
    updateCarousel();
  });
});

    setInterval(() => {
        nextBtn.click();
    }, 7000); // Troca a cada 3 segundos
    