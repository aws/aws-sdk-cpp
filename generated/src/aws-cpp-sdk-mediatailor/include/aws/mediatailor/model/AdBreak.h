/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/MessageType.h>
#include <aws/mediatailor/model/SlateSource.h>
#include <aws/mediatailor/model/SpliceInsertMessage.h>
#include <aws/mediatailor/model/TimeSignalMessage.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/KeyValuePair.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>Ad break configuration parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/AdBreak">AWS
   * API Reference</a></p>
   */
  class AdBreak
  {
  public:
    AWS_MEDIATAILOR_API AdBreak() = default;
    AWS_MEDIATAILOR_API AdBreak(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API AdBreak& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SCTE-35 ad insertion type. Accepted value: <code>SPLICE_INSERT</code>,
     * <code>TIME_SIGNAL</code>.</p>
     */
    inline MessageType GetMessageType() const { return m_messageType; }
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }
    inline void SetMessageType(MessageType value) { m_messageTypeHasBeenSet = true; m_messageType = value; }
    inline AdBreak& WithMessageType(MessageType value) { SetMessageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long (in milliseconds) after the beginning of the program that an ad
     * starts. This value must fall within 100ms of a segment boundary, otherwise the
     * ad break will be skipped.</p>
     */
    inline long long GetOffsetMillis() const { return m_offsetMillis; }
    inline bool OffsetMillisHasBeenSet() const { return m_offsetMillisHasBeenSet; }
    inline void SetOffsetMillis(long long value) { m_offsetMillisHasBeenSet = true; m_offsetMillis = value; }
    inline AdBreak& WithOffsetMillis(long long value) { SetOffsetMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ad break slate configuration.</p>
     */
    inline const SlateSource& GetSlate() const { return m_slate; }
    inline bool SlateHasBeenSet() const { return m_slateHasBeenSet; }
    template<typename SlateT = SlateSource>
    void SetSlate(SlateT&& value) { m_slateHasBeenSet = true; m_slate = std::forward<SlateT>(value); }
    template<typename SlateT = SlateSource>
    AdBreak& WithSlate(SlateT&& value) { SetSlate(std::forward<SlateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This defines the SCTE-35 <code>splice_insert()</code> message inserted around
     * the ad. For information about using <code>splice_insert()</code>, see the
     * SCTE-35 specficiaiton, section 9.7.3.1.</p>
     */
    inline const SpliceInsertMessage& GetSpliceInsertMessage() const { return m_spliceInsertMessage; }
    inline bool SpliceInsertMessageHasBeenSet() const { return m_spliceInsertMessageHasBeenSet; }
    template<typename SpliceInsertMessageT = SpliceInsertMessage>
    void SetSpliceInsertMessage(SpliceInsertMessageT&& value) { m_spliceInsertMessageHasBeenSet = true; m_spliceInsertMessage = std::forward<SpliceInsertMessageT>(value); }
    template<typename SpliceInsertMessageT = SpliceInsertMessage>
    AdBreak& WithSpliceInsertMessage(SpliceInsertMessageT&& value) { SetSpliceInsertMessage(std::forward<SpliceInsertMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the SCTE-35 <code>time_signal</code> message inserted around the
     * ad.</p> <p>Programs on a channel's schedule can be configured with one or more
     * ad breaks. You can attach a <code>splice_insert</code> SCTE-35 message to the ad
     * break. This message provides basic metadata about the ad break.</p> <p>See
     * section 9.7.4 of the 2022 SCTE-35 specification for more information.</p>
     */
    inline const TimeSignalMessage& GetTimeSignalMessage() const { return m_timeSignalMessage; }
    inline bool TimeSignalMessageHasBeenSet() const { return m_timeSignalMessageHasBeenSet; }
    template<typename TimeSignalMessageT = TimeSignalMessage>
    void SetTimeSignalMessage(TimeSignalMessageT&& value) { m_timeSignalMessageHasBeenSet = true; m_timeSignalMessage = std::forward<TimeSignalMessageT>(value); }
    template<typename TimeSignalMessageT = TimeSignalMessage>
    AdBreak& WithTimeSignalMessage(TimeSignalMessageT&& value) { SetTimeSignalMessage(std::forward<TimeSignalMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines a list of key/value pairs that MediaTailor generates within the
     * <code>EXT-X-ASSET</code>tag for <code>SCTE35_ENHANCED</code> output.</p>
     */
    inline const Aws::Vector<KeyValuePair>& GetAdBreakMetadata() const { return m_adBreakMetadata; }
    inline bool AdBreakMetadataHasBeenSet() const { return m_adBreakMetadataHasBeenSet; }
    template<typename AdBreakMetadataT = Aws::Vector<KeyValuePair>>
    void SetAdBreakMetadata(AdBreakMetadataT&& value) { m_adBreakMetadataHasBeenSet = true; m_adBreakMetadata = std::forward<AdBreakMetadataT>(value); }
    template<typename AdBreakMetadataT = Aws::Vector<KeyValuePair>>
    AdBreak& WithAdBreakMetadata(AdBreakMetadataT&& value) { SetAdBreakMetadata(std::forward<AdBreakMetadataT>(value)); return *this;}
    template<typename AdBreakMetadataT = KeyValuePair>
    AdBreak& AddAdBreakMetadata(AdBreakMetadataT&& value) { m_adBreakMetadataHasBeenSet = true; m_adBreakMetadata.emplace_back(std::forward<AdBreakMetadataT>(value)); return *this; }
    ///@}
  private:

    MessageType m_messageType{MessageType::NOT_SET};
    bool m_messageTypeHasBeenSet = false;

    long long m_offsetMillis{0};
    bool m_offsetMillisHasBeenSet = false;

    SlateSource m_slate;
    bool m_slateHasBeenSet = false;

    SpliceInsertMessage m_spliceInsertMessage;
    bool m_spliceInsertMessageHasBeenSet = false;

    TimeSignalMessage m_timeSignalMessage;
    bool m_timeSignalMessageHasBeenSet = false;

    Aws::Vector<KeyValuePair> m_adBreakMetadata;
    bool m_adBreakMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
