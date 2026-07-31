/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/OfferFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

OfferFilters::OfferFilters(JsonView jsonValue) { *this = jsonValue; }

OfferFilters& OfferFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EntityId")) {
    m_entityId = jsonValue.GetObject("EntityId");
    m_entityIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetObject("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProductId")) {
    m_productId = jsonValue.GetObject("ProductId");
    m_productIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResaleAuthorizationId")) {
    m_resaleAuthorizationId = jsonValue.GetObject("ResaleAuthorizationId");
    m_resaleAuthorizationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReleaseDate")) {
    m_releaseDate = jsonValue.GetObject("ReleaseDate");
    m_releaseDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AvailabilityEndDate")) {
    m_availabilityEndDate = jsonValue.GetObject("AvailabilityEndDate");
    m_availabilityEndDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BuyerAccounts")) {
    m_buyerAccounts = jsonValue.GetObject("BuyerAccounts");
    m_buyerAccountsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = jsonValue.GetObject("State");
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Targeting")) {
    m_targeting = jsonValue.GetObject("Targeting");
    m_targetingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedDate")) {
    m_lastModifiedDate = jsonValue.GetObject("LastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OfferSetId")) {
    m_offerSetId = jsonValue.GetObject("OfferSetId");
    m_offerSetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetAgreementId")) {
    m_targetAgreementId = jsonValue.GetObject("TargetAgreementId");
    m_targetAgreementIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetAgreementIntent")) {
    m_targetAgreementIntent = jsonValue.GetObject("TargetAgreementIntent");
    m_targetAgreementIntentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedBySource")) {
    m_createdBySource = jsonValue.GetObject("CreatedBySource");
    m_createdBySourceHasBeenSet = true;
  }
  return *this;
}

JsonValue OfferFilters::Jsonize() const {
  JsonValue payload;

  if (m_entityIdHasBeenSet) {
    payload.WithObject("EntityId", m_entityId.Jsonize());
  }

  if (m_nameHasBeenSet) {
    payload.WithObject("Name", m_name.Jsonize());
  }

  if (m_productIdHasBeenSet) {
    payload.WithObject("ProductId", m_productId.Jsonize());
  }

  if (m_resaleAuthorizationIdHasBeenSet) {
    payload.WithObject("ResaleAuthorizationId", m_resaleAuthorizationId.Jsonize());
  }

  if (m_releaseDateHasBeenSet) {
    payload.WithObject("ReleaseDate", m_releaseDate.Jsonize());
  }

  if (m_availabilityEndDateHasBeenSet) {
    payload.WithObject("AvailabilityEndDate", m_availabilityEndDate.Jsonize());
  }

  if (m_buyerAccountsHasBeenSet) {
    payload.WithObject("BuyerAccounts", m_buyerAccounts.Jsonize());
  }

  if (m_stateHasBeenSet) {
    payload.WithObject("State", m_state.Jsonize());
  }

  if (m_targetingHasBeenSet) {
    payload.WithObject("Targeting", m_targeting.Jsonize());
  }

  if (m_lastModifiedDateHasBeenSet) {
    payload.WithObject("LastModifiedDate", m_lastModifiedDate.Jsonize());
  }

  if (m_offerSetIdHasBeenSet) {
    payload.WithObject("OfferSetId", m_offerSetId.Jsonize());
  }

  if (m_targetAgreementIdHasBeenSet) {
    payload.WithObject("TargetAgreementId", m_targetAgreementId.Jsonize());
  }

  if (m_targetAgreementIntentHasBeenSet) {
    payload.WithObject("TargetAgreementIntent", m_targetAgreementIntent.Jsonize());
  }

  if (m_createdBySourceHasBeenSet) {
    payload.WithObject("CreatedBySource", m_createdBySource.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
