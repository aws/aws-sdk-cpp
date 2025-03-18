/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ProgressCounters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ProgressCounters::ProgressCounters(JsonView jsonValue)
{
  *this = jsonValue;
}

ProgressCounters& ProgressCounters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalSteps"))
  {
    m_totalSteps = jsonValue.GetInteger("TotalSteps");
    m_totalStepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SuccessSteps"))
  {
    m_successSteps = jsonValue.GetInteger("SuccessSteps");
    m_successStepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailedSteps"))
  {
    m_failedSteps = jsonValue.GetInteger("FailedSteps");
    m_failedStepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CancelledSteps"))
  {
    m_cancelledSteps = jsonValue.GetInteger("CancelledSteps");
    m_cancelledStepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimedOutSteps"))
  {
    m_timedOutSteps = jsonValue.GetInteger("TimedOutSteps");
    m_timedOutStepsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProgressCounters::Jsonize() const
{
  JsonValue payload;

  if(m_totalStepsHasBeenSet)
  {
   payload.WithInteger("TotalSteps", m_totalSteps);

  }

  if(m_successStepsHasBeenSet)
  {
   payload.WithInteger("SuccessSteps", m_successSteps);

  }

  if(m_failedStepsHasBeenSet)
  {
   payload.WithInteger("FailedSteps", m_failedSteps);

  }

  if(m_cancelledStepsHasBeenSet)
  {
   payload.WithInteger("CancelledSteps", m_cancelledSteps);

  }

  if(m_timedOutStepsHasBeenSet)
  {
   payload.WithInteger("TimedOutSteps", m_timedOutSteps);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
