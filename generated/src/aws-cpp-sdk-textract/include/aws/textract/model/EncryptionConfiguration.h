/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Textract {
namespace Model {

/**
 * <p>Specifies the AWS Key Management Service (AWS KMS) key and encryption context
 * used to encrypt a resource at rest. When omitted, Amazon Textract encrypts the
 * resource using an AWS owned key.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/EncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class EncryptionConfiguration {
 public:
  AWS_TEXTRACT_API EncryptionConfiguration() = default;
  AWS_TEXTRACT_API EncryptionConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API EncryptionConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The identifier of the AWS KMS key to use for encryption. This can be a key
   * ID, key ARN, alias name, or alias ARN.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  EncryptionConfiguration& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A set of key-value pairs that Amazon Textract includes as the AWS KMS
   * encryption context when encrypting and decrypting the resource.</p> <p>On
   * <code>UpdateProject</code> and <code>UpdateBlueprint</code>, this member is the
   * one exception to replacing a supplied configuration whole. If you omit it, the
   * stored encryption context is kept. To clear a custom encryption context, specify
   * an empty map (<code>{}</code>).</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetKmsEncryptionContext() const { return m_kmsEncryptionContext; }
  inline bool KmsEncryptionContextHasBeenSet() const { return m_kmsEncryptionContextHasBeenSet; }
  template <typename KmsEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  void SetKmsEncryptionContext(KmsEncryptionContextT&& value) {
    m_kmsEncryptionContextHasBeenSet = true;
    m_kmsEncryptionContext = std::forward<KmsEncryptionContextT>(value);
  }
  template <typename KmsEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  EncryptionConfiguration& WithKmsEncryptionContext(KmsEncryptionContextT&& value) {
    SetKmsEncryptionContext(std::forward<KmsEncryptionContextT>(value));
    return *this;
  }
  template <typename KmsEncryptionContextKeyT = Aws::String, typename KmsEncryptionContextValueT = Aws::String>
  EncryptionConfiguration& AddKmsEncryptionContext(KmsEncryptionContextKeyT&& key, KmsEncryptionContextValueT&& value) {
    m_kmsEncryptionContextHasBeenSet = true;
    m_kmsEncryptionContext.emplace(std::forward<KmsEncryptionContextKeyT>(key), std::forward<KmsEncryptionContextValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_kmsKeyId;

  Aws::Map<Aws::String, Aws::String> m_kmsEncryptionContext;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_kmsEncryptionContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
