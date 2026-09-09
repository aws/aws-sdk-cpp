/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/EmbeddedDestinationSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

EmbeddedDestinationSettings::EmbeddedDestinationSettings(JsonView jsonValue) { *this = jsonValue; }

EmbeddedDestinationSettings& EmbeddedDestinationSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("position")) {
    m_position = jsonValue.GetObject("position");
    m_positionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("styleControl")) {
    m_styleControl = EmbeddedDestinationStyleControlMapper::GetEmbeddedDestinationStyleControlForName(jsonValue.GetString("styleControl"));
    m_styleControlHasBeenSet = true;
  }
  return *this;
}

JsonValue EmbeddedDestinationSettings::Jsonize() const {
  JsonValue payload;

  if (m_positionHasBeenSet) {
    payload.WithObject("position", m_position.Jsonize());
  }

  if (m_styleControlHasBeenSet) {
    payload.WithString("styleControl", EmbeddedDestinationStyleControlMapper::GetNameForEmbeddedDestinationStyleControl(m_styleControl));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
