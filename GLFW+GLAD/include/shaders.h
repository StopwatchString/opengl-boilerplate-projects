static const char* vertex_shader_text = R"VERTEXSHADER(
#version 330
uniform mat4 MVP;
in vec2 vPos;
in vec3 vCol;
out vec3 color;

void main()
{
    gl_Position = MVP * vec4(vPos, 0.0, 1.0);
    color = vCol;
}

)VERTEXSHADER";

static const char* fragment_shader_text = R"FRAGMENTSHADER(
#version 330
in vec3 color;
out vec4 fragment;

void main()
{
    fragment = vec4(color, 1.0);
}
)FRAGMENTSHADER";