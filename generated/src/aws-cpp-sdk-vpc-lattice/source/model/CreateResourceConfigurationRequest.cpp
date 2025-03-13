/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/CreateResourceConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateResourceConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_allowAssociationToShareableServiceNetworkHasBeenSet)
  {
   payload.WithBool("allowAssociationToShareableServiceNetwork", m_allowAssociationToShareableServiceNetwork);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_portRangesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> portRangesJsonList(m_portRanges.size());
   for(unsigned portRangesIndex = 0; portRangesIndex < portRangesJsonList.GetLength(); ++portRangesIndex)
   {
     portRangesJsonList[portRangesIndex].AsString(m_portRanges[portRangesIndex]);
   }
   payload.WithArray("portRanges", std::move(portRangesJsonList));

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", ProtocolTypeMapper::GetNameForProtocolType(m_protocol));
  }

  if(m_resourceConfigurationDefinitionHasBeenSet)
  {
   payload.WithObject("resourceConfigurationDefinition", m_resourceConfigurationDefinition.Jsonize());

  }

  if(m_resourceConfigurationGroupIdentifierHasBeenSet)
  {
   payload.WithString("resourceConfigurationGroupIdentifier", m_resourceConfigurationGroupIdentifier);

  }

  if(m_resourceGatewayIdentifierHasBeenSet)
  {
   payload.WithString("resourceGatewayIdentifier", m_resourceGatewayIdentifier);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ResourceConfigurationTypeMapper::GetNameForResourceConfigurationType(m_type));
  }

  return payload.View().WriteReadable();
}




