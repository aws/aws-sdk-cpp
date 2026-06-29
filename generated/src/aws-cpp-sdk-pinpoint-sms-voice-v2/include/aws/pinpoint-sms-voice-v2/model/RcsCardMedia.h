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
 * <p>The media content of a rich card, including the file URL, optional thumbnail,
 * and display height.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RcsCardMedia">AWS
 * API Reference</a></p>
 */
class RcsCardMedia {
 public:
  AWS_PINPOINTSMSVOICEV2_API RcsCardMedia() = default;
  AWS_PINPOINTSMSVOICEV2_API RcsCardMedia(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API RcsCardMedia& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The S3 URI of the media file for the card, in the format
   * <code>s3://bucket-name/key</code>. Maximum 2000 characters.</p>
   */
  inline const Aws::String& GetFileUrl() const { return m_fileUrl; }
  inline bool FileUrlHasBeenSet() const { return m_fileUrlHasBeenSet; }
  template <typename FileUrlT = Aws::String>
  void SetFileUrl(FileUrlT&& value) {
    m_fileUrlHasBeenSet = true;
    m_fileUrl = std::forward<FileUrlT>(value);
  }
  template <typename FileUrlT = Aws::String>
  RcsCardMedia& WithFileUrl(FileUrlT&& value) {
    SetFileUrl(std::forward<FileUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 URI of an optional thumbnail image for the card media. Maximum 2000
   * characters.</p>
   */
  inline const Aws::String& GetThumbnailUrl() const { return m_thumbnailUrl; }
  inline bool ThumbnailUrlHasBeenSet() const { return m_thumbnailUrlHasBeenSet; }
  template <typename ThumbnailUrlT = Aws::String>
  void SetThumbnailUrl(ThumbnailUrlT&& value) {
    m_thumbnailUrlHasBeenSet = true;
    m_thumbnailUrl = std::forward<ThumbnailUrlT>(value);
  }
  template <typename ThumbnailUrlT = Aws::String>
  RcsCardMedia& WithThumbnailUrl(ThumbnailUrlT&& value) {
    SetThumbnailUrl(std::forward<ThumbnailUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display height of the media in the card. Valid values are SHORT, MEDIUM,
   * and TALL.</p>
   */
  inline const Aws::String& GetHeight() const { return m_height; }
  inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
  template <typename HeightT = Aws::String>
  void SetHeight(HeightT&& value) {
    m_heightHasBeenSet = true;
    m_height = std::forward<HeightT>(value);
  }
  template <typename HeightT = Aws::String>
  RcsCardMedia& WithHeight(HeightT&& value) {
    SetHeight(std::forward<HeightT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fileUrl;

  Aws::String m_thumbnailUrl;

  Aws::String m_height;
  bool m_fileUrlHasBeenSet = false;
  bool m_thumbnailUrlHasBeenSet = false;
  bool m_heightHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
