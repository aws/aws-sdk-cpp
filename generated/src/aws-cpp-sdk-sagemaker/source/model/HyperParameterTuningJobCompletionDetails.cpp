/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterTuningJobCompletionDetails.h>
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

HyperParameterTuningJobCompletionDetails::HyperParameterTuningJobCompletionDetails() : 
    m_numberOfTrainingJobsObjectiveNotImproving(0),
    m_numberOfTrainingJobsObjectiveNotImprovingHasBeenSet(false),
    m_convergenceDetectedTimeHasBeenSet(false)
{
}

HyperParameterTuningJobCompletionDetails::HyperParameterTuningJobCompletionDetails(JsonView jsonValue) : 
    m_numberOfTrainingJobsObjectiveNotImproving(0),
    m_numberOfTrainingJobsObjectiveNotImprovingHasBeenSet(false),
    m_convergenceDetectedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

HyperParameterTuningJobCompletionDetails& HyperParameterTuningJobCompletionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberOfTrainingJobsObjectiveNotImproving"))
  {
    m_numberOfTrainingJobsObjectiveNotImproving = jsonValue.GetInteger("NumberOfTrainingJobsObjectiveNotImproving");

    m_numberOfTrainingJobsObjectiveNotImprovingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConvergenceDetectedTime"))
  {
    m_convergenceDetectedTime = jsonValue.GetDouble("ConvergenceDetectedTime");

    m_convergenceDetectedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue HyperParameterTuningJobCompletionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfTrainingJobsObjectiveNotImprovingHasBeenSet)
  {
   payload.WithInteger("NumberOfTrainingJobsObjectiveNotImproving", m_numberOfTrainingJobsObjectiveNotImproving);

  }

  if(m_convergenceDetectedTimeHasBeenSet)
  {
   payload.WithDouble("ConvergenceDetectedTime", m_convergenceDetectedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
