/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/TableMaintenanceJobStatusValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Tables
{
namespace Model
{

TableMaintenanceJobStatusValue::TableMaintenanceJobStatusValue(JsonView jsonValue)
{
  *this = jsonValue;
}

TableMaintenanceJobStatusValue& TableMaintenanceJobStatusValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastRunTimestamp"))
  {
    m_lastRunTimestamp = jsonValue.GetString("lastRunTimestamp");
    m_lastRunTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");
    m_failureMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue TableMaintenanceJobStatusValue::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if(m_lastRunTimestampHasBeenSet)
  {
   payload.WithString("lastRunTimestamp", m_lastRunTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("failureMessage", m_failureMessage);

  }

  return payload;
}

} // namespace Model
} // namespace S3Tables
} // namespace Aws
