#include <imgui\imgui.h>
#include <imgui\imgui_impl_glfw_gl3.h>
#include <GL\glew.h>
#include <glm\gtc\type_ptr.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <cstdio>

bool show_test_window = true;
void GUI() {
	{	//FrameRate
		ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);

		//TODO
	}

	// ImGui test window. Most of the sample code is in ImGui::ShowTestWindow()
	if(show_test_window) {
		ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiSetCond_FirstUseEver);
		ImGui::ShowTestWindow(&show_test_window);
	}
}

void PhysicsInit() {
	//TODO
}

extern GLuint sphereVbo;
void PhysicsUpdate(float dt) {
	glBindBuffer(GL_ARRAY_BUFFER, sphereVbo);

	float* a = (float*)glMapBuffer(GL_ARRAY_BUFFER, GL_READ_WRITE);
	a[0] += 0.1f;
	glUnmapBuffer(GL_ARRAY_BUFFER);
	//TO DO
}

void PhysicsCleanup() {
	//TODO
}