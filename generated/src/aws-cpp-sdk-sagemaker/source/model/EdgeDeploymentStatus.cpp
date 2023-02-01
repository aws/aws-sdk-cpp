/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EdgeDeploymentStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

EdgeDeploymentStatus::EdgeDeploymentStatus() : 
    m_stageStatus(StageStatus::NOT_SET),
    m_stageStatusHasBeenSet(false),
    m_edgeDeploymentSuccessInStage(0),
    m_edgeDeploymentSuccessInStageHasBeenSet(false),
    m_edgeDeploymentPendingInStage(0),
    m_edgeDeploymentPendingInStageHasBeenSet(false),
    m_edgeDeploymentFailedInStage(0),
    m_edgeDeploymentFailedInStageHasBeenSet(false),
    m_edgeDeploymentStatusMessageHasBeenSet(false),
    m_edgeDeploymentStageStartTimeHasBeenSet(false)
{
}

EdgeDeploymentStatus::EdgeDeploymentStatus(JsonView jsonValue) : 
    m_stageStatus(StageStatus::NOT_SET),
    m_stageStatusHasBeenSet(false),
    m_edgeDeploymentSuccessInStage(0),
    m_edgeDeploymentSuccessInStageHasBeenSet(false),
    m_edgeDeploymentPendingInStage(0),
    m_edgeDeploymentPendingInStageHasBeenSet(false),
    m_edgeDeploymentFailedInStage(0),
    m_edgeDeploymentFailedInStageHasBeenSet(false),
    m_edgeDeploymentStatusMessageHasBeenSet(false),
    m_edgeDeploymentStageStartTimeHasBeenSet(false)
{
  *this = jsonValue;
}

EdgeDeploymentStatus& EdgeDeploymentStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StageStatus"))
  {
    m_stageStatus = StageStatusMapper::GetStageStatusForName(jsonValue.GetString("StageStatus"));

    m_stageStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeDeploymentSuccessInStage"))
  {
    m_edgeDeploymentSuccessInStage = jsonValue.GetInteger("EdgeDeploymentSuccessInStage");

    m_edgeDeploymentSuccessInStageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeDeploymentPendingInStage"))
  {
    m_edgeDeploymentPendingInStage = jsonValue.GetInteger("EdgeDeploymentPendingInStage");

    m_edgeDeploymentPendingInStageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeDeploymentFailedInStage"))
  {
    m_edgeDeploymentFailedInStage = jsonValue.GetInteger("EdgeDeploymentFailedInStage");

    m_edgeDeploymentFailedInStageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeDeploymentStatusMessage"))
  {
    m_edgeDeploymentStatusMessage = jsonValue.GetString("EdgeDeploymentStatusMessage");

    m_edgeDeploymentStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeDeploymentStageStartTime"))
  {
    m_edgeDeploymentStageStartTime = jsonValue.GetDouble("EdgeDeploymentStageStartTime");

    m_edgeDeploymentStageStartTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue EdgeDeploymentStatus::Jsonize() const
{
  JsonValue payload;

  if(m_stageStatusHasBeenSet)
  {
   payload.WithString("StageStatus", StageStatusMapper::GetNameForStageStatus(m_stageStatus));
  }

  if(m_edgeDeploymentSuccessInStageHasBeenSet)
  {
   payload.WithInteger("EdgeDeploymentSuccessInStage", m_edgeDeploymentSuccessInStage);

  }

  if(m_edgeDeploymentPendingInStageHasBeenSet)
  {
   payload.WithInteger("EdgeDeploymentPendingInStage", m_edgeDeploymentPendingInStage);

  }

  if(m_edgeDeploymentFailedInStageHasBeenSet)
  {
   payload.WithInteger("EdgeDeploymentFailedInStage", m_edgeDeploymentFailedInStage);

  }

  if(m_edgeDeploymentStatusMessageHasBeenSet)
  {
   payload.WithString("EdgeDeploymentStatusMessage", m_edgeDeploymentStatusMessage);

  }

  if(m_edgeDeploymentStageStartTimeHasBeenSet)
  {
   payload.WithDouble("EdgeDeploymentStageStartTime", m_edgeDeploymentStageStartTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
