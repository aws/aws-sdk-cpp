/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/JpegXsInputSpecification.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

JpegXsInputSpecification::JpegXsInputSpecification(JsonView jsonValue) { *this = jsonValue; }

JpegXsInputSpecification& JpegXsInputSpecification::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("codec")) {
    m_codec = InputCodecMapper::GetInputCodecForName(jsonValue.GetString("codec"));
    m_codecHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maximumBitrate")) {
    m_maximumBitrate = JpegXsInputMaximumBitrateMapper::GetJpegXsInputMaximumBitrateForName(jsonValue.GetString("maximumBitrate"));
    m_maximumBitrateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resolution")) {
    m_resolution = JpegXsInputResolutionMapper::GetJpegXsInputResolutionForName(jsonValue.GetString("resolution"));
    m_resolutionHasBeenSet = true;
  }
  return *this;
}

JsonValue JpegXsInputSpecification::Jsonize() const {
  JsonValue payload;

  if (m_codecHasBeenSet) {
    payload.WithString("codec", InputCodecMapper::GetNameForInputCodec(m_codec));
  }

  if (m_maximumBitrateHasBeenSet) {
    payload.WithString("maximumBitrate", JpegXsInputMaximumBitrateMapper::GetNameForJpegXsInputMaximumBitrate(m_maximumBitrate));
  }

  if (m_resolutionHasBeenSet) {
    payload.WithString("resolution", JpegXsInputResolutionMapper::GetNameForJpegXsInputResolution(m_resolution));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
