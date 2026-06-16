/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/OpportunityQuality.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

OpportunityQuality::OpportunityQuality(JsonView jsonValue) { *this = jsonValue; }

OpportunityQuality& OpportunityQuality::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Score")) {
    m_score = jsonValue.GetInteger("Score");
    m_scoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Trend")) {
    m_trend = jsonValue.GetString("Trend");
    m_trendHasBeenSet = true;
  }
  return *this;
}

JsonValue OpportunityQuality::Jsonize() const {
  JsonValue payload;

  if (m_scoreHasBeenSet) {
    payload.WithInteger("Score", m_score);
  }

  if (m_trendHasBeenSet) {
    payload.WithString("Trend", m_trend);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
