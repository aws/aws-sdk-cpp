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
   * The details of the thumbnail, including thumbnail base64 string, timecode and
   * the time when thumbnail was generated.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ThumbnailDetails">AWS
   * API Reference</a></p>
   */
  class ThumbnailDetails
  {
  public:
    AWS_MEDIACONNECT_API ThumbnailDetails();
    AWS_MEDIACONNECT_API ThumbnailDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API ThumbnailDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the flow that DescribeFlowSourceThumbnail was performed on.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }
    inline ThumbnailDetails& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline ThumbnailDetails& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline ThumbnailDetails& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * Thumbnail Base64 string.
     */
    inline const Aws::String& GetThumbnail() const{ return m_thumbnail; }
    inline bool ThumbnailHasBeenSet() const { return m_thumbnailHasBeenSet; }
    inline void SetThumbnail(const Aws::String& value) { m_thumbnailHasBeenSet = true; m_thumbnail = value; }
    inline void SetThumbnail(Aws::String&& value) { m_thumbnailHasBeenSet = true; m_thumbnail = std::move(value); }
    inline void SetThumbnail(const char* value) { m_thumbnailHasBeenSet = true; m_thumbnail.assign(value); }
    inline ThumbnailDetails& WithThumbnail(const Aws::String& value) { SetThumbnail(value); return *this;}
    inline ThumbnailDetails& WithThumbnail(Aws::String&& value) { SetThumbnail(std::move(value)); return *this;}
    inline ThumbnailDetails& WithThumbnail(const char* value) { SetThumbnail(value); return *this;}
    ///@}

    ///@{
    /**
     * Status code and messages about the flow source thumbnail.
     */
    inline const Aws::Vector<MessageDetail>& GetThumbnailMessages() const{ return m_thumbnailMessages; }
    inline bool ThumbnailMessagesHasBeenSet() const { return m_thumbnailMessagesHasBeenSet; }
    inline void SetThumbnailMessages(const Aws::Vector<MessageDetail>& value) { m_thumbnailMessagesHasBeenSet = true; m_thumbnailMessages = value; }
    inline void SetThumbnailMessages(Aws::Vector<MessageDetail>&& value) { m_thumbnailMessagesHasBeenSet = true; m_thumbnailMessages = std::move(value); }
    inline ThumbnailDetails& WithThumbnailMessages(const Aws::Vector<MessageDetail>& value) { SetThumbnailMessages(value); return *this;}
    inline ThumbnailDetails& WithThumbnailMessages(Aws::Vector<MessageDetail>&& value) { SetThumbnailMessages(std::move(value)); return *this;}
    inline ThumbnailDetails& AddThumbnailMessages(const MessageDetail& value) { m_thumbnailMessagesHasBeenSet = true; m_thumbnailMessages.push_back(value); return *this; }
    inline ThumbnailDetails& AddThumbnailMessages(MessageDetail&& value) { m_thumbnailMessagesHasBeenSet = true; m_thumbnailMessages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Timecode of thumbnail.
     */
    inline const Aws::String& GetTimecode() const{ return m_timecode; }
    inline bool TimecodeHasBeenSet() const { return m_timecodeHasBeenSet; }
    inline void SetTimecode(const Aws::String& value) { m_timecodeHasBeenSet = true; m_timecode = value; }
    inline void SetTimecode(Aws::String&& value) { m_timecodeHasBeenSet = true; m_timecode = std::move(value); }
    inline void SetTimecode(const char* value) { m_timecodeHasBeenSet = true; m_timecode.assign(value); }
    inline ThumbnailDetails& WithTimecode(const Aws::String& value) { SetTimecode(value); return *this;}
    inline ThumbnailDetails& WithTimecode(Aws::String&& value) { SetTimecode(std::move(value)); return *this;}
    inline ThumbnailDetails& WithTimecode(const char* value) { SetTimecode(value); return *this;}
    ///@}

    ///@{
    /**
     * The timestamp of when thumbnail was generated.
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline ThumbnailDetails& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline ThumbnailDetails& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
