/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/BestObjectiveNotImproving.h>
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

BestObjectiveNotImproving::BestObjectiveNotImproving() : 
    m_maxNumberOfTrainingJobsNotImproving(0),
    m_maxNumberOfTrainingJobsNotImprovingHasBeenSet(false)
{
}

BestObjectiveNotImproving::BestObjectiveNotImproving(JsonView jsonValue) : 
    m_maxNumberOfTrainingJobsNotImproving(0),
    m_maxNumberOfTrainingJobsNotImprovingHasBeenSet(false)
{
  *this = jsonValue;
}

BestObjectiveNotImproving& BestObjectiveNotImproving::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxNumberOfTrainingJobsNotImproving"))
  {
    m_maxNumberOfTrainingJobsNotImproving = jsonValue.GetInteger("MaxNumberOfTrainingJobsNotImproving");

    m_maxNumberOfTrainingJobsNotImprovingHasBeenSet = true;
  }

  return *this;
}

JsonValue BestObjectiveNotImproving::Jsonize() const
{
  JsonValue payload;

  if(m_maxNumberOfTrainingJobsNotImprovingHasBeenSet)
  {
   payload.WithInteger("MaxNumberOfTrainingJobsNotImproving", m_maxNumberOfTrainingJobsNotImproving);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
