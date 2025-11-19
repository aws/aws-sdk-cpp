/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterInputMessage.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>The details of a thumbnail associated with a router input, including the
 * thumbnail messages, the thumbnail image, the timecode, and the
 * timestamp.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterInputThumbnailDetails">AWS
 * API Reference</a></p>
 */
class RouterInputThumbnailDetails {
 public:
  AWS_MEDIACONNECT_API RouterInputThumbnailDetails() = default;
  AWS_MEDIACONNECT_API RouterInputThumbnailDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterInputThumbnailDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The messages associated with the router input thumbnail.</p>
   */
  inline const Aws::Vector<RouterInputMessage>& GetThumbnailMessages() const { return m_thumbnailMessages; }
  inline bool ThumbnailMessagesHasBeenSet() const { return m_thumbnailMessagesHasBeenSet; }
  template <typename ThumbnailMessagesT = Aws::Vector<RouterInputMessage>>
  void SetThumbnailMessages(ThumbnailMessagesT&& value) {
    m_thumbnailMessagesHasBeenSet = true;
    m_thumbnailMessages = std::forward<ThumbnailMessagesT>(value);
  }
  template <typename ThumbnailMessagesT = Aws::Vector<RouterInputMessage>>
  RouterInputThumbnailDetails& WithThumbnailMessages(ThumbnailMessagesT&& value) {
    SetThumbnailMessages(std::forward<ThumbnailMessagesT>(value));
    return *this;
  }
  template <typename ThumbnailMessagesT = RouterInputMessage>
  RouterInputThumbnailDetails& AddThumbnailMessages(ThumbnailMessagesT&& value) {
    m_thumbnailMessagesHasBeenSet = true;
    m_thumbnailMessages.emplace_back(std::forward<ThumbnailMessagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The thumbnail image, encoded as a Base64-encoded binary data object.</p>
   */
  inline const Aws::Utils::ByteBuffer& GetThumbnail() const { return m_thumbnail; }
  inline bool ThumbnailHasBeenSet() const { return m_thumbnailHasBeenSet; }
  template <typename ThumbnailT = Aws::Utils::ByteBuffer>
  void SetThumbnail(ThumbnailT&& value) {
    m_thumbnailHasBeenSet = true;
    m_thumbnail = std::forward<ThumbnailT>(value);
  }
  template <typename ThumbnailT = Aws::Utils::ByteBuffer>
  RouterInputThumbnailDetails& WithThumbnail(ThumbnailT&& value) {
    SetThumbnail(std::forward<ThumbnailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timecode associated with the thumbnail.</p>
   */
  inline const Aws::String& GetTimecode() const { return m_timecode; }
  inline bool TimecodeHasBeenSet() const { return m_timecodeHasBeenSet; }
  template <typename TimecodeT = Aws::String>
  void SetTimecode(TimecodeT&& value) {
    m_timecodeHasBeenSet = true;
    m_timecode = std::forward<TimecodeT>(value);
  }
  template <typename TimecodeT = Aws::String>
  RouterInputThumbnailDetails& WithTimecode(TimecodeT&& value) {
    SetTimecode(std::forward<TimecodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp associated with the thumbnail.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  RouterInputThumbnailDetails& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RouterInputMessage> m_thumbnailMessages;
  bool m_thumbnailMessagesHasBeenSet = false;

  Aws::Utils::ByteBuffer m_thumbnail{};
  bool m_thumbnailHasBeenSet = false;

  Aws::String m_timecode;
  bool m_timecodeHasBeenSet = false;

  Aws::Utils::DateTime m_timestamp{};
  bool m_timestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
