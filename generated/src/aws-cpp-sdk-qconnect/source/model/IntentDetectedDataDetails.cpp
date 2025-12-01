/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/IntentDetectedDataDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

IntentDetectedDataDetails::IntentDetectedDataDetails(JsonView jsonValue) { *this = jsonValue; }

IntentDetectedDataDetails& IntentDetectedDataDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("intent")) {
    m_intent = jsonValue.GetString("intent");
    m_intentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("intentId")) {
    m_intentId = jsonValue.GetString("intentId");
    m_intentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("relevanceLevel")) {
    m_relevanceLevel = RelevanceLevelMapper::GetRelevanceLevelForName(jsonValue.GetString("relevanceLevel"));
    m_relevanceLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue IntentDetectedDataDetails::Jsonize() const {
  JsonValue payload;

  if (m_intentHasBeenSet) {
    payload.WithString("intent", m_intent);
  }

  if (m_intentIdHasBeenSet) {
    payload.WithString("intentId", m_intentId);
  }

  if (m_relevanceLevelHasBeenSet) {
    payload.WithString("relevanceLevel", RelevanceLevelMapper::GetNameForRelevanceLevel(m_relevanceLevel));
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
