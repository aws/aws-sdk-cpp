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
    AWS_SECRETSMANAGER_API UpdateSecretRequest() = default;

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
    inline const Aws::String& GetSecretId() const { return m_secretId; }
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
    template<typename SecretIdT = Aws::String>
    void SetSecretId(SecretIdT&& value) { m_secretIdHasBeenSet = true; m_secretId = std::forward<SecretIdT>(value); }
    template<typename SecretIdT = Aws::String>
    UpdateSecretRequest& WithSecretId(SecretIdT&& value) { SetSecretId(std::forward<SecretIdT>(value)); return *this;}
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
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    UpdateSecretRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the secret.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateSecretRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    UpdateSecretRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
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
    inline const Aws::Utils::CryptoBuffer& GetSecretBinary() const { return m_secretBinary; }
    inline bool SecretBinaryHasBeenSet() const { return m_secretBinaryHasBeenSet; }
    template<typename SecretBinaryT = Aws::Utils::CryptoBuffer>
    void SetSecretBinary(SecretBinaryT&& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = std::forward<SecretBinaryT>(value); }
    template<typename SecretBinaryT = Aws::Utils::CryptoBuffer>
    UpdateSecretRequest& WithSecretBinary(SecretBinaryT&& value) { SetSecretBinary(std::forward<SecretBinaryT>(value)); return *this;}
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
    inline const Aws::String& GetSecretString() const { return m_secretString; }
    inline bool SecretStringHasBeenSet() const { return m_secretStringHasBeenSet; }
    template<typename SecretStringT = Aws::String>
    void SetSecretString(SecretStringT&& value) { m_secretStringHasBeenSet = true; m_secretString = std::forward<SecretStringT>(value); }
    template<typename SecretStringT = Aws::String>
    UpdateSecretRequest& WithSecretString(SecretStringT&& value) { SetSecretString(std::forward<SecretStringT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_secretBinary{};
    bool m_secretBinaryHasBeenSet = false;

    Aws::String m_secretString;
    bool m_secretStringHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
