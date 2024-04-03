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


    /**
     * A HTTP destination for the tracks
     */
    inline const OutputLocationRef& GetDestination() const{ return m_destination; }

    /**
     * A HTTP destination for the tracks
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * A HTTP destination for the tracks
     */
    inline void SetDestination(const OutputLocationRef& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * A HTTP destination for the tracks
     */
    inline void SetDestination(OutputLocationRef&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * A HTTP destination for the tracks
     */
    inline CmafIngestGroupSettings& WithDestination(const OutputLocationRef& value) { SetDestination(value); return *this;}

    /**
     * A HTTP destination for the tracks
     */
    inline CmafIngestGroupSettings& WithDestination(OutputLocationRef&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline const CmafNielsenId3Behavior& GetNielsenId3Behavior() const{ return m_nielsenId3Behavior; }

    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline bool NielsenId3BehaviorHasBeenSet() const { return m_nielsenId3BehaviorHasBeenSet; }

    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline void SetNielsenId3Behavior(const CmafNielsenId3Behavior& value) { m_nielsenId3BehaviorHasBeenSet = true; m_nielsenId3Behavior = value; }

    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline void SetNielsenId3Behavior(CmafNielsenId3Behavior&& value) { m_nielsenId3BehaviorHasBeenSet = true; m_nielsenId3Behavior = std::move(value); }

    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline CmafIngestGroupSettings& WithNielsenId3Behavior(const CmafNielsenId3Behavior& value) { SetNielsenId3Behavior(value); return *this;}

    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline CmafIngestGroupSettings& WithNielsenId3Behavior(CmafNielsenId3Behavior&& value) { SetNielsenId3Behavior(std::move(value)); return *this;}


    /**
     * Type of scte35 track to add. none or scte35WithoutSegmentation
     */
    inline const Scte35Type& GetScte35Type() const{ return m_scte35Type; }

    /**
     * Type of scte35 track to add. none or scte35WithoutSegmentation
     */
    inline bool Scte35TypeHasBeenSet() const { return m_scte35TypeHasBeenSet; }

    /**
     * Type of scte35 track to add. none or scte35WithoutSegmentation
     */
    inline void SetScte35Type(const Scte35Type& value) { m_scte35TypeHasBeenSet = true; m_scte35Type = value; }

    /**
     * Type of scte35 track to add. none or scte35WithoutSegmentation
     */
    inline void SetScte35Type(Scte35Type&& value) { m_scte35TypeHasBeenSet = true; m_scte35Type = std::move(value); }

    /**
     * Type of scte35 track to add. none or scte35WithoutSegmentation
     */
    inline CmafIngestGroupSettings& WithScte35Type(const Scte35Type& value) { SetScte35Type(value); return *this;}

    /**
     * Type of scte35 track to add. none or scte35WithoutSegmentation
     */
    inline CmafIngestGroupSettings& WithScte35Type(Scte35Type&& value) { SetScte35Type(std::move(value)); return *this;}


    /**
     * The nominal duration of segments. The units are specified in SegmentLengthUnits.
     * The segments will end on the next keyframe after the specified duration, so the
     * actual segment length might be longer, and it might be a fraction of the units.
     */
    inline int GetSegmentLength() const{ return m_segmentLength; }

    /**
     * The nominal duration of segments. The units are specified in SegmentLengthUnits.
     * The segments will end on the next keyframe after the specified duration, so the
     * actual segment length might be longer, and it might be a fraction of the units.
     */
    inline bool SegmentLengthHasBeenSet() const { return m_segmentLengthHasBeenSet; }

    /**
     * The nominal duration of segments. The units are specified in SegmentLengthUnits.
     * The segments will end on the next keyframe after the specified duration, so the
     * actual segment length might be longer, and it might be a fraction of the units.
     */
    inline void SetSegmentLength(int value) { m_segmentLengthHasBeenSet = true; m_segmentLength = value; }

    /**
     * The nominal duration of segments. The units are specified in SegmentLengthUnits.
     * The segments will end on the next keyframe after the specified duration, so the
     * actual segment length might be longer, and it might be a fraction of the units.
     */
    inline CmafIngestGroupSettings& WithSegmentLength(int value) { SetSegmentLength(value); return *this;}


    /**
     * Time unit for segment length parameter.
     */
    inline const CmafIngestSegmentLengthUnits& GetSegmentLengthUnits() const{ return m_segmentLengthUnits; }

    /**
     * Time unit for segment length parameter.
     */
    inline bool SegmentLengthUnitsHasBeenSet() const { return m_segmentLengthUnitsHasBeenSet; }

    /**
     * Time unit for segment length parameter.
     */
    inline void SetSegmentLengthUnits(const CmafIngestSegmentLengthUnits& value) { m_segmentLengthUnitsHasBeenSet = true; m_segmentLengthUnits = value; }

    /**
     * Time unit for segment length parameter.
     */
    inline void SetSegmentLengthUnits(CmafIngestSegmentLengthUnits&& value) { m_segmentLengthUnitsHasBeenSet = true; m_segmentLengthUnits = std::move(value); }

    /**
     * Time unit for segment length parameter.
     */
    inline CmafIngestGroupSettings& WithSegmentLengthUnits(const CmafIngestSegmentLengthUnits& value) { SetSegmentLengthUnits(value); return *this;}

    /**
     * Time unit for segment length parameter.
     */
    inline CmafIngestGroupSettings& WithSegmentLengthUnits(CmafIngestSegmentLengthUnits&& value) { SetSegmentLengthUnits(std::move(value)); return *this;}


    /**
     * Number of milliseconds to delay the output from the second pipeline.
     */
    inline int GetSendDelayMs() const{ return m_sendDelayMs; }

    /**
     * Number of milliseconds to delay the output from the second pipeline.
     */
    inline bool SendDelayMsHasBeenSet() const { return m_sendDelayMsHasBeenSet; }

    /**
     * Number of milliseconds to delay the output from the second pipeline.
     */
    inline void SetSendDelayMs(int value) { m_sendDelayMsHasBeenSet = true; m_sendDelayMs = value; }

    /**
     * Number of milliseconds to delay the output from the second pipeline.
     */
    inline CmafIngestGroupSettings& WithSendDelayMs(int value) { SetSendDelayMs(value); return *this;}

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
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
