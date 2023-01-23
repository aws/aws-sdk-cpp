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
    AWS_SAGEMAKEREDGEMANAGER_API DeploymentModel();
    AWS_SAGEMAKEREDGEMANAGER_API DeploymentModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API DeploymentModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique handle of the model.</p>
     */
    inline const Aws::String& GetModelHandle() const{ return m_modelHandle; }

    /**
     * <p>The unique handle of the model.</p>
     */
    inline bool ModelHandleHasBeenSet() const { return m_modelHandleHasBeenSet; }

    /**
     * <p>The unique handle of the model.</p>
     */
    inline void SetModelHandle(const Aws::String& value) { m_modelHandleHasBeenSet = true; m_modelHandle = value; }

    /**
     * <p>The unique handle of the model.</p>
     */
    inline void SetModelHandle(Aws::String&& value) { m_modelHandleHasBeenSet = true; m_modelHandle = std::move(value); }

    /**
     * <p>The unique handle of the model.</p>
     */
    inline void SetModelHandle(const char* value) { m_modelHandleHasBeenSet = true; m_modelHandle.assign(value); }

    /**
     * <p>The unique handle of the model.</p>
     */
    inline DeploymentModel& WithModelHandle(const Aws::String& value) { SetModelHandle(value); return *this;}

    /**
     * <p>The unique handle of the model.</p>
     */
    inline DeploymentModel& WithModelHandle(Aws::String&& value) { SetModelHandle(std::move(value)); return *this;}

    /**
     * <p>The unique handle of the model.</p>
     */
    inline DeploymentModel& WithModelHandle(const char* value) { SetModelHandle(value); return *this;}


    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the model.</p>
     */
    inline DeploymentModel& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline DeploymentModel& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline DeploymentModel& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The version of the model.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p>The version of the model.</p>
     */
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }

    /**
     * <p>The version of the model.</p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }

    /**
     * <p>The version of the model.</p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }

    /**
     * <p>The version of the model.</p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }

    /**
     * <p>The version of the model.</p>
     */
    inline DeploymentModel& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p>The version of the model.</p>
     */
    inline DeploymentModel& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the model.</p>
     */
    inline DeploymentModel& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}


    /**
     * <p>The desired state of the model.</p>
     */
    inline const ModelState& GetDesiredState() const{ return m_desiredState; }

    /**
     * <p>The desired state of the model.</p>
     */
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }

    /**
     * <p>The desired state of the model.</p>
     */
    inline void SetDesiredState(const ModelState& value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }

    /**
     * <p>The desired state of the model.</p>
     */
    inline void SetDesiredState(ModelState&& value) { m_desiredStateHasBeenSet = true; m_desiredState = std::move(value); }

    /**
     * <p>The desired state of the model.</p>
     */
    inline DeploymentModel& WithDesiredState(const ModelState& value) { SetDesiredState(value); return *this;}

    /**
     * <p>The desired state of the model.</p>
     */
    inline DeploymentModel& WithDesiredState(ModelState&& value) { SetDesiredState(std::move(value)); return *this;}


    /**
     * <p>Returns the current state of the model.</p>
     */
    inline const ModelState& GetState() const{ return m_state; }

    /**
     * <p>Returns the current state of the model.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Returns the current state of the model.</p>
     */
    inline void SetState(const ModelState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Returns the current state of the model.</p>
     */
    inline void SetState(ModelState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Returns the current state of the model.</p>
     */
    inline DeploymentModel& WithState(const ModelState& value) { SetState(value); return *this;}

    /**
     * <p>Returns the current state of the model.</p>
     */
    inline DeploymentModel& WithState(ModelState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Returns the deployment status of the model.</p>
     */
    inline const DeploymentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Returns the deployment status of the model.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Returns the deployment status of the model.</p>
     */
    inline void SetStatus(const DeploymentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Returns the deployment status of the model.</p>
     */
    inline void SetStatus(DeploymentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Returns the deployment status of the model.</p>
     */
    inline DeploymentModel& WithStatus(const DeploymentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Returns the deployment status of the model.</p>
     */
    inline DeploymentModel& WithStatus(DeploymentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Returns the error message for the deployment status result.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>Returns the error message for the deployment status result.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>Returns the error message for the deployment status result.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>Returns the error message for the deployment status result.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>Returns the error message for the deployment status result.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>Returns the error message for the deployment status result.</p>
     */
    inline DeploymentModel& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>Returns the error message for the deployment status result.</p>
     */
    inline DeploymentModel& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>Returns the error message for the deployment status result.</p>
     */
    inline DeploymentModel& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>Returns the error message if there is a rollback.</p>
     */
    inline const Aws::String& GetRollbackFailureReason() const{ return m_rollbackFailureReason; }

    /**
     * <p>Returns the error message if there is a rollback.</p>
     */
    inline bool RollbackFailureReasonHasBeenSet() const { return m_rollbackFailureReasonHasBeenSet; }

    /**
     * <p>Returns the error message if there is a rollback.</p>
     */
    inline void SetRollbackFailureReason(const Aws::String& value) { m_rollbackFailureReasonHasBeenSet = true; m_rollbackFailureReason = value; }

    /**
     * <p>Returns the error message if there is a rollback.</p>
     */
    inline void SetRollbackFailureReason(Aws::String&& value) { m_rollbackFailureReasonHasBeenSet = true; m_rollbackFailureReason = std::move(value); }

    /**
     * <p>Returns the error message if there is a rollback.</p>
     */
    inline void SetRollbackFailureReason(const char* value) { m_rollbackFailureReasonHasBeenSet = true; m_rollbackFailureReason.assign(value); }

    /**
     * <p>Returns the error message if there is a rollback.</p>
     */
    inline DeploymentModel& WithRollbackFailureReason(const Aws::String& value) { SetRollbackFailureReason(value); return *this;}

    /**
     * <p>Returns the error message if there is a rollback.</p>
     */
    inline DeploymentModel& WithRollbackFailureReason(Aws::String&& value) { SetRollbackFailureReason(std::move(value)); return *this;}

    /**
     * <p>Returns the error message if there is a rollback.</p>
     */
    inline DeploymentModel& WithRollbackFailureReason(const char* value) { SetRollbackFailureReason(value); return *this;}

  private:

    Aws::String m_modelHandle;
    bool m_modelHandleHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    ModelState m_desiredState;
    bool m_desiredStateHasBeenSet = false;

    ModelState m_state;
    bool m_stateHasBeenSet = false;

    DeploymentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_rollbackFailureReason;
    bool m_rollbackFailureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
