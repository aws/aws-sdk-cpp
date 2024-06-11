/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/DeploymentLaunchConfig.h>
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
   * <p>Information about a deployment application configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeploymentApplicationConfig">AWS
   * API Reference</a></p>
   */
  class DeploymentApplicationConfig
  {
  public:
    AWS_ROBOMAKER_API DeploymentApplicationConfig();
    AWS_ROBOMAKER_API DeploymentApplicationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API DeploymentApplicationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }
    inline DeploymentApplicationConfig& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}
    inline DeploymentApplicationConfig& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}
    inline DeploymentApplicationConfig& WithApplication(const char* value) { SetApplication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the application.</p>
     */
    inline const Aws::String& GetApplicationVersion() const{ return m_applicationVersion; }
    inline bool ApplicationVersionHasBeenSet() const { return m_applicationVersionHasBeenSet; }
    inline void SetApplicationVersion(const Aws::String& value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = value; }
    inline void SetApplicationVersion(Aws::String&& value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = std::move(value); }
    inline void SetApplicationVersion(const char* value) { m_applicationVersionHasBeenSet = true; m_applicationVersion.assign(value); }
    inline DeploymentApplicationConfig& WithApplicationVersion(const Aws::String& value) { SetApplicationVersion(value); return *this;}
    inline DeploymentApplicationConfig& WithApplicationVersion(Aws::String&& value) { SetApplicationVersion(std::move(value)); return *this;}
    inline DeploymentApplicationConfig& WithApplicationVersion(const char* value) { SetApplicationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch configuration.</p>
     */
    inline const DeploymentLaunchConfig& GetLaunchConfig() const{ return m_launchConfig; }
    inline bool LaunchConfigHasBeenSet() const { return m_launchConfigHasBeenSet; }
    inline void SetLaunchConfig(const DeploymentLaunchConfig& value) { m_launchConfigHasBeenSet = true; m_launchConfig = value; }
    inline void SetLaunchConfig(DeploymentLaunchConfig&& value) { m_launchConfigHasBeenSet = true; m_launchConfig = std::move(value); }
    inline DeploymentApplicationConfig& WithLaunchConfig(const DeploymentLaunchConfig& value) { SetLaunchConfig(value); return *this;}
    inline DeploymentApplicationConfig& WithLaunchConfig(DeploymentLaunchConfig&& value) { SetLaunchConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_application;
    bool m_applicationHasBeenSet = false;

    Aws::String m_applicationVersion;
    bool m_applicationVersionHasBeenSet = false;

    DeploymentLaunchConfig m_launchConfig;
    bool m_launchConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
