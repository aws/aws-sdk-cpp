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
    AWS_ROBOMAKER_API RobotDeployment();
    AWS_ROBOMAKER_API RobotDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API RobotDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The robot deployment Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline RobotDeployment& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RobotDeployment& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RobotDeployment& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the deployment was
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetDeploymentStartTime() const{ return m_deploymentStartTime; }
    inline bool DeploymentStartTimeHasBeenSet() const { return m_deploymentStartTimeHasBeenSet; }
    inline void SetDeploymentStartTime(const Aws::Utils::DateTime& value) { m_deploymentStartTimeHasBeenSet = true; m_deploymentStartTime = value; }
    inline void SetDeploymentStartTime(Aws::Utils::DateTime&& value) { m_deploymentStartTimeHasBeenSet = true; m_deploymentStartTime = std::move(value); }
    inline RobotDeployment& WithDeploymentStartTime(const Aws::Utils::DateTime& value) { SetDeploymentStartTime(value); return *this;}
    inline RobotDeployment& WithDeploymentStartTime(Aws::Utils::DateTime&& value) { SetDeploymentStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the deployment finished.</p>
     */
    inline const Aws::Utils::DateTime& GetDeploymentFinishTime() const{ return m_deploymentFinishTime; }
    inline bool DeploymentFinishTimeHasBeenSet() const { return m_deploymentFinishTimeHasBeenSet; }
    inline void SetDeploymentFinishTime(const Aws::Utils::DateTime& value) { m_deploymentFinishTimeHasBeenSet = true; m_deploymentFinishTime = value; }
    inline void SetDeploymentFinishTime(Aws::Utils::DateTime&& value) { m_deploymentFinishTimeHasBeenSet = true; m_deploymentFinishTime = std::move(value); }
    inline RobotDeployment& WithDeploymentFinishTime(const Aws::Utils::DateTime& value) { SetDeploymentFinishTime(value); return *this;}
    inline RobotDeployment& WithDeploymentFinishTime(Aws::Utils::DateTime&& value) { SetDeploymentFinishTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the robot deployment.</p>
     */
    inline const RobotStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RobotStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RobotStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RobotDeployment& WithStatus(const RobotStatus& value) { SetStatus(value); return *this;}
    inline RobotDeployment& WithStatus(RobotStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about how the deployment is progressing.</p>
     */
    inline const ProgressDetail& GetProgressDetail() const{ return m_progressDetail; }
    inline bool ProgressDetailHasBeenSet() const { return m_progressDetailHasBeenSet; }
    inline void SetProgressDetail(const ProgressDetail& value) { m_progressDetailHasBeenSet = true; m_progressDetail = value; }
    inline void SetProgressDetail(ProgressDetail&& value) { m_progressDetailHasBeenSet = true; m_progressDetail = std::move(value); }
    inline RobotDeployment& WithProgressDetail(const ProgressDetail& value) { SetProgressDetail(value); return *this;}
    inline RobotDeployment& WithProgressDetail(ProgressDetail&& value) { SetProgressDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the reason why the robot deployment failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline RobotDeployment& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline RobotDeployment& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline RobotDeployment& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The robot deployment failure code.</p>
     */
    inline const DeploymentJobErrorCode& GetFailureCode() const{ return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(const DeploymentJobErrorCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline void SetFailureCode(DeploymentJobErrorCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }
    inline RobotDeployment& WithFailureCode(const DeploymentJobErrorCode& value) { SetFailureCode(value); return *this;}
    inline RobotDeployment& WithFailureCode(DeploymentJobErrorCode&& value) { SetFailureCode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_deploymentStartTime;
    bool m_deploymentStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deploymentFinishTime;
    bool m_deploymentFinishTimeHasBeenSet = false;

    RobotStatus m_status;
    bool m_statusHasBeenSet = false;

    ProgressDetail m_progressDetail;
    bool m_progressDetailHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    DeploymentJobErrorCode m_failureCode;
    bool m_failureCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
