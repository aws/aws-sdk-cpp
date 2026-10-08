/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/EncryptionKey.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Translate {
namespace Model {

/**
 * <p>The output configuration properties for a batch translation
 * job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/OutputDataConfig">AWS
 * API Reference</a></p>
 */
class OutputDataConfig {
 public:
  AWS_TRANSLATE_API OutputDataConfig() = default;
  AWS_TRANSLATE_API OutputDataConfig(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSLATE_API OutputDataConfig& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSLATE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The URI of the S3 folder that contains a translation job's output file. The
   * folder must be in the same Region as the API endpoint that you are calling.</p>
   */
  inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
  inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
  template <typename S3UriT = Aws::String>
  void SetS3Uri(S3UriT&& value) {
    m_s3UriHasBeenSet = true;
    m_s3Uri = std::forward<S3UriT>(value);
  }
  template <typename S3UriT = Aws::String>
  OutputDataConfig& WithS3Uri(S3UriT&& value) {
    SetS3Uri(std::forward<S3UriT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const EncryptionKey& GetEncryptionKey() const { return m_encryptionKey; }
  inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
  template <typename EncryptionKeyT = EncryptionKey>
  void SetEncryptionKey(EncryptionKeyT&& value) {
    m_encryptionKeyHasBeenSet = true;
    m_encryptionKey = std::forward<EncryptionKeyT>(value);
  }
  template <typename EncryptionKeyT = EncryptionKey>
  OutputDataConfig& WithEncryptionKey(EncryptionKeyT&& value) {
    SetEncryptionKey(std::forward<EncryptionKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3Uri;

  EncryptionKey m_encryptionKey;
  bool m_s3UriHasBeenSet = false;
  bool m_encryptionKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Translate
}  // namespace Aws
