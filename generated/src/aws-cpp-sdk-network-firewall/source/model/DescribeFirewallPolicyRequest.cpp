/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/DescribeFirewallPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeFirewallPolicyRequest::DescribeFirewallPolicyRequest() : 
    m_firewallPolicyNameHasBeenSet(false),
    m_firewallPolicyArnHasBeenSet(false)
{
}

Aws::String DescribeFirewallPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_firewallPolicyNameHasBeenSet)
  {
   payload.WithString("FirewallPolicyName", m_firewallPolicyName);

  }

  if(m_firewallPolicyArnHasBeenSet)
  {
   payload.WithString("FirewallPolicyArn", m_firewallPolicyArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeFirewallPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.DescribeFirewallPolicy"));
  return headers;

}




