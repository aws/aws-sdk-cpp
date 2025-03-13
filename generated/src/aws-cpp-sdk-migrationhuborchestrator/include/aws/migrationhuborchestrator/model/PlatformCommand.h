/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MigrationHubOrchestrator
{
namespace Model
{

  /**
   * <p>Command to be run on a particular operating system.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/PlatformCommand">AWS
   * API Reference</a></p>
   */
  class PlatformCommand
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API PlatformCommand() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API PlatformCommand(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API PlatformCommand& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Command for Linux.</p>
     */
    inline const Aws::String& GetLinux() const { return m_linux; }
    inline bool LinuxHasBeenSet() const { return m_linuxHasBeenSet; }
    template<typename LinuxT = Aws::String>
    void SetLinux(LinuxT&& value) { m_linuxHasBeenSet = true; m_linux = std::forward<LinuxT>(value); }
    template<typename LinuxT = Aws::String>
    PlatformCommand& WithLinux(LinuxT&& value) { SetLinux(std::forward<LinuxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Command for Windows.</p>
     */
    inline const Aws::String& GetWindows() const { return m_windows; }
    inline bool WindowsHasBeenSet() const { return m_windowsHasBeenSet; }
    template<typename WindowsT = Aws::String>
    void SetWindows(WindowsT&& value) { m_windowsHasBeenSet = true; m_windows = std::forward<WindowsT>(value); }
    template<typename WindowsT = Aws::String>
    PlatformCommand& WithWindows(WindowsT&& value) { SetWindows(std::forward<WindowsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_linux;
    bool m_linuxHasBeenSet = false;

    Aws::String m_windows;
    bool m_windowsHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
