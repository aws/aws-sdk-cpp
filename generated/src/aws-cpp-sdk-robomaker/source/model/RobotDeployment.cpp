/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/RobotDeployment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

RobotDeployment::RobotDeployment() : 
    m_arnHasBeenSet(false),
    m_deploymentStartTimeHasBeenSet(false),
    m_deploymentFinishTimeHasBeenSet(false),
    m_status(RobotStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_progressDetailHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_failureCode(DeploymentJobErrorCode::NOT_SET),
    m_failureCodeHasBeenSet(false)
{
}

RobotDeployment::RobotDeployment(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_deploymentStartTimeHasBeenSet(false),
    m_deploymentFinishTimeHasBeenSet(false),
    m_status(RobotStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_progressDetailHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_failureCode(DeploymentJobErrorCode::NOT_SET),
    m_failureCodeHasBeenSet(false)
{
  *this = jsonValue;
}

RobotDeployment& RobotDeployment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentStartTime"))
  {
    m_deploymentStartTime = jsonValue.GetDouble("deploymentStartTime");

    m_deploymentStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentFinishTime"))
  {
    m_deploymentFinishTime = jsonValue.GetDouble("deploymentFinishTime");

    m_deploymentFinishTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = RobotStatusMapper::GetRobotStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("progressDetail"))
  {
    m_progressDetail = jsonValue.GetObject("progressDetail");

    m_progressDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = DeploymentJobErrorCodeMapper::GetDeploymentJobErrorCodeForName(jsonValue.GetString("failureCode"));

    m_failureCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue RobotDeployment::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_deploymentStartTimeHasBeenSet)
  {
   payload.WithDouble("deploymentStartTime", m_deploymentStartTime.SecondsWithMSPrecision());
  }

  if(m_deploymentFinishTimeHasBeenSet)
  {
   payload.WithDouble("deploymentFinishTime", m_deploymentFinishTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", RobotStatusMapper::GetNameForRobotStatus(m_status));
  }

  if(m_progressDetailHasBeenSet)
  {
   payload.WithObject("progressDetail", m_progressDetail.Jsonize());

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("failureCode", DeploymentJobErrorCodeMapper::GetNameForDeploymentJobErrorCode(m_failureCode));
  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
