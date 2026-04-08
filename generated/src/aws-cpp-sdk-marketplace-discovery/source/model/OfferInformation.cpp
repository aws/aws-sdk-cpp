/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/OfferInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

OfferInformation::OfferInformation(JsonView jsonValue) { *this = jsonValue; }

OfferInformation& OfferInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("offerId")) {
    m_offerId = jsonValue.GetString("offerId");
    m_offerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("offerName")) {
    m_offerName = jsonValue.GetString("offerName");
    m_offerNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sellerOfRecord")) {
    m_sellerOfRecord = jsonValue.GetObject("sellerOfRecord");
    m_sellerOfRecordHasBeenSet = true;
  }
  return *this;
}

JsonValue OfferInformation::Jsonize() const {
  JsonValue payload;

  if (m_offerIdHasBeenSet) {
    payload.WithString("offerId", m_offerId);
  }

  if (m_offerNameHasBeenSet) {
    payload.WithString("offerName", m_offerName);
  }

  if (m_sellerOfRecordHasBeenSet) {
    payload.WithObject("sellerOfRecord", m_sellerOfRecord.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
