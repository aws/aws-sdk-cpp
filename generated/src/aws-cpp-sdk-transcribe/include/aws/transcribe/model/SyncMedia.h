/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace TranscribeService {
namespace Model {

/**
 * <p>The audio to transcribe. Specify exactly one of <code>MediaBytes</code> or
 * <code>MediaFileUri</code>.</p> <p>Audio sent in the request
 * (<code>MediaBytes</code>) can be up to 25 MB. Audio in Amazon S3
 * (<code>MediaFileUri</code>) can be up to 500 MB.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/SyncMedia">AWS
 * API Reference</a></p>
 */
class SyncMedia {
 public:
  AWS_TRANSCRIBESERVICE_API SyncMedia() = default;
  AWS_TRANSCRIBESERVICE_API SyncMedia(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API SyncMedia& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Your audio file, provided inline in the request. The maximum size is 25 MB
   * (26,214,400 bytes) of audio, measured before base64 encoding.</p> <p>If you use
   * an Amazon Web Services SDK, the SDK base64-encodes the bytes for you. If you
   * call the API directly, base64-encode the bytes yourself.</p>
   */
  inline const Aws::Utils::ByteBuffer& GetMediaBytes() const { return m_mediaBytes; }
  inline bool MediaBytesHasBeenSet() const { return m_mediaBytesHasBeenSet; }
  template <typename MediaBytesT = Aws::Utils::ByteBuffer>
  void SetMediaBytes(MediaBytesT&& value) {
    m_mediaBytesHasBeenSet = true;
    m_mediaBytes = std::forward<MediaBytesT>(value);
  }
  template <typename MediaBytesT = Aws::Utils::ByteBuffer>
  SyncMedia& WithMediaBytes(MediaBytesT&& value) {
    SetMediaBytes(std::forward<MediaBytesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location of the media file you want to transcribe. For
   * example:</p> <ul> <li> <p>
   * <code>s3://amzn-s3-demo-bucket/my-media-file.flac</code> </p> </li> <li> <p>
   * <code>s3://amzn-s3-demo-bucket/media-files/my-media-file.flac</code> </p> </li>
   * </ul> <p>The maximum file size is 500 MB. You must have read permission for the
   * file.</p> <p>The Amazon S3 bucket that contains your input media must be located
   * in the same Amazon Web Services Region where you're making your transcription
   * request.</p>
   */
  inline const Aws::String& GetMediaFileUri() const { return m_mediaFileUri; }
  inline bool MediaFileUriHasBeenSet() const { return m_mediaFileUriHasBeenSet; }
  template <typename MediaFileUriT = Aws::String>
  void SetMediaFileUri(MediaFileUriT&& value) {
    m_mediaFileUriHasBeenSet = true;
    m_mediaFileUri = std::forward<MediaFileUriT>(value);
  }
  template <typename MediaFileUriT = Aws::String>
  SyncMedia& WithMediaFileUri(MediaFileUriT&& value) {
    SetMediaFileUri(std::forward<MediaFileUriT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::ByteBuffer m_mediaBytes{};

  Aws::String m_mediaFileUri;
  bool m_mediaBytesHasBeenSet = false;
  bool m_mediaFileUriHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
