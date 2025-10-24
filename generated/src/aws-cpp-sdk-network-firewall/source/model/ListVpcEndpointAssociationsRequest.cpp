﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/ListVpcEndpointAssociationsRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListVpcEndpointAssociationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_firewallArnHasBeenSet) {
    payload.WithString("FirewallArn", m_firewallArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListVpcEndpointAssociationsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.ListVpcEndpointAssociations"));
  return headers;
}
