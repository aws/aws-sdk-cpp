/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/Connection.h>
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

Connection::Connection() : 
    m_connectionIdHasBeenSet(false),
    m_connectionArnHasBeenSet(false),
    m_globalNetworkIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_connectedDeviceIdHasBeenSet(false),
    m_linkIdHasBeenSet(false),
    m_connectedLinkIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_state(ConnectionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Connection::Connection(JsonView jsonValue) : 
    m_connectionIdHasBeenSet(false),
    m_connectionArnHasBeenSet(false),
    m_globalNetworkIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_connectedDeviceIdHasBeenSet(false),
    m_linkIdHasBeenSet(false),
    m_connectedLinkIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_state(ConnectionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Connection& Connection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionId"))
  {
    m_connectionId = jsonValue.GetString("ConnectionId");

    m_connectionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionArn"))
  {
    m_connectionArn = jsonValue.GetString("ConnectionArn");

    m_connectionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalNetworkId"))
  {
    m_globalNetworkId = jsonValue.GetString("GlobalNetworkId");

    m_globalNetworkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");

    m_deviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectedDeviceId"))
  {
    m_connectedDeviceId = jsonValue.GetString("ConnectedDeviceId");

    m_connectedDeviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LinkId"))
  {
    m_linkId = jsonValue.GetString("LinkId");

    m_linkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectedLinkId"))
  {
    m_connectedLinkId = jsonValue.GetString("ConnectedLinkId");

    m_connectedLinkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ConnectionStateMapper::GetConnectionStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Connection::Jsonize() const
{
  JsonValue payload;

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("ConnectionId", m_connectionId);

  }

  if(m_connectionArnHasBeenSet)
  {
   payload.WithString("ConnectionArn", m_connectionArn);

  }

  if(m_globalNetworkIdHasBeenSet)
  {
   payload.WithString("GlobalNetworkId", m_globalNetworkId);

  }

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("DeviceId", m_deviceId);

  }

  if(m_connectedDeviceIdHasBeenSet)
  {
   payload.WithString("ConnectedDeviceId", m_connectedDeviceId);

  }

  if(m_linkIdHasBeenSet)
  {
   payload.WithString("LinkId", m_linkId);

  }

  if(m_connectedLinkIdHasBeenSet)
  {
   payload.WithString("ConnectedLinkId", m_connectedLinkId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ConnectionStateMapper::GetNameForConnectionState(m_state));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
