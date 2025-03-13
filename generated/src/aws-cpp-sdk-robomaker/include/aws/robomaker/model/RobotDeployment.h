/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/RobotStatus.h>
#include <aws/robomaker/model/ProgressDetail.h>
#include <aws/robomaker/model/DeploymentJobErrorCode.h>
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
   * <p>Information about a robot deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/RobotDeployment">AWS
   * API Reference</a></p>
   */
  class RobotDeployment
  {
  public:
    AWS_ROBOMAKER_API RobotDeployment() = default;
    AWS_ROBOMAKER_API RobotDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API RobotDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The robot deployment Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RobotDeployment& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the deployment was
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetDeploymentStartTime() const { return m_deploymentStartTime; }
    inline bool DeploymentStartTimeHasBeenSet() const { return m_deploymentStartTimeHasBeenSet; }
    template<typename DeploymentStartTimeT = Aws::Utils::DateTime>
    void SetDeploymentStartTime(DeploymentStartTimeT&& value) { m_deploymentStartTimeHasBeenSet = true; m_deploymentStartTime = std::forward<DeploymentStartTimeT>(value); }
    template<typename DeploymentStartTimeT = Aws::Utils::DateTime>
    RobotDeployment& WithDeploymentStartTime(DeploymentStartTimeT&& value) { SetDeploymentStartTime(std::forward<DeploymentStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the deployment finished.</p>
     */
    inline const Aws::Utils::DateTime& GetDeploymentFinishTime() const { return m_deploymentFinishTime; }
    inline bool DeploymentFinishTimeHasBeenSet() const { return m_deploymentFinishTimeHasBeenSet; }
    template<typename DeploymentFinishTimeT = Aws::Utils::DateTime>
    void SetDeploymentFinishTime(DeploymentFinishTimeT&& value) { m_deploymentFinishTimeHasBeenSet = true; m_deploymentFinishTime = std::forward<DeploymentFinishTimeT>(value); }
    template<typename DeploymentFinishTimeT = Aws::Utils::DateTime>
    RobotDeployment& WithDeploymentFinishTime(DeploymentFinishTimeT&& value) { SetDeploymentFinishTime(std::forward<DeploymentFinishTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the robot deployment.</p>
     */
    inline RobotStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RobotStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RobotDeployment& WithStatus(RobotStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about how the deployment is progressing.</p>
     */
    inline const ProgressDetail& GetProgressDetail() const { return m_progressDetail; }
    inline bool ProgressDetailHasBeenSet() const { return m_progressDetailHasBeenSet; }
    template<typename ProgressDetailT = ProgressDetail>
    void SetProgressDetail(ProgressDetailT&& value) { m_progressDetailHasBeenSet = true; m_progressDetail = std::forward<ProgressDetailT>(value); }
    template<typename ProgressDetailT = ProgressDetail>
    RobotDeployment& WithProgressDetail(ProgressDetailT&& value) { SetProgressDetail(std::forward<ProgressDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the reason why the robot deployment failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    RobotDeployment& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The robot deployment failure code.</p>
     */
    inline DeploymentJobErrorCode GetFailureCode() const { return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(DeploymentJobErrorCode value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline RobotDeployment& WithFailureCode(DeploymentJobErrorCode value) { SetFailureCode(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_deploymentStartTime{};
    bool m_deploymentStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deploymentFinishTime{};
    bool m_deploymentFinishTimeHasBeenSet = false;

    RobotStatus m_status{RobotStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ProgressDetail m_progressDetail;
    bool m_progressDetailHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    DeploymentJobErrorCode m_failureCode{DeploymentJobErrorCode::NOT_SET};
    bool m_failureCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
