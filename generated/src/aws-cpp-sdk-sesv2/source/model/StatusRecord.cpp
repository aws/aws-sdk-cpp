/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/StatusRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

StatusRecord::StatusRecord(JsonView jsonValue)
{
  *this = jsonValue;
}

StatusRecord& StatusRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SendingStatusMapper::GetSendingStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Cause"))
  {
    m_cause = jsonValue.GetString("Cause");
    m_causeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");
    m_lastUpdatedTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue StatusRecord::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SendingStatusMapper::GetNameForSendingStatus(m_status));
  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("Cause", m_cause);

  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
