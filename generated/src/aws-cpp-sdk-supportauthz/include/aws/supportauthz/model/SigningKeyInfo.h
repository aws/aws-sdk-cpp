/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SupportAuthZ {
namespace Model {

/**
 * <p>The signing key used to cryptographically sign a support
 * permit.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/SigningKeyInfo">AWS
 * API Reference</a></p>
 */
class SigningKeyInfo {
 public:
  AWS_SUPPORTAUTHZ_API SigningKeyInfo() = default;
  AWS_SUPPORTAUTHZ_API SigningKeyInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API SigningKeyInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the AWS KMS key used to sign the permit. The key must have key
   * spec ECC_NIST_P384 and key usage SIGN_VERIFY.</p>
   */
  inline const Aws::String& GetKmsKey() const { return m_kmsKey; }
  inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
  template <typename KmsKeyT = Aws::String>
  void SetKmsKey(KmsKeyT&& value) {
    m_kmsKeyHasBeenSet = true;
    m_kmsKey = std::forward<KmsKeyT>(value);
  }
  template <typename KmsKeyT = Aws::String>
  SigningKeyInfo& WithKmsKey(KmsKeyT&& value) {
    SetKmsKey(std::forward<KmsKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_kmsKey;
  bool m_kmsKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
