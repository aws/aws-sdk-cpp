/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/robomaker/model/PortForwardingConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a launch configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/LaunchConfig">AWS
   * API Reference</a></p>
   */
  class LaunchConfig
  {
  public:
    AWS_ROBOMAKER_API LaunchConfig() = default;
    AWS_ROBOMAKER_API LaunchConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API LaunchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The package name.</p>
     */
    inline const Aws::String& GetPackageName() const { return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    template<typename PackageNameT = Aws::String>
    void SetPackageName(PackageNameT&& value) { m_packageNameHasBeenSet = true; m_packageName = std::forward<PackageNameT>(value); }
    template<typename PackageNameT = Aws::String>
    LaunchConfig& WithPackageName(PackageNameT&& value) { SetPackageName(std::forward<PackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch file name.</p>
     */
    inline const Aws::String& GetLaunchFile() const { return m_launchFile; }
    inline bool LaunchFileHasBeenSet() const { return m_launchFileHasBeenSet; }
    template<typename LaunchFileT = Aws::String>
    void SetLaunchFile(LaunchFileT&& value) { m_launchFileHasBeenSet = true; m_launchFile = std::forward<LaunchFileT>(value); }
    template<typename LaunchFileT = Aws::String>
    LaunchConfig& WithLaunchFile(LaunchFileT&& value) { SetLaunchFile(std::forward<LaunchFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables for the application launch.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::forward<EnvironmentVariablesT>(value); }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    LaunchConfig& WithEnvironmentVariables(EnvironmentVariablesT&& value) { SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value)); return *this;}
    template<typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
    LaunchConfig& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
      m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The port forwarding configuration.</p>
     */
    inline const PortForwardingConfig& GetPortForwardingConfig() const { return m_portForwardingConfig; }
    inline bool PortForwardingConfigHasBeenSet() const { return m_portForwardingConfigHasBeenSet; }
    template<typename PortForwardingConfigT = PortForwardingConfig>
    void SetPortForwardingConfig(PortForwardingConfigT&& value) { m_portForwardingConfigHasBeenSet = true; m_portForwardingConfig = std::forward<PortForwardingConfigT>(value); }
    template<typename PortForwardingConfigT = PortForwardingConfig>
    LaunchConfig& WithPortForwardingConfig(PortForwardingConfigT&& value) { SetPortForwardingConfig(std::forward<PortForwardingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean indicating whether a streaming session will be configured for the
     * application. If <code>True</code>, AWS RoboMaker will configure a connection so
     * you can interact with your application as it is running in the simulation. You
     * must configure and launch the component. It must have a graphical user
     * interface. </p>
     */
    inline bool GetStreamUI() const { return m_streamUI; }
    inline bool StreamUIHasBeenSet() const { return m_streamUIHasBeenSet; }
    inline void SetStreamUI(bool value) { m_streamUIHasBeenSet = true; m_streamUI = value; }
    inline LaunchConfig& WithStreamUI(bool value) { SetStreamUI(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you've specified <code>General</code> as the value for your
     * <code>RobotSoftwareSuite</code>, you can use this field to specify a list of
     * commands for your container image.</p> <p>If you've specified
     * <code>SimulationRuntime</code> as the value for your
     * <code>SimulationSoftwareSuite</code>, you can use this field to specify a list
     * of commands for your container image.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::Vector<Aws::String>>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::Vector<Aws::String>>
    LaunchConfig& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    template<typename CommandT = Aws::String>
    LaunchConfig& AddCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command.emplace_back(std::forward<CommandT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_launchFile;
    bool m_launchFileHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    PortForwardingConfig m_portForwardingConfig;
    bool m_portForwardingConfigHasBeenSet = false;

    bool m_streamUI{false};
    bool m_streamUIHasBeenSet = false;

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
