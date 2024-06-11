﻿/**
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
    AWS_SECURITYHUB_API AwsKmsKeyDetails();
    AWS_SECURITYHUB_API AwsKmsKeyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsKmsKeyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline const Aws::String& GetAWSAccountId() const{ return m_aWSAccountId; }
    inline bool AWSAccountIdHasBeenSet() const { return m_aWSAccountIdHasBeenSet; }
    inline void SetAWSAccountId(const Aws::String& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = value; }
    inline void SetAWSAccountId(Aws::String&& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = std::move(value); }
    inline void SetAWSAccountId(const char* value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId.assign(value); }
    inline AwsKmsKeyDetails& WithAWSAccountId(const Aws::String& value) { SetAWSAccountId(value); return *this;}
    inline AwsKmsKeyDetails& WithAWSAccountId(Aws::String&& value) { SetAWSAccountId(std::move(value)); return *this;}
    inline AwsKmsKeyDetails& WithAWSAccountId(const char* value) { SetAWSAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the KMS key was created.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline double GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(double value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline AwsKmsKeyDetails& WithCreationDate(double value) { SetCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }
    inline AwsKmsKeyDetails& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline AwsKmsKeyDetails& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline AwsKmsKeyDetails& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are
     * either customer managed or Amazon Web Services managed.</p>
     */
    inline const Aws::String& GetKeyManager() const{ return m_keyManager; }
    inline bool KeyManagerHasBeenSet() const { return m_keyManagerHasBeenSet; }
    inline void SetKeyManager(const Aws::String& value) { m_keyManagerHasBeenSet = true; m_keyManager = value; }
    inline void SetKeyManager(Aws::String&& value) { m_keyManagerHasBeenSet = true; m_keyManager = std::move(value); }
    inline void SetKeyManager(const char* value) { m_keyManagerHasBeenSet = true; m_keyManager.assign(value); }
    inline AwsKmsKeyDetails& WithKeyManager(const Aws::String& value) { SetKeyManager(value); return *this;}
    inline AwsKmsKeyDetails& WithKeyManager(Aws::String&& value) { SetKeyManager(std::move(value)); return *this;}
    inline AwsKmsKeyDetails& WithKeyManager(const char* value) { SetKeyManager(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the KMS key. Valid values are as follows:</p> <ul> <li> <p>
     * <code>Disabled</code> </p> </li> <li> <p> <code>Enabled</code> </p> </li> <li>
     * <p> <code>PendingDeletion</code> </p> </li> <li> <p> <code>PendingImport</code>
     * </p> </li> <li> <p> <code>Unavailable</code> </p> </li> </ul>
     */
    inline const Aws::String& GetKeyState() const{ return m_keyState; }
    inline bool KeyStateHasBeenSet() const { return m_keyStateHasBeenSet; }
    inline void SetKeyState(const Aws::String& value) { m_keyStateHasBeenSet = true; m_keyState = value; }
    inline void SetKeyState(Aws::String&& value) { m_keyStateHasBeenSet = true; m_keyState = std::move(value); }
    inline void SetKeyState(const char* value) { m_keyStateHasBeenSet = true; m_keyState.assign(value); }
    inline AwsKmsKeyDetails& WithKeyState(const Aws::String& value) { SetKeyState(value); return *this;}
    inline AwsKmsKeyDetails& WithKeyState(Aws::String&& value) { SetKeyState(std::move(value)); return *this;}
    inline AwsKmsKeyDetails& WithKeyState(const char* value) { SetKeyState(value); return *this;}
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
    inline const Aws::String& GetOrigin() const{ return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(const Aws::String& value) { m_originHasBeenSet = true; m_origin = value; }
    inline void SetOrigin(Aws::String&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }
    inline void SetOrigin(const char* value) { m_originHasBeenSet = true; m_origin.assign(value); }
    inline AwsKmsKeyDetails& WithOrigin(const Aws::String& value) { SetOrigin(value); return *this;}
    inline AwsKmsKeyDetails& WithOrigin(Aws::String&& value) { SetOrigin(std::move(value)); return *this;}
    inline AwsKmsKeyDetails& WithOrigin(const char* value) { SetOrigin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the KMS key.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AwsKmsKeyDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AwsKmsKeyDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AwsKmsKeyDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the key has key rotation enabled.</p>
     */
    inline bool GetKeyRotationStatus() const{ return m_keyRotationStatus; }
    inline bool KeyRotationStatusHasBeenSet() const { return m_keyRotationStatusHasBeenSet; }
    inline void SetKeyRotationStatus(bool value) { m_keyRotationStatusHasBeenSet = true; m_keyRotationStatus = value; }
    inline AwsKmsKeyDetails& WithKeyRotationStatus(bool value) { SetKeyRotationStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_aWSAccountId;
    bool m_aWSAccountIdHasBeenSet = false;

    double m_creationDate;
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

    bool m_keyRotationStatus;
    bool m_keyRotationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
