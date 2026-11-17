/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/UpdateCoreNetworkEndpointRequest.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateCoreNetworkEndpointRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_updateIpAddressesHasBeenSet) {
    Aws::Utils::Array<JsonValue> updateIpAddressesJsonList(m_updateIpAddresses.size());
    for (unsigned updateIpAddressesIndex = 0; updateIpAddressesIndex < updateIpAddressesJsonList.GetLength(); ++updateIpAddressesIndex) {
      updateIpAddressesJsonList[updateIpAddressesIndex].AsObject(m_updateIpAddresses[updateIpAddressesIndex].Jsonize());
    }
    payload.WithArray("updateIpAddresses", std::move(updateIpAddressesJsonList));
  }

  return payload.View().WriteReadable();
}
