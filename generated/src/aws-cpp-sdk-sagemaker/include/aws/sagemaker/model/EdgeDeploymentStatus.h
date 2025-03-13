/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/StageStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Contains information summarizing the deployment stage results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EdgeDeploymentStatus">AWS
   * API Reference</a></p>
   */
  class EdgeDeploymentStatus
  {
  public:
    AWS_SAGEMAKER_API EdgeDeploymentStatus() = default;
    AWS_SAGEMAKER_API EdgeDeploymentStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EdgeDeploymentStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The general status of the current stage.</p>
     */
    inline StageStatus GetStageStatus() const { return m_stageStatus; }
    inline bool StageStatusHasBeenSet() const { return m_stageStatusHasBeenSet; }
    inline void SetStageStatus(StageStatus value) { m_stageStatusHasBeenSet = true; m_stageStatus = value; }
    inline EdgeDeploymentStatus& WithStageStatus(StageStatus value) { SetStageStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of edge devices with the successful deployment in the current
     * stage.</p>
     */
    inline int GetEdgeDeploymentSuccessInStage() const { return m_edgeDeploymentSuccessInStage; }
    inline bool EdgeDeploymentSuccessInStageHasBeenSet() const { return m_edgeDeploymentSuccessInStageHasBeenSet; }
    inline void SetEdgeDeploymentSuccessInStage(int value) { m_edgeDeploymentSuccessInStageHasBeenSet = true; m_edgeDeploymentSuccessInStage = value; }
    inline EdgeDeploymentStatus& WithEdgeDeploymentSuccessInStage(int value) { SetEdgeDeploymentSuccessInStage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of edge devices yet to pick up the deployment in current stage, or
     * in progress.</p>
     */
    inline int GetEdgeDeploymentPendingInStage() const { return m_edgeDeploymentPendingInStage; }
    inline bool EdgeDeploymentPendingInStageHasBeenSet() const { return m_edgeDeploymentPendingInStageHasBeenSet; }
    inline void SetEdgeDeploymentPendingInStage(int value) { m_edgeDeploymentPendingInStageHasBeenSet = true; m_edgeDeploymentPendingInStage = value; }
    inline EdgeDeploymentStatus& WithEdgeDeploymentPendingInStage(int value) { SetEdgeDeploymentPendingInStage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of edge devices that failed the deployment in current stage.</p>
     */
    inline int GetEdgeDeploymentFailedInStage() const { return m_edgeDeploymentFailedInStage; }
    inline bool EdgeDeploymentFailedInStageHasBeenSet() const { return m_edgeDeploymentFailedInStageHasBeenSet; }
    inline void SetEdgeDeploymentFailedInStage(int value) { m_edgeDeploymentFailedInStageHasBeenSet = true; m_edgeDeploymentFailedInStage = value; }
    inline EdgeDeploymentStatus& WithEdgeDeploymentFailedInStage(int value) { SetEdgeDeploymentFailedInStage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed message about deployment status in current stage.</p>
     */
    inline const Aws::String& GetEdgeDeploymentStatusMessage() const { return m_edgeDeploymentStatusMessage; }
    inline bool EdgeDeploymentStatusMessageHasBeenSet() const { return m_edgeDeploymentStatusMessageHasBeenSet; }
    template<typename EdgeDeploymentStatusMessageT = Aws::String>
    void SetEdgeDeploymentStatusMessage(EdgeDeploymentStatusMessageT&& value) { m_edgeDeploymentStatusMessageHasBeenSet = true; m_edgeDeploymentStatusMessage = std::forward<EdgeDeploymentStatusMessageT>(value); }
    template<typename EdgeDeploymentStatusMessageT = Aws::String>
    EdgeDeploymentStatus& WithEdgeDeploymentStatusMessage(EdgeDeploymentStatusMessageT&& value) { SetEdgeDeploymentStatusMessage(std::forward<EdgeDeploymentStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the deployment API started.</p>
     */
    inline const Aws::Utils::DateTime& GetEdgeDeploymentStageStartTime() const { return m_edgeDeploymentStageStartTime; }
    inline bool EdgeDeploymentStageStartTimeHasBeenSet() const { return m_edgeDeploymentStageStartTimeHasBeenSet; }
    template<typename EdgeDeploymentStageStartTimeT = Aws::Utils::DateTime>
    void SetEdgeDeploymentStageStartTime(EdgeDeploymentStageStartTimeT&& value) { m_edgeDeploymentStageStartTimeHasBeenSet = true; m_edgeDeploymentStageStartTime = std::forward<EdgeDeploymentStageStartTimeT>(value); }
    template<typename EdgeDeploymentStageStartTimeT = Aws::Utils::DateTime>
    EdgeDeploymentStatus& WithEdgeDeploymentStageStartTime(EdgeDeploymentStageStartTimeT&& value) { SetEdgeDeploymentStageStartTime(std::forward<EdgeDeploymentStageStartTimeT>(value)); return *this;}
    ///@}
  private:

    StageStatus m_stageStatus{StageStatus::NOT_SET};
    bool m_stageStatusHasBeenSet = false;

    int m_edgeDeploymentSuccessInStage{0};
    bool m_edgeDeploymentSuccessInStageHasBeenSet = false;

    int m_edgeDeploymentPendingInStage{0};
    bool m_edgeDeploymentPendingInStageHasBeenSet = false;

    int m_edgeDeploymentFailedInStage{0};
    bool m_edgeDeploymentFailedInStageHasBeenSet = false;

    Aws::String m_edgeDeploymentStatusMessage;
    bool m_edgeDeploymentStatusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_edgeDeploymentStageStartTime{};
    bool m_edgeDeploymentStageStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
