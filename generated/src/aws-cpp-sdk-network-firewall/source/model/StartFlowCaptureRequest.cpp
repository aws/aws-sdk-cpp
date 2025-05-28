/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/StartFlowCaptureRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartFlowCaptureRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_firewallArnHasBeenSet)
  {
   payload.WithString("FirewallArn", m_firewallArn);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_vpcEndpointAssociationArnHasBeenSet)
  {
   payload.WithString("VpcEndpointAssociationArn", m_vpcEndpointAssociationArn);

  }

  if(m_vpcEndpointIdHasBeenSet)
  {
   payload.WithString("VpcEndpointId", m_vpcEndpointId);

  }

  if(m_minimumFlowAgeInSecondsHasBeenSet)
  {
   payload.WithInteger("MinimumFlowAgeInSeconds", m_minimumFlowAgeInSeconds);

  }

  if(m_flowFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> flowFiltersJsonList(m_flowFilters.size());
   for(unsigned flowFiltersIndex = 0; flowFiltersIndex < flowFiltersJsonList.GetLength(); ++flowFiltersIndex)
   {
     flowFiltersJsonList[flowFiltersIndex].AsObject(m_flowFilters[flowFiltersIndex].Jsonize());
   }
   payload.WithArray("FlowFilters", std::move(flowFiltersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartFlowCaptureRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.StartFlowCapture"));
  return headers;

}




