/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class UpdateSecretRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API UpdateSecretRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecret"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN or name of the secret.</p> <p>For an ARN, we recommend that you
     * specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }
    inline UpdateSecretRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}
    inline UpdateSecretRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}
    inline UpdateSecretRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you include <code>SecretString</code> or <code>SecretBinary</code>, then
     * Secrets Manager creates a new version for the secret, and this parameter
     * specifies the unique identifier for the new version.</p>  <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDKs to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes it as the value for this parameter in the
     * request. </p>  <p>If you generate a raw HTTP request to the Secrets
     * Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> and include it in the request.</p> <p>This value
     * helps ensure idempotency. Secrets Manager uses this value to prevent the
     * accidental creation of duplicate versions if there are failures and retries
     * during a rotation. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline UpdateSecretRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline UpdateSecretRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline UpdateSecretRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the secret.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateSecretRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateSecretRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateSecretRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN, key ID, or alias of the KMS key that Secrets Manager uses to encrypt
     * new secret versions as well as any existing versions with the staging labels
     * <code>AWSCURRENT</code>, <code>AWSPENDING</code>, or <code>AWSPREVIOUS</code>.
     * If you don't have <code>kms:Encrypt</code> permission to the new key, Secrets
     * Manager does not re-encrypt existing secret versions with the new key. For more
     * information about versions and staging labels, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/getting-started.html#term_version">Concepts:
     * Version</a>.</p> <p>A key alias is always prefixed by <code>alias/</code>, for
     * example <code>alias/aws/secretsmanager</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/alias-about.html">About
     * aliases</a>.</p> <p>If you set this to an empty string, Secrets Manager uses the
     * Amazon Web Services managed key <code>aws/secretsmanager</code>. If this key
     * doesn't already exist in your account, then Secrets Manager creates it for you
     * automatically. All users and roles in the Amazon Web Services account
     * automatically have access to use <code>aws/secretsmanager</code>. Creating
     * <code>aws/secretsmanager</code> can result in a one-time significant delay in
     * returning the result. </p>  <p>You can only use the Amazon Web
     * Services managed key <code>aws/secretsmanager</code> if you call this operation
     * using credentials from the same Amazon Web Services account that owns the
     * secret. If the secret is in a different account, then you must use a customer
     * managed key and provide the ARN of that KMS key in this field. The user making
     * the call must have permissions to both the secret and the KMS key in their
     * respective accounts.</p> 
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline UpdateSecretRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline UpdateSecretRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline UpdateSecretRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The binary data to encrypt and store in the new version of the secret. We
     * recommend that you store your binary data in a file and then pass the contents
     * of the file as a parameter. </p> <p>Either <code>SecretBinary</code> or
     * <code>SecretString</code> must have a value, but not both.</p> <p>You can't
     * access this parameter in the Secrets Manager console.</p> <p>Sensitive: This
     * field contains sensitive information, so the service does not include it in
     * CloudTrail log entries. If you create your own log entries, you must also avoid
     * logging the information in this field.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetSecretBinary() const{ return m_secretBinary; }
    inline bool SecretBinaryHasBeenSet() const { return m_secretBinaryHasBeenSet; }
    inline void SetSecretBinary(const Aws::Utils::CryptoBuffer& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = value; }
    inline void SetSecretBinary(Aws::Utils::CryptoBuffer&& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = std::move(value); }
    inline UpdateSecretRequest& WithSecretBinary(const Aws::Utils::CryptoBuffer& value) { SetSecretBinary(value); return *this;}
    inline UpdateSecretRequest& WithSecretBinary(Aws::Utils::CryptoBuffer&& value) { SetSecretBinary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text data to encrypt and store in the new version of the secret. We
     * recommend you use a JSON structure of key/value pairs for your secret value.
     * </p> <p>Either <code>SecretBinary</code> or <code>SecretString</code> must have
     * a value, but not both. </p> <p>Sensitive: This field contains sensitive
     * information, so the service does not include it in CloudTrail log entries. If
     * you create your own log entries, you must also avoid logging the information in
     * this field.</p>
     */
    inline const Aws::String& GetSecretString() const{ return m_secretString; }
    inline bool SecretStringHasBeenSet() const { return m_secretStringHasBeenSet; }
    inline void SetSecretString(const Aws::String& value) { m_secretStringHasBeenSet = true; m_secretString = value; }
    inline void SetSecretString(Aws::String&& value) { m_secretStringHasBeenSet = true; m_secretString = std::move(value); }
    inline void SetSecretString(const char* value) { m_secretStringHasBeenSet = true; m_secretString.assign(value); }
    inline UpdateSecretRequest& WithSecretString(const Aws::String& value) { SetSecretString(value); return *this;}
    inline UpdateSecretRequest& WithSecretString(Aws::String&& value) { SetSecretString(std::move(value)); return *this;}
    inline UpdateSecretRequest& WithSecretString(const char* value) { SetSecretString(value); return *this;}
    ///@}
  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_secretBinary;
    bool m_secretBinaryHasBeenSet = false;

    Aws::String m_secretString;
    bool m_secretStringHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
