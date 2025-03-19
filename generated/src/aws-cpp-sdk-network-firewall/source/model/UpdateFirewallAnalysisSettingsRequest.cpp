/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/UpdateFirewallAnalysisSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateFirewallAnalysisSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_enabledAnalysisTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enabledAnalysisTypesJsonList(m_enabledAnalysisTypes.size());
   for(unsigned enabledAnalysisTypesIndex = 0; enabledAnalysisTypesIndex < enabledAnalysisTypesJsonList.GetLength(); ++enabledAnalysisTypesIndex)
   {
     enabledAnalysisTypesJsonList[enabledAnalysisTypesIndex].AsString(EnabledAnalysisTypeMapper::GetNameForEnabledAnalysisType(m_enabledAnalysisTypes[enabledAnalysisTypesIndex]));
   }
   payload.WithArray("EnabledAnalysisTypes", std::move(enabledAnalysisTypesJsonList));

  }

  if(m_firewallArnHasBeenSet)
  {
   payload.WithString("FirewallArn", m_firewallArn);

  }

  if(m_firewallNameHasBeenSet)
  {
   payload.WithString("FirewallName", m_firewallName);

  }

  if(m_updateTokenHasBeenSet)
  {
   payload.WithString("UpdateToken", m_updateToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateFirewallAnalysisSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.UpdateFirewallAnalysisSettings"));
  return headers;

}




