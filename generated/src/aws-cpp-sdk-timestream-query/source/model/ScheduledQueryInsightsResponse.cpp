/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ScheduledQueryInsightsResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

ScheduledQueryInsightsResponse::ScheduledQueryInsightsResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

ScheduledQueryInsightsResponse& ScheduledQueryInsightsResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QuerySpatialCoverage"))
  {
    m_querySpatialCoverage = jsonValue.GetObject("QuerySpatialCoverage");
    m_querySpatialCoverageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueryTemporalRange"))
  {
    m_queryTemporalRange = jsonValue.GetObject("QueryTemporalRange");
    m_queryTemporalRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueryTableCount"))
  {
    m_queryTableCount = jsonValue.GetInt64("QueryTableCount");
    m_queryTableCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputRows"))
  {
    m_outputRows = jsonValue.GetInt64("OutputRows");
    m_outputRowsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputBytes"))
  {
    m_outputBytes = jsonValue.GetInt64("OutputBytes");
    m_outputBytesHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduledQueryInsightsResponse::Jsonize() const
{
  JsonValue payload;

  if(m_querySpatialCoverageHasBeenSet)
  {
   payload.WithObject("QuerySpatialCoverage", m_querySpatialCoverage.Jsonize());

  }

  if(m_queryTemporalRangeHasBeenSet)
  {
   payload.WithObject("QueryTemporalRange", m_queryTemporalRange.Jsonize());

  }

  if(m_queryTableCountHasBeenSet)
  {
   payload.WithInt64("QueryTableCount", m_queryTableCount);

  }

  if(m_outputRowsHasBeenSet)
  {
   payload.WithInt64("OutputRows", m_outputRows);

  }

  if(m_outputBytesHasBeenSet)
  {
   payload.WithInt64("OutputBytes", m_outputBytes);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
