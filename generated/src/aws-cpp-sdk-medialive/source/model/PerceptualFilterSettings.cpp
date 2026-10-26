/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/PerceptualFilterSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

PerceptualFilterSettings::PerceptualFilterSettings(JsonView jsonValue) { *this = jsonValue; }

PerceptualFilterSettings& PerceptualFilterSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("strength")) {
    m_strength = PerceptualFilterStrengthMapper::GetPerceptualFilterStrengthForName(jsonValue.GetString("strength"));
    m_strengthHasBeenSet = true;
  }
  return *this;
}

JsonValue PerceptualFilterSettings::Jsonize() const {
  JsonValue payload;

  if (m_strengthHasBeenSet) {
    payload.WithString("strength", PerceptualFilterStrengthMapper::GetNameForPerceptualFilterStrength(m_strength));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
