/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/OfferSetSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

OfferSetSummary::OfferSetSummary(JsonView jsonValue) { *this = jsonValue; }

OfferSetSummary& OfferSetSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = OfferSetStateStringMapper::GetOfferSetStateStringForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReleaseDate")) {
    m_releaseDate = jsonValue.GetString("ReleaseDate");
    m_releaseDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssociatedOfferIds")) {
    Aws::Utils::Array<JsonView> associatedOfferIdsJsonList = jsonValue.GetArray("AssociatedOfferIds");
    for (unsigned associatedOfferIdsIndex = 0; associatedOfferIdsIndex < associatedOfferIdsJsonList.GetLength();
         ++associatedOfferIdsIndex) {
      m_associatedOfferIds.push_back(associatedOfferIdsJsonList[associatedOfferIdsIndex].AsString());
    }
    m_associatedOfferIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SolutionId")) {
    m_solutionId = jsonValue.GetString("SolutionId");
    m_solutionIdHasBeenSet = true;
  }
  return *this;
}

JsonValue OfferSetSummary::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", OfferSetStateStringMapper::GetNameForOfferSetStateString(m_state));
  }

  if (m_releaseDateHasBeenSet) {
    payload.WithString("ReleaseDate", m_releaseDate);
  }

  if (m_associatedOfferIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedOfferIdsJsonList(m_associatedOfferIds.size());
    for (unsigned associatedOfferIdsIndex = 0; associatedOfferIdsIndex < associatedOfferIdsJsonList.GetLength();
         ++associatedOfferIdsIndex) {
      associatedOfferIdsJsonList[associatedOfferIdsIndex].AsString(m_associatedOfferIds[associatedOfferIdsIndex]);
    }
    payload.WithArray("AssociatedOfferIds", std::move(associatedOfferIdsJsonList));
  }

  if (m_solutionIdHasBeenSet) {
    payload.WithString("SolutionId", m_solutionId);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
