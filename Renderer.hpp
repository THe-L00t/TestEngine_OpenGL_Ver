#pragma once
#include <gl/glew.h>

class Renderer
{
public:
	Renderer() = default;
	Renderer(const Renderer&) = delete;
	Renderer& operator=(const Renderer&) = delete;
	Renderer(Renderer&&) = delete;
	Renderer& operator=(Renderer&&) = delete;

	~Renderer() { shutdown(); }

	bool init() noexcept;
	void shutdown() noexcept;

	void beginFrame(float, float, float, float) const noexcept;
};

inline bool Renderer::init() noexcept {
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);
	glDisable(GL_BLEND);
	return true;
}

inline void Renderer::shutdown() noexcept {

}

inline void Renderer::beginFrame(float r, float g, float b, float a) const noexcept {
	glClearColor(r, g, b, a);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}