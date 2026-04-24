/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/OfferSetInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

OfferSetInformation::OfferSetInformation(JsonView jsonValue) { *this = jsonValue; }

OfferSetInformation& OfferSetInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("offerSetId")) {
    m_offerSetId = jsonValue.GetString("offerSetId");
    m_offerSetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sellerOfRecord")) {
    m_sellerOfRecord = jsonValue.GetObject("sellerOfRecord");
    m_sellerOfRecordHasBeenSet = true;
  }
  return *this;
}

JsonValue OfferSetInformation::Jsonize() const {
  JsonValue payload;

  if (m_offerSetIdHasBeenSet) {
    payload.WithString("offerSetId", m_offerSetId);
  }

  if (m_sellerOfRecordHasBeenSet) {
    payload.WithObject("sellerOfRecord", m_sellerOfRecord.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
