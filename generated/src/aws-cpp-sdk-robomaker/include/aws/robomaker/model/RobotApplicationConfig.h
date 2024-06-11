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
   * <p>Application configuration information for a robot.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/RobotApplicationConfig">AWS
   * API Reference</a></p>
   */
  class RobotApplicationConfig
  {
  public:
    AWS_ROBOMAKER_API RobotApplicationConfig();
    AWS_ROBOMAKER_API RobotApplicationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API RobotApplicationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application information for the robot application.</p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }
    inline RobotApplicationConfig& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}
    inline RobotApplicationConfig& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}
    inline RobotApplicationConfig& WithApplication(const char* value) { SetApplication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the robot application.</p>
     */
    inline const Aws::String& GetApplicationVersion() const{ return m_applicationVersion; }
    inline bool ApplicationVersionHasBeenSet() const { return m_applicationVersionHasBeenSet; }
    inline void SetApplicationVersion(const Aws::String& value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = value; }
    inline void SetApplicationVersion(Aws::String&& value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = std::move(value); }
    inline void SetApplicationVersion(const char* value) { m_applicationVersionHasBeenSet = true; m_applicationVersion.assign(value); }
    inline RobotApplicationConfig& WithApplicationVersion(const Aws::String& value) { SetApplicationVersion(value); return *this;}
    inline RobotApplicationConfig& WithApplicationVersion(Aws::String&& value) { SetApplicationVersion(std::move(value)); return *this;}
    inline RobotApplicationConfig& WithApplicationVersion(const char* value) { SetApplicationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch configuration for the robot application.</p>
     */
    inline const LaunchConfig& GetLaunchConfig() const{ return m_launchConfig; }
    inline bool LaunchConfigHasBeenSet() const { return m_launchConfigHasBeenSet; }
    inline void SetLaunchConfig(const LaunchConfig& value) { m_launchConfigHasBeenSet = true; m_launchConfig = value; }
    inline void SetLaunchConfig(LaunchConfig&& value) { m_launchConfigHasBeenSet = true; m_launchConfig = std::move(value); }
    inline RobotApplicationConfig& WithLaunchConfig(const LaunchConfig& value) { SetLaunchConfig(value); return *this;}
    inline RobotApplicationConfig& WithLaunchConfig(LaunchConfig&& value) { SetLaunchConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload configurations for the robot application.</p>
     */
    inline const Aws::Vector<UploadConfiguration>& GetUploadConfigurations() const{ return m_uploadConfigurations; }
    inline bool UploadConfigurationsHasBeenSet() const { return m_uploadConfigurationsHasBeenSet; }
    inline void SetUploadConfigurations(const Aws::Vector<UploadConfiguration>& value) { m_uploadConfigurationsHasBeenSet = true; m_uploadConfigurations = value; }
    inline void SetUploadConfigurations(Aws::Vector<UploadConfiguration>&& value) { m_uploadConfigurationsHasBeenSet = true; m_uploadConfigurations = std::move(value); }
    inline RobotApplicationConfig& WithUploadConfigurations(const Aws::Vector<UploadConfiguration>& value) { SetUploadConfigurations(value); return *this;}
    inline RobotApplicationConfig& WithUploadConfigurations(Aws::Vector<UploadConfiguration>&& value) { SetUploadConfigurations(std::move(value)); return *this;}
    inline RobotApplicationConfig& AddUploadConfigurations(const UploadConfiguration& value) { m_uploadConfigurationsHasBeenSet = true; m_uploadConfigurations.push_back(value); return *this; }
    inline RobotApplicationConfig& AddUploadConfigurations(UploadConfiguration&& value) { m_uploadConfigurationsHasBeenSet = true; m_uploadConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about tools configured for the robot application.</p>
     */
    inline const Aws::Vector<Tool>& GetTools() const{ return m_tools; }
    inline bool ToolsHasBeenSet() const { return m_toolsHasBeenSet; }
    inline void SetTools(const Aws::Vector<Tool>& value) { m_toolsHasBeenSet = true; m_tools = value; }
    inline void SetTools(Aws::Vector<Tool>&& value) { m_toolsHasBeenSet = true; m_tools = std::move(value); }
    inline RobotApplicationConfig& WithTools(const Aws::Vector<Tool>& value) { SetTools(value); return *this;}
    inline RobotApplicationConfig& WithTools(Aws::Vector<Tool>&& value) { SetTools(std::move(value)); return *this;}
    inline RobotApplicationConfig& AddTools(const Tool& value) { m_toolsHasBeenSet = true; m_tools.push_back(value); return *this; }
    inline RobotApplicationConfig& AddTools(Tool&& value) { m_toolsHasBeenSet = true; m_tools.push_back(std::move(value)); return *this; }
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

    Aws::Vector<Tool> m_tools;
    bool m_toolsHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
