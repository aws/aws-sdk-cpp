/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/Peering.h>
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

Peering::Peering() : 
    m_coreNetworkIdHasBeenSet(false),
    m_coreNetworkArnHasBeenSet(false),
    m_peeringIdHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_peeringType(PeeringType::NOT_SET),
    m_peeringTypeHasBeenSet(false),
    m_state(PeeringState::NOT_SET),
    m_stateHasBeenSet(false),
    m_edgeLocationHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

Peering::Peering(JsonView jsonValue) : 
    m_coreNetworkIdHasBeenSet(false),
    m_coreNetworkArnHasBeenSet(false),
    m_peeringIdHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_peeringType(PeeringType::NOT_SET),
    m_peeringTypeHasBeenSet(false),
    m_state(PeeringState::NOT_SET),
    m_stateHasBeenSet(false),
    m_edgeLocationHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
  *this = jsonValue;
}

Peering& Peering::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CoreNetworkId"))
  {
    m_coreNetworkId = jsonValue.GetString("CoreNetworkId");

    m_coreNetworkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CoreNetworkArn"))
  {
    m_coreNetworkArn = jsonValue.GetString("CoreNetworkArn");

    m_coreNetworkArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeeringId"))
  {
    m_peeringId = jsonValue.GetString("PeeringId");

    m_peeringIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("OwnerAccountId");

    m_ownerAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeeringType"))
  {
    m_peeringType = PeeringTypeMapper::GetPeeringTypeForName(jsonValue.GetString("PeeringType"));

    m_peeringTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = PeeringStateMapper::GetPeeringStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeLocation"))
  {
    m_edgeLocation = jsonValue.GetString("EdgeLocation");

    m_edgeLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  return *this;
}

JsonValue Peering::Jsonize() const
{
  JsonValue payload;

  if(m_coreNetworkIdHasBeenSet)
  {
   payload.WithString("CoreNetworkId", m_coreNetworkId);

  }

  if(m_coreNetworkArnHasBeenSet)
  {
   payload.WithString("CoreNetworkArn", m_coreNetworkArn);

  }

  if(m_peeringIdHasBeenSet)
  {
   payload.WithString("PeeringId", m_peeringId);

  }

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("OwnerAccountId", m_ownerAccountId);

  }

  if(m_peeringTypeHasBeenSet)
  {
   payload.WithString("PeeringType", PeeringTypeMapper::GetNameForPeeringType(m_peeringType));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", PeeringStateMapper::GetNameForPeeringState(m_state));
  }

  if(m_edgeLocationHasBeenSet)
  {
   payload.WithString("EdgeLocation", m_edgeLocation);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

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

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
