/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/ListListingAttributesRequest.h>

#include <utility>

using namespace Aws::MarketplaceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListListingAttributesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_localeHasBeenSet) {
    payload.WithString("locale", m_locale);
  }

  if (m_listingIdHasBeenSet) {
    payload.WithString("listingId", m_listingId);
  }

  if (m_attributeTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> attributeTypesJsonList(m_attributeTypes.size());
    for (unsigned attributeTypesIndex = 0; attributeTypesIndex < attributeTypesJsonList.GetLength(); ++attributeTypesIndex) {
      attributeTypesJsonList[attributeTypesIndex].AsString(
          ListingAttributeTypeMapper::GetNameForListingAttributeType(m_attributeTypes[attributeTypesIndex]));
    }
    payload.WithArray("attributeTypes", std::move(attributeTypesJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
