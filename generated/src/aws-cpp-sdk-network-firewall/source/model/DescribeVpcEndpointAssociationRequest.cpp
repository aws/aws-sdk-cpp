﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/DescribeVpcEndpointAssociationRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeVpcEndpointAssociationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_vpcEndpointAssociationArnHasBeenSet) {
    payload.WithString("VpcEndpointAssociationArn", m_vpcEndpointAssociationArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeVpcEndpointAssociationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.DescribeVpcEndpointAssociation"));
  return headers;
}
