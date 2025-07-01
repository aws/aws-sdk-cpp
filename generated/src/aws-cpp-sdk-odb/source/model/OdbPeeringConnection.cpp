/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/OdbPeeringConnection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace odb
{
namespace Model
{

OdbPeeringConnection::OdbPeeringConnection(JsonView jsonValue)
{
  *this = jsonValue;
}

OdbPeeringConnection& OdbPeeringConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("odbPeeringConnectionId"))
  {
    m_odbPeeringConnectionId = jsonValue.GetString("odbPeeringConnectionId");
    m_odbPeeringConnectionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("odbPeeringConnectionArn"))
  {
    m_odbPeeringConnectionArn = jsonValue.GetString("odbPeeringConnectionArn");
    m_odbPeeringConnectionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("odbNetworkArn"))
  {
    m_odbNetworkArn = jsonValue.GetString("odbNetworkArn");
    m_odbNetworkArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("peerNetworkArn"))
  {
    m_peerNetworkArn = jsonValue.GetString("peerNetworkArn");
    m_peerNetworkArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("odbPeeringConnectionType"))
  {
    m_odbPeeringConnectionType = jsonValue.GetString("odbPeeringConnectionType");
    m_odbPeeringConnectionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("percentProgress"))
  {
    m_percentProgress = jsonValue.GetDouble("percentProgress");
    m_percentProgressHasBeenSet = true;
  }
  return *this;
}

JsonValue OdbPeeringConnection::Jsonize() const
{
  JsonValue payload;

  if(m_odbPeeringConnectionIdHasBeenSet)
  {
   payload.WithString("odbPeeringConnectionId", m_odbPeeringConnectionId);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ResourceStatusMapper::GetNameForResourceStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_odbPeeringConnectionArnHasBeenSet)
  {
   payload.WithString("odbPeeringConnectionArn", m_odbPeeringConnectionArn);

  }

  if(m_odbNetworkArnHasBeenSet)
  {
   payload.WithString("odbNetworkArn", m_odbNetworkArn);

  }

  if(m_peerNetworkArnHasBeenSet)
  {
   payload.WithString("peerNetworkArn", m_peerNetworkArn);

  }

  if(m_odbPeeringConnectionTypeHasBeenSet)
  {
   payload.WithString("odbPeeringConnectionType", m_odbPeeringConnectionType);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_percentProgressHasBeenSet)
  {
   payload.WithDouble("percentProgress", m_percentProgress);

  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
