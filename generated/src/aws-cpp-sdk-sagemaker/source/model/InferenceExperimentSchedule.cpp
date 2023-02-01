/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceExperimentSchedule.h>
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

InferenceExperimentSchedule::InferenceExperimentSchedule() : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

InferenceExperimentSchedule::InferenceExperimentSchedule(JsonView jsonValue) : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceExperimentSchedule& InferenceExperimentSchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceExperimentSchedule::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
