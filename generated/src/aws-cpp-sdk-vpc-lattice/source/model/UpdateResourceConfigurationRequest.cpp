/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/UpdateResourceConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateResourceConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_allowAssociationToShareableServiceNetworkHasBeenSet)
  {
   payload.WithBool("allowAssociationToShareableServiceNetwork", m_allowAssociationToShareableServiceNetwork);

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

  if(m_resourceConfigurationDefinitionHasBeenSet)
  {
   payload.WithObject("resourceConfigurationDefinition", m_resourceConfigurationDefinition.Jsonize());

  }

  return payload.View().WriteReadable();
}




