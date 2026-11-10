/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/CreateFirewallPolicyV2Request.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateFirewallPolicyV2Request::SerializePayload() const {
  JsonValue payload;

  if (m_firewallPolicyV2NameHasBeenSet) {
    payload.WithString("FirewallPolicyV2Name", m_firewallPolicyV2Name);
  }

  if (m_firewallPolicyV2HasBeenSet) {
    payload.WithObject("FirewallPolicyV2", m_firewallPolicyV2.Jsonize());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  if (m_dryRunHasBeenSet) {
    payload.WithBool("DryRun", m_dryRun);
  }

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFirewallPolicyV2Request::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.CreateFirewallPolicyV2"));
  return headers;
}
