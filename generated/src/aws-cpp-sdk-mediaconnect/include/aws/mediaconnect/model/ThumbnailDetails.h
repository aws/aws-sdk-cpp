/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediaconnect/model/MessageDetail.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p> The details of the thumbnail, including thumbnail base64 string, timecode
   * and the time when thumbnail was generated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ThumbnailDetails">AWS
   * API Reference</a></p>
   */
  class ThumbnailDetails
  {
  public:
    AWS_MEDIACONNECT_API ThumbnailDetails() = default;
    AWS_MEDIACONNECT_API ThumbnailDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API ThumbnailDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ARN of the flow that DescribeFlowSourceThumbnail was performed on.</p>
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    ThumbnailDetails& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Thumbnail Base64 string. </p>
     */
    inline const Aws::String& GetThumbnail() const { return m_thumbnail; }
    inline bool ThumbnailHasBeenSet() const { return m_thumbnailHasBeenSet; }
    template<typename ThumbnailT = Aws::String>
    void SetThumbnail(ThumbnailT&& value) { m_thumbnailHasBeenSet = true; m_thumbnail = std::forward<ThumbnailT>(value); }
    template<typename ThumbnailT = Aws::String>
    ThumbnailDetails& WithThumbnail(ThumbnailT&& value) { SetThumbnail(std::forward<ThumbnailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Status code and messages about the flow source thumbnail.</p>
     */
    inline const Aws::Vector<MessageDetail>& GetThumbnailMessages() const { return m_thumbnailMessages; }
    inline bool ThumbnailMessagesHasBeenSet() const { return m_thumbnailMessagesHasBeenSet; }
    template<typename ThumbnailMessagesT = Aws::Vector<MessageDetail>>
    void SetThumbnailMessages(ThumbnailMessagesT&& value) { m_thumbnailMessagesHasBeenSet = true; m_thumbnailMessages = std::forward<ThumbnailMessagesT>(value); }
    template<typename ThumbnailMessagesT = Aws::Vector<MessageDetail>>
    ThumbnailDetails& WithThumbnailMessages(ThumbnailMessagesT&& value) { SetThumbnailMessages(std::forward<ThumbnailMessagesT>(value)); return *this;}
    template<typename ThumbnailMessagesT = MessageDetail>
    ThumbnailDetails& AddThumbnailMessages(ThumbnailMessagesT&& value) { m_thumbnailMessagesHasBeenSet = true; m_thumbnailMessages.emplace_back(std::forward<ThumbnailMessagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Timecode of thumbnail.</p>
     */
    inline const Aws::String& GetTimecode() const { return m_timecode; }
    inline bool TimecodeHasBeenSet() const { return m_timecodeHasBeenSet; }
    template<typename TimecodeT = Aws::String>
    void SetTimecode(TimecodeT&& value) { m_timecodeHasBeenSet = true; m_timecode = std::forward<TimecodeT>(value); }
    template<typename TimecodeT = Aws::String>
    ThumbnailDetails& WithTimecode(TimecodeT&& value) { SetTimecode(std::forward<TimecodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of when thumbnail was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    ThumbnailDetails& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::String m_thumbnail;
    bool m_thumbnailHasBeenSet = false;

    Aws::Vector<MessageDetail> m_thumbnailMessages;
    bool m_thumbnailMessagesHasBeenSet = false;

    Aws::String m_timecode;
    bool m_timecodeHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
