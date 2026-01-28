/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/EncodingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

EncodingConfig::EncodingConfig(JsonView jsonValue) { *this = jsonValue; }

EncodingConfig& EncodingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("encodingProfile")) {
    m_encodingProfile = EncodingProfileMapper::GetEncodingProfileForName(jsonValue.GetString("encodingProfile"));
    m_encodingProfileHasBeenSet = true;
  }
  if (jsonValue.ValueExists("videoMaxBitrate")) {
    m_videoMaxBitrate = jsonValue.GetInteger("videoMaxBitrate");
    m_videoMaxBitrateHasBeenSet = true;
  }
  return *this;
}

JsonValue EncodingConfig::Jsonize() const {
  JsonValue payload;

  if (m_encodingProfileHasBeenSet) {
    payload.WithString("encodingProfile", EncodingProfileMapper::GetNameForEncodingProfile(m_encodingProfile));
  }

  if (m_videoMaxBitrateHasBeenSet) {
    payload.WithInteger("videoMaxBitrate", m_videoMaxBitrate);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
