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
   * <p>The script location for a particular operating system.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/PlatformScriptKey">AWS
   * API Reference</a></p>
   */
  class PlatformScriptKey
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API PlatformScriptKey() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API PlatformScriptKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API PlatformScriptKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The script location for Linux.</p>
     */
    inline const Aws::String& GetLinux() const { return m_linux; }
    inline bool LinuxHasBeenSet() const { return m_linuxHasBeenSet; }
    template<typename LinuxT = Aws::String>
    void SetLinux(LinuxT&& value) { m_linuxHasBeenSet = true; m_linux = std::forward<LinuxT>(value); }
    template<typename LinuxT = Aws::String>
    PlatformScriptKey& WithLinux(LinuxT&& value) { SetLinux(std::forward<LinuxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The script location for Windows.</p>
     */
    inline const Aws::String& GetWindows() const { return m_windows; }
    inline bool WindowsHasBeenSet() const { return m_windowsHasBeenSet; }
    template<typename WindowsT = Aws::String>
    void SetWindows(WindowsT&& value) { m_windowsHasBeenSet = true; m_windows = std::forward<WindowsT>(value); }
    template<typename WindowsT = Aws::String>
    PlatformScriptKey& WithWindows(WindowsT&& value) { SetWindows(std::forward<WindowsT>(value)); return *this;}
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
