/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/Relay.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

Relay::Relay() : 
    m_lastModifiedTimestampHasBeenSet(false),
    m_relayIdHasBeenSet(false),
    m_relayNameHasBeenSet(false)
{
}

Relay::Relay(JsonView jsonValue)
  : Relay()
{
  *this = jsonValue;
}

Relay& Relay::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("LastModifiedTimestamp");

    m_lastModifiedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelayId"))
  {
    m_relayId = jsonValue.GetString("RelayId");

    m_relayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelayName"))
  {
    m_relayName = jsonValue.GetString("RelayName");

    m_relayNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Relay::Jsonize() const
{
  JsonValue payload;

  if(m_lastModifiedTimestampHasBeenSet)
  {
   payload.WithDouble("LastModifiedTimestamp", m_lastModifiedTimestamp.SecondsWithMSPrecision());
  }

  if(m_relayIdHasBeenSet)
  {
   payload.WithString("RelayId", m_relayId);

  }

  if(m_relayNameHasBeenSet)
  {
   payload.WithString("RelayName", m_relayName);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
