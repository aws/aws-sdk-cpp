/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/TradeOff.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

TradeOff::TradeOff(JsonView jsonValue) { *this = jsonValue; }

TradeOff& TradeOff::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("pillar")) {
    m_pillar = PillarMapper::GetPillarForName(jsonValue.GetString("pillar"));
    m_pillarHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("risk")) {
    m_risk = RiskRatingMapper::GetRiskRatingForName(jsonValue.GetString("risk"));
    m_riskHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mitigation")) {
    m_mitigation = jsonValue.GetString("mitigation");
    m_mitigationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("riskExplanation")) {
    m_riskExplanation = jsonValue.GetString("riskExplanation");
    m_riskExplanationHasBeenSet = true;
  }
  return *this;
}

JsonValue TradeOff::Jsonize() const {
  JsonValue payload;

  if (m_pillarHasBeenSet) {
    payload.WithString("pillar", PillarMapper::GetNameForPillar(m_pillar));
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_riskHasBeenSet) {
    payload.WithString("risk", RiskRatingMapper::GetNameForRiskRating(m_risk));
  }

  if (m_mitigationHasBeenSet) {
    payload.WithString("mitigation", m_mitigation);
  }

  if (m_riskExplanationHasBeenSet) {
    payload.WithString("riskExplanation", m_riskExplanation);
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
