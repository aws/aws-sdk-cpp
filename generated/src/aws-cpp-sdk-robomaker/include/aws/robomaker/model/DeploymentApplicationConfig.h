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
    AWS_ROBOMAKER_API DeploymentApplicationConfig() = default;
    AWS_ROBOMAKER_API DeploymentApplicationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API DeploymentApplicationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline const Aws::String& GetApplication() const { return m_application; }
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }
    template<typename ApplicationT = Aws::String>
    void SetApplication(ApplicationT&& value) { m_applicationHasBeenSet = true; m_application = std::forward<ApplicationT>(value); }
    template<typename ApplicationT = Aws::String>
    DeploymentApplicationConfig& WithApplication(ApplicationT&& value) { SetApplication(std::forward<ApplicationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the application.</p>
     */
    inline const Aws::String& GetApplicationVersion() const { return m_applicationVersion; }
    inline bool ApplicationVersionHasBeenSet() const { return m_applicationVersionHasBeenSet; }
    template<typename ApplicationVersionT = Aws::String>
    void SetApplicationVersion(ApplicationVersionT&& value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = std::forward<ApplicationVersionT>(value); }
    template<typename ApplicationVersionT = Aws::String>
    DeploymentApplicationConfig& WithApplicationVersion(ApplicationVersionT&& value) { SetApplicationVersion(std::forward<ApplicationVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch configuration.</p>
     */
    inline const DeploymentLaunchConfig& GetLaunchConfig() const { return m_launchConfig; }
    inline bool LaunchConfigHasBeenSet() const { return m_launchConfigHasBeenSet; }
    template<typename LaunchConfigT = DeploymentLaunchConfig>
    void SetLaunchConfig(LaunchConfigT&& value) { m_launchConfigHasBeenSet = true; m_launchConfig = std::forward<LaunchConfigT>(value); }
    template<typename LaunchConfigT = DeploymentLaunchConfig>
    DeploymentApplicationConfig& WithLaunchConfig(LaunchConfigT&& value) { SetLaunchConfig(std::forward<LaunchConfigT>(value)); return *this;}
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
