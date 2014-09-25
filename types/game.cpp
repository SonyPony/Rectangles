#include "game.h"

Game::Game(QQuickItem *parent): QQuickItem(parent) {
}

bool Game::over() const {
    return p_over;
}

bool Game::paused() const {
    return p_paused;
}

void Game::setOver(bool &newValue) {
    if(p_over != newValue) {
        p_over = newValue;
        emit overChanged();
    }
}

void Game::setPaused(bool &newValue) {
    if(p_paused != newValue) {
        p_paused = newValue;
        emit pausedChanged();
    }
}
