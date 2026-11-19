/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>The customer managed key that encrypts your custom voice. If you don't
 * specify a key, Amazon Polly encrypts the voice with an Amazon Web Services owned
 * key.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/CustomerManagedEncryption">AWS
 * API Reference</a></p>
 */
class CustomerManagedEncryption {
 public:
  AWS_POLLY_API CustomerManagedEncryption() = default;
  AWS_POLLY_API CustomerManagedEncryption(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API CustomerManagedEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the key. The key must be a symmetric
   * encryption key in the same Amazon Web Services Region as the voice. To create
   * the voice, you need <code>kms:DescribeKey</code>,
   * <code>kms:GenerateDataKey</code>, and <code>kms:Decrypt</code> permissions on
   * the key. To synthesize speech with the voice, you need <code>kms:Decrypt</code>
   * permission on the key.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  CustomerManagedEncryption& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key-value pairs that Amazon Polly includes as the encryption context when
   * it encrypts or decrypts the voice with the key. You can use these pairs in key
   * policy conditions. Don't use keys that start with <code>aws:</code>, which are
   * reserved.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContext() const { return m_encryptionContext; }
  inline bool EncryptionContextHasBeenSet() const { return m_encryptionContextHasBeenSet; }
  template <typename EncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  void SetEncryptionContext(EncryptionContextT&& value) {
    m_encryptionContextHasBeenSet = true;
    m_encryptionContext = std::forward<EncryptionContextT>(value);
  }
  template <typename EncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  CustomerManagedEncryption& WithEncryptionContext(EncryptionContextT&& value) {
    SetEncryptionContext(std::forward<EncryptionContextT>(value));
    return *this;
  }
  template <typename EncryptionContextKeyT = Aws::String, typename EncryptionContextValueT = Aws::String>
  CustomerManagedEncryption& AddEncryptionContext(EncryptionContextKeyT&& key, EncryptionContextValueT&& value) {
    m_encryptionContextHasBeenSet = true;
    m_encryptionContext.emplace(std::forward<EncryptionContextKeyT>(key), std::forward<EncryptionContextValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_kmsKeyArn;

  Aws::Map<Aws::String, Aws::String> m_encryptionContext;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_encryptionContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
