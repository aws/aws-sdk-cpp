/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/LeadInsights.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

LeadInsights::LeadInsights(JsonView jsonValue) { *this = jsonValue; }

LeadInsights& LeadInsights::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LeadReadinessScore")) {
    m_leadReadinessScore = jsonValue.GetString("LeadReadinessScore");
    m_leadReadinessScoreHasBeenSet = true;
  }
  return *this;
}

JsonValue LeadInsights::Jsonize() const {
  JsonValue payload;

  if (m_leadReadinessScoreHasBeenSet) {
    payload.WithString("LeadReadinessScore", m_leadReadinessScore);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
