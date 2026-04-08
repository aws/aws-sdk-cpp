/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/GetProductRequest.h>

#include <utility>

using namespace Aws::MarketplaceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetProductRequest::SerializePayload() const {
  JsonValue payload;

  if (m_productIdHasBeenSet) {
    payload.WithString("productId", m_productId);
  }

  return payload.View().WriteReadable();
}
