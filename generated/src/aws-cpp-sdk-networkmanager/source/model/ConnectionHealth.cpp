/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ConnectionHealth.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

ConnectionHealth::ConnectionHealth() : 
    m_type(ConnectionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(ConnectionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

ConnectionHealth::ConnectionHealth(JsonView jsonValue) : 
    m_type(ConnectionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(ConnectionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionHealth& ConnectionHealth::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ConnectionTypeMapper::GetConnectionTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ConnectionStatusMapper::GetConnectionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionHealth::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ConnectionTypeMapper::GetNameForConnectionType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ConnectionStatusMapper::GetNameForConnectionStatus(m_status));
  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
