/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/DescribeProxyConfigurationRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeProxyConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_proxyConfigurationNameHasBeenSet) {
    payload.WithString("ProxyConfigurationName", m_proxyConfigurationName);
  }

  if (m_proxyConfigurationArnHasBeenSet) {
    payload.WithString("ProxyConfigurationArn", m_proxyConfigurationArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeProxyConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.DescribeProxyConfiguration"));
  return headers;
}
