/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ConnectPeer.h>
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

ConnectPeer::ConnectPeer(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectPeer& ConnectPeer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CoreNetworkId"))
  {
    m_coreNetworkId = jsonValue.GetString("CoreNetworkId");
    m_coreNetworkIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectAttachmentId"))
  {
    m_connectAttachmentId = jsonValue.GetString("ConnectAttachmentId");
    m_connectAttachmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectPeerId"))
  {
    m_connectPeerId = jsonValue.GetString("ConnectPeerId");
    m_connectPeerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EdgeLocation"))
  {
    m_edgeLocation = jsonValue.GetString("EdgeLocation");
    m_edgeLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = ConnectPeerStateMapper::GetConnectPeerStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Configuration"))
  {
    m_configuration = jsonValue.GetObject("Configuration");
    m_configurationHasBeenSet = true;
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
  if(jsonValue.ValueExists("SubnetArn"))
  {
    m_subnetArn = jsonValue.GetString("SubnetArn");
    m_subnetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModificationErrors"))
  {
    Aws::Utils::Array<JsonView> lastModificationErrorsJsonList = jsonValue.GetArray("LastModificationErrors");
    for(unsigned lastModificationErrorsIndex = 0; lastModificationErrorsIndex < lastModificationErrorsJsonList.GetLength(); ++lastModificationErrorsIndex)
    {
      m_lastModificationErrors.push_back(lastModificationErrorsJsonList[lastModificationErrorsIndex].AsObject());
    }
    m_lastModificationErrorsHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectPeer::Jsonize() const
{
  JsonValue payload;

  if(m_coreNetworkIdHasBeenSet)
  {
   payload.WithString("CoreNetworkId", m_coreNetworkId);

  }

  if(m_connectAttachmentIdHasBeenSet)
  {
   payload.WithString("ConnectAttachmentId", m_connectAttachmentId);

  }

  if(m_connectPeerIdHasBeenSet)
  {
   payload.WithString("ConnectPeerId", m_connectPeerId);

  }

  if(m_edgeLocationHasBeenSet)
  {
   payload.WithString("EdgeLocation", m_edgeLocation);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ConnectPeerStateMapper::GetNameForConnectPeerState(m_state));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("Configuration", m_configuration.Jsonize());

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

  if(m_subnetArnHasBeenSet)
  {
   payload.WithString("SubnetArn", m_subnetArn);

  }

  if(m_lastModificationErrorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lastModificationErrorsJsonList(m_lastModificationErrors.size());
   for(unsigned lastModificationErrorsIndex = 0; lastModificationErrorsIndex < lastModificationErrorsJsonList.GetLength(); ++lastModificationErrorsIndex)
   {
     lastModificationErrorsJsonList[lastModificationErrorsIndex].AsObject(m_lastModificationErrors[lastModificationErrorsIndex].Jsonize());
   }
   payload.WithArray("LastModificationErrors", std::move(lastModificationErrorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
