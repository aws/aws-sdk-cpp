/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/LaunchConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/UploadConfiguration.h>
#include <aws/robomaker/model/WorldConfig.h>
#include <aws/robomaker/model/Tool.h>
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
   * <p>Information about a simulation application configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/SimulationApplicationConfig">AWS
   * API Reference</a></p>
   */
  class SimulationApplicationConfig
  {
  public:
    AWS_ROBOMAKER_API SimulationApplicationConfig() = default;
    AWS_ROBOMAKER_API SimulationApplicationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API SimulationApplicationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application information for the simulation application.</p>
     */
    inline const Aws::String& GetApplication() const { return m_application; }
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }
    template<typename ApplicationT = Aws::String>
    void SetApplication(ApplicationT&& value) { m_applicationHasBeenSet = true; m_application = std::forward<ApplicationT>(value); }
    template<typename ApplicationT = Aws::String>
    SimulationApplicationConfig& WithApplication(ApplicationT&& value) { SetApplication(std::forward<ApplicationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the simulation application.</p>
     */
    inline const Aws::String& GetApplicationVersion() const { return m_applicationVersion; }
    inline bool ApplicationVersionHasBeenSet() const { return m_applicationVersionHasBeenSet; }
    template<typename ApplicationVersionT = Aws::String>
    void SetApplicationVersion(ApplicationVersionT&& value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = std::forward<ApplicationVersionT>(value); }
    template<typename ApplicationVersionT = Aws::String>
    SimulationApplicationConfig& WithApplicationVersion(ApplicationVersionT&& value) { SetApplicationVersion(std::forward<ApplicationVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch configuration for the simulation application.</p>
     */
    inline const LaunchConfig& GetLaunchConfig() const { return m_launchConfig; }
    inline bool LaunchConfigHasBeenSet() const { return m_launchConfigHasBeenSet; }
    template<typename LaunchConfigT = LaunchConfig>
    void SetLaunchConfig(LaunchConfigT&& value) { m_launchConfigHasBeenSet = true; m_launchConfig = std::forward<LaunchConfigT>(value); }
    template<typename LaunchConfigT = LaunchConfig>
    SimulationApplicationConfig& WithLaunchConfig(LaunchConfigT&& value) { SetLaunchConfig(std::forward<LaunchConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about upload configurations for the simulation application.</p>
     */
    inline const Aws::Vector<UploadConfiguration>& GetUploadConfigurations() const { return m_uploadConfigurations; }
    inline bool UploadConfigurationsHasBeenSet() const { return m_uploadConfigurationsHasBeenSet; }
    template<typename UploadConfigurationsT = Aws::Vector<UploadConfiguration>>
    void SetUploadConfigurations(UploadConfigurationsT&& value) { m_uploadConfigurationsHasBeenSet = true; m_uploadConfigurations = std::forward<UploadConfigurationsT>(value); }
    template<typename UploadConfigurationsT = Aws::Vector<UploadConfiguration>>
    SimulationApplicationConfig& WithUploadConfigurations(UploadConfigurationsT&& value) { SetUploadConfigurations(std::forward<UploadConfigurationsT>(value)); return *this;}
    template<typename UploadConfigurationsT = UploadConfiguration>
    SimulationApplicationConfig& AddUploadConfigurations(UploadConfigurationsT&& value) { m_uploadConfigurationsHasBeenSet = true; m_uploadConfigurations.emplace_back(std::forward<UploadConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of world configurations.</p>  <p>This API is no longer
     * supported and will throw an error if used.</p> 
     */
    inline const Aws::Vector<WorldConfig>& GetWorldConfigs() const { return m_worldConfigs; }
    inline bool WorldConfigsHasBeenSet() const { return m_worldConfigsHasBeenSet; }
    template<typename WorldConfigsT = Aws::Vector<WorldConfig>>
    void SetWorldConfigs(WorldConfigsT&& value) { m_worldConfigsHasBeenSet = true; m_worldConfigs = std::forward<WorldConfigsT>(value); }
    template<typename WorldConfigsT = Aws::Vector<WorldConfig>>
    SimulationApplicationConfig& WithWorldConfigs(WorldConfigsT&& value) { SetWorldConfigs(std::forward<WorldConfigsT>(value)); return *this;}
    template<typename WorldConfigsT = WorldConfig>
    SimulationApplicationConfig& AddWorldConfigs(WorldConfigsT&& value) { m_worldConfigsHasBeenSet = true; m_worldConfigs.emplace_back(std::forward<WorldConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about tools configured for the simulation application.</p>
     */
    inline const Aws::Vector<Tool>& GetTools() const { return m_tools; }
    inline bool ToolsHasBeenSet() const { return m_toolsHasBeenSet; }
    template<typename ToolsT = Aws::Vector<Tool>>
    void SetTools(ToolsT&& value) { m_toolsHasBeenSet = true; m_tools = std::forward<ToolsT>(value); }
    template<typename ToolsT = Aws::Vector<Tool>>
    SimulationApplicationConfig& WithTools(ToolsT&& value) { SetTools(std::forward<ToolsT>(value)); return *this;}
    template<typename ToolsT = Tool>
    SimulationApplicationConfig& AddTools(ToolsT&& value) { m_toolsHasBeenSet = true; m_tools.emplace_back(std::forward<ToolsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_application;
    bool m_applicationHasBeenSet = false;

    Aws::String m_applicationVersion;
    bool m_applicationVersionHasBeenSet = false;

    LaunchConfig m_launchConfig;
    bool m_launchConfigHasBeenSet = false;

    Aws::Vector<UploadConfiguration> m_uploadConfigurations;
    bool m_uploadConfigurationsHasBeenSet = false;

    Aws::Vector<WorldConfig> m_worldConfigs;
    bool m_worldConfigsHasBeenSet = false;

    Aws::Vector<Tool> m_tools;
    bool m_toolsHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
