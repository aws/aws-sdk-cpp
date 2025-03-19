/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Configuration information for a deployment launch.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeploymentLaunchConfig">AWS
   * API Reference</a></p>
   */
  class DeploymentLaunchConfig
  {
  public:
    AWS_ROBOMAKER_API DeploymentLaunchConfig() = default;
    AWS_ROBOMAKER_API DeploymentLaunchConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API DeploymentLaunchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    DeploymentLaunchConfig& WithPackageName(PackageNameT&& value) { SetPackageName(std::forward<PackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment pre-launch file. This file will be executed prior to the
     * launch file.</p>
     */
    inline const Aws::String& GetPreLaunchFile() const { return m_preLaunchFile; }
    inline bool PreLaunchFileHasBeenSet() const { return m_preLaunchFileHasBeenSet; }
    template<typename PreLaunchFileT = Aws::String>
    void SetPreLaunchFile(PreLaunchFileT&& value) { m_preLaunchFileHasBeenSet = true; m_preLaunchFile = std::forward<PreLaunchFileT>(value); }
    template<typename PreLaunchFileT = Aws::String>
    DeploymentLaunchConfig& WithPreLaunchFile(PreLaunchFileT&& value) { SetPreLaunchFile(std::forward<PreLaunchFileT>(value)); return *this;}
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
    DeploymentLaunchConfig& WithLaunchFile(LaunchFileT&& value) { SetLaunchFile(std::forward<LaunchFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment post-launch file. This file will be executed after the launch
     * file.</p>
     */
    inline const Aws::String& GetPostLaunchFile() const { return m_postLaunchFile; }
    inline bool PostLaunchFileHasBeenSet() const { return m_postLaunchFileHasBeenSet; }
    template<typename PostLaunchFileT = Aws::String>
    void SetPostLaunchFile(PostLaunchFileT&& value) { m_postLaunchFileHasBeenSet = true; m_postLaunchFile = std::forward<PostLaunchFileT>(value); }
    template<typename PostLaunchFileT = Aws::String>
    DeploymentLaunchConfig& WithPostLaunchFile(PostLaunchFileT&& value) { SetPostLaunchFile(std::forward<PostLaunchFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key/value pairs specifying environment variables for the robot
     * application</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::forward<EnvironmentVariablesT>(value); }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    DeploymentLaunchConfig& WithEnvironmentVariables(EnvironmentVariablesT&& value) { SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value)); return *this;}
    template<typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
    DeploymentLaunchConfig& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
      m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_preLaunchFile;
    bool m_preLaunchFileHasBeenSet = false;

    Aws::String m_launchFile;
    bool m_launchFileHasBeenSet = false;

    Aws::String m_postLaunchFile;
    bool m_postLaunchFileHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
