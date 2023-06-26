/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/TimeRangeFilterOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

TimeRangeFilterOutput::TimeRangeFilterOutput() : 
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

TimeRangeFilterOutput::TimeRangeFilterOutput(JsonView jsonValue) : 
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

TimeRangeFilterOutput& TimeRangeFilterOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetString("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeRangeFilterOutput::Jsonize() const
{
  JsonValue payload;

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("EndTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("StartTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
