/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>

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
 * <p>A structure that contains the KMS encryption configuration for the policy
 * store. The encryption state shows what customer-managed KMS key is being used to
 * encrypt all resources within the policy store, and any user-defined context
 * key-value pairs added during encryption processes.</p> <p>This data type is used
 * as a field that is part of the <a
 * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_EncryptionState.html">EncryptionState</a>
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/KmsEncryptionState">AWS
 * API Reference</a></p>
 */
class KmsEncryptionState {
 public:
  AWS_VERIFIEDPERMISSIONS_API KmsEncryptionState() = default;
  AWS_VERIFIEDPERMISSIONS_API KmsEncryptionState(Aws::Utils::Json::JsonView jsonValue);
  AWS_VERIFIEDPERMISSIONS_API KmsEncryptionState& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The customer-managed KMS key <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
   * Resource Name (ARN)</a> being used for encryption processes. </p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  KmsEncryptionState& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>User-defined, additional context added to encryption processes. </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContext() const { return m_encryptionContext; }
  inline bool EncryptionContextHasBeenSet() const { return m_encryptionContextHasBeenSet; }
  template <typename EncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  void SetEncryptionContext(EncryptionContextT&& value) {
    m_encryptionContextHasBeenSet = true;
    m_encryptionContext = std::forward<EncryptionContextT>(value);
  }
  template <typename EncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  KmsEncryptionState& WithEncryptionContext(EncryptionContextT&& value) {
    SetEncryptionContext(std::forward<EncryptionContextT>(value));
    return *this;
  }
  template <typename EncryptionContextKeyT = Aws::String, typename EncryptionContextValueT = Aws::String>
  KmsEncryptionState& AddEncryptionContext(EncryptionContextKeyT&& key, EncryptionContextValueT&& value) {
    m_encryptionContextHasBeenSet = true;
    m_encryptionContext.emplace(std::forward<EncryptionContextKeyT>(key), std::forward<EncryptionContextValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;

  Aws::Map<Aws::String, Aws::String> m_encryptionContext;
  bool m_keyHasBeenSet = false;
  bool m_encryptionContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
