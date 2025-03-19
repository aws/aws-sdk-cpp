/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-edge/model/ModelState.h>
#include <aws/sagemaker-edge/model/DeploymentStatus.h>
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
namespace SagemakerEdgeManager
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/DeploymentModel">AWS
   * API Reference</a></p>
   */
  class DeploymentModel
  {
  public:
    AWS_SAGEMAKEREDGEMANAGER_API DeploymentModel() = default;
    AWS_SAGEMAKEREDGEMANAGER_API DeploymentModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API DeploymentModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique handle of the model.</p>
     */
    inline const Aws::String& GetModelHandle() const { return m_modelHandle; }
    inline bool ModelHandleHasBeenSet() const { return m_modelHandleHasBeenSet; }
    template<typename ModelHandleT = Aws::String>
    void SetModelHandle(ModelHandleT&& value) { m_modelHandleHasBeenSet = true; m_modelHandle = std::forward<ModelHandleT>(value); }
    template<typename ModelHandleT = Aws::String>
    DeploymentModel& WithModelHandle(ModelHandleT&& value) { SetModelHandle(std::forward<ModelHandleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    DeploymentModel& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model.</p>
     */
    inline const Aws::String& GetModelVersion() const { return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    template<typename ModelVersionT = Aws::String>
    void SetModelVersion(ModelVersionT&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::forward<ModelVersionT>(value); }
    template<typename ModelVersionT = Aws::String>
    DeploymentModel& WithModelVersion(ModelVersionT&& value) { SetModelVersion(std::forward<ModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired state of the model.</p>
     */
    inline ModelState GetDesiredState() const { return m_desiredState; }
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }
    inline void SetDesiredState(ModelState value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }
    inline DeploymentModel& WithDesiredState(ModelState value) { SetDesiredState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the current state of the model.</p>
     */
    inline ModelState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ModelState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DeploymentModel& WithState(ModelState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the deployment status of the model.</p>
     */
    inline DeploymentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DeploymentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeploymentModel& WithStatus(DeploymentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the error message for the deployment status result.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    DeploymentModel& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the error message if there is a rollback.</p>
     */
    inline const Aws::String& GetRollbackFailureReason() const { return m_rollbackFailureReason; }
    inline bool RollbackFailureReasonHasBeenSet() const { return m_rollbackFailureReasonHasBeenSet; }
    template<typename RollbackFailureReasonT = Aws::String>
    void SetRollbackFailureReason(RollbackFailureReasonT&& value) { m_rollbackFailureReasonHasBeenSet = true; m_rollbackFailureReason = std::forward<RollbackFailureReasonT>(value); }
    template<typename RollbackFailureReasonT = Aws::String>
    DeploymentModel& WithRollbackFailureReason(RollbackFailureReasonT&& value) { SetRollbackFailureReason(std::forward<RollbackFailureReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelHandle;
    bool m_modelHandleHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    ModelState m_desiredState{ModelState::NOT_SET};
    bool m_desiredStateHasBeenSet = false;

    ModelState m_state{ModelState::NOT_SET};
    bool m_stateHasBeenSet = false;

    DeploymentStatus m_status{DeploymentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_rollbackFailureReason;
    bool m_rollbackFailureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
