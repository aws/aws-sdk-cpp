/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/DescribeProxyRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeProxyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_proxyNameHasBeenSet) {
    payload.WithString("ProxyName", m_proxyName);
  }

  if (m_proxyArnHasBeenSet) {
    payload.WithString("ProxyArn", m_proxyArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeProxyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.DescribeProxy"));
  return headers;
}
