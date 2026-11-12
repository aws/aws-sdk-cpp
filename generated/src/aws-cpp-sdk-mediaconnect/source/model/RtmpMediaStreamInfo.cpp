/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RtmpMediaStreamInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RtmpMediaStreamInfo::RtmpMediaStreamInfo(JsonView jsonValue) { *this = jsonValue; }

RtmpMediaStreamInfo& RtmpMediaStreamInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("streamId")) {
    m_streamId = jsonValue.GetInteger("streamId");
    m_streamIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamType")) {
    m_streamType = SourceMediaStreamTypeMapper::GetSourceMediaStreamTypeForName(jsonValue.GetString("streamType"));
    m_streamTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codec")) {
    m_codec = jsonValue.GetString("codec");
    m_codecHasBeenSet = true;
  }
  if (jsonValue.ValueExists("frameRate")) {
    m_frameRate = jsonValue.GetString("frameRate");
    m_frameRateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("frameResolution")) {
    m_frameResolution = jsonValue.GetObject("frameResolution");
    m_frameResolutionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanMode")) {
    m_scanMode = ScanModeMapper::GetScanModeForName(jsonValue.GetString("scanMode"));
    m_scanModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("color")) {
    m_color = jsonValue.GetObject("color");
    m_colorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("channels")) {
    m_channels = jsonValue.GetInteger("channels");
    m_channelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sampleRate")) {
    m_sampleRate = jsonValue.GetInteger("sampleRate");
    m_sampleRateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sampleSize")) {
    m_sampleSize = jsonValue.GetInteger("sampleSize");
    m_sampleSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("language")) {
    m_language = jsonValue.GetString("language");
    m_languageHasBeenSet = true;
  }
  return *this;
}

JsonValue RtmpMediaStreamInfo::Jsonize() const {
  JsonValue payload;

  if (m_streamIdHasBeenSet) {
    payload.WithInteger("streamId", m_streamId);
  }

  if (m_streamTypeHasBeenSet) {
    payload.WithString("streamType", SourceMediaStreamTypeMapper::GetNameForSourceMediaStreamType(m_streamType));
  }

  if (m_codecHasBeenSet) {
    payload.WithString("codec", m_codec);
  }

  if (m_frameRateHasBeenSet) {
    payload.WithString("frameRate", m_frameRate);
  }

  if (m_frameResolutionHasBeenSet) {
    payload.WithObject("frameResolution", m_frameResolution.Jsonize());
  }

  if (m_scanModeHasBeenSet) {
    payload.WithString("scanMode", ScanModeMapper::GetNameForScanMode(m_scanMode));
  }

  if (m_colorHasBeenSet) {
    payload.WithObject("color", m_color.Jsonize());
  }

  if (m_channelsHasBeenSet) {
    payload.WithInteger("channels", m_channels);
  }

  if (m_sampleRateHasBeenSet) {
    payload.WithInteger("sampleRate", m_sampleRate);
  }

  if (m_sampleSizeHasBeenSet) {
    payload.WithInteger("sampleSize", m_sampleSize);
  }

  if (m_languageHasBeenSet) {
    payload.WithString("language", m_language);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
