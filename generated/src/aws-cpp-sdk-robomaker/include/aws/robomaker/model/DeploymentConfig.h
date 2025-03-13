/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/model/S3Object.h>
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
   * <p>Information about a deployment configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeploymentConfig">AWS
   * API Reference</a></p>
   */
  class DeploymentConfig
  {
  public:
    AWS_ROBOMAKER_API DeploymentConfig() = default;
    AWS_ROBOMAKER_API DeploymentConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API DeploymentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The percentage of robots receiving the deployment at the same time.</p>
     */
    inline int GetConcurrentDeploymentPercentage() const { return m_concurrentDeploymentPercentage; }
    inline bool ConcurrentDeploymentPercentageHasBeenSet() const { return m_concurrentDeploymentPercentageHasBeenSet; }
    inline void SetConcurrentDeploymentPercentage(int value) { m_concurrentDeploymentPercentageHasBeenSet = true; m_concurrentDeploymentPercentage = value; }
    inline DeploymentConfig& WithConcurrentDeploymentPercentage(int value) { SetConcurrentDeploymentPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of deployments that need to fail before stopping
     * deployment.</p>
     */
    inline int GetFailureThresholdPercentage() const { return m_failureThresholdPercentage; }
    inline bool FailureThresholdPercentageHasBeenSet() const { return m_failureThresholdPercentageHasBeenSet; }
    inline void SetFailureThresholdPercentage(int value) { m_failureThresholdPercentageHasBeenSet = true; m_failureThresholdPercentage = value; }
    inline DeploymentConfig& WithFailureThresholdPercentage(int value) { SetFailureThresholdPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, to wait for deployment to a single robot to
     * complete. Choose a time between 1 minute and 7 days. The default is 5 hours.</p>
     */
    inline long long GetRobotDeploymentTimeoutInSeconds() const { return m_robotDeploymentTimeoutInSeconds; }
    inline bool RobotDeploymentTimeoutInSecondsHasBeenSet() const { return m_robotDeploymentTimeoutInSecondsHasBeenSet; }
    inline void SetRobotDeploymentTimeoutInSeconds(long long value) { m_robotDeploymentTimeoutInSecondsHasBeenSet = true; m_robotDeploymentTimeoutInSeconds = value; }
    inline DeploymentConfig& WithRobotDeploymentTimeoutInSeconds(long long value) { SetRobotDeploymentTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The download condition file.</p>
     */
    inline const S3Object& GetDownloadConditionFile() const { return m_downloadConditionFile; }
    inline bool DownloadConditionFileHasBeenSet() const { return m_downloadConditionFileHasBeenSet; }
    template<typename DownloadConditionFileT = S3Object>
    void SetDownloadConditionFile(DownloadConditionFileT&& value) { m_downloadConditionFileHasBeenSet = true; m_downloadConditionFile = std::forward<DownloadConditionFileT>(value); }
    template<typename DownloadConditionFileT = S3Object>
    DeploymentConfig& WithDownloadConditionFile(DownloadConditionFileT&& value) { SetDownloadConditionFile(std::forward<DownloadConditionFileT>(value)); return *this;}
    ///@}
  private:

    int m_concurrentDeploymentPercentage{0};
    bool m_concurrentDeploymentPercentageHasBeenSet = false;

    int m_failureThresholdPercentage{0};
    bool m_failureThresholdPercentageHasBeenSet = false;

    long long m_robotDeploymentTimeoutInSeconds{0};
    bool m_robotDeploymentTimeoutInSecondsHasBeenSet = false;

    S3Object m_downloadConditionFile;
    bool m_downloadConditionFileHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
