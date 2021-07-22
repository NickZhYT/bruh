#include <stdafx.h>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <filesystem>
using namespace std;

int main()
{
	cout << "maybe a game, may be not" << endl;
	cout << "WASD for move, LMB for change color" << endl;
	cout << std::experimental::filesystem::current_path().string() << endl;
	int x;
	int y;
	int xp;
	int yp;
	int r1;
	int ey;
	int ex;
	x = 100;
	y = 100;
	yp = 300;
	xp = 300;
	ey = 200;
	ex = 200;
	sf::RenderWindow window(sf::VideoMode(500, 500), "probably a game");
	sf::RectangleShape rectangle(sf::Vector2f(x, y));
	sf::RectangleShape enemy(sf::Vector2f(75.f, 75.f));
	sf::Sprite rectangle2;
	sf::Texture texture;
	if (!texture.loadFromFile("sprites.jpg")) {
		cout << "error";
	}
	rectangle2.setTexture(texture);
	rectangle2.setTextureRect(sf::IntRect(0, 0, 67, 67));
	//rectangle2.setColor(sf::Color::Yellow);
	rectangle.setFillColor(sf::Color::Blue);
	enemy.setFillColor(sf::Color::Red);
	rectangle2.move(xp, yp);
	enemy.move(ex, ey);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(rectangle);
		window.draw(enemy);
		window.draw(rectangle2);
		window.display();
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			rectangle2.move(1.f, 0.f);
			xp = xp + 1;
			r1 = rand() % 4 + 1;
			if (r1 == 1) {
				enemy.move(10.f, 0.f);
				ex = ex + 10;
			}
			if (r1 == 2) {
				enemy.move(-10.f, 0.f);
				ex = ex - 10;
			}
			if (r1 == 3) {
				enemy.move(0.f, 10.f);
				ey = ey + 10;
			}
			if (r1 == 4) {
				enemy.move(0.f, -10.f);
				ey = ey - 10;
			}
			if (xp < x && yp < y) {
				cout << "YOU WIN";
				sf::sleep(sf::milliseconds(2000));
				window.close();
			}
			if (ex < xp && ey < yp && ex + 75 > xp && ey + 75 > yp) {
				window.clear();
				window.draw(rectangle);
				window.draw(enemy);
				window.draw(rectangle2);
				window.display();
				cout << "YOU LOSE";
				sf::sleep(sf::milliseconds(2000));
				window.close();
			}
			window.clear();
			window.draw(rectangle);
			window.draw(rectangle2);
			window.draw(enemy);
			window.display();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			rectangle2.move(-1.f, 0.f);
			xp = xp - 1;
			r1 = rand() % 4 + 1;
			if (r1 == 1) {
				enemy.move(10.f, 0.f);
				ex = ex + 10;
			}
			if (r1 == 2) {
				enemy.move(-10.f, 0.f);
				ex = ex - 10;
			}
			if (r1 == 3) {
				enemy.move(0.f, 10.f);
				ey = ey + 10;
			}
			if (r1 == 4) {
				enemy.move(0.f, -10.f);
				ey = ey - 10;
			}
			if (xp < x && yp < y) {
				cout << "YOU WIN";
				sf::sleep(sf::milliseconds(2000));
				window.close();
			}
			if (ex < xp && ey < yp && ex + 75 > xp && ey + 75 > yp) {
				window.clear();
				window.draw(rectangle);
				window.draw(enemy);
				window.draw(rectangle2);
				window.display();
				cout << "YOU LOSE";
				sf::sleep(sf::milliseconds(2000));
				window.close();
			}
			window.clear();
			window.draw(rectangle);
			window.draw(rectangle2);
			window.draw(enemy);
			window.display();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			rectangle2.move(0.f, -1.f);
			yp = yp - 1;
			r1 = rand() % 4 + 1;
			if (r1 == 1) {
				enemy.move(10.f, 0.f);
				ex = ex + 10;
			}
			if (r1 == 2) {
				enemy.move(-10.f, 0.f);
				ex = ex - 10;
			}
			if (r1 == 3) {
				enemy.move(0.f, 10.f);
				ey = ey + 10;
			}
			if (r1 == 4) {
				enemy.move(0.f, -10.f);
				ey = ey - 10;
			}
			if (xp < x && yp < y) {
				cout << "YOU WIN";
				sf::sleep(sf::milliseconds(2000));
				window.close();
			}
			if (ex < xp && ey < yp && ex + 75 > xp && ey + 75 > yp) {
				window.clear();
				window.draw(rectangle);
				window.draw(enemy);
				window.draw(rectangle2);
				window.display();
				cout << "YOU LOSE";
				sf::sleep(sf::milliseconds(2000));
				window.close();
			}
			window.clear();
			window.draw(rectangle);
			window.draw(rectangle2);
			window.draw(enemy);
			window.display();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			rectangle2.move(0.f, 1.f);
			yp = yp + 1;
			r1 = rand() % 4 + 1;
			if (r1 == 1) {
				enemy.move(10.f, 0.f);
				ex = ex + 10;
			}
			if (r1 == 2) {
				enemy.move(-10.f, 0.f);
				ex = ex - 10;
			}
			if (r1 == 3) {
				enemy.move(0.f, 10.f);
				ey = ey + 10;
			}
			if (r1 == 4) {
				enemy.move(0.f, -10.f);
				ey = ey - 10;
			}
			if (xp < x && yp < y) {
				cout << "YOU WIN";
				sf::sleep(sf::milliseconds(2000));
				window.close();
			}
			if (ex < xp && ey < yp && ex + 75 > xp && ey + 75 > yp) {
				window.clear();
				window.draw(rectangle);
				window.draw(enemy);
				window.draw(rectangle2);
				window.display();
				cout << "YOU LOSE";
				sf::sleep(sf::milliseconds(2000));
				window.close();
			}
			window.clear();
			window.draw(rectangle);
			window.draw(rectangle2);
			window.draw(enemy);
			window.display();
		}
	}

	return 0;
}
