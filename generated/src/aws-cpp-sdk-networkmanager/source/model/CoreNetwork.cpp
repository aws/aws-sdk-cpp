/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CoreNetwork.h>
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

CoreNetwork::CoreNetwork() : 
    m_globalNetworkIdHasBeenSet(false),
    m_coreNetworkIdHasBeenSet(false),
    m_coreNetworkArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_state(CoreNetworkState::NOT_SET),
    m_stateHasBeenSet(false),
    m_segmentsHasBeenSet(false),
    m_edgesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreNetwork::CoreNetwork(JsonView jsonValue) : 
    m_globalNetworkIdHasBeenSet(false),
    m_coreNetworkIdHasBeenSet(false),
    m_coreNetworkArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_state(CoreNetworkState::NOT_SET),
    m_stateHasBeenSet(false),
    m_segmentsHasBeenSet(false),
    m_edgesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

CoreNetwork& CoreNetwork::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GlobalNetworkId"))
  {
    m_globalNetworkId = jsonValue.GetString("GlobalNetworkId");

    m_globalNetworkIdHasBeenSet = true;
  }

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
    m_state = CoreNetworkStateMapper::GetCoreNetworkStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Segments"))
  {
    Aws::Utils::Array<JsonView> segmentsJsonList = jsonValue.GetArray("Segments");
    for(unsigned segmentsIndex = 0; segmentsIndex < segmentsJsonList.GetLength(); ++segmentsIndex)
    {
      m_segments.push_back(segmentsJsonList[segmentsIndex].AsObject());
    }
    m_segmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Edges"))
  {
    Aws::Utils::Array<JsonView> edgesJsonList = jsonValue.GetArray("Edges");
    for(unsigned edgesIndex = 0; edgesIndex < edgesJsonList.GetLength(); ++edgesIndex)
    {
      m_edges.push_back(edgesJsonList[edgesIndex].AsObject());
    }
    m_edgesHasBeenSet = true;
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

JsonValue CoreNetwork::Jsonize() const
{
  JsonValue payload;

  if(m_globalNetworkIdHasBeenSet)
  {
   payload.WithString("GlobalNetworkId", m_globalNetworkId);

  }

  if(m_coreNetworkIdHasBeenSet)
  {
   payload.WithString("CoreNetworkId", m_coreNetworkId);

  }

  if(m_coreNetworkArnHasBeenSet)
  {
   payload.WithString("CoreNetworkArn", m_coreNetworkArn);

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
   payload.WithString("State", CoreNetworkStateMapper::GetNameForCoreNetworkState(m_state));
  }

  if(m_segmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> segmentsJsonList(m_segments.size());
   for(unsigned segmentsIndex = 0; segmentsIndex < segmentsJsonList.GetLength(); ++segmentsIndex)
   {
     segmentsJsonList[segmentsIndex].AsObject(m_segments[segmentsIndex].Jsonize());
   }
   payload.WithArray("Segments", std::move(segmentsJsonList));

  }

  if(m_edgesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> edgesJsonList(m_edges.size());
   for(unsigned edgesIndex = 0; edgesIndex < edgesJsonList.GetLength(); ++edgesIndex)
   {
     edgesJsonList[edgesIndex].AsObject(m_edges[edgesIndex].Jsonize());
   }
   payload.WithArray("Edges", std::move(edgesJsonList));

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
