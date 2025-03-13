/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/BatchLoadProgressReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

BatchLoadProgressReport::BatchLoadProgressReport(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchLoadProgressReport& BatchLoadProgressReport::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecordsProcessed"))
  {
    m_recordsProcessed = jsonValue.GetInt64("RecordsProcessed");
    m_recordsProcessedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecordsIngested"))
  {
    m_recordsIngested = jsonValue.GetInt64("RecordsIngested");
    m_recordsIngestedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParseFailures"))
  {
    m_parseFailures = jsonValue.GetInt64("ParseFailures");
    m_parseFailuresHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecordIngestionFailures"))
  {
    m_recordIngestionFailures = jsonValue.GetInt64("RecordIngestionFailures");
    m_recordIngestionFailuresHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileFailures"))
  {
    m_fileFailures = jsonValue.GetInt64("FileFailures");
    m_fileFailuresHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BytesMetered"))
  {
    m_bytesMetered = jsonValue.GetInt64("BytesMetered");
    m_bytesMeteredHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchLoadProgressReport::Jsonize() const
{
  JsonValue payload;

  if(m_recordsProcessedHasBeenSet)
  {
   payload.WithInt64("RecordsProcessed", m_recordsProcessed);

  }

  if(m_recordsIngestedHasBeenSet)
  {
   payload.WithInt64("RecordsIngested", m_recordsIngested);

  }

  if(m_parseFailuresHasBeenSet)
  {
   payload.WithInt64("ParseFailures", m_parseFailures);

  }

  if(m_recordIngestionFailuresHasBeenSet)
  {
   payload.WithInt64("RecordIngestionFailures", m_recordIngestionFailures);

  }

  if(m_fileFailuresHasBeenSet)
  {
   payload.WithInt64("FileFailures", m_fileFailures);

  }

  if(m_bytesMeteredHasBeenSet)
  {
   payload.WithInt64("BytesMetered", m_bytesMetered);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
