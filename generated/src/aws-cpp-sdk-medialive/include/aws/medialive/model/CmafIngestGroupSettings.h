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
    AWS_MEDIALIVE_API CmafIngestGroupSettings();
    AWS_MEDIALIVE_API CmafIngestGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API CmafIngestGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A HTTP destination for the tracks
     */
    inline const OutputLocationRef& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const OutputLocationRef& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(OutputLocationRef&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline CmafIngestGroupSettings& WithDestination(const OutputLocationRef& value) { SetDestination(value); return *this;}
    inline CmafIngestGroupSettings& WithDestination(OutputLocationRef&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline const CmafNielsenId3Behavior& GetNielsenId3Behavior() const{ return m_nielsenId3Behavior; }
    inline bool NielsenId3BehaviorHasBeenSet() const { return m_nielsenId3BehaviorHasBeenSet; }
    inline void SetNielsenId3Behavior(const CmafNielsenId3Behavior& value) { m_nielsenId3BehaviorHasBeenSet = true; m_nielsenId3Behavior = value; }
    inline void SetNielsenId3Behavior(CmafNielsenId3Behavior&& value) { m_nielsenId3BehaviorHasBeenSet = true; m_nielsenId3Behavior = std::move(value); }
    inline CmafIngestGroupSettings& WithNielsenId3Behavior(const CmafNielsenId3Behavior& value) { SetNielsenId3Behavior(value); return *this;}
    inline CmafIngestGroupSettings& WithNielsenId3Behavior(CmafNielsenId3Behavior&& value) { SetNielsenId3Behavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Type of scte35 track to add. none or scte35WithoutSegmentation
     */
    inline const Scte35Type& GetScte35Type() const{ return m_scte35Type; }
    inline bool Scte35TypeHasBeenSet() const { return m_scte35TypeHasBeenSet; }
    inline void SetScte35Type(const Scte35Type& value) { m_scte35TypeHasBeenSet = true; m_scte35Type = value; }
    inline void SetScte35Type(Scte35Type&& value) { m_scte35TypeHasBeenSet = true; m_scte35Type = std::move(value); }
    inline CmafIngestGroupSettings& WithScte35Type(const Scte35Type& value) { SetScte35Type(value); return *this;}
    inline CmafIngestGroupSettings& WithScte35Type(Scte35Type&& value) { SetScte35Type(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The nominal duration of segments. The units are specified in SegmentLengthUnits.
     * The segments will end on the next keyframe after the specified duration, so the
     * actual segment length might be longer, and it might be a fraction of the units.
     */
    inline int GetSegmentLength() const{ return m_segmentLength; }
    inline bool SegmentLengthHasBeenSet() const { return m_segmentLengthHasBeenSet; }
    inline void SetSegmentLength(int value) { m_segmentLengthHasBeenSet = true; m_segmentLength = value; }
    inline CmafIngestGroupSettings& WithSegmentLength(int value) { SetSegmentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * Time unit for segment length parameter.
     */
    inline const CmafIngestSegmentLengthUnits& GetSegmentLengthUnits() const{ return m_segmentLengthUnits; }
    inline bool SegmentLengthUnitsHasBeenSet() const { return m_segmentLengthUnitsHasBeenSet; }
    inline void SetSegmentLengthUnits(const CmafIngestSegmentLengthUnits& value) { m_segmentLengthUnitsHasBeenSet = true; m_segmentLengthUnits = value; }
    inline void SetSegmentLengthUnits(CmafIngestSegmentLengthUnits&& value) { m_segmentLengthUnitsHasBeenSet = true; m_segmentLengthUnits = std::move(value); }
    inline CmafIngestGroupSettings& WithSegmentLengthUnits(const CmafIngestSegmentLengthUnits& value) { SetSegmentLengthUnits(value); return *this;}
    inline CmafIngestGroupSettings& WithSegmentLengthUnits(CmafIngestSegmentLengthUnits&& value) { SetSegmentLengthUnits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Number of milliseconds to delay the output from the second pipeline.
     */
    inline int GetSendDelayMs() const{ return m_sendDelayMs; }
    inline bool SendDelayMsHasBeenSet() const { return m_sendDelayMsHasBeenSet; }
    inline void SetSendDelayMs(int value) { m_sendDelayMsHasBeenSet = true; m_sendDelayMs = value; }
    inline CmafIngestGroupSettings& WithSendDelayMs(int value) { SetSendDelayMs(value); return *this;}
    ///@}

    ///@{
    /**
     * If set to passthrough, passes any KLV data from the input source to this output.
     */
    inline const CmafKLVBehavior& GetKlvBehavior() const{ return m_klvBehavior; }
    inline bool KlvBehaviorHasBeenSet() const { return m_klvBehaviorHasBeenSet; }
    inline void SetKlvBehavior(const CmafKLVBehavior& value) { m_klvBehaviorHasBeenSet = true; m_klvBehavior = value; }
    inline void SetKlvBehavior(CmafKLVBehavior&& value) { m_klvBehaviorHasBeenSet = true; m_klvBehavior = std::move(value); }
    inline CmafIngestGroupSettings& WithKlvBehavior(const CmafKLVBehavior& value) { SetKlvBehavior(value); return *this;}
    inline CmafIngestGroupSettings& WithKlvBehavior(CmafKLVBehavior&& value) { SetKlvBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Change the modifier that MediaLive automatically adds to the Streams() name that
     * identifies a KLV track. The default is "klv", which means the default name will
     * be Streams(klv.cmfm). Any string you enter here will replace the "klv"
     * string.\nThe modifier can only contain: numbers, letters, plus (+), minus (-),
     * underscore (_) and period (.) and has a maximum length of 100 characters.
     */
    inline const Aws::String& GetKlvNameModifier() const{ return m_klvNameModifier; }
    inline bool KlvNameModifierHasBeenSet() const { return m_klvNameModifierHasBeenSet; }
    inline void SetKlvNameModifier(const Aws::String& value) { m_klvNameModifierHasBeenSet = true; m_klvNameModifier = value; }
    inline void SetKlvNameModifier(Aws::String&& value) { m_klvNameModifierHasBeenSet = true; m_klvNameModifier = std::move(value); }
    inline void SetKlvNameModifier(const char* value) { m_klvNameModifierHasBeenSet = true; m_klvNameModifier.assign(value); }
    inline CmafIngestGroupSettings& WithKlvNameModifier(const Aws::String& value) { SetKlvNameModifier(value); return *this;}
    inline CmafIngestGroupSettings& WithKlvNameModifier(Aws::String&& value) { SetKlvNameModifier(std::move(value)); return *this;}
    inline CmafIngestGroupSettings& WithKlvNameModifier(const char* value) { SetKlvNameModifier(value); return *this;}
    ///@}

    ///@{
    /**
     * Change the modifier that MediaLive automatically adds to the Streams() name that
     * identifies a Nielsen ID3 track. The default is "nid3", which means the default
     * name will be Streams(nid3.cmfm). Any string you enter here will replace the
     * "nid3" string.\nThe modifier can only contain: numbers, letters, plus (+), minus
     * (-), underscore (_) and period (.) and has a maximum length of 100 characters.
     */
    inline const Aws::String& GetNielsenId3NameModifier() const{ return m_nielsenId3NameModifier; }
    inline bool NielsenId3NameModifierHasBeenSet() const { return m_nielsenId3NameModifierHasBeenSet; }
    inline void SetNielsenId3NameModifier(const Aws::String& value) { m_nielsenId3NameModifierHasBeenSet = true; m_nielsenId3NameModifier = value; }
    inline void SetNielsenId3NameModifier(Aws::String&& value) { m_nielsenId3NameModifierHasBeenSet = true; m_nielsenId3NameModifier = std::move(value); }
    inline void SetNielsenId3NameModifier(const char* value) { m_nielsenId3NameModifierHasBeenSet = true; m_nielsenId3NameModifier.assign(value); }
    inline CmafIngestGroupSettings& WithNielsenId3NameModifier(const Aws::String& value) { SetNielsenId3NameModifier(value); return *this;}
    inline CmafIngestGroupSettings& WithNielsenId3NameModifier(Aws::String&& value) { SetNielsenId3NameModifier(std::move(value)); return *this;}
    inline CmafIngestGroupSettings& WithNielsenId3NameModifier(const char* value) { SetNielsenId3NameModifier(value); return *this;}
    ///@}

    ///@{
    /**
     * Change the modifier that MediaLive automatically adds to the Streams() name for
     * a SCTE 35 track. The default is "scte", which means the default name will be
     * Streams(scte.cmfm). Any string you enter here will replace the "scte"
     * string.\nThe modifier can only contain: numbers, letters, plus (+), minus (-),
     * underscore (_) and period (.) and has a maximum length of 100 characters.
     */
    inline const Aws::String& GetScte35NameModifier() const{ return m_scte35NameModifier; }
    inline bool Scte35NameModifierHasBeenSet() const { return m_scte35NameModifierHasBeenSet; }
    inline void SetScte35NameModifier(const Aws::String& value) { m_scte35NameModifierHasBeenSet = true; m_scte35NameModifier = value; }
    inline void SetScte35NameModifier(Aws::String&& value) { m_scte35NameModifierHasBeenSet = true; m_scte35NameModifier = std::move(value); }
    inline void SetScte35NameModifier(const char* value) { m_scte35NameModifierHasBeenSet = true; m_scte35NameModifier.assign(value); }
    inline CmafIngestGroupSettings& WithScte35NameModifier(const Aws::String& value) { SetScte35NameModifier(value); return *this;}
    inline CmafIngestGroupSettings& WithScte35NameModifier(Aws::String&& value) { SetScte35NameModifier(std::move(value)); return *this;}
    inline CmafIngestGroupSettings& WithScte35NameModifier(const char* value) { SetScte35NameModifier(value); return *this;}
    ///@}
  private:

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet = false;

    CmafNielsenId3Behavior m_nielsenId3Behavior;
    bool m_nielsenId3BehaviorHasBeenSet = false;

    Scte35Type m_scte35Type;
    bool m_scte35TypeHasBeenSet = false;

    int m_segmentLength;
    bool m_segmentLengthHasBeenSet = false;

    CmafIngestSegmentLengthUnits m_segmentLengthUnits;
    bool m_segmentLengthUnitsHasBeenSet = false;

    int m_sendDelayMs;
    bool m_sendDelayMsHasBeenSet = false;

    CmafKLVBehavior m_klvBehavior;
    bool m_klvBehaviorHasBeenSet = false;

    Aws::String m_klvNameModifier;
    bool m_klvNameModifierHasBeenSet = false;

    Aws::String m_nielsenId3NameModifier;
    bool m_nielsenId3NameModifierHasBeenSet = false;

    Aws::String m_scte35NameModifier;
    bool m_scte35NameModifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
