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
    AWS_ROBOMAKER_API LaunchConfig();
    AWS_ROBOMAKER_API LaunchConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API LaunchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The package name.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }
    inline LaunchConfig& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}
    inline LaunchConfig& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}
    inline LaunchConfig& WithPackageName(const char* value) { SetPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch file name.</p>
     */
    inline const Aws::String& GetLaunchFile() const{ return m_launchFile; }
    inline bool LaunchFileHasBeenSet() const { return m_launchFileHasBeenSet; }
    inline void SetLaunchFile(const Aws::String& value) { m_launchFileHasBeenSet = true; m_launchFile = value; }
    inline void SetLaunchFile(Aws::String&& value) { m_launchFileHasBeenSet = true; m_launchFile = std::move(value); }
    inline void SetLaunchFile(const char* value) { m_launchFileHasBeenSet = true; m_launchFile.assign(value); }
    inline LaunchConfig& WithLaunchFile(const Aws::String& value) { SetLaunchFile(value); return *this;}
    inline LaunchConfig& WithLaunchFile(Aws::String&& value) { SetLaunchFile(std::move(value)); return *this;}
    inline LaunchConfig& WithLaunchFile(const char* value) { SetLaunchFile(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables for the application launch.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }
    inline LaunchConfig& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}
    inline LaunchConfig& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}
    inline LaunchConfig& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }
    inline LaunchConfig& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline LaunchConfig& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline LaunchConfig& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline LaunchConfig& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline LaunchConfig& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline LaunchConfig& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The port forwarding configuration.</p>
     */
    inline const PortForwardingConfig& GetPortForwardingConfig() const{ return m_portForwardingConfig; }
    inline bool PortForwardingConfigHasBeenSet() const { return m_portForwardingConfigHasBeenSet; }
    inline void SetPortForwardingConfig(const PortForwardingConfig& value) { m_portForwardingConfigHasBeenSet = true; m_portForwardingConfig = value; }
    inline void SetPortForwardingConfig(PortForwardingConfig&& value) { m_portForwardingConfigHasBeenSet = true; m_portForwardingConfig = std::move(value); }
    inline LaunchConfig& WithPortForwardingConfig(const PortForwardingConfig& value) { SetPortForwardingConfig(value); return *this;}
    inline LaunchConfig& WithPortForwardingConfig(PortForwardingConfig&& value) { SetPortForwardingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean indicating whether a streaming session will be configured for the
     * application. If <code>True</code>, AWS RoboMaker will configure a connection so
     * you can interact with your application as it is running in the simulation. You
     * must configure and launch the component. It must have a graphical user
     * interface. </p>
     */
    inline bool GetStreamUI() const{ return m_streamUI; }
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
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }
    inline LaunchConfig& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}
    inline LaunchConfig& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}
    inline LaunchConfig& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }
    inline LaunchConfig& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }
    inline LaunchConfig& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }
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

    bool m_streamUI;
    bool m_streamUIHasBeenSet = false;

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
