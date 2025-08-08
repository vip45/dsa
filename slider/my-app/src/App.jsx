import "./App.css";

function App() {
  const sliderData = [
    {
      id: 1,
      items: [
        "Slider-1",
        "Slider-2",
        "Slider-3",
        "Slider-4",
        "Slider-5",
        "Slider-6",
        "Slider-7",
        "Slider-8",
      ],
    },
    {
      id: 2,
      items: [
        "Slider-9",
        "Slider-10",
        "Slider-11",
        "Slider-12",
        "Slider-13",
        "Slider-14",
        "Slider-15",
        "Slider-16",
      ],
    },
    {
      id: 3,
      items: [
        "Slider-17",
        "Slider-18",
        "Slider-19",
        "Slider-20",
        "Slider-21",
        "Slider-22",
        "Slider-23",
        "Slider-24",
      ],
    },
  ];

  return (
    <>
      <h1>hello</h1>
      <div className="sider-main">
        {sliderData.map((row) => (
          <div className="slider-row" key={row.id}>
            {[...row.items, ...row.items].map((item, idx) => (
              <div className="slider-div" key={idx}>
                {item}
              </div>
            ))}
          </div>
        ))}
      </div>
    </>
  );
}

export default App;
