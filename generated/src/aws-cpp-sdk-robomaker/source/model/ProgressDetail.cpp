/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/ProgressDetail.h>
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

ProgressDetail::ProgressDetail() : 
    m_currentProgress(RobotDeploymentStep::NOT_SET),
    m_currentProgressHasBeenSet(false),
    m_percentDone(0.0),
    m_percentDoneHasBeenSet(false),
    m_estimatedTimeRemainingSeconds(0),
    m_estimatedTimeRemainingSecondsHasBeenSet(false),
    m_targetResourceHasBeenSet(false)
{
}

ProgressDetail::ProgressDetail(JsonView jsonValue) : 
    m_currentProgress(RobotDeploymentStep::NOT_SET),
    m_currentProgressHasBeenSet(false),
    m_percentDone(0.0),
    m_percentDoneHasBeenSet(false),
    m_estimatedTimeRemainingSeconds(0),
    m_estimatedTimeRemainingSecondsHasBeenSet(false),
    m_targetResourceHasBeenSet(false)
{
  *this = jsonValue;
}

ProgressDetail& ProgressDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("currentProgress"))
  {
    m_currentProgress = RobotDeploymentStepMapper::GetRobotDeploymentStepForName(jsonValue.GetString("currentProgress"));

    m_currentProgressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("percentDone"))
  {
    m_percentDone = jsonValue.GetDouble("percentDone");

    m_percentDoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("estimatedTimeRemainingSeconds"))
  {
    m_estimatedTimeRemainingSeconds = jsonValue.GetInteger("estimatedTimeRemainingSeconds");

    m_estimatedTimeRemainingSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetResource"))
  {
    m_targetResource = jsonValue.GetString("targetResource");

    m_targetResourceHasBeenSet = true;
  }

  return *this;
}

JsonValue ProgressDetail::Jsonize() const
{
  JsonValue payload;

  if(m_currentProgressHasBeenSet)
  {
   payload.WithString("currentProgress", RobotDeploymentStepMapper::GetNameForRobotDeploymentStep(m_currentProgress));
  }

  if(m_percentDoneHasBeenSet)
  {
   payload.WithDouble("percentDone", m_percentDone);

  }

  if(m_estimatedTimeRemainingSecondsHasBeenSet)
  {
   payload.WithInteger("estimatedTimeRemainingSeconds", m_estimatedTimeRemainingSeconds);

  }

  if(m_targetResourceHasBeenSet)
  {
   payload.WithString("targetResource", m_targetResource);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
