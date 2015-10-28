#pragma once

#include <vector>
#include <iostream>

#include <GL\glew.h>
#include"../utils/fileutils.h"

namespace eso {

	namespace graphics {

		class Shader {
			private:
				GLuint m_ShaderID;
				const char* m_VertPath, *m_FragPath;

			public:
				Shader(const char* vertPath, const char* fragPath);
				~Shader();

				void enablde() const;
				void disable() const;

			private:
				GLuint load();

		};

	}
}
