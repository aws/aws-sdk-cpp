/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/model/DeploymentModel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SagemakerEdgeManager
{
namespace Model
{

DeploymentModel::DeploymentModel() : 
    m_modelHandleHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_desiredState(ModelState::NOT_SET),
    m_desiredStateHasBeenSet(false),
    m_state(ModelState::NOT_SET),
    m_stateHasBeenSet(false),
    m_status(DeploymentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_rollbackFailureReasonHasBeenSet(false)
{
}

DeploymentModel::DeploymentModel(JsonView jsonValue) : 
    m_modelHandleHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_desiredState(ModelState::NOT_SET),
    m_desiredStateHasBeenSet(false),
    m_state(ModelState::NOT_SET),
    m_stateHasBeenSet(false),
    m_status(DeploymentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_rollbackFailureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentModel& DeploymentModel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelHandle"))
  {
    m_modelHandle = jsonValue.GetString("ModelHandle");

    m_modelHandleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

    m_modelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelVersion"))
  {
    m_modelVersion = jsonValue.GetString("ModelVersion");

    m_modelVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DesiredState"))
  {
    m_desiredState = ModelStateMapper::GetModelStateForName(jsonValue.GetString("DesiredState"));

    m_desiredStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ModelStateMapper::GetModelStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DeploymentStatusMapper::GetDeploymentStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RollbackFailureReason"))
  {
    m_rollbackFailureReason = jsonValue.GetString("RollbackFailureReason");

    m_rollbackFailureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentModel::Jsonize() const
{
  JsonValue payload;

  if(m_modelHandleHasBeenSet)
  {
   payload.WithString("ModelHandle", m_modelHandle);

  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_modelVersionHasBeenSet)
  {
   payload.WithString("ModelVersion", m_modelVersion);

  }

  if(m_desiredStateHasBeenSet)
  {
   payload.WithString("DesiredState", ModelStateMapper::GetNameForModelState(m_desiredState));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ModelStateMapper::GetNameForModelState(m_state));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DeploymentStatusMapper::GetNameForDeploymentStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", m_statusReason);

  }

  if(m_rollbackFailureReasonHasBeenSet)
  {
   payload.WithString("RollbackFailureReason", m_rollbackFailureReason);

  }

  return payload;
}

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
