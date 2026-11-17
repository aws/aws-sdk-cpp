/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/CreateCoreNetworkEndpointRequest.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCoreNetworkEndpointRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_coreNetworkArnHasBeenSet) {
    payload.WithString("coreNetworkArn", m_coreNetworkArn);
  }

  if (m_globalResolverIdHasBeenSet) {
    payload.WithString("globalResolverId", m_globalResolverId);
  }

  if (m_ipAddressesHasBeenSet) {
    Aws::Utils::Array<JsonValue> ipAddressesJsonList(m_ipAddresses.size());
    for (unsigned ipAddressesIndex = 0; ipAddressesIndex < ipAddressesJsonList.GetLength(); ++ipAddressesIndex) {
      ipAddressesJsonList[ipAddressesIndex].AsObject(m_ipAddresses[ipAddressesIndex].Jsonize());
    }
    payload.WithArray("ipAddresses", std::move(ipAddressesJsonList));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
