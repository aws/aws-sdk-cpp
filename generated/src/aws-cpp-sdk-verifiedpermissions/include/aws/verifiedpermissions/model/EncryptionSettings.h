/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/KmsEncryptionSettings.h>
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
 * and child resources. </p> <p>This data type is used as a request parameter in
 * the <a
 * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_CreatePolicyStore.html">CreatePolicyStore</a>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/EncryptionSettings">AWS
 * API Reference</a></p>
 */
class EncryptionSettings {
 public:
  AWS_VERIFIEDPERMISSIONS_API EncryptionSettings() = default;
  AWS_VERIFIEDPERMISSIONS_API EncryptionSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_VERIFIEDPERMISSIONS_API EncryptionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The KMS encryption settings for this policy store to encrypt data with. It
   * will contain the customer-managed KMS key, and a user-defined encryption
   * context. </p>
   */
  inline const KmsEncryptionSettings& GetKmsEncryptionSettings() const { return m_kmsEncryptionSettings; }
  inline bool KmsEncryptionSettingsHasBeenSet() const { return m_kmsEncryptionSettingsHasBeenSet; }
  template <typename KmsEncryptionSettingsT = KmsEncryptionSettings>
  void SetKmsEncryptionSettings(KmsEncryptionSettingsT&& value) {
    m_kmsEncryptionSettingsHasBeenSet = true;
    m_kmsEncryptionSettings = std::forward<KmsEncryptionSettingsT>(value);
  }
  template <typename KmsEncryptionSettingsT = KmsEncryptionSettings>
  EncryptionSettings& WithKmsEncryptionSettings(KmsEncryptionSettingsT&& value) {
    SetKmsEncryptionSettings(std::forward<KmsEncryptionSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This is the default encryption setting. The policy store uses an Amazon Web
   * Services owned key for encrypting data.</p>
   */
  inline const Unit& GetDefault() const { return m_default; }
  inline bool DefaultHasBeenSet() const { return m_defaultHasBeenSet; }
  template <typename DefaultT = Unit>
  void SetDefault(DefaultT&& value) {
    m_defaultHasBeenSet = true;
    m_default = std::forward<DefaultT>(value);
  }
  template <typename DefaultT = Unit>
  EncryptionSettings& WithDefault(DefaultT&& value) {
    SetDefault(std::forward<DefaultT>(value));
    return *this;
  }
  ///@}
 private:
  KmsEncryptionSettings m_kmsEncryptionSettings;

  Unit m_default;
  bool m_kmsEncryptionSettingsHasBeenSet = false;
  bool m_defaultHasBeenSet = false;
};

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
