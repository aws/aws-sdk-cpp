﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class PutSecretValueRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API PutSecretValueRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSecretValue"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN or name of the secret to add a new version to.</p> <p>For an ARN, we
     * recommend that you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p> <p>If the secret doesn't already exist, use
     * <code>CreateSecret</code> instead.</p>
     */
    inline const Aws::String& GetSecretId() const { return m_secretId; }
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
    template<typename SecretIdT = Aws::String>
    void SetSecretId(SecretIdT&& value) { m_secretIdHasBeenSet = true; m_secretId = std::forward<SecretIdT>(value); }
    template<typename SecretIdT = Aws::String>
    PutSecretValueRequest& WithSecretId(SecretIdT&& value) { SetSecretId(std::forward<SecretIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the new version of the secret. </p>  <p>If you
     * use the Amazon Web Services CLI or one of the Amazon Web Services SDKs to call
     * this operation, then you can leave this parameter empty. The CLI or SDK
     * generates a random UUID for you and includes it as the value for this parameter
     * in the request. </p>  <p>If you generate a raw HTTP request to the
     * Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> and include it in the request.</p> <p>This value
     * helps ensure idempotency. Secrets Manager uses this value to prevent the
     * accidental creation of duplicate versions if there are failures and retries
     * during a rotation. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     * <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't already
     * associated with a version of the secret then a new version of the secret is
     * created. </p> </li> <li> <p>If a version with this value already exists and that
     * version's <code>SecretString</code> or <code>SecretBinary</code> values are the
     * same as those in the request then the request is ignored. The operation is
     * idempotent. </p> </li> <li> <p>If a version with this value already exists and
     * the version of the <code>SecretString</code> and <code>SecretBinary</code>
     * values are different from those in the request, then the request fails because
     * you can't modify a secret version. You can only create new versions to store new
     * secret values.</p> </li> </ul> <p>This value becomes the <code>VersionId</code>
     * of the new version.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    PutSecretValueRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The binary data to encrypt and store in the new version of the secret. To use
     * this parameter in the command-line tools, we recommend that you store your
     * binary data in a file and then pass the contents of the file as a parameter.
     * </p> <p>You must include <code>SecretBinary</code> or <code>SecretString</code>,
     * but not both.</p> <p>You can't access this value from the Secrets Manager
     * console.</p> <p>Sensitive: This field contains sensitive information, so the
     * service does not include it in CloudTrail log entries. If you create your own
     * log entries, you must also avoid logging the information in this field.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetSecretBinary() const { return m_secretBinary; }
    inline bool SecretBinaryHasBeenSet() const { return m_secretBinaryHasBeenSet; }
    template<typename SecretBinaryT = Aws::Utils::CryptoBuffer>
    void SetSecretBinary(SecretBinaryT&& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = std::forward<SecretBinaryT>(value); }
    template<typename SecretBinaryT = Aws::Utils::CryptoBuffer>
    PutSecretValueRequest& WithSecretBinary(SecretBinaryT&& value) { SetSecretBinary(std::forward<SecretBinaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text to encrypt and store in the new version of the secret. </p> <p>You
     * must include <code>SecretBinary</code> or <code>SecretString</code>, but not
     * both.</p> <p>We recommend you create the secret string as JSON key/value pairs,
     * as shown in the example.</p> <p>Sensitive: This field contains sensitive
     * information, so the service does not include it in CloudTrail log entries. If
     * you create your own log entries, you must also avoid logging the information in
     * this field.</p>
     */
    inline const Aws::String& GetSecretString() const { return m_secretString; }
    inline bool SecretStringHasBeenSet() const { return m_secretStringHasBeenSet; }
    template<typename SecretStringT = Aws::String>
    void SetSecretString(SecretStringT&& value) { m_secretStringHasBeenSet = true; m_secretString = std::forward<SecretStringT>(value); }
    template<typename SecretStringT = Aws::String>
    PutSecretValueRequest& WithSecretString(SecretStringT&& value) { SetSecretString(std::forward<SecretStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of staging labels to attach to this version of the secret. Secrets
     * Manager uses staging labels to track versions of a secret through the rotation
     * process.</p> <p>If you specify a staging label that's already associated with a
     * different version of the same secret, then Secrets Manager removes the label
     * from the other version and attaches it to this version. If you specify
     * <code>AWSCURRENT</code>, and it is already attached to another version, then
     * Secrets Manager also moves the staging label <code>AWSPREVIOUS</code> to the
     * version that <code>AWSCURRENT</code> was removed from.</p> <p>If you don't
     * include <code>VersionStages</code>, then Secrets Manager automatically moves the
     * staging label <code>AWSCURRENT</code> to this version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionStages() const { return m_versionStages; }
    inline bool VersionStagesHasBeenSet() const { return m_versionStagesHasBeenSet; }
    template<typename VersionStagesT = Aws::Vector<Aws::String>>
    void SetVersionStages(VersionStagesT&& value) { m_versionStagesHasBeenSet = true; m_versionStages = std::forward<VersionStagesT>(value); }
    template<typename VersionStagesT = Aws::Vector<Aws::String>>
    PutSecretValueRequest& WithVersionStages(VersionStagesT&& value) { SetVersionStages(std::forward<VersionStagesT>(value)); return *this;}
    template<typename VersionStagesT = Aws::String>
    PutSecretValueRequest& AddVersionStages(VersionStagesT&& value) { m_versionStagesHasBeenSet = true; m_versionStages.emplace_back(std::forward<VersionStagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier that indicates the source of the request. For
     * cross-account rotation (when you rotate a secret in one account by using a
     * Lambda rotation function in another account) and the Lambda rotation function
     * assumes an IAM role to call Secrets Manager, Secrets Manager validates the
     * identity with the rotation token. For more information, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotating-secrets.html">How
     * rotation works</a>.</p> <p>Sensitive: This field contains sensitive information,
     * so the service does not include it in CloudTrail log entries. If you create your
     * own log entries, you must also avoid logging the information in this field.</p>
     */
    inline const Aws::String& GetRotationToken() const { return m_rotationToken; }
    inline bool RotationTokenHasBeenSet() const { return m_rotationTokenHasBeenSet; }
    template<typename RotationTokenT = Aws::String>
    void SetRotationToken(RotationTokenT&& value) { m_rotationTokenHasBeenSet = true; m_rotationToken = std::forward<RotationTokenT>(value); }
    template<typename RotationTokenT = Aws::String>
    PutSecretValueRequest& WithRotationToken(RotationTokenT&& value) { SetRotationToken(std::forward<RotationTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::Utils::CryptoBuffer m_secretBinary{};
    bool m_secretBinaryHasBeenSet = false;

    Aws::String m_secretString;
    bool m_secretStringHasBeenSet = false;

    Aws::Vector<Aws::String> m_versionStages;
    bool m_versionStagesHasBeenSet = false;

    Aws::String m_rotationToken;
    bool m_rotationTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
