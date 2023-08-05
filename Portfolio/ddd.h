<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Web Developer Portfolio</title>

    <!-- Boostrap CSS -->
    <link
      href="https://cdn.jsdelivr.net/npm/bootstrap@5.2.3/dist/css/bootstrap.min.css"
      rel="stylesheet"
      integrity="sha384-rbsA2VBKQhggwzxH7pPCaAqO46MgnOM80zW1RWuH61DGLwZJEdK2Kadq2F9CUG65"
      crossorigin="anonymous"
    />

    <title>Document</title>
    <!-- Font Awesome Icons -->
    <link
      rel="stylesheet"
      href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css"
      integrity="sha512-iecdLmaskl7CVkqkXNQ/ZH/XLlvWZOJyj7Yy7tcenmpD1ypASozpmT/E0iPtmFIB46ZmdtAc9eNBvH0H/ZpiBw=="
      crossorigin="anonymous"
      referrerpolicy="no-referrer"
    />
    <!-- Boostrap JS -->
    <script
      src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.3/dist/js/bootstrap.bundle.min.js"
      integrity="sha384-kenU1KFdBIe4zVF0s0G1M5b4hcpxyD9F7jL+jjXkk+Q2h455rYXK/7HAuoJl+0I4"
      crossorigin="anonymous"
    ></script>
  </head>
  <style>
    body {
      margin: 0;
      padding: 0;
    }

    .navbar-brand {
      padding-right: 20px;
    }

    .navbar-nav .nav-item {
      margin-left: 10px;
    }

    .navbar-nav .nav-item .nav-link.active {
      color: #ff0000;
    }

    .img {
      border-radius: 50px;
    }

    .parallax {
      background-image: url("./Mountain.png");
      background-attachment: fixed;
      background-position: center;
      background-repeat: no-repeat;
      background-size: cover;
      height: 100vh;
      display: flex;
      justify-content: center;
      align-items: center;
      color: #fff;
      text-align: center;
    }

    .parallax-content {
      padding: 20px;
    }

    section {
      padding: 60px 0;
    }

    .form-group {
      margin-bottom: 20px;
    }

    button[type="submit"] {
      margin-top: 20px;
    }
  </style>

  <body>
    <nav class="navbar navbar-expand-lg navbar-dark bg-dark">
      <div class="container">
        <a class="navbar-brand" href="./Home.html">
          <img
            class="img"
            src="./WhatsApp Image 2023-08-03 at 22.46.17.jpeg"
            alt="Logo"
            height="30"
          />
          <strong>ANNMARY</strong>
        </a>
        <button
          class="navbar-toggler"
          type="button"
          data-bs-toggle="collapse"
          data-bs-target="#navbarNav"
          aria-controls="navbarNav"
          aria-expanded="false"
          aria-label="Toggle navigation"
        >
          <span class="navbar-toggler-icon"></span>
        </button>
        <div class="collapse navbar-collapse" id="navbarNav">
          <ul class="navbar-nav ms-auto">
            <li class="nav-item">
              <a class="nav-link" href="./home.html"
                ><i class="fa-regular fa-home"></i>Back</a
              >
            </li>
            <li class="nav-item">
              <a class="nav-link" href="#"
                ><i class="fa-regular fa-address-card"></i>Contact</a
              >
            </li>
          </ul>
        </div>
      </div>
    </nav>

    <section class="parallax">
      <div class="parallax-content">
        <h1>MEET ME UP!</h1>
        <p>Welcome to my portfolio contact page</p>
      </div>
    </section>

    <section id="portfolio" class="py-5"></section>
    <div class="container">
      <div
        id="carouselExampleIndicators"
        class="carousel carousel-dark slide"
        data-bs-ride="true"
      >
        <div class="carousel-indicators">
          <button
            type="button"
            data-bs-target="#carouselExampleIndicators"
            data-bs-slide-to="0"
            class="active"
            aria-current="true"
            aria-label="Slide 1"
          ></button>
          <button
            type="button"
            data-bs-target="#carouselExampleIndicators"
            data-bs-slide-to="1"
            aria-label="Slide 2"
          ></button>
          <button
            type="button"
            data-bs-target="#carouselExampleIndicators"
            data-bs-slide-to="2"
            aria-label="Slide 3"
          ></button>
        </div>
        <div class="carousel-inner">
          <div class="carousel-item active">
            <img
              src="./carousel_1.jpg"
              class="d-block mx-auto"
              alt="..."
              width="600px"
              height="400px"
            />
          </div>
          <div class="carousel-item">
            <img
              src="./carousel_2.jpg"
              class="d-block mx-auto"
              alt="..."
              width="700px"
              height="400px"
            />
          </div>
          <div class="carousel-item">
            <img
              src="./carousel_3.jpg"
              class="d-block mx-auto"
              alt="..."
              width="700px"
              height="400px"
            />
          </div>
        </div>
        <button
          class="carousel-control-prev"
          type="button"
          data-bs-target="#carouselExampleIndicators"
          data-bs-slide="prev"
        >
          <span class="carousel-control-prev-icon" aria-hidden="true"></span>
          <span class="visually-hidden">Previous</span>
        </button>
        <button
          class="carousel-control-next"
          type="button"
          data-bs-target="#carouselExampleIndicators"
          data-bs-slide="next"
        >
          <span class="carousel-control-next-icon" aria-hidden="true"></span>
          <span class="visually-hidden">Next</span>
        </button>
      </div>
    </div>

    <section id="contact" class="py-5">
      <div class="container">
        <h2>Contact Me</h2>
        <p>Please fill out the form below to get in touch:</p>
        <form>
          <div class="form-group">
            <label for="name">Name</label>
            <input type="text" class="form-control" id="name" required />
          </div>
          <div class="form-group">
            <label for="email">Email address</label>
            <input type="email" class="form-control" id="email" required />
          </div>
          <div class="form-group">
            <label for="message">Message</label>
            <textarea
              class="form-control"
              id="message"
              rows="4"
              required
            ></textarea>
          </div>
          <button type="submit" class="btn btn-primary">Submit</button>
        </form>
      </div>
    </section>
  </body>
</html>
