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
    AWS_ROBOMAKER_API DeploymentLaunchConfig();
    AWS_ROBOMAKER_API DeploymentLaunchConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API DeploymentLaunchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline DeploymentLaunchConfig& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}
    inline DeploymentLaunchConfig& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}
    inline DeploymentLaunchConfig& WithPackageName(const char* value) { SetPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment pre-launch file. This file will be executed prior to the
     * launch file.</p>
     */
    inline const Aws::String& GetPreLaunchFile() const{ return m_preLaunchFile; }
    inline bool PreLaunchFileHasBeenSet() const { return m_preLaunchFileHasBeenSet; }
    inline void SetPreLaunchFile(const Aws::String& value) { m_preLaunchFileHasBeenSet = true; m_preLaunchFile = value; }
    inline void SetPreLaunchFile(Aws::String&& value) { m_preLaunchFileHasBeenSet = true; m_preLaunchFile = std::move(value); }
    inline void SetPreLaunchFile(const char* value) { m_preLaunchFileHasBeenSet = true; m_preLaunchFile.assign(value); }
    inline DeploymentLaunchConfig& WithPreLaunchFile(const Aws::String& value) { SetPreLaunchFile(value); return *this;}
    inline DeploymentLaunchConfig& WithPreLaunchFile(Aws::String&& value) { SetPreLaunchFile(std::move(value)); return *this;}
    inline DeploymentLaunchConfig& WithPreLaunchFile(const char* value) { SetPreLaunchFile(value); return *this;}
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
    inline DeploymentLaunchConfig& WithLaunchFile(const Aws::String& value) { SetLaunchFile(value); return *this;}
    inline DeploymentLaunchConfig& WithLaunchFile(Aws::String&& value) { SetLaunchFile(std::move(value)); return *this;}
    inline DeploymentLaunchConfig& WithLaunchFile(const char* value) { SetLaunchFile(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment post-launch file. This file will be executed after the launch
     * file.</p>
     */
    inline const Aws::String& GetPostLaunchFile() const{ return m_postLaunchFile; }
    inline bool PostLaunchFileHasBeenSet() const { return m_postLaunchFileHasBeenSet; }
    inline void SetPostLaunchFile(const Aws::String& value) { m_postLaunchFileHasBeenSet = true; m_postLaunchFile = value; }
    inline void SetPostLaunchFile(Aws::String&& value) { m_postLaunchFileHasBeenSet = true; m_postLaunchFile = std::move(value); }
    inline void SetPostLaunchFile(const char* value) { m_postLaunchFileHasBeenSet = true; m_postLaunchFile.assign(value); }
    inline DeploymentLaunchConfig& WithPostLaunchFile(const Aws::String& value) { SetPostLaunchFile(value); return *this;}
    inline DeploymentLaunchConfig& WithPostLaunchFile(Aws::String&& value) { SetPostLaunchFile(std::move(value)); return *this;}
    inline DeploymentLaunchConfig& WithPostLaunchFile(const char* value) { SetPostLaunchFile(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key/value pairs specifying environment variables for the robot
     * application</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }
    inline DeploymentLaunchConfig& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}
    inline DeploymentLaunchConfig& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}
    inline DeploymentLaunchConfig& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }
    inline DeploymentLaunchConfig& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline DeploymentLaunchConfig& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline DeploymentLaunchConfig& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline DeploymentLaunchConfig& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline DeploymentLaunchConfig& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline DeploymentLaunchConfig& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }
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
