/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains metadata about an KMS key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsKmsKeyDetails">AWS
   * API Reference</a></p>
   */
  class AwsKmsKeyDetails
  {
  public:
    AWS_SECURITYHUB_API AwsKmsKeyDetails() = default;
    AWS_SECURITYHUB_API AwsKmsKeyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsKmsKeyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline const Aws::String& GetAWSAccountId() const { return m_aWSAccountId; }
    inline bool AWSAccountIdHasBeenSet() const { return m_aWSAccountIdHasBeenSet; }
    template<typename AWSAccountIdT = Aws::String>
    void SetAWSAccountId(AWSAccountIdT&& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = std::forward<AWSAccountIdT>(value); }
    template<typename AWSAccountIdT = Aws::String>
    AwsKmsKeyDetails& WithAWSAccountId(AWSAccountIdT&& value) { SetAWSAccountId(std::forward<AWSAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the KMS key was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline double GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(double value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline AwsKmsKeyDetails& WithCreationDate(double value) { SetCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    AwsKmsKeyDetails& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are
     * either customer managed or Amazon Web Services managed.</p>
     */
    inline const Aws::String& GetKeyManager() const { return m_keyManager; }
    inline bool KeyManagerHasBeenSet() const { return m_keyManagerHasBeenSet; }
    template<typename KeyManagerT = Aws::String>
    void SetKeyManager(KeyManagerT&& value) { m_keyManagerHasBeenSet = true; m_keyManager = std::forward<KeyManagerT>(value); }
    template<typename KeyManagerT = Aws::String>
    AwsKmsKeyDetails& WithKeyManager(KeyManagerT&& value) { SetKeyManager(std::forward<KeyManagerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the KMS key. Valid values are as follows:</p> <ul> <li> <p>
     * <code>Disabled</code> </p> </li> <li> <p> <code>Enabled</code> </p> </li> <li>
     * <p> <code>PendingDeletion</code> </p> </li> <li> <p> <code>PendingImport</code>
     * </p> </li> <li> <p> <code>Unavailable</code> </p> </li> </ul>
     */
    inline const Aws::String& GetKeyState() const { return m_keyState; }
    inline bool KeyStateHasBeenSet() const { return m_keyStateHasBeenSet; }
    template<typename KeyStateT = Aws::String>
    void SetKeyState(KeyStateT&& value) { m_keyStateHasBeenSet = true; m_keyState = std::forward<KeyStateT>(value); }
    template<typename KeyStateT = Aws::String>
    AwsKmsKeyDetails& WithKeyState(KeyStateT&& value) { SetKeyState(std::forward<KeyStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the KMS key material.</p> <p>When this value is
     * <code>AWS_KMS</code>, KMS created the key material.</p> <p>When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the KMS key lacks key material.</p> <p>When this
     * value is <code>AWS_CLOUDHSM</code>, the key material was created in the CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline const Aws::String& GetOrigin() const { return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    template<typename OriginT = Aws::String>
    void SetOrigin(OriginT&& value) { m_originHasBeenSet = true; m_origin = std::forward<OriginT>(value); }
    template<typename OriginT = Aws::String>
    AwsKmsKeyDetails& WithOrigin(OriginT&& value) { SetOrigin(std::forward<OriginT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the KMS key.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AwsKmsKeyDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the key has key rotation enabled.</p>
     */
    inline bool GetKeyRotationStatus() const { return m_keyRotationStatus; }
    inline bool KeyRotationStatusHasBeenSet() const { return m_keyRotationStatusHasBeenSet; }
    inline void SetKeyRotationStatus(bool value) { m_keyRotationStatusHasBeenSet = true; m_keyRotationStatus = value; }
    inline AwsKmsKeyDetails& WithKeyRotationStatus(bool value) { SetKeyRotationStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_aWSAccountId;
    bool m_aWSAccountIdHasBeenSet = false;

    double m_creationDate{0.0};
    bool m_creationDateHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_keyManager;
    bool m_keyManagerHasBeenSet = false;

    Aws::String m_keyState;
    bool m_keyStateHasBeenSet = false;

    Aws::String m_origin;
    bool m_originHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_keyRotationStatus{false};
    bool m_keyRotationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
