/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/TimeSeriesDataPoint.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-query/model/Datum.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

TimeSeriesDataPoint::TimeSeriesDataPoint(JsonView jsonValue)
{
  *this = jsonValue;
}

TimeSeriesDataPoint& TimeSeriesDataPoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Time"))
  {
    m_time = jsonValue.GetString("Time");
    m_timeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = Aws::MakeShared<Datum>("TimeSeriesDataPoint", jsonValue.GetObject("Value"));
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeSeriesDataPoint::Jsonize() const
{
  JsonValue payload;

  if(m_timeHasBeenSet)
  {
   payload.WithString("Time", m_time);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value->Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
