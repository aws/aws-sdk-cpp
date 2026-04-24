/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/NdiMediaStreamInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

NdiMediaStreamInfo::NdiMediaStreamInfo(JsonView jsonValue) { *this = jsonValue; }

NdiMediaStreamInfo& NdiMediaStreamInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("streamType")) {
    m_streamType = jsonValue.GetString("streamType");
    m_streamTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codec")) {
    m_codec = jsonValue.GetString("codec");
    m_codecHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamId")) {
    m_streamId = jsonValue.GetInteger("streamId");
    m_streamIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanMode")) {
    m_scanMode = ScanModeMapper::GetScanModeForName(jsonValue.GetString("scanMode"));
    m_scanModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("frameResolution")) {
    m_frameResolution = jsonValue.GetObject("frameResolution");
    m_frameResolutionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("frameRate")) {
    m_frameRate = jsonValue.GetString("frameRate");
    m_frameRateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("channels")) {
    m_channels = jsonValue.GetInteger("channels");
    m_channelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sampleRate")) {
    m_sampleRate = jsonValue.GetInteger("sampleRate");
    m_sampleRateHasBeenSet = true;
  }
  return *this;
}

JsonValue NdiMediaStreamInfo::Jsonize() const {
  JsonValue payload;

  if (m_streamTypeHasBeenSet) {
    payload.WithString("streamType", m_streamType);
  }

  if (m_codecHasBeenSet) {
    payload.WithString("codec", m_codec);
  }

  if (m_streamIdHasBeenSet) {
    payload.WithInteger("streamId", m_streamId);
  }

  if (m_scanModeHasBeenSet) {
    payload.WithString("scanMode", ScanModeMapper::GetNameForScanMode(m_scanMode));
  }

  if (m_frameResolutionHasBeenSet) {
    payload.WithObject("frameResolution", m_frameResolution.Jsonize());
  }

  if (m_frameRateHasBeenSet) {
    payload.WithString("frameRate", m_frameRate);
  }

  if (m_channelsHasBeenSet) {
    payload.WithInteger("channels", m_channels);
  }

  if (m_sampleRateHasBeenSet) {
    payload.WithInteger("sampleRate", m_sampleRate);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
