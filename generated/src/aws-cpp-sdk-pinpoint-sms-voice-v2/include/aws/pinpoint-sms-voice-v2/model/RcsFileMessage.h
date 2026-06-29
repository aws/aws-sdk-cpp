/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 * <p>A file message containing a media file (image, video, audio, or PDF) with an
 * optional thumbnail.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RcsFileMessage">AWS
 * API Reference</a></p>
 */
class RcsFileMessage {
 public:
  AWS_PINPOINTSMSVOICEV2_API RcsFileMessage() = default;
  AWS_PINPOINTSMSVOICEV2_API RcsFileMessage(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API RcsFileMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The S3 URI of the media file to send, in the format
   * <code>s3://bucket-name/key</code>. The service downloads the file from your S3
   * bucket, rehosts it, and generates a presigned URL for the aggregator. Maximum
   * 2000 characters.</p>
   */
  inline const Aws::String& GetFileUrl() const { return m_fileUrl; }
  inline bool FileUrlHasBeenSet() const { return m_fileUrlHasBeenSet; }
  template <typename FileUrlT = Aws::String>
  void SetFileUrl(FileUrlT&& value) {
    m_fileUrlHasBeenSet = true;
    m_fileUrl = std::forward<FileUrlT>(value);
  }
  template <typename FileUrlT = Aws::String>
  RcsFileMessage& WithFileUrl(FileUrlT&& value) {
    SetFileUrl(std::forward<FileUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 URI of an optional thumbnail image for the media file, in the format
   * <code>s3://bucket-name/key</code>. Maximum 2000 characters.</p>
   */
  inline const Aws::String& GetThumbnailUrl() const { return m_thumbnailUrl; }
  inline bool ThumbnailUrlHasBeenSet() const { return m_thumbnailUrlHasBeenSet; }
  template <typename ThumbnailUrlT = Aws::String>
  void SetThumbnailUrl(ThumbnailUrlT&& value) {
    m_thumbnailUrlHasBeenSet = true;
    m_thumbnailUrl = std::forward<ThumbnailUrlT>(value);
  }
  template <typename ThumbnailUrlT = Aws::String>
  RcsFileMessage& WithThumbnailUrl(ThumbnailUrlT&& value) {
    SetThumbnailUrl(std::forward<ThumbnailUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fileUrl;

  Aws::String m_thumbnailUrl;
  bool m_fileUrlHasBeenSet = false;
  bool m_thumbnailUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
