/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/StoppingCondition.h>
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

StoppingCondition::StoppingCondition() : 
    m_maxRuntimeInSeconds(0),
    m_maxRuntimeInSecondsHasBeenSet(false),
    m_maxWaitTimeInSeconds(0),
    m_maxWaitTimeInSecondsHasBeenSet(false),
    m_maxPendingTimeInSeconds(0),
    m_maxPendingTimeInSecondsHasBeenSet(false)
{
}

StoppingCondition::StoppingCondition(JsonView jsonValue) : 
    m_maxRuntimeInSeconds(0),
    m_maxRuntimeInSecondsHasBeenSet(false),
    m_maxWaitTimeInSeconds(0),
    m_maxWaitTimeInSecondsHasBeenSet(false),
    m_maxPendingTimeInSeconds(0),
    m_maxPendingTimeInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

StoppingCondition& StoppingCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxRuntimeInSeconds"))
  {
    m_maxRuntimeInSeconds = jsonValue.GetInteger("MaxRuntimeInSeconds");

    m_maxRuntimeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxWaitTimeInSeconds"))
  {
    m_maxWaitTimeInSeconds = jsonValue.GetInteger("MaxWaitTimeInSeconds");

    m_maxWaitTimeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxPendingTimeInSeconds"))
  {
    m_maxPendingTimeInSeconds = jsonValue.GetInteger("MaxPendingTimeInSeconds");

    m_maxPendingTimeInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue StoppingCondition::Jsonize() const
{
  JsonValue payload;

  if(m_maxRuntimeInSecondsHasBeenSet)
  {
   payload.WithInteger("MaxRuntimeInSeconds", m_maxRuntimeInSeconds);

  }

  if(m_maxWaitTimeInSecondsHasBeenSet)
  {
   payload.WithInteger("MaxWaitTimeInSeconds", m_maxWaitTimeInSeconds);

  }

  if(m_maxPendingTimeInSecondsHasBeenSet)
  {
   payload.WithInteger("MaxPendingTimeInSeconds", m_maxPendingTimeInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
