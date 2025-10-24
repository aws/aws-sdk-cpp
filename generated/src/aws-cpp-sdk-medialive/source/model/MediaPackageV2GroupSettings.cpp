﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/MediaPackageV2GroupSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

MediaPackageV2GroupSettings::MediaPackageV2GroupSettings(JsonView jsonValue) { *this = jsonValue; }

MediaPackageV2GroupSettings& MediaPackageV2GroupSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("captionLanguageMappings")) {
    Aws::Utils::Array<JsonView> captionLanguageMappingsJsonList = jsonValue.GetArray("captionLanguageMappings");
    for (unsigned captionLanguageMappingsIndex = 0; captionLanguageMappingsIndex < captionLanguageMappingsJsonList.GetLength();
         ++captionLanguageMappingsIndex) {
      m_captionLanguageMappings.push_back(captionLanguageMappingsJsonList[captionLanguageMappingsIndex].AsObject());
    }
    m_captionLanguageMappingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id3Behavior")) {
    m_id3Behavior = CmafId3BehaviorMapper::GetCmafId3BehaviorForName(jsonValue.GetString("id3Behavior"));
    m_id3BehaviorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("klvBehavior")) {
    m_klvBehavior = CmafKLVBehaviorMapper::GetCmafKLVBehaviorForName(jsonValue.GetString("klvBehavior"));
    m_klvBehaviorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nielsenId3Behavior")) {
    m_nielsenId3Behavior = CmafNielsenId3BehaviorMapper::GetCmafNielsenId3BehaviorForName(jsonValue.GetString("nielsenId3Behavior"));
    m_nielsenId3BehaviorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scte35Type")) {
    m_scte35Type = Scte35TypeMapper::GetScte35TypeForName(jsonValue.GetString("scte35Type"));
    m_scte35TypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("segmentLength")) {
    m_segmentLength = jsonValue.GetInteger("segmentLength");
    m_segmentLengthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("segmentLengthUnits")) {
    m_segmentLengthUnits =
        CmafIngestSegmentLengthUnitsMapper::GetCmafIngestSegmentLengthUnitsForName(jsonValue.GetString("segmentLengthUnits"));
    m_segmentLengthUnitsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timedMetadataId3Frame")) {
    m_timedMetadataId3Frame =
        CmafTimedMetadataId3FrameMapper::GetCmafTimedMetadataId3FrameForName(jsonValue.GetString("timedMetadataId3Frame"));
    m_timedMetadataId3FrameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timedMetadataId3Period")) {
    m_timedMetadataId3Period = jsonValue.GetInteger("timedMetadataId3Period");
    m_timedMetadataId3PeriodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timedMetadataPassthrough")) {
    m_timedMetadataPassthrough =
        CmafTimedMetadataPassthroughMapper::GetCmafTimedMetadataPassthroughForName(jsonValue.GetString("timedMetadataPassthrough"));
    m_timedMetadataPassthroughHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaPackageV2GroupSettings::Jsonize() const {
  JsonValue payload;

  if (m_captionLanguageMappingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> captionLanguageMappingsJsonList(m_captionLanguageMappings.size());
    for (unsigned captionLanguageMappingsIndex = 0; captionLanguageMappingsIndex < captionLanguageMappingsJsonList.GetLength();
         ++captionLanguageMappingsIndex) {
      captionLanguageMappingsJsonList[captionLanguageMappingsIndex].AsObject(
          m_captionLanguageMappings[captionLanguageMappingsIndex].Jsonize());
    }
    payload.WithArray("captionLanguageMappings", std::move(captionLanguageMappingsJsonList));
  }

  if (m_id3BehaviorHasBeenSet) {
    payload.WithString("id3Behavior", CmafId3BehaviorMapper::GetNameForCmafId3Behavior(m_id3Behavior));
  }

  if (m_klvBehaviorHasBeenSet) {
    payload.WithString("klvBehavior", CmafKLVBehaviorMapper::GetNameForCmafKLVBehavior(m_klvBehavior));
  }

  if (m_nielsenId3BehaviorHasBeenSet) {
    payload.WithString("nielsenId3Behavior", CmafNielsenId3BehaviorMapper::GetNameForCmafNielsenId3Behavior(m_nielsenId3Behavior));
  }

  if (m_scte35TypeHasBeenSet) {
    payload.WithString("scte35Type", Scte35TypeMapper::GetNameForScte35Type(m_scte35Type));
  }

  if (m_segmentLengthHasBeenSet) {
    payload.WithInteger("segmentLength", m_segmentLength);
  }

  if (m_segmentLengthUnitsHasBeenSet) {
    payload.WithString("segmentLengthUnits",
                       CmafIngestSegmentLengthUnitsMapper::GetNameForCmafIngestSegmentLengthUnits(m_segmentLengthUnits));
  }

  if (m_timedMetadataId3FrameHasBeenSet) {
    payload.WithString("timedMetadataId3Frame",
                       CmafTimedMetadataId3FrameMapper::GetNameForCmafTimedMetadataId3Frame(m_timedMetadataId3Frame));
  }

  if (m_timedMetadataId3PeriodHasBeenSet) {
    payload.WithInteger("timedMetadataId3Period", m_timedMetadataId3Period);
  }

  if (m_timedMetadataPassthroughHasBeenSet) {
    payload.WithString("timedMetadataPassthrough",
                       CmafTimedMetadataPassthroughMapper::GetNameForCmafTimedMetadataPassthrough(m_timedMetadataPassthrough));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
