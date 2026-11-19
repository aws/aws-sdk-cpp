/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/Polly_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Polly {
namespace Model {

/**
 * <p>The audio source of a recording. In a <code>CreateVoice</code> request,
 * specify exactly one of <code>S3Url</code> and <code>Bytes</code>. In a response,
 * a recording that Amazon Polly read from Amazon S3 includes its
 * <code>S3Url</code>. A recording that you passed as <code>Bytes</code> includes
 * neither field, because Amazon Polly doesn't return the audio.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/RecordingData">AWS
 * API Reference</a></p>
 */
class RecordingData {
 public:
  AWS_POLLY_API RecordingData() = default;
  AWS_POLLY_API RecordingData(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API RecordingData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 URL of the audio object, in the form
   * <code>s3://bucket/key</code>. You need <code>s3:GetObject</code> permission on
   * the object.</p>
   */
  inline const Aws::String& GetS3Url() const { return m_s3Url; }
  inline bool S3UrlHasBeenSet() const { return m_s3UrlHasBeenSet; }
  template <typename S3UrlT = Aws::String>
  void SetS3Url(S3UrlT&& value) {
    m_s3UrlHasBeenSet = true;
    m_s3Url = std::forward<S3UrlT>(value);
  }
  template <typename S3UrlT = Aws::String>
  RecordingData& WithS3Url(S3UrlT&& value) {
    SetS3Url(std::forward<S3UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The audio data, passed directly in the request. The data must be in the
   * format that <code>Format</code> specifies and can be up to 5 MB. Amazon Polly
   * doesn't store the audio after it creates the voice, and doesn't return this
   * field in responses.</p>
   */
  inline const Aws::Utils::CryptoBuffer& GetBytes() const { return m_bytes; }
  inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
  template <typename BytesT = Aws::Utils::CryptoBuffer>
  void SetBytes(BytesT&& value) {
    m_bytesHasBeenSet = true;
    m_bytes = std::forward<BytesT>(value);
  }
  template <typename BytesT = Aws::Utils::CryptoBuffer>
  RecordingData& WithBytes(BytesT&& value) {
    SetBytes(std::forward<BytesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3Url;

  Aws::Utils::CryptoBuffer m_bytes{};
  bool m_s3UrlHasBeenSet = false;
  bool m_bytesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
