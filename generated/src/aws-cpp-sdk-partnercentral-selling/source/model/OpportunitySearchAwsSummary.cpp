/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/OpportunitySearchAwsSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

OpportunitySearchAwsSummary::OpportunitySearchAwsSummary(JsonView jsonValue) { *this = jsonValue; }

OpportunitySearchAwsSummary& OpportunitySearchAwsSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Origin")) {
    m_origin = OpportunityOriginMapper::GetOpportunityOriginForName(jsonValue.GetString("Origin"));
    m_originHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CosellMotion")) {
    m_cosellMotion = jsonValue.GetString("CosellMotion");
    m_cosellMotionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Insights")) {
    m_insights = jsonValue.GetObject("Insights");
    m_insightsHasBeenSet = true;
  }
  return *this;
}

JsonValue OpportunitySearchAwsSummary::Jsonize() const {
  JsonValue payload;

  if (m_originHasBeenSet) {
    payload.WithString("Origin", OpportunityOriginMapper::GetNameForOpportunityOrigin(m_origin));
  }

  if (m_cosellMotionHasBeenSet) {
    payload.WithString("CosellMotion", m_cosellMotion);
  }

  if (m_insightsHasBeenSet) {
    payload.WithObject("Insights", m_insights.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
