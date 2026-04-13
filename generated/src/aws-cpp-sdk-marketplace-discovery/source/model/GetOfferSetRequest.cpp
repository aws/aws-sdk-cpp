/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/GetOfferSetRequest.h>

#include <utility>

using namespace Aws::MarketplaceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetOfferSetRequest::SerializePayload() const {
  JsonValue payload;

  if (m_offerSetIdHasBeenSet) {
    payload.WithString("offerSetId", m_offerSetId);
  }

  return payload.View().WriteReadable();
}
