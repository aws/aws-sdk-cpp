﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ExecutionStats.h>
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

ExecutionStats::ExecutionStats(JsonView jsonValue)
{
  *this = jsonValue;
}

ExecutionStats& ExecutionStats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExecutionTimeInMillis"))
  {
    m_executionTimeInMillis = jsonValue.GetInt64("ExecutionTimeInMillis");
    m_executionTimeInMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataWrites"))
  {
    m_dataWrites = jsonValue.GetInt64("DataWrites");
    m_dataWritesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BytesMetered"))
  {
    m_bytesMetered = jsonValue.GetInt64("BytesMetered");
    m_bytesMeteredHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CumulativeBytesScanned"))
  {
    m_cumulativeBytesScanned = jsonValue.GetInt64("CumulativeBytesScanned");
    m_cumulativeBytesScannedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecordsIngested"))
  {
    m_recordsIngested = jsonValue.GetInt64("RecordsIngested");
    m_recordsIngestedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueryResultRows"))
  {
    m_queryResultRows = jsonValue.GetInt64("QueryResultRows");
    m_queryResultRowsHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionStats::Jsonize() const
{
  JsonValue payload;

  if(m_executionTimeInMillisHasBeenSet)
  {
   payload.WithInt64("ExecutionTimeInMillis", m_executionTimeInMillis);

  }

  if(m_dataWritesHasBeenSet)
  {
   payload.WithInt64("DataWrites", m_dataWrites);

  }

  if(m_bytesMeteredHasBeenSet)
  {
   payload.WithInt64("BytesMetered", m_bytesMetered);

  }

  if(m_cumulativeBytesScannedHasBeenSet)
  {
   payload.WithInt64("CumulativeBytesScanned", m_cumulativeBytesScanned);

  }

  if(m_recordsIngestedHasBeenSet)
  {
   payload.WithInt64("RecordsIngested", m_recordsIngested);

  }

  if(m_queryResultRowsHasBeenSet)
  {
   payload.WithInt64("QueryResultRows", m_queryResultRows);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
