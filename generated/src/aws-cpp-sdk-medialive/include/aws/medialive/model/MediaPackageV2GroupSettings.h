/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/CaptionLanguageMapping.h>
#include <aws/medialive/model/CmafId3Behavior.h>
#include <aws/medialive/model/CmafIngestSegmentLengthUnits.h>
#include <aws/medialive/model/CmafKLVBehavior.h>
#include <aws/medialive/model/CmafNielsenId3Behavior.h>
#include <aws/medialive/model/CmafTimedMetadataId3Frame.h>
#include <aws/medialive/model/CmafTimedMetadataPassthrough.h>
#include <aws/medialive/model/MediaPackageAdditionalDestinations.h>
#include <aws/medialive/model/Scte35Type.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * Media Package V2 Group Settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaPackageV2GroupSettings">AWS
 * API Reference</a></p>
 */
class MediaPackageV2GroupSettings {
 public:
  AWS_MEDIALIVE_API MediaPackageV2GroupSettings() = default;
  AWS_MEDIALIVE_API MediaPackageV2GroupSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API MediaPackageV2GroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Mapping of up to 4 caption channels to caption languages.
   */
  inline const Aws::Vector<CaptionLanguageMapping>& GetCaptionLanguageMappings() const { return m_captionLanguageMappings; }
  inline bool CaptionLanguageMappingsHasBeenSet() const { return m_captionLanguageMappingsHasBeenSet; }
  template <typename CaptionLanguageMappingsT = Aws::Vector<CaptionLanguageMapping>>
  void SetCaptionLanguageMappings(CaptionLanguageMappingsT&& value) {
    m_captionLanguageMappingsHasBeenSet = true;
    m_captionLanguageMappings = std::forward<CaptionLanguageMappingsT>(value);
  }
  template <typename CaptionLanguageMappingsT = Aws::Vector<CaptionLanguageMapping>>
  MediaPackageV2GroupSettings& WithCaptionLanguageMappings(CaptionLanguageMappingsT&& value) {
    SetCaptionLanguageMappings(std::forward<CaptionLanguageMappingsT>(value));
    return *this;
  }
  template <typename CaptionLanguageMappingsT = CaptionLanguageMapping>
  MediaPackageV2GroupSettings& AddCaptionLanguageMappings(CaptionLanguageMappingsT&& value) {
    m_captionLanguageMappingsHasBeenSet = true;
    m_captionLanguageMappings.emplace_back(std::forward<CaptionLanguageMappingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * Set to ENABLED to enable ID3 metadata insertion. To include metadata, you
   * configure other parameters in the output group, or you add an ID3 action to the
   * channel schedule.
   */
  inline CmafId3Behavior GetId3Behavior() const { return m_id3Behavior; }
  inline bool Id3BehaviorHasBeenSet() const { return m_id3BehaviorHasBeenSet; }
  inline void SetId3Behavior(CmafId3Behavior value) {
    m_id3BehaviorHasBeenSet = true;
    m_id3Behavior = value;
  }
  inline MediaPackageV2GroupSettings& WithId3Behavior(CmafId3Behavior value) {
    SetId3Behavior(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * If set to passthrough, passes any KLV data from the input source to this output.
   */
  inline CmafKLVBehavior GetKlvBehavior() const { return m_klvBehavior; }
  inline bool KlvBehaviorHasBeenSet() const { return m_klvBehaviorHasBeenSet; }
  inline void SetKlvBehavior(CmafKLVBehavior value) {
    m_klvBehaviorHasBeenSet = true;
    m_klvBehavior = value;
  }
  inline MediaPackageV2GroupSettings& WithKlvBehavior(CmafKLVBehavior value) {
    SetKlvBehavior(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * If set to passthrough, Nielsen inaudible tones for media tracking will be
   * detected in the input audio and an equivalent ID3 tag will be inserted in the
   * output.
   */
  inline CmafNielsenId3Behavior GetNielsenId3Behavior() const { return m_nielsenId3Behavior; }
  inline bool NielsenId3BehaviorHasBeenSet() const { return m_nielsenId3BehaviorHasBeenSet; }
  inline void SetNielsenId3Behavior(CmafNielsenId3Behavior value) {
    m_nielsenId3BehaviorHasBeenSet = true;
    m_nielsenId3Behavior = value;
  }
  inline MediaPackageV2GroupSettings& WithNielsenId3Behavior(CmafNielsenId3Behavior value) {
    SetNielsenId3Behavior(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Type of scte35 track to add. none or scte35WithoutSegmentation
   */
  inline Scte35Type GetScte35Type() const { return m_scte35Type; }
  inline bool Scte35TypeHasBeenSet() const { return m_scte35TypeHasBeenSet; }
  inline void SetScte35Type(Scte35Type value) {
    m_scte35TypeHasBeenSet = true;
    m_scte35Type = value;
  }
  inline MediaPackageV2GroupSettings& WithScte35Type(Scte35Type value) {
    SetScte35Type(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The nominal duration of segments. The units are specified in SegmentLengthUnits.
   * The segments will end on the next keyframe after the specified duration, so the
   * actual segment length might be longer, and it might be a fraction of the units.
   */
  inline int GetSegmentLength() const { return m_segmentLength; }
  inline bool SegmentLengthHasBeenSet() const { return m_segmentLengthHasBeenSet; }
  inline void SetSegmentLength(int value) {
    m_segmentLengthHasBeenSet = true;
    m_segmentLength = value;
  }
  inline MediaPackageV2GroupSettings& WithSegmentLength(int value) {
    SetSegmentLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Time unit for segment length parameter.
   */
  inline CmafIngestSegmentLengthUnits GetSegmentLengthUnits() const { return m_segmentLengthUnits; }
  inline bool SegmentLengthUnitsHasBeenSet() const { return m_segmentLengthUnitsHasBeenSet; }
  inline void SetSegmentLengthUnits(CmafIngestSegmentLengthUnits value) {
    m_segmentLengthUnitsHasBeenSet = true;
    m_segmentLengthUnits = value;
  }
  inline MediaPackageV2GroupSettings& WithSegmentLengthUnits(CmafIngestSegmentLengthUnits value) {
    SetSegmentLengthUnits(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Set to none if you don't want to insert a timecode in the output. Otherwise
   * choose the frame type for the timecode.
   */
  inline CmafTimedMetadataId3Frame GetTimedMetadataId3Frame() const { return m_timedMetadataId3Frame; }
  inline bool TimedMetadataId3FrameHasBeenSet() const { return m_timedMetadataId3FrameHasBeenSet; }
  inline void SetTimedMetadataId3Frame(CmafTimedMetadataId3Frame value) {
    m_timedMetadataId3FrameHasBeenSet = true;
    m_timedMetadataId3Frame = value;
  }
  inline MediaPackageV2GroupSettings& WithTimedMetadataId3Frame(CmafTimedMetadataId3Frame value) {
    SetTimedMetadataId3Frame(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * If you set up to insert a timecode in the output, specify the frequency for the
   * frame, in seconds.
   */
  inline int GetTimedMetadataId3Period() const { return m_timedMetadataId3Period; }
  inline bool TimedMetadataId3PeriodHasBeenSet() const { return m_timedMetadataId3PeriodHasBeenSet; }
  inline void SetTimedMetadataId3Period(int value) {
    m_timedMetadataId3PeriodHasBeenSet = true;
    m_timedMetadataId3Period = value;
  }
  inline MediaPackageV2GroupSettings& WithTimedMetadataId3Period(int value) {
    SetTimedMetadataId3Period(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Set to enabled to pass through ID3 metadata from the input sources.
   */
  inline CmafTimedMetadataPassthrough GetTimedMetadataPassthrough() const { return m_timedMetadataPassthrough; }
  inline bool TimedMetadataPassthroughHasBeenSet() const { return m_timedMetadataPassthroughHasBeenSet; }
  inline void SetTimedMetadataPassthrough(CmafTimedMetadataPassthrough value) {
    m_timedMetadataPassthroughHasBeenSet = true;
    m_timedMetadataPassthrough = value;
  }
  inline MediaPackageV2GroupSettings& WithTimedMetadataPassthrough(CmafTimedMetadataPassthrough value) {
    SetTimedMetadataPassthrough(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Optional an array of additional destinational HTTP destinations for the
   * OutputGroup outputs
   */
  inline const Aws::Vector<MediaPackageAdditionalDestinations>& GetAdditionalDestinations() const { return m_additionalDestinations; }
  inline bool AdditionalDestinationsHasBeenSet() const { return m_additionalDestinationsHasBeenSet; }
  template <typename AdditionalDestinationsT = Aws::Vector<MediaPackageAdditionalDestinations>>
  void SetAdditionalDestinations(AdditionalDestinationsT&& value) {
    m_additionalDestinationsHasBeenSet = true;
    m_additionalDestinations = std::forward<AdditionalDestinationsT>(value);
  }
  template <typename AdditionalDestinationsT = Aws::Vector<MediaPackageAdditionalDestinations>>
  MediaPackageV2GroupSettings& WithAdditionalDestinations(AdditionalDestinationsT&& value) {
    SetAdditionalDestinations(std::forward<AdditionalDestinationsT>(value));
    return *this;
  }
  template <typename AdditionalDestinationsT = MediaPackageAdditionalDestinations>
  MediaPackageV2GroupSettings& AddAdditionalDestinations(AdditionalDestinationsT&& value) {
    m_additionalDestinationsHasBeenSet = true;
    m_additionalDestinations.emplace_back(std::forward<AdditionalDestinationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CaptionLanguageMapping> m_captionLanguageMappings;

  CmafId3Behavior m_id3Behavior{CmafId3Behavior::NOT_SET};

  CmafKLVBehavior m_klvBehavior{CmafKLVBehavior::NOT_SET};

  CmafNielsenId3Behavior m_nielsenId3Behavior{CmafNielsenId3Behavior::NOT_SET};

  Scte35Type m_scte35Type{Scte35Type::NOT_SET};

  int m_segmentLength{0};

  CmafIngestSegmentLengthUnits m_segmentLengthUnits{CmafIngestSegmentLengthUnits::NOT_SET};

  CmafTimedMetadataId3Frame m_timedMetadataId3Frame{CmafTimedMetadataId3Frame::NOT_SET};

  int m_timedMetadataId3Period{0};

  CmafTimedMetadataPassthrough m_timedMetadataPassthrough{CmafTimedMetadataPassthrough::NOT_SET};

  Aws::Vector<MediaPackageAdditionalDestinations> m_additionalDestinations;
  bool m_captionLanguageMappingsHasBeenSet = false;
  bool m_id3BehaviorHasBeenSet = false;
  bool m_klvBehaviorHasBeenSet = false;
  bool m_nielsenId3BehaviorHasBeenSet = false;
  bool m_scte35TypeHasBeenSet = false;
  bool m_segmentLengthHasBeenSet = false;
  bool m_segmentLengthUnitsHasBeenSet = false;
  bool m_timedMetadataId3FrameHasBeenSet = false;
  bool m_timedMetadataId3PeriodHasBeenSet = false;
  bool m_timedMetadataPassthroughHasBeenSet = false;
  bool m_additionalDestinationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
