/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/OutputLocationRef.h>
#include <aws/medialive/model/CmafNielsenId3Behavior.h>
#include <aws/medialive/model/Scte35Type.h>
#include <aws/medialive/model/CmafIngestSegmentLengthUnits.h>
#include <aws/medialive/model/CmafKLVBehavior.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/CmafId3Behavior.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/CmafTimedMetadataId3Frame.h>
#include <aws/medialive/model/CmafTimedMetadataPassthrough.h>
#include <aws/medialive/model/CmafIngestCaptionLanguageMapping.h>
#include <aws/medialive/model/AdditionalDestinations.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * Cmaf Ingest Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CmafIngestGroupSettings">AWS
   * API Reference</a></p>
   */
  class CmafIngestGroupSettings
  {
  public:
    AWS_MEDIALIVE_API CmafIngestGroupSettings() = default;
    AWS_MEDIALIVE_API CmafIngestGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API CmafIngestGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A HTTP destination for the tracks
     */
    inline const OutputLocationRef& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = OutputLocationRef>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = OutputLocationRef>
    CmafIngestGroupSettings& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline CmafNielsenId3Behavior GetNielsenId3Behavior() const { return m_nielsenId3Behavior; }
    inline bool NielsenId3BehaviorHasBeenSet() const { return m_nielsenId3BehaviorHasBeenSet; }
    inline void SetNielsenId3Behavior(CmafNielsenId3Behavior value) { m_nielsenId3BehaviorHasBeenSet = true; m_nielsenId3Behavior = value; }
    inline CmafIngestGroupSettings& WithNielsenId3Behavior(CmafNielsenId3Behavior value) { SetNielsenId3Behavior(value); return *this;}
    ///@}

    ///@{
    /**
     * Type of scte35 track to add. none or scte35WithoutSegmentation
     */
    inline Scte35Type GetScte35Type() const { return m_scte35Type; }
    inline bool Scte35TypeHasBeenSet() const { return m_scte35TypeHasBeenSet; }
    inline void SetScte35Type(Scte35Type value) { m_scte35TypeHasBeenSet = true; m_scte35Type = value; }
    inline CmafIngestGroupSettings& WithScte35Type(Scte35Type value) { SetScte35Type(value); return *this;}
    ///@}

    ///@{
    /**
     * The nominal duration of segments. The units are specified in SegmentLengthUnits.
     * The segments will end on the next keyframe after the specified duration, so the
     * actual segment length might be longer, and it might be a fraction of the units.
     */
    inline int GetSegmentLength() const { return m_segmentLength; }
    inline bool SegmentLengthHasBeenSet() const { return m_segmentLengthHasBeenSet; }
    inline void SetSegmentLength(int value) { m_segmentLengthHasBeenSet = true; m_segmentLength = value; }
    inline CmafIngestGroupSettings& WithSegmentLength(int value) { SetSegmentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * Time unit for segment length parameter.
     */
    inline CmafIngestSegmentLengthUnits GetSegmentLengthUnits() const { return m_segmentLengthUnits; }
    inline bool SegmentLengthUnitsHasBeenSet() const { return m_segmentLengthUnitsHasBeenSet; }
    inline void SetSegmentLengthUnits(CmafIngestSegmentLengthUnits value) { m_segmentLengthUnitsHasBeenSet = true; m_segmentLengthUnits = value; }
    inline CmafIngestGroupSettings& WithSegmentLengthUnits(CmafIngestSegmentLengthUnits value) { SetSegmentLengthUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of milliseconds to delay the output from the second pipeline.
     */
    inline int GetSendDelayMs() const { return m_sendDelayMs; }
    inline bool SendDelayMsHasBeenSet() const { return m_sendDelayMsHasBeenSet; }
    inline void SetSendDelayMs(int value) { m_sendDelayMsHasBeenSet = true; m_sendDelayMs = value; }
    inline CmafIngestGroupSettings& WithSendDelayMs(int value) { SetSendDelayMs(value); return *this;}
    ///@}

    ///@{
    /**
     * If set to passthrough, passes any KLV data from the input source to this output.
     */
    inline CmafKLVBehavior GetKlvBehavior() const { return m_klvBehavior; }
    inline bool KlvBehaviorHasBeenSet() const { return m_klvBehaviorHasBeenSet; }
    inline void SetKlvBehavior(CmafKLVBehavior value) { m_klvBehaviorHasBeenSet = true; m_klvBehavior = value; }
    inline CmafIngestGroupSettings& WithKlvBehavior(CmafKLVBehavior value) { SetKlvBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * Change the modifier that MediaLive automatically adds to the Streams() name that
     * identifies a KLV track. The default is "klv", which means the default name will
     * be Streams(klv.cmfm). Any string you enter here will replace the "klv"
     * string.\nThe modifier can only contain: numbers, letters, plus (+), minus (-),
     * underscore (_) and period (.) and has a maximum length of 100 characters.
     */
    inline const Aws::String& GetKlvNameModifier() const { return m_klvNameModifier; }
    inline bool KlvNameModifierHasBeenSet() const { return m_klvNameModifierHasBeenSet; }
    template<typename KlvNameModifierT = Aws::String>
    void SetKlvNameModifier(KlvNameModifierT&& value) { m_klvNameModifierHasBeenSet = true; m_klvNameModifier = std::forward<KlvNameModifierT>(value); }
    template<typename KlvNameModifierT = Aws::String>
    CmafIngestGroupSettings& WithKlvNameModifier(KlvNameModifierT&& value) { SetKlvNameModifier(std::forward<KlvNameModifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Change the modifier that MediaLive automatically adds to the Streams() name that
     * identifies a Nielsen ID3 track. The default is "nid3", which means the default
     * name will be Streams(nid3.cmfm). Any string you enter here will replace the
     * "nid3" string.\nThe modifier can only contain: numbers, letters, plus (+), minus
     * (-), underscore (_) and period (.) and has a maximum length of 100 characters.
     */
    inline const Aws::String& GetNielsenId3NameModifier() const { return m_nielsenId3NameModifier; }
    inline bool NielsenId3NameModifierHasBeenSet() const { return m_nielsenId3NameModifierHasBeenSet; }
    template<typename NielsenId3NameModifierT = Aws::String>
    void SetNielsenId3NameModifier(NielsenId3NameModifierT&& value) { m_nielsenId3NameModifierHasBeenSet = true; m_nielsenId3NameModifier = std::forward<NielsenId3NameModifierT>(value); }
    template<typename NielsenId3NameModifierT = Aws::String>
    CmafIngestGroupSettings& WithNielsenId3NameModifier(NielsenId3NameModifierT&& value) { SetNielsenId3NameModifier(std::forward<NielsenId3NameModifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Change the modifier that MediaLive automatically adds to the Streams() name for
     * a SCTE 35 track. The default is "scte", which means the default name will be
     * Streams(scte.cmfm). Any string you enter here will replace the "scte"
     * string.\nThe modifier can only contain: numbers, letters, plus (+), minus (-),
     * underscore (_) and period (.) and has a maximum length of 100 characters.
     */
    inline const Aws::String& GetScte35NameModifier() const { return m_scte35NameModifier; }
    inline bool Scte35NameModifierHasBeenSet() const { return m_scte35NameModifierHasBeenSet; }
    template<typename Scte35NameModifierT = Aws::String>
    void SetScte35NameModifier(Scte35NameModifierT&& value) { m_scte35NameModifierHasBeenSet = true; m_scte35NameModifier = std::forward<Scte35NameModifierT>(value); }
    template<typename Scte35NameModifierT = Aws::String>
    CmafIngestGroupSettings& WithScte35NameModifier(Scte35NameModifierT&& value) { SetScte35NameModifier(std::forward<Scte35NameModifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Set to ENABLED to enable ID3 metadata insertion. To include metadata, you
     * configure other parameters in the output group, or you add an ID3 action to the
     * channel schedule.
     */
    inline CmafId3Behavior GetId3Behavior() const { return m_id3Behavior; }
    inline bool Id3BehaviorHasBeenSet() const { return m_id3BehaviorHasBeenSet; }
    inline void SetId3Behavior(CmafId3Behavior value) { m_id3BehaviorHasBeenSet = true; m_id3Behavior = value; }
    inline CmafIngestGroupSettings& WithId3Behavior(CmafId3Behavior value) { SetId3Behavior(value); return *this;}
    ///@}

    ///@{
    /**
     * Change the modifier that MediaLive automatically adds to the Streams() name that
     * identifies an ID3 track. The default is "id3", which means the default name will
     * be Streams(id3.cmfm). Any string you enter here will replace the "id3"
     * string.\nThe modifier can only contain: numbers, letters, plus (+), minus (-),
     * underscore (_) and period (.) and has a maximum length of 100 characters.
     */
    inline const Aws::String& GetId3NameModifier() const { return m_id3NameModifier; }
    inline bool Id3NameModifierHasBeenSet() const { return m_id3NameModifierHasBeenSet; }
    template<typename Id3NameModifierT = Aws::String>
    void SetId3NameModifier(Id3NameModifierT&& value) { m_id3NameModifierHasBeenSet = true; m_id3NameModifier = std::forward<Id3NameModifierT>(value); }
    template<typename Id3NameModifierT = Aws::String>
    CmafIngestGroupSettings& WithId3NameModifier(Id3NameModifierT&& value) { SetId3NameModifier(std::forward<Id3NameModifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An array that identifies the languages in the four caption channels in the
     * embedded captions.
     */
    inline const Aws::Vector<CmafIngestCaptionLanguageMapping>& GetCaptionLanguageMappings() const { return m_captionLanguageMappings; }
    inline bool CaptionLanguageMappingsHasBeenSet() const { return m_captionLanguageMappingsHasBeenSet; }
    template<typename CaptionLanguageMappingsT = Aws::Vector<CmafIngestCaptionLanguageMapping>>
    void SetCaptionLanguageMappings(CaptionLanguageMappingsT&& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings = std::forward<CaptionLanguageMappingsT>(value); }
    template<typename CaptionLanguageMappingsT = Aws::Vector<CmafIngestCaptionLanguageMapping>>
    CmafIngestGroupSettings& WithCaptionLanguageMappings(CaptionLanguageMappingsT&& value) { SetCaptionLanguageMappings(std::forward<CaptionLanguageMappingsT>(value)); return *this;}
    template<typename CaptionLanguageMappingsT = CmafIngestCaptionLanguageMapping>
    CmafIngestGroupSettings& AddCaptionLanguageMappings(CaptionLanguageMappingsT&& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings.emplace_back(std::forward<CaptionLanguageMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Set to none if you don't want to insert a timecode in the output. Otherwise
     * choose the frame type for the timecode.
     */
    inline CmafTimedMetadataId3Frame GetTimedMetadataId3Frame() const { return m_timedMetadataId3Frame; }
    inline bool TimedMetadataId3FrameHasBeenSet() const { return m_timedMetadataId3FrameHasBeenSet; }
    inline void SetTimedMetadataId3Frame(CmafTimedMetadataId3Frame value) { m_timedMetadataId3FrameHasBeenSet = true; m_timedMetadataId3Frame = value; }
    inline CmafIngestGroupSettings& WithTimedMetadataId3Frame(CmafTimedMetadataId3Frame value) { SetTimedMetadataId3Frame(value); return *this;}
    ///@}

    ///@{
    /**
     * If you set up to insert a timecode in the output, specify the frequency for the
     * frame, in seconds.
     */
    inline int GetTimedMetadataId3Period() const { return m_timedMetadataId3Period; }
    inline bool TimedMetadataId3PeriodHasBeenSet() const { return m_timedMetadataId3PeriodHasBeenSet; }
    inline void SetTimedMetadataId3Period(int value) { m_timedMetadataId3PeriodHasBeenSet = true; m_timedMetadataId3Period = value; }
    inline CmafIngestGroupSettings& WithTimedMetadataId3Period(int value) { SetTimedMetadataId3Period(value); return *this;}
    ///@}

    ///@{
    /**
     * Set to enabled to pass through ID3 metadata from the input sources.
     */
    inline CmafTimedMetadataPassthrough GetTimedMetadataPassthrough() const { return m_timedMetadataPassthrough; }
    inline bool TimedMetadataPassthroughHasBeenSet() const { return m_timedMetadataPassthroughHasBeenSet; }
    inline void SetTimedMetadataPassthrough(CmafTimedMetadataPassthrough value) { m_timedMetadataPassthroughHasBeenSet = true; m_timedMetadataPassthrough = value; }
    inline CmafIngestGroupSettings& WithTimedMetadataPassthrough(CmafTimedMetadataPassthrough value) { SetTimedMetadataPassthrough(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional an array of additional destinational HTTP destinations for the
     * OutputGroup outputs
     */
    inline const Aws::Vector<AdditionalDestinations>& GetAdditionalDestinations() const { return m_additionalDestinations; }
    inline bool AdditionalDestinationsHasBeenSet() const { return m_additionalDestinationsHasBeenSet; }
    template<typename AdditionalDestinationsT = Aws::Vector<AdditionalDestinations>>
    void SetAdditionalDestinations(AdditionalDestinationsT&& value) { m_additionalDestinationsHasBeenSet = true; m_additionalDestinations = std::forward<AdditionalDestinationsT>(value); }
    template<typename AdditionalDestinationsT = Aws::Vector<AdditionalDestinations>>
    CmafIngestGroupSettings& WithAdditionalDestinations(AdditionalDestinationsT&& value) { SetAdditionalDestinations(std::forward<AdditionalDestinationsT>(value)); return *this;}
    template<typename AdditionalDestinationsT = AdditionalDestinations>
    CmafIngestGroupSettings& AddAdditionalDestinations(AdditionalDestinationsT&& value) { m_additionalDestinationsHasBeenSet = true; m_additionalDestinations.emplace_back(std::forward<AdditionalDestinationsT>(value)); return *this; }
    ///@}
  private:

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet = false;

    CmafNielsenId3Behavior m_nielsenId3Behavior{CmafNielsenId3Behavior::NOT_SET};
    bool m_nielsenId3BehaviorHasBeenSet = false;

    Scte35Type m_scte35Type{Scte35Type::NOT_SET};
    bool m_scte35TypeHasBeenSet = false;

    int m_segmentLength{0};
    bool m_segmentLengthHasBeenSet = false;

    CmafIngestSegmentLengthUnits m_segmentLengthUnits{CmafIngestSegmentLengthUnits::NOT_SET};
    bool m_segmentLengthUnitsHasBeenSet = false;

    int m_sendDelayMs{0};
    bool m_sendDelayMsHasBeenSet = false;

    CmafKLVBehavior m_klvBehavior{CmafKLVBehavior::NOT_SET};
    bool m_klvBehaviorHasBeenSet = false;

    Aws::String m_klvNameModifier;
    bool m_klvNameModifierHasBeenSet = false;

    Aws::String m_nielsenId3NameModifier;
    bool m_nielsenId3NameModifierHasBeenSet = false;

    Aws::String m_scte35NameModifier;
    bool m_scte35NameModifierHasBeenSet = false;

    CmafId3Behavior m_id3Behavior{CmafId3Behavior::NOT_SET};
    bool m_id3BehaviorHasBeenSet = false;

    Aws::String m_id3NameModifier;
    bool m_id3NameModifierHasBeenSet = false;

    Aws::Vector<CmafIngestCaptionLanguageMapping> m_captionLanguageMappings;
    bool m_captionLanguageMappingsHasBeenSet = false;

    CmafTimedMetadataId3Frame m_timedMetadataId3Frame{CmafTimedMetadataId3Frame::NOT_SET};
    bool m_timedMetadataId3FrameHasBeenSet = false;

    int m_timedMetadataId3Period{0};
    bool m_timedMetadataId3PeriodHasBeenSet = false;

    CmafTimedMetadataPassthrough m_timedMetadataPassthrough{CmafTimedMetadataPassthrough::NOT_SET};
    bool m_timedMetadataPassthroughHasBeenSet = false;

    Aws::Vector<AdditionalDestinations> m_additionalDestinations;
    bool m_additionalDestinationsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
