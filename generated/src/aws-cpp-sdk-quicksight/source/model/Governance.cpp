/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/Governance.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

Governance::Governance(JsonView jsonValue) { *this = jsonValue; }

Governance& Governance::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DefaultCategoryEffects")) {
    Aws::Map<Aws::String, JsonView> defaultCategoryEffectsJsonMap = jsonValue.GetObject("DefaultCategoryEffects").GetAllObjects();
    for (auto& defaultCategoryEffectsItem : defaultCategoryEffectsJsonMap) {
      m_defaultCategoryEffects[defaultCategoryEffectsItem.first] =
          DefaultCategoryEffectMapper::GetDefaultCategoryEffectForName(defaultCategoryEffectsItem.second.AsString());
    }
    m_defaultCategoryEffectsHasBeenSet = true;
  }
  return *this;
}

JsonValue Governance::Jsonize() const {
  JsonValue payload;

  if (m_defaultCategoryEffectsHasBeenSet) {
    JsonValue defaultCategoryEffectsJsonMap;
    for (auto& defaultCategoryEffectsItem : m_defaultCategoryEffects) {
      defaultCategoryEffectsJsonMap.WithString(
          defaultCategoryEffectsItem.first,
          DefaultCategoryEffectMapper::GetNameForDefaultCategoryEffect(defaultCategoryEffectsItem.second));
    }
    payload.WithObject("DefaultCategoryEffects", std::move(defaultCategoryEffectsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
