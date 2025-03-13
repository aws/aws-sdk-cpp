/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/SmoothGroupAudioOnlyTimecodeControl.h>
#include <aws/medialive/model/SmoothGroupCertificateMode.h>
#include <aws/medialive/model/OutputLocationRef.h>
#include <aws/medialive/model/SmoothGroupEventIdMode.h>
#include <aws/medialive/model/SmoothGroupEventStopBehavior.h>
#include <aws/medialive/model/InputLossActionForMsSmoothOut.h>
#include <aws/medialive/model/SmoothGroupSegmentationMode.h>
#include <aws/medialive/model/SmoothGroupSparseTrackType.h>
#include <aws/medialive/model/SmoothGroupStreamManifestBehavior.h>
#include <aws/medialive/model/SmoothGroupTimestampOffsetMode.h>
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
   * Ms Smooth Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MsSmoothGroupSettings">AWS
   * API Reference</a></p>
   */
  class MsSmoothGroupSettings
  {
  public:
    AWS_MEDIALIVE_API MsSmoothGroupSettings() = default;
    AWS_MEDIALIVE_API MsSmoothGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MsSmoothGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ID to include in each message in the sparse track. Ignored if
     * sparseTrackType is NONE.
     */
    inline const Aws::String& GetAcquisitionPointId() const { return m_acquisitionPointId; }
    inline bool AcquisitionPointIdHasBeenSet() const { return m_acquisitionPointIdHasBeenSet; }
    template<typename AcquisitionPointIdT = Aws::String>
    void SetAcquisitionPointId(AcquisitionPointIdT&& value) { m_acquisitionPointIdHasBeenSet = true; m_acquisitionPointId = std::forward<AcquisitionPointIdT>(value); }
    template<typename AcquisitionPointIdT = Aws::String>
    MsSmoothGroupSettings& WithAcquisitionPointId(AcquisitionPointIdT&& value) { SetAcquisitionPointId(std::forward<AcquisitionPointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If set to passthrough for an audio-only MS Smooth output, the fragment absolute
     * time will be set to the current timecode. This option does not write timecodes
     * to the audio elementary stream.
     */
    inline SmoothGroupAudioOnlyTimecodeControl GetAudioOnlyTimecodeControl() const { return m_audioOnlyTimecodeControl; }
    inline bool AudioOnlyTimecodeControlHasBeenSet() const { return m_audioOnlyTimecodeControlHasBeenSet; }
    inline void SetAudioOnlyTimecodeControl(SmoothGroupAudioOnlyTimecodeControl value) { m_audioOnlyTimecodeControlHasBeenSet = true; m_audioOnlyTimecodeControl = value; }
    inline MsSmoothGroupSettings& WithAudioOnlyTimecodeControl(SmoothGroupAudioOnlyTimecodeControl value) { SetAudioOnlyTimecodeControl(value); return *this;}
    ///@}

    ///@{
    /**
     * If set to verifyAuthenticity, verify the https certificate chain to a trusted
     * Certificate Authority (CA).  This will cause https outputs to self-signed
     * certificates to fail.
     */
    inline SmoothGroupCertificateMode GetCertificateMode() const { return m_certificateMode; }
    inline bool CertificateModeHasBeenSet() const { return m_certificateModeHasBeenSet; }
    inline void SetCertificateMode(SmoothGroupCertificateMode value) { m_certificateModeHasBeenSet = true; m_certificateMode = value; }
    inline MsSmoothGroupSettings& WithCertificateMode(SmoothGroupCertificateMode value) { SetCertificateMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of seconds to wait before retrying connection to the IIS server if the
     * connection is lost. Content will be cached during this time and the cache will
     * be be delivered to the IIS server once the connection is re-established.
     */
    inline int GetConnectionRetryInterval() const { return m_connectionRetryInterval; }
    inline bool ConnectionRetryIntervalHasBeenSet() const { return m_connectionRetryIntervalHasBeenSet; }
    inline void SetConnectionRetryInterval(int value) { m_connectionRetryIntervalHasBeenSet = true; m_connectionRetryInterval = value; }
    inline MsSmoothGroupSettings& WithConnectionRetryInterval(int value) { SetConnectionRetryInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Smooth Streaming publish point on an IIS server. Elemental Live acts as a "Push"
     * encoder to IIS.
     */
    inline const OutputLocationRef& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = OutputLocationRef>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = OutputLocationRef>
    MsSmoothGroupSettings& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * MS Smooth event ID to be sent to the IIS server.

Should only be specified if
     * eventIdMode is set to useConfigured.
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    MsSmoothGroupSettings& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies whether or not to send an event ID to the IIS server. If no event ID
     * is sent and the same Live Event is used without changing the publishing point,
     * clients might see cached video from the previous run.

Options:
-
     * "useConfigured" - use the value provided in eventId
- "useTimestamp" - generate
     * and send an event ID based on the current timestamp
- "noEventId" - do not send
     * an event ID to the IIS server.
     */
    inline SmoothGroupEventIdMode GetEventIdMode() const { return m_eventIdMode; }
    inline bool EventIdModeHasBeenSet() const { return m_eventIdModeHasBeenSet; }
    inline void SetEventIdMode(SmoothGroupEventIdMode value) { m_eventIdModeHasBeenSet = true; m_eventIdMode = value; }
    inline MsSmoothGroupSettings& WithEventIdMode(SmoothGroupEventIdMode value) { SetEventIdMode(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to sendEos, send EOS signal to IIS server when stopping the event
     */
    inline SmoothGroupEventStopBehavior GetEventStopBehavior() const { return m_eventStopBehavior; }
    inline bool EventStopBehaviorHasBeenSet() const { return m_eventStopBehaviorHasBeenSet; }
    inline void SetEventStopBehavior(SmoothGroupEventStopBehavior value) { m_eventStopBehaviorHasBeenSet = true; m_eventStopBehavior = value; }
    inline MsSmoothGroupSettings& WithEventStopBehavior(SmoothGroupEventStopBehavior value) { SetEventStopBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * Size in seconds of file cache for streaming outputs.
     */
    inline int GetFilecacheDuration() const { return m_filecacheDuration; }
    inline bool FilecacheDurationHasBeenSet() const { return m_filecacheDurationHasBeenSet; }
    inline void SetFilecacheDuration(int value) { m_filecacheDurationHasBeenSet = true; m_filecacheDuration = value; }
    inline MsSmoothGroupSettings& WithFilecacheDuration(int value) { SetFilecacheDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * Length of mp4 fragments to generate (in seconds). Fragment length must be
     * compatible with GOP size and framerate.
     */
    inline int GetFragmentLength() const { return m_fragmentLength; }
    inline bool FragmentLengthHasBeenSet() const { return m_fragmentLengthHasBeenSet; }
    inline void SetFragmentLength(int value) { m_fragmentLengthHasBeenSet = true; m_fragmentLength = value; }
    inline MsSmoothGroupSettings& WithFragmentLength(int value) { SetFragmentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * Parameter that control output group behavior on input loss.
     */
    inline InputLossActionForMsSmoothOut GetInputLossAction() const { return m_inputLossAction; }
    inline bool InputLossActionHasBeenSet() const { return m_inputLossActionHasBeenSet; }
    inline void SetInputLossAction(InputLossActionForMsSmoothOut value) { m_inputLossActionHasBeenSet = true; m_inputLossAction = value; }
    inline MsSmoothGroupSettings& WithInputLossAction(InputLossActionForMsSmoothOut value) { SetInputLossAction(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of retry attempts.
     */
    inline int GetNumRetries() const { return m_numRetries; }
    inline bool NumRetriesHasBeenSet() const { return m_numRetriesHasBeenSet; }
    inline void SetNumRetries(int value) { m_numRetriesHasBeenSet = true; m_numRetries = value; }
    inline MsSmoothGroupSettings& WithNumRetries(int value) { SetNumRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of seconds before initiating a restart due to output failure, due to
     * exhausting the numRetries on one segment, or exceeding filecacheDuration.
     */
    inline int GetRestartDelay() const { return m_restartDelay; }
    inline bool RestartDelayHasBeenSet() const { return m_restartDelayHasBeenSet; }
    inline void SetRestartDelay(int value) { m_restartDelayHasBeenSet = true; m_restartDelay = value; }
    inline MsSmoothGroupSettings& WithRestartDelay(int value) { SetRestartDelay(value); return *this;}
    ///@}

    ///@{
    /**
     * useInputSegmentation has been deprecated. The configured segment size is always
     * used.
     */
    inline SmoothGroupSegmentationMode GetSegmentationMode() const { return m_segmentationMode; }
    inline bool SegmentationModeHasBeenSet() const { return m_segmentationModeHasBeenSet; }
    inline void SetSegmentationMode(SmoothGroupSegmentationMode value) { m_segmentationModeHasBeenSet = true; m_segmentationMode = value; }
    inline MsSmoothGroupSettings& WithSegmentationMode(SmoothGroupSegmentationMode value) { SetSegmentationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of milliseconds to delay the output from the second pipeline.
     */
    inline int GetSendDelayMs() const { return m_sendDelayMs; }
    inline bool SendDelayMsHasBeenSet() const { return m_sendDelayMsHasBeenSet; }
    inline void SetSendDelayMs(int value) { m_sendDelayMsHasBeenSet = true; m_sendDelayMs = value; }
    inline MsSmoothGroupSettings& WithSendDelayMs(int value) { SetSendDelayMs(value); return *this;}
    ///@}

    ///@{
    /**
     * Identifies the type of data to place in the sparse track:
- SCTE35: Insert
     * SCTE-35 messages from the source content. With each message, insert an IDR frame
     * to start a new segment.
- SCTE35_WITHOUT_SEGMENTATION: Insert SCTE-35 messages
     * from the source content. With each message, insert an IDR frame but don't start
     * a new segment.
- NONE: Don't generate a sparse track for any outputs in this
     * output group.
     */
    inline SmoothGroupSparseTrackType GetSparseTrackType() const { return m_sparseTrackType; }
    inline bool SparseTrackTypeHasBeenSet() const { return m_sparseTrackTypeHasBeenSet; }
    inline void SetSparseTrackType(SmoothGroupSparseTrackType value) { m_sparseTrackTypeHasBeenSet = true; m_sparseTrackType = value; }
    inline MsSmoothGroupSettings& WithSparseTrackType(SmoothGroupSparseTrackType value) { SetSparseTrackType(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to send, send stream manifest so publishing point doesn't start until
     * all streams start.
     */
    inline SmoothGroupStreamManifestBehavior GetStreamManifestBehavior() const { return m_streamManifestBehavior; }
    inline bool StreamManifestBehaviorHasBeenSet() const { return m_streamManifestBehaviorHasBeenSet; }
    inline void SetStreamManifestBehavior(SmoothGroupStreamManifestBehavior value) { m_streamManifestBehaviorHasBeenSet = true; m_streamManifestBehavior = value; }
    inline MsSmoothGroupSettings& WithStreamManifestBehavior(SmoothGroupStreamManifestBehavior value) { SetStreamManifestBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * Timestamp offset for the event.  Only used if timestampOffsetMode is set to
     * useConfiguredOffset.
     */
    inline const Aws::String& GetTimestampOffset() const { return m_timestampOffset; }
    inline bool TimestampOffsetHasBeenSet() const { return m_timestampOffsetHasBeenSet; }
    template<typename TimestampOffsetT = Aws::String>
    void SetTimestampOffset(TimestampOffsetT&& value) { m_timestampOffsetHasBeenSet = true; m_timestampOffset = std::forward<TimestampOffsetT>(value); }
    template<typename TimestampOffsetT = Aws::String>
    MsSmoothGroupSettings& WithTimestampOffset(TimestampOffsetT&& value) { SetTimestampOffset(std::forward<TimestampOffsetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Type of timestamp date offset to use.
- useEventStartDate: Use the date the
     * event was started as the offset
- useConfiguredOffset: Use an explicitly
     * configured date as the offset
     */
    inline SmoothGroupTimestampOffsetMode GetTimestampOffsetMode() const { return m_timestampOffsetMode; }
    inline bool TimestampOffsetModeHasBeenSet() const { return m_timestampOffsetModeHasBeenSet; }
    inline void SetTimestampOffsetMode(SmoothGroupTimestampOffsetMode value) { m_timestampOffsetModeHasBeenSet = true; m_timestampOffsetMode = value; }
    inline MsSmoothGroupSettings& WithTimestampOffsetMode(SmoothGroupTimestampOffsetMode value) { SetTimestampOffsetMode(value); return *this;}
    ///@}
  private:

    Aws::String m_acquisitionPointId;
    bool m_acquisitionPointIdHasBeenSet = false;

    SmoothGroupAudioOnlyTimecodeControl m_audioOnlyTimecodeControl{SmoothGroupAudioOnlyTimecodeControl::NOT_SET};
    bool m_audioOnlyTimecodeControlHasBeenSet = false;

    SmoothGroupCertificateMode m_certificateMode{SmoothGroupCertificateMode::NOT_SET};
    bool m_certificateModeHasBeenSet = false;

    int m_connectionRetryInterval{0};
    bool m_connectionRetryIntervalHasBeenSet = false;

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    SmoothGroupEventIdMode m_eventIdMode{SmoothGroupEventIdMode::NOT_SET};
    bool m_eventIdModeHasBeenSet = false;

    SmoothGroupEventStopBehavior m_eventStopBehavior{SmoothGroupEventStopBehavior::NOT_SET};
    bool m_eventStopBehaviorHasBeenSet = false;

    int m_filecacheDuration{0};
    bool m_filecacheDurationHasBeenSet = false;

    int m_fragmentLength{0};
    bool m_fragmentLengthHasBeenSet = false;

    InputLossActionForMsSmoothOut m_inputLossAction{InputLossActionForMsSmoothOut::NOT_SET};
    bool m_inputLossActionHasBeenSet = false;

    int m_numRetries{0};
    bool m_numRetriesHasBeenSet = false;

    int m_restartDelay{0};
    bool m_restartDelayHasBeenSet = false;

    SmoothGroupSegmentationMode m_segmentationMode{SmoothGroupSegmentationMode::NOT_SET};
    bool m_segmentationModeHasBeenSet = false;

    int m_sendDelayMs{0};
    bool m_sendDelayMsHasBeenSet = false;

    SmoothGroupSparseTrackType m_sparseTrackType{SmoothGroupSparseTrackType::NOT_SET};
    bool m_sparseTrackTypeHasBeenSet = false;

    SmoothGroupStreamManifestBehavior m_streamManifestBehavior{SmoothGroupStreamManifestBehavior::NOT_SET};
    bool m_streamManifestBehaviorHasBeenSet = false;

    Aws::String m_timestampOffset;
    bool m_timestampOffsetHasBeenSet = false;

    SmoothGroupTimestampOffsetMode m_timestampOffsetMode{SmoothGroupTimestampOffsetMode::NOT_SET};
    bool m_timestampOffsetModeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
