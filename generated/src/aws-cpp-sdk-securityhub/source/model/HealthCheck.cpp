/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/HealthCheck.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

HealthCheck::HealthCheck(JsonView jsonValue)
{
  *this = jsonValue;
}

HealthCheck& HealthCheck::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectorStatus"))
  {
    m_connectorStatus = ConnectorStatusMapper::GetConnectorStatusForName(jsonValue.GetString("ConnectorStatus"));
    m_connectorStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastCheckedAt"))
  {
    m_lastCheckedAt = jsonValue.GetString("LastCheckedAt");
    m_lastCheckedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue HealthCheck::Jsonize() const
{
  JsonValue payload;

  if(m_connectorStatusHasBeenSet)
  {
   payload.WithString("ConnectorStatus", ConnectorStatusMapper::GetNameForConnectorStatus(m_connectorStatus));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_lastCheckedAtHasBeenSet)
  {
   payload.WithString("LastCheckedAt", m_lastCheckedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
