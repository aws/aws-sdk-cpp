/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputLossActionForUdpOut.h>
#include <aws/medialive/model/UdpTimedMetadataId3Frame.h>
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
   * Udp Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UdpGroupSettings">AWS
   * API Reference</a></p>
   */
  class UdpGroupSettings
  {
  public:
    AWS_MEDIALIVE_API UdpGroupSettings() = default;
    AWS_MEDIALIVE_API UdpGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API UdpGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specifies behavior of last resort when input video is lost, and no more backup
     * inputs are available. When dropTs is selected the entire transport stream will
     * stop being emitted.  When dropProgram is selected the program can be dropped
     * from the transport stream (and replaced with null packets to meet the TS bitrate
     * requirement).  Or, when emitProgram is chosen the transport stream will continue
     * to be produced normally with repeat frames, black frames, or slate frames
     * substituted for the absent input video.
     */
    inline InputLossActionForUdpOut GetInputLossAction() const { return m_inputLossAction; }
    inline bool InputLossActionHasBeenSet() const { return m_inputLossActionHasBeenSet; }
    inline void SetInputLossAction(InputLossActionForUdpOut value) { m_inputLossActionHasBeenSet = true; m_inputLossAction = value; }
    inline UdpGroupSettings& WithInputLossAction(InputLossActionForUdpOut value) { SetInputLossAction(value); return *this;}
    ///@}

    ///@{
    /**
     * Indicates ID3 frame that has the timecode.
     */
    inline UdpTimedMetadataId3Frame GetTimedMetadataId3Frame() const { return m_timedMetadataId3Frame; }
    inline bool TimedMetadataId3FrameHasBeenSet() const { return m_timedMetadataId3FrameHasBeenSet; }
    inline void SetTimedMetadataId3Frame(UdpTimedMetadataId3Frame value) { m_timedMetadataId3FrameHasBeenSet = true; m_timedMetadataId3Frame = value; }
    inline UdpGroupSettings& WithTimedMetadataId3Frame(UdpTimedMetadataId3Frame value) { SetTimedMetadataId3Frame(value); return *this;}
    ///@}

    ///@{
    /**
     * Timed Metadata interval in seconds.
     */
    inline int GetTimedMetadataId3Period() const { return m_timedMetadataId3Period; }
    inline bool TimedMetadataId3PeriodHasBeenSet() const { return m_timedMetadataId3PeriodHasBeenSet; }
    inline void SetTimedMetadataId3Period(int value) { m_timedMetadataId3PeriodHasBeenSet = true; m_timedMetadataId3Period = value; }
    inline UdpGroupSettings& WithTimedMetadataId3Period(int value) { SetTimedMetadataId3Period(value); return *this;}
    ///@}
  private:

    InputLossActionForUdpOut m_inputLossAction{InputLossActionForUdpOut::NOT_SET};
    bool m_inputLossActionHasBeenSet = false;

    UdpTimedMetadataId3Frame m_timedMetadataId3Frame{UdpTimedMetadataId3Frame::NOT_SET};
    bool m_timedMetadataId3FrameHasBeenSet = false;

    int m_timedMetadataId3Period{0};
    bool m_timedMetadataId3PeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
