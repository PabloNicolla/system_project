#pragma once
namespace shell
{
  enum class ShellFlag { exit, run, logout };

  enum class ResourceTypes { root, workingDir, env, additionalCmd };
} // namespace shell

namespace fs
{
  enum class AppState { running, exiting };

  enum class SystemObjectType { file, directory };
} // namespace fs
