/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DecalSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DecalSettings::DecalSettings(JsonView jsonValue) { *this = jsonValue; }

DecalSettings& DecalSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ElementValue")) {
    m_elementValue = jsonValue.GetString("ElementValue");
    m_elementValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DecalVisibility")) {
    m_decalVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("DecalVisibility"));
    m_decalVisibilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DecalColor")) {
    m_decalColor = jsonValue.GetString("DecalColor");
    m_decalColorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DecalPatternType")) {
    m_decalPatternType = DecalPatternTypeMapper::GetDecalPatternTypeForName(jsonValue.GetString("DecalPatternType"));
    m_decalPatternTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DecalStyleType")) {
    m_decalStyleType = DecalStyleTypeMapper::GetDecalStyleTypeForName(jsonValue.GetString("DecalStyleType"));
    m_decalStyleTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DecalSettings::Jsonize() const {
  JsonValue payload;

  if (m_elementValueHasBeenSet) {
    payload.WithString("ElementValue", m_elementValue);
  }

  if (m_decalVisibilityHasBeenSet) {
    payload.WithString("DecalVisibility", VisibilityMapper::GetNameForVisibility(m_decalVisibility));
  }

  if (m_decalColorHasBeenSet) {
    payload.WithString("DecalColor", m_decalColor);
  }

  if (m_decalPatternTypeHasBeenSet) {
    payload.WithString("DecalPatternType", DecalPatternTypeMapper::GetNameForDecalPatternType(m_decalPatternType));
  }

  if (m_decalStyleTypeHasBeenSet) {
    payload.WithString("DecalStyleType", DecalStyleTypeMapper::GetNameForDecalStyleType(m_decalStyleType));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
