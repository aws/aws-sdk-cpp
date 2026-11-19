/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/OpportunitySearchOpportunityQuality.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

OpportunitySearchOpportunityQuality::OpportunitySearchOpportunityQuality(JsonView jsonValue) { *this = jsonValue; }

OpportunitySearchOpportunityQuality& OpportunitySearchOpportunityQuality::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Score")) {
    m_score = jsonValue.GetInteger("Score");
    m_scoreHasBeenSet = true;
  }
  return *this;
}

JsonValue OpportunitySearchOpportunityQuality::Jsonize() const {
  JsonValue payload;

  if (m_scoreHasBeenSet) {
    payload.WithInteger("Score", m_score);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
