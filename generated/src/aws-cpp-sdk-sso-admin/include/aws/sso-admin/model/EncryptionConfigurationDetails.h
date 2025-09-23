/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/KmsKeyType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/KmsKeyStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>The encryption configuration of your IAM Identity Center instance, including
   * the key type, KMS key ARN, and current encryption status. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/EncryptionConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class EncryptionConfigurationDetails
  {
  public:
    AWS_SSOADMIN_API EncryptionConfigurationDetails() = default;
    AWS_SSOADMIN_API EncryptionConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API EncryptionConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of KMS key used for encryption.</p>
     */
    inline KmsKeyType GetKeyType() const { return m_keyType; }
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }
    inline void SetKeyType(KmsKeyType value) { m_keyTypeHasBeenSet = true; m_keyType = value; }
    inline EncryptionConfigurationDetails& WithKeyType(KmsKeyType value) { SetKeyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key currently used to encrypt data in your IAM Identity
     * Center instance. </p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    EncryptionConfigurationDetails& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of encryption configuration.</p>
     */
    inline KmsKeyStatus GetEncryptionStatus() const { return m_encryptionStatus; }
    inline bool EncryptionStatusHasBeenSet() const { return m_encryptionStatusHasBeenSet; }
    inline void SetEncryptionStatus(KmsKeyStatus value) { m_encryptionStatusHasBeenSet = true; m_encryptionStatus = value; }
    inline EncryptionConfigurationDetails& WithEncryptionStatus(KmsKeyStatus value) { SetEncryptionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides additional context about the current encryption status. This field
     * is particularly useful when the encryption status is UPDATE_FAILED. When
     * encryption configuration update fails, this field contains information about the
     * cause, which may include KMS key access issues, key not found errors, invalid
     * key configuration, key in an invalid state, or a disabled key. </p>
     */
    inline const Aws::String& GetEncryptionStatusReason() const { return m_encryptionStatusReason; }
    inline bool EncryptionStatusReasonHasBeenSet() const { return m_encryptionStatusReasonHasBeenSet; }
    template<typename EncryptionStatusReasonT = Aws::String>
    void SetEncryptionStatusReason(EncryptionStatusReasonT&& value) { m_encryptionStatusReasonHasBeenSet = true; m_encryptionStatusReason = std::forward<EncryptionStatusReasonT>(value); }
    template<typename EncryptionStatusReasonT = Aws::String>
    EncryptionConfigurationDetails& WithEncryptionStatusReason(EncryptionStatusReasonT&& value) { SetEncryptionStatusReason(std::forward<EncryptionStatusReasonT>(value)); return *this;}
    ///@}
  private:

    KmsKeyType m_keyType{KmsKeyType::NOT_SET};
    bool m_keyTypeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    KmsKeyStatus m_encryptionStatus{KmsKeyStatus::NOT_SET};
    bool m_encryptionStatusHasBeenSet = false;

    Aws::String m_encryptionStatusReason;
    bool m_encryptionStatusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
