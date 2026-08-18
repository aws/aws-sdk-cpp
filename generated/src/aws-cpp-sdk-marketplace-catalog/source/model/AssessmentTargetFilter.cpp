/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/AssessmentTargetFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

AssessmentTargetFilter::AssessmentTargetFilter(JsonView jsonValue) { *this = jsonValue; }

AssessmentTargetFilter& AssessmentTargetFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EntityId")) {
    m_entityId = jsonValue.GetString("EntityId");
    m_entityIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChangeSetId")) {
    m_changeSetId = jsonValue.GetString("ChangeSetId");
    m_changeSetIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AssessmentTargetFilter::Jsonize() const {
  JsonValue payload;

  if (m_entityIdHasBeenSet) {
    payload.WithString("EntityId", m_entityId);
  }

  if (m_changeSetIdHasBeenSet) {
    payload.WithString("ChangeSetId", m_changeSetId);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
