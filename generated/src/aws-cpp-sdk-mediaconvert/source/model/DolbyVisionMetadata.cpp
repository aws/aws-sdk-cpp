/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/DolbyVisionMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

DolbyVisionMetadata::DolbyVisionMetadata(JsonView jsonValue) { *this = jsonValue; }

DolbyVisionMetadata& DolbyVisionMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("baseLayer")) {
    m_baseLayer = DolbyVisionPresenceMapper::GetDolbyVisionPresenceForName(jsonValue.GetString("baseLayer"));
    m_baseLayerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enhancementLayer")) {
    m_enhancementLayer = DolbyVisionPresenceMapper::GetDolbyVisionPresenceForName(jsonValue.GetString("enhancementLayer"));
    m_enhancementLayerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("level")) {
    m_level = jsonValue.GetInteger("level");
    m_levelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("profile")) {
    m_profile = jsonValue.GetInteger("profile");
    m_profileHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rpu")) {
    m_rpu = DolbyVisionPresenceMapper::GetDolbyVisionPresenceForName(jsonValue.GetString("rpu"));
    m_rpuHasBeenSet = true;
  }
  return *this;
}

JsonValue DolbyVisionMetadata::Jsonize() const {
  JsonValue payload;

  if (m_baseLayerHasBeenSet) {
    payload.WithString("baseLayer", DolbyVisionPresenceMapper::GetNameForDolbyVisionPresence(m_baseLayer));
  }

  if (m_enhancementLayerHasBeenSet) {
    payload.WithString("enhancementLayer", DolbyVisionPresenceMapper::GetNameForDolbyVisionPresence(m_enhancementLayer));
  }

  if (m_levelHasBeenSet) {
    payload.WithInteger("level", m_level);
  }

  if (m_profileHasBeenSet) {
    payload.WithInteger("profile", m_profile);
  }

  if (m_rpuHasBeenSet) {
    payload.WithString("rpu", DolbyVisionPresenceMapper::GetNameForDolbyVisionPresence(m_rpu));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
