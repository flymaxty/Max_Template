CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

include(GetGitRevisionDescription)
get_git_head_revision(GIT_REFSPEC GIT_REPO_COMMIT)
if(GIT_REPO_COMMIT)
  git_describe(GIT_REPO_VERSION)
endif()

CONFIGURE_FILE(${PROJECT_SOURCE_DIR}/cmake/version.h.in ${PROJECT_SOURCE_DIR}/src/version.h @ONLY)

ADD_EXECUTABLE(Template template.cpp)
TARGET_LINK_LIBRARIES(Template)
