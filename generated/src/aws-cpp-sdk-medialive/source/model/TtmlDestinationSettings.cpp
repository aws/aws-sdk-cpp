/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/TtmlDestinationSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

TtmlDestinationSettings::TtmlDestinationSettings(JsonView jsonValue) { *this = jsonValue; }

TtmlDestinationSettings& TtmlDestinationSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("styleControl")) {
    m_styleControl = TtmlDestinationStyleControlMapper::GetTtmlDestinationStyleControlForName(jsonValue.GetString("styleControl"));
    m_styleControlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("position")) {
    m_position = jsonValue.GetObject("position");
    m_positionHasBeenSet = true;
  }
  return *this;
}

JsonValue TtmlDestinationSettings::Jsonize() const {
  JsonValue payload;

  if (m_styleControlHasBeenSet) {
    payload.WithString("styleControl", TtmlDestinationStyleControlMapper::GetNameForTtmlDestinationStyleControl(m_styleControl));
  }

  if (m_positionHasBeenSet) {
    payload.WithObject("position", m_position.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
