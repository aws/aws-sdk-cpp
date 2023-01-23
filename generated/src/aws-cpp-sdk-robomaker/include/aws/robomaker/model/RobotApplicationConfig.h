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


    /**
     * <p>The application information for the robot application.</p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }

    /**
     * <p>The application information for the robot application.</p>
     */
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }

    /**
     * <p>The application information for the robot application.</p>
     */
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }

    /**
     * <p>The application information for the robot application.</p>
     */
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }

    /**
     * <p>The application information for the robot application.</p>
     */
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }

    /**
     * <p>The application information for the robot application.</p>
     */
    inline RobotApplicationConfig& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}

    /**
     * <p>The application information for the robot application.</p>
     */
    inline RobotApplicationConfig& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}

    /**
     * <p>The application information for the robot application.</p>
     */
    inline RobotApplicationConfig& WithApplication(const char* value) { SetApplication(value); return *this;}


    /**
     * <p>The version of the robot application.</p>
     */
    inline const Aws::String& GetApplicationVersion() const{ return m_applicationVersion; }

    /**
     * <p>The version of the robot application.</p>
     */
    inline bool ApplicationVersionHasBeenSet() const { return m_applicationVersionHasBeenSet; }

    /**
     * <p>The version of the robot application.</p>
     */
    inline void SetApplicationVersion(const Aws::String& value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = value; }

    /**
     * <p>The version of the robot application.</p>
     */
    inline void SetApplicationVersion(Aws::String&& value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = std::move(value); }

    /**
     * <p>The version of the robot application.</p>
     */
    inline void SetApplicationVersion(const char* value) { m_applicationVersionHasBeenSet = true; m_applicationVersion.assign(value); }

    /**
     * <p>The version of the robot application.</p>
     */
    inline RobotApplicationConfig& WithApplicationVersion(const Aws::String& value) { SetApplicationVersion(value); return *this;}

    /**
     * <p>The version of the robot application.</p>
     */
    inline RobotApplicationConfig& WithApplicationVersion(Aws::String&& value) { SetApplicationVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the robot application.</p>
     */
    inline RobotApplicationConfig& WithApplicationVersion(const char* value) { SetApplicationVersion(value); return *this;}


    /**
     * <p>The launch configuration for the robot application.</p>
     */
    inline const LaunchConfig& GetLaunchConfig() const{ return m_launchConfig; }

    /**
     * <p>The launch configuration for the robot application.</p>
     */
    inline bool LaunchConfigHasBeenSet() const { return m_launchConfigHasBeenSet; }

    /**
     * <p>The launch configuration for the robot application.</p>
     */
    inline void SetLaunchConfig(const LaunchConfig& value) { m_launchConfigHasBeenSet = true; m_launchConfig = value; }

    /**
     * <p>The launch configuration for the robot application.</p>
     */
    inline void SetLaunchConfig(LaunchConfig&& value) { m_launchConfigHasBeenSet = true; m_launchConfig = std::move(value); }

    /**
     * <p>The launch configuration for the robot application.</p>
     */
    inline RobotApplicationConfig& WithLaunchConfig(const LaunchConfig& value) { SetLaunchConfig(value); return *this;}

    /**
     * <p>The launch configuration for the robot application.</p>
     */
    inline RobotApplicationConfig& WithLaunchConfig(LaunchConfig&& value) { SetLaunchConfig(std::move(value)); return *this;}


    /**
     * <p>The upload configurations for the robot application.</p>
     */
    inline const Aws::Vector<UploadConfiguration>& GetUploadConfigurations() const{ return m_uploadConfigurations; }

    /**
     * <p>The upload configurations for the robot application.</p>
     */
    inline bool UploadConfigurationsHasBeenSet() const { return m_uploadConfigurationsHasBeenSet; }

    /**
     * <p>The upload configurations for the robot application.</p>
     */
    inline void SetUploadConfigurations(const Aws::Vector<UploadConfiguration>& value) { m_uploadConfigurationsHasBeenSet = true; m_uploadConfigurations = value; }

    /**
     * <p>The upload configurations for the robot application.</p>
     */
    inline void SetUploadConfigurations(Aws::Vector<UploadConfiguration>&& value) { m_uploadConfigurationsHasBeenSet = true; m_uploadConfigurations = std::move(value); }

    /**
     * <p>The upload configurations for the robot application.</p>
     */
    inline RobotApplicationConfig& WithUploadConfigurations(const Aws::Vector<UploadConfiguration>& value) { SetUploadConfigurations(value); return *this;}

    /**
     * <p>The upload configurations for the robot application.</p>
     */
    inline RobotApplicationConfig& WithUploadConfigurations(Aws::Vector<UploadConfiguration>&& value) { SetUploadConfigurations(std::move(value)); return *this;}

    /**
     * <p>The upload configurations for the robot application.</p>
     */
    inline RobotApplicationConfig& AddUploadConfigurations(const UploadConfiguration& value) { m_uploadConfigurationsHasBeenSet = true; m_uploadConfigurations.push_back(value); return *this; }

    /**
     * <p>The upload configurations for the robot application.</p>
     */
    inline RobotApplicationConfig& AddUploadConfigurations(UploadConfiguration&& value) { m_uploadConfigurationsHasBeenSet = true; m_uploadConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about tools configured for the robot application.</p>
     */
    inline const Aws::Vector<Tool>& GetTools() const{ return m_tools; }

    /**
     * <p>Information about tools configured for the robot application.</p>
     */
    inline bool ToolsHasBeenSet() const { return m_toolsHasBeenSet; }

    /**
     * <p>Information about tools configured for the robot application.</p>
     */
    inline void SetTools(const Aws::Vector<Tool>& value) { m_toolsHasBeenSet = true; m_tools = value; }

    /**
     * <p>Information about tools configured for the robot application.</p>
     */
    inline void SetTools(Aws::Vector<Tool>&& value) { m_toolsHasBeenSet = true; m_tools = std::move(value); }

    /**
     * <p>Information about tools configured for the robot application.</p>
     */
    inline RobotApplicationConfig& WithTools(const Aws::Vector<Tool>& value) { SetTools(value); return *this;}

    /**
     * <p>Information about tools configured for the robot application.</p>
     */
    inline RobotApplicationConfig& WithTools(Aws::Vector<Tool>&& value) { SetTools(std::move(value)); return *this;}

    /**
     * <p>Information about tools configured for the robot application.</p>
     */
    inline RobotApplicationConfig& AddTools(const Tool& value) { m_toolsHasBeenSet = true; m_tools.push_back(value); return *this; }

    /**
     * <p>Information about tools configured for the robot application.</p>
     */
    inline RobotApplicationConfig& AddTools(Tool&& value) { m_toolsHasBeenSet = true; m_tools.push_back(std::move(value)); return *this; }

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
