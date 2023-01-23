/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LabelingJobStoppingConditions.h>
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

LabelingJobStoppingConditions::LabelingJobStoppingConditions() : 
    m_maxHumanLabeledObjectCount(0),
    m_maxHumanLabeledObjectCountHasBeenSet(false),
    m_maxPercentageOfInputDatasetLabeled(0),
    m_maxPercentageOfInputDatasetLabeledHasBeenSet(false)
{
}

LabelingJobStoppingConditions::LabelingJobStoppingConditions(JsonView jsonValue) : 
    m_maxHumanLabeledObjectCount(0),
    m_maxHumanLabeledObjectCountHasBeenSet(false),
    m_maxPercentageOfInputDatasetLabeled(0),
    m_maxPercentageOfInputDatasetLabeledHasBeenSet(false)
{
  *this = jsonValue;
}

LabelingJobStoppingConditions& LabelingJobStoppingConditions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxHumanLabeledObjectCount"))
  {
    m_maxHumanLabeledObjectCount = jsonValue.GetInteger("MaxHumanLabeledObjectCount");

    m_maxHumanLabeledObjectCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxPercentageOfInputDatasetLabeled"))
  {
    m_maxPercentageOfInputDatasetLabeled = jsonValue.GetInteger("MaxPercentageOfInputDatasetLabeled");

    m_maxPercentageOfInputDatasetLabeledHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelingJobStoppingConditions::Jsonize() const
{
  JsonValue payload;

  if(m_maxHumanLabeledObjectCountHasBeenSet)
  {
   payload.WithInteger("MaxHumanLabeledObjectCount", m_maxHumanLabeledObjectCount);

  }

  if(m_maxPercentageOfInputDatasetLabeledHasBeenSet)
  {
   payload.WithInteger("MaxPercentageOfInputDatasetLabeled", m_maxPercentageOfInputDatasetLabeled);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
