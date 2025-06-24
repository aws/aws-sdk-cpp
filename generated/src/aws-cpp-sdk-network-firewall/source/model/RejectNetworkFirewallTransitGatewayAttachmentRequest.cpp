/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/RejectNetworkFirewallTransitGatewayAttachmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RejectNetworkFirewallTransitGatewayAttachmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
   payload.WithString("TransitGatewayAttachmentId", m_transitGatewayAttachmentId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RejectNetworkFirewallTransitGatewayAttachmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.RejectNetworkFirewallTransitGatewayAttachment"));
  return headers;

}




