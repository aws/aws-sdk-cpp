/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/DescribeContainerAssociationRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeContainerAssociationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_containerAssociationNameHasBeenSet) {
    payload.WithString("ContainerAssociationName", m_containerAssociationName);
  }

  if (m_containerAssociationArnHasBeenSet) {
    payload.WithString("ContainerAssociationArn", m_containerAssociationArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeContainerAssociationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.DescribeContainerAssociation"));
  return headers;
}
