/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/OfferSetFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

OfferSetFilters::OfferSetFilters(JsonView jsonValue) { *this = jsonValue; }

OfferSetFilters& OfferSetFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EntityId")) {
    m_entityId = jsonValue.GetObject("EntityId");
    m_entityIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetObject("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = jsonValue.GetObject("State");
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReleaseDate")) {
    m_releaseDate = jsonValue.GetObject("ReleaseDate");
    m_releaseDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssociatedOfferIds")) {
    m_associatedOfferIds = jsonValue.GetObject("AssociatedOfferIds");
    m_associatedOfferIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SolutionId")) {
    m_solutionId = jsonValue.GetObject("SolutionId");
    m_solutionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedDate")) {
    m_lastModifiedDate = jsonValue.GetObject("LastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  return *this;
}

JsonValue OfferSetFilters::Jsonize() const {
  JsonValue payload;

  if (m_entityIdHasBeenSet) {
    payload.WithObject("EntityId", m_entityId.Jsonize());
  }

  if (m_nameHasBeenSet) {
    payload.WithObject("Name", m_name.Jsonize());
  }

  if (m_stateHasBeenSet) {
    payload.WithObject("State", m_state.Jsonize());
  }

  if (m_releaseDateHasBeenSet) {
    payload.WithObject("ReleaseDate", m_releaseDate.Jsonize());
  }

  if (m_associatedOfferIdsHasBeenSet) {
    payload.WithObject("AssociatedOfferIds", m_associatedOfferIds.Jsonize());
  }

  if (m_solutionIdHasBeenSet) {
    payload.WithObject("SolutionId", m_solutionId.Jsonize());
  }

  if (m_lastModifiedDateHasBeenSet) {
    payload.WithObject("LastModifiedDate", m_lastModifiedDate.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
