/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ScheduleConfig.h>
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

ScheduleConfig::ScheduleConfig() : 
    m_scheduleExpressionHasBeenSet(false),
    m_dataAnalysisStartTimeHasBeenSet(false),
    m_dataAnalysisEndTimeHasBeenSet(false)
{
}

ScheduleConfig::ScheduleConfig(JsonView jsonValue) : 
    m_scheduleExpressionHasBeenSet(false),
    m_dataAnalysisStartTimeHasBeenSet(false),
    m_dataAnalysisEndTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleConfig& ScheduleConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScheduleExpression"))
  {
    m_scheduleExpression = jsonValue.GetString("ScheduleExpression");

    m_scheduleExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataAnalysisStartTime"))
  {
    m_dataAnalysisStartTime = jsonValue.GetString("DataAnalysisStartTime");

    m_dataAnalysisStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataAnalysisEndTime"))
  {
    m_dataAnalysisEndTime = jsonValue.GetString("DataAnalysisEndTime");

    m_dataAnalysisEndTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleConfig::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleExpressionHasBeenSet)
  {
   payload.WithString("ScheduleExpression", m_scheduleExpression);

  }

  if(m_dataAnalysisStartTimeHasBeenSet)
  {
   payload.WithString("DataAnalysisStartTime", m_dataAnalysisStartTime);

  }

  if(m_dataAnalysisEndTimeHasBeenSet)
  {
   payload.WithString("DataAnalysisEndTime", m_dataAnalysisEndTime);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
