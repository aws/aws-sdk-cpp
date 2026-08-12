/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/CrossPillarBenefit.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

CrossPillarBenefit::CrossPillarBenefit(JsonView jsonValue) { *this = jsonValue; }

CrossPillarBenefit& CrossPillarBenefit::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("impact")) {
    m_impact = ImpactCategoryMapper::GetImpactCategoryForName(jsonValue.GetString("impact"));
    m_impactHasBeenSet = true;
  }
  return *this;
}

JsonValue CrossPillarBenefit::Jsonize() const {
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

  if (m_impactHasBeenSet) {
    payload.WithString("impact", ImpactCategoryMapper::GetNameForImpactCategory(m_impact));
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
