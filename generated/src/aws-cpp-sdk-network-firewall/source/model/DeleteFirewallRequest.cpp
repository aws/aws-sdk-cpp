/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/DeleteFirewallRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFirewallRequest::DeleteFirewallRequest() : 
    m_firewallNameHasBeenSet(false),
    m_firewallArnHasBeenSet(false)
{
}

Aws::String DeleteFirewallRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_firewallNameHasBeenSet)
  {
   payload.WithString("FirewallName", m_firewallName);

  }

  if(m_firewallArnHasBeenSet)
  {
   payload.WithString("FirewallArn", m_firewallArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteFirewallRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.DeleteFirewall"));
  return headers;

}




