/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/QueryInsightsResponse.h>
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

QueryInsightsResponse::QueryInsightsResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

QueryInsightsResponse& QueryInsightsResponse::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("UnloadPartitionCount"))
  {
    m_unloadPartitionCount = jsonValue.GetInt64("UnloadPartitionCount");
    m_unloadPartitionCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UnloadWrittenRows"))
  {
    m_unloadWrittenRows = jsonValue.GetInt64("UnloadWrittenRows");
    m_unloadWrittenRowsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UnloadWrittenBytes"))
  {
    m_unloadWrittenBytes = jsonValue.GetInt64("UnloadWrittenBytes");
    m_unloadWrittenBytesHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryInsightsResponse::Jsonize() const
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

  if(m_unloadPartitionCountHasBeenSet)
  {
   payload.WithInt64("UnloadPartitionCount", m_unloadPartitionCount);

  }

  if(m_unloadWrittenRowsHasBeenSet)
  {
   payload.WithInt64("UnloadWrittenRows", m_unloadWrittenRows);

  }

  if(m_unloadWrittenBytesHasBeenSet)
  {
   payload.WithInt64("UnloadWrittenBytes", m_unloadWrittenBytes);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
