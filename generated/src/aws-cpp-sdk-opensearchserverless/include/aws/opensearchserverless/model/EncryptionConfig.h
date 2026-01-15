/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchServerless {
namespace Model {

/**
 * <p>Encryption settings for a collection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/EncryptionConfig">AWS
 * API Reference</a></p>
 */
class EncryptionConfig {
 public:
  AWS_OPENSEARCHSERVERLESS_API EncryptionConfig() = default;
  AWS_OPENSEARCHSERVERLESS_API EncryptionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API EncryptionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates whether to use an Amazon Web Services-owned key for encryption.</p>
   */
  inline bool GetAWSOwnedKey() const { return m_aWSOwnedKey; }
  inline bool AWSOwnedKeyHasBeenSet() const { return m_aWSOwnedKeyHasBeenSet; }
  inline void SetAWSOwnedKey(bool value) {
    m_aWSOwnedKeyHasBeenSet = true;
    m_aWSOwnedKey = value;
  }
  inline EncryptionConfig& WithAWSOwnedKey(bool value) {
    SetAWSOwnedKey(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Amazon Web Services Key Management Service key used to encrypt
   * the collection.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  EncryptionConfig& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_aWSOwnedKey{false};

  Aws::String m_kmsKeyArn;
  bool m_aWSOwnedKeyHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
