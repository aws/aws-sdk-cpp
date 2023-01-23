/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingStoppingCondition.h>
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

ProcessingStoppingCondition::ProcessingStoppingCondition() : 
    m_maxRuntimeInSeconds(0),
    m_maxRuntimeInSecondsHasBeenSet(false)
{
}

ProcessingStoppingCondition::ProcessingStoppingCondition(JsonView jsonValue) : 
    m_maxRuntimeInSeconds(0),
    m_maxRuntimeInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessingStoppingCondition& ProcessingStoppingCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxRuntimeInSeconds"))
  {
    m_maxRuntimeInSeconds = jsonValue.GetInteger("MaxRuntimeInSeconds");

    m_maxRuntimeInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProcessingStoppingCondition::Jsonize() const
{
  JsonValue payload;

  if(m_maxRuntimeInSecondsHasBeenSet)
  {
   payload.WithInteger("MaxRuntimeInSeconds", m_maxRuntimeInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
