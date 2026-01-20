/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/KmsEncryptionState.h>
#include <aws/verifiedpermissions/model/Unit.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace VerifiedPermissions {
namespace Model {

/**
 * <p>A structure that contains the encryption configuration for the policy store
 * and child resources.</p> <p>This data type is used as a response parameter field
 * for the <a
 * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_GetPolicyStore.html">GetPolicyStore</a>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/EncryptionState">AWS
 * API Reference</a></p>
 */
class EncryptionState {
 public:
  AWS_VERIFIEDPERMISSIONS_API EncryptionState() = default;
  AWS_VERIFIEDPERMISSIONS_API EncryptionState(Aws::Utils::Json::JsonView jsonValue);
  AWS_VERIFIEDPERMISSIONS_API EncryptionState& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The KMS encryption settings currently configured for this policy store to
   * encrypt data with. It contains the customer-managed KMS key, and a user-defined
   * encryption context. </p>
   */
  inline const KmsEncryptionState& GetKmsEncryptionState() const { return m_kmsEncryptionState; }
  inline bool KmsEncryptionStateHasBeenSet() const { return m_kmsEncryptionStateHasBeenSet; }
  template <typename KmsEncryptionStateT = KmsEncryptionState>
  void SetKmsEncryptionState(KmsEncryptionStateT&& value) {
    m_kmsEncryptionStateHasBeenSet = true;
    m_kmsEncryptionState = std::forward<KmsEncryptionStateT>(value);
  }
  template <typename KmsEncryptionStateT = KmsEncryptionState>
  EncryptionState& WithKmsEncryptionState(KmsEncryptionStateT&& value) {
    SetKmsEncryptionState(std::forward<KmsEncryptionStateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Policy store data is encrypted using AWS owned encryption keys.</p>
   */
  inline const Unit& GetDefault() const { return m_default; }
  inline bool DefaultHasBeenSet() const { return m_defaultHasBeenSet; }
  template <typename DefaultT = Unit>
  void SetDefault(DefaultT&& value) {
    m_defaultHasBeenSet = true;
    m_default = std::forward<DefaultT>(value);
  }
  template <typename DefaultT = Unit>
  EncryptionState& WithDefault(DefaultT&& value) {
    SetDefault(std::forward<DefaultT>(value));
    return *this;
  }
  ///@}
 private:
  KmsEncryptionState m_kmsEncryptionState;

  Unit m_default;
  bool m_kmsEncryptionStateHasBeenSet = false;
  bool m_defaultHasBeenSet = false;
};

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
