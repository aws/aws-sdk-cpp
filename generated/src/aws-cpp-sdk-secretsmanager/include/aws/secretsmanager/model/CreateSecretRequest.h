/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/secretsmanager/model/Tag.h>
#include <aws/secretsmanager/model/ReplicaRegionType.h>
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
  class CreateSecretRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API CreateSecretRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSecret"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the new secret.</p> <p>The secret name can contain ASCII letters,
     * numbers, and the following characters: /_+=.@-</p> <p>Do not end your secret
     * name with a hyphen followed by six characters. If you do so, you risk confusion
     * and unexpected results when searching for a secret by partial ARN. Secrets
     * Manager automatically adds a hyphen and six random characters after the secret
     * name at the end of the ARN.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the new secret.</p> <p>The secret name can contain ASCII letters,
     * numbers, and the following characters: /_+=.@-</p> <p>Do not end your secret
     * name with a hyphen followed by six characters. If you do so, you risk confusion
     * and unexpected results when searching for a secret by partial ARN. Secrets
     * Manager automatically adds a hyphen and six random characters after the secret
     * name at the end of the ARN.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the new secret.</p> <p>The secret name can contain ASCII letters,
     * numbers, and the following characters: /_+=.@-</p> <p>Do not end your secret
     * name with a hyphen followed by six characters. If you do so, you risk confusion
     * and unexpected results when searching for a secret by partial ARN. Secrets
     * Manager automatically adds a hyphen and six random characters after the secret
     * name at the end of the ARN.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the new secret.</p> <p>The secret name can contain ASCII letters,
     * numbers, and the following characters: /_+=.@-</p> <p>Do not end your secret
     * name with a hyphen followed by six characters. If you do so, you risk confusion
     * and unexpected results when searching for a secret by partial ARN. Secrets
     * Manager automatically adds a hyphen and six random characters after the secret
     * name at the end of the ARN.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the new secret.</p> <p>The secret name can contain ASCII letters,
     * numbers, and the following characters: /_+=.@-</p> <p>Do not end your secret
     * name with a hyphen followed by six characters. If you do so, you risk confusion
     * and unexpected results when searching for a secret by partial ARN. Secrets
     * Manager automatically adds a hyphen and six random characters after the secret
     * name at the end of the ARN.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the new secret.</p> <p>The secret name can contain ASCII letters,
     * numbers, and the following characters: /_+=.@-</p> <p>Do not end your secret
     * name with a hyphen followed by six characters. If you do so, you risk confusion
     * and unexpected results when searching for a secret by partial ARN. Secrets
     * Manager automatically adds a hyphen and six random characters after the secret
     * name at the end of the ARN.</p>
     */
    inline CreateSecretRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the new secret.</p> <p>The secret name can contain ASCII letters,
     * numbers, and the following characters: /_+=.@-</p> <p>Do not end your secret
     * name with a hyphen followed by six characters. If you do so, you risk confusion
     * and unexpected results when searching for a secret by partial ARN. Secrets
     * Manager automatically adds a hyphen and six random characters after the secret
     * name at the end of the ARN.</p>
     */
    inline CreateSecretRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the new secret.</p> <p>The secret name can contain ASCII letters,
     * numbers, and the following characters: /_+=.@-</p> <p>Do not end your secret
     * name with a hyphen followed by six characters. If you do so, you risk confusion
     * and unexpected results when searching for a secret by partial ARN. Secrets
     * Manager automatically adds a hyphen and six random characters after the secret
     * name at the end of the ARN.</p>
     */
    inline CreateSecretRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If you include <code>SecretString</code> or <code>SecretBinary</code>, then
     * Secrets Manager creates an initial version for the secret, and this parameter
     * specifies the unique identifier for the new version. </p>  <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDKs to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes it as the value for this parameter in the
     * request. If you don't use the SDK and instead generate a raw HTTP request to the
     * Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for the new version and include the
     * value in the request.</p>  <p>This value helps ensure idempotency.
     * Secrets Manager uses this value to prevent the accidental creation of duplicate
     * versions if there are failures and retries during a rotation. We recommend that
     * you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     * <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't already
     * associated with a version of the secret then a new version of the secret is
     * created. </p> </li> <li> <p>If a version with this value already exists and the
     * version <code>SecretString</code> and <code>SecretBinary</code> values are the
     * same as those in the request, then the request is ignored.</p> </li> <li> <p>If
     * a version with this value already exists and that version's
     * <code>SecretString</code> and <code>SecretBinary</code> values are different
     * from those in the request, then the request fails because you cannot modify an
     * existing version. Instead, use <a>PutSecretValue</a> to create a new
     * version.</p> </li> </ul> <p>This value becomes the <code>VersionId</code> of the
     * new version.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>If you include <code>SecretString</code> or <code>SecretBinary</code>, then
     * Secrets Manager creates an initial version for the secret, and this parameter
     * specifies the unique identifier for the new version. </p>  <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDKs to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes it as the value for this parameter in the
     * request. If you don't use the SDK and instead generate a raw HTTP request to the
     * Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for the new version and include the
     * value in the request.</p>  <p>This value helps ensure idempotency.
     * Secrets Manager uses this value to prevent the accidental creation of duplicate
     * versions if there are failures and retries during a rotation. We recommend that
     * you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     * <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't already
     * associated with a version of the secret then a new version of the secret is
     * created. </p> </li> <li> <p>If a version with this value already exists and the
     * version <code>SecretString</code> and <code>SecretBinary</code> values are the
     * same as those in the request, then the request is ignored.</p> </li> <li> <p>If
     * a version with this value already exists and that version's
     * <code>SecretString</code> and <code>SecretBinary</code> values are different
     * from those in the request, then the request fails because you cannot modify an
     * existing version. Instead, use <a>PutSecretValue</a> to create a new
     * version.</p> </li> </ul> <p>This value becomes the <code>VersionId</code> of the
     * new version.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>If you include <code>SecretString</code> or <code>SecretBinary</code>, then
     * Secrets Manager creates an initial version for the secret, and this parameter
     * specifies the unique identifier for the new version. </p>  <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDKs to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes it as the value for this parameter in the
     * request. If you don't use the SDK and instead generate a raw HTTP request to the
     * Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for the new version and include the
     * value in the request.</p>  <p>This value helps ensure idempotency.
     * Secrets Manager uses this value to prevent the accidental creation of duplicate
     * versions if there are failures and retries during a rotation. We recommend that
     * you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     * <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't already
     * associated with a version of the secret then a new version of the secret is
     * created. </p> </li> <li> <p>If a version with this value already exists and the
     * version <code>SecretString</code> and <code>SecretBinary</code> values are the
     * same as those in the request, then the request is ignored.</p> </li> <li> <p>If
     * a version with this value already exists and that version's
     * <code>SecretString</code> and <code>SecretBinary</code> values are different
     * from those in the request, then the request fails because you cannot modify an
     * existing version. Instead, use <a>PutSecretValue</a> to create a new
     * version.</p> </li> </ul> <p>This value becomes the <code>VersionId</code> of the
     * new version.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>If you include <code>SecretString</code> or <code>SecretBinary</code>, then
     * Secrets Manager creates an initial version for the secret, and this parameter
     * specifies the unique identifier for the new version. </p>  <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDKs to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes it as the value for this parameter in the
     * request. If you don't use the SDK and instead generate a raw HTTP request to the
     * Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for the new version and include the
     * value in the request.</p>  <p>This value helps ensure idempotency.
     * Secrets Manager uses this value to prevent the accidental creation of duplicate
     * versions if there are failures and retries during a rotation. We recommend that
     * you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     * <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't already
     * associated with a version of the secret then a new version of the secret is
     * created. </p> </li> <li> <p>If a version with this value already exists and the
     * version <code>SecretString</code> and <code>SecretBinary</code> values are the
     * same as those in the request, then the request is ignored.</p> </li> <li> <p>If
     * a version with this value already exists and that version's
     * <code>SecretString</code> and <code>SecretBinary</code> values are different
     * from those in the request, then the request fails because you cannot modify an
     * existing version. Instead, use <a>PutSecretValue</a> to create a new
     * version.</p> </li> </ul> <p>This value becomes the <code>VersionId</code> of the
     * new version.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>If you include <code>SecretString</code> or <code>SecretBinary</code>, then
     * Secrets Manager creates an initial version for the secret, and this parameter
     * specifies the unique identifier for the new version. </p>  <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDKs to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes it as the value for this parameter in the
     * request. If you don't use the SDK and instead generate a raw HTTP request to the
     * Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for the new version and include the
     * value in the request.</p>  <p>This value helps ensure idempotency.
     * Secrets Manager uses this value to prevent the accidental creation of duplicate
     * versions if there are failures and retries during a rotation. We recommend that
     * you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     * <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't already
     * associated with a version of the secret then a new version of the secret is
     * created. </p> </li> <li> <p>If a version with this value already exists and the
     * version <code>SecretString</code> and <code>SecretBinary</code> values are the
     * same as those in the request, then the request is ignored.</p> </li> <li> <p>If
     * a version with this value already exists and that version's
     * <code>SecretString</code> and <code>SecretBinary</code> values are different
     * from those in the request, then the request fails because you cannot modify an
     * existing version. Instead, use <a>PutSecretValue</a> to create a new
     * version.</p> </li> </ul> <p>This value becomes the <code>VersionId</code> of the
     * new version.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>If you include <code>SecretString</code> or <code>SecretBinary</code>, then
     * Secrets Manager creates an initial version for the secret, and this parameter
     * specifies the unique identifier for the new version. </p>  <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDKs to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes it as the value for this parameter in the
     * request. If you don't use the SDK and instead generate a raw HTTP request to the
     * Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for the new version and include the
     * value in the request.</p>  <p>This value helps ensure idempotency.
     * Secrets Manager uses this value to prevent the accidental creation of duplicate
     * versions if there are failures and retries during a rotation. We recommend that
     * you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     * <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't already
     * associated with a version of the secret then a new version of the secret is
     * created. </p> </li> <li> <p>If a version with this value already exists and the
     * version <code>SecretString</code> and <code>SecretBinary</code> values are the
     * same as those in the request, then the request is ignored.</p> </li> <li> <p>If
     * a version with this value already exists and that version's
     * <code>SecretString</code> and <code>SecretBinary</code> values are different
     * from those in the request, then the request fails because you cannot modify an
     * existing version. Instead, use <a>PutSecretValue</a> to create a new
     * version.</p> </li> </ul> <p>This value becomes the <code>VersionId</code> of the
     * new version.</p>
     */
    inline CreateSecretRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>If you include <code>SecretString</code> or <code>SecretBinary</code>, then
     * Secrets Manager creates an initial version for the secret, and this parameter
     * specifies the unique identifier for the new version. </p>  <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDKs to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes it as the value for this parameter in the
     * request. If you don't use the SDK and instead generate a raw HTTP request to the
     * Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for the new version and include the
     * value in the request.</p>  <p>This value helps ensure idempotency.
     * Secrets Manager uses this value to prevent the accidental creation of duplicate
     * versions if there are failures and retries during a rotation. We recommend that
     * you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     * <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't already
     * associated with a version of the secret then a new version of the secret is
     * created. </p> </li> <li> <p>If a version with this value already exists and the
     * version <code>SecretString</code> and <code>SecretBinary</code> values are the
     * same as those in the request, then the request is ignored.</p> </li> <li> <p>If
     * a version with this value already exists and that version's
     * <code>SecretString</code> and <code>SecretBinary</code> values are different
     * from those in the request, then the request fails because you cannot modify an
     * existing version. Instead, use <a>PutSecretValue</a> to create a new
     * version.</p> </li> </ul> <p>This value becomes the <code>VersionId</code> of the
     * new version.</p>
     */
    inline CreateSecretRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>If you include <code>SecretString</code> or <code>SecretBinary</code>, then
     * Secrets Manager creates an initial version for the secret, and this parameter
     * specifies the unique identifier for the new version. </p>  <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDKs to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes it as the value for this parameter in the
     * request. If you don't use the SDK and instead generate a raw HTTP request to the
     * Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for the new version and include the
     * value in the request.</p>  <p>This value helps ensure idempotency.
     * Secrets Manager uses this value to prevent the accidental creation of duplicate
     * versions if there are failures and retries during a rotation. We recommend that
     * you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     * <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't already
     * associated with a version of the secret then a new version of the secret is
     * created. </p> </li> <li> <p>If a version with this value already exists and the
     * version <code>SecretString</code> and <code>SecretBinary</code> values are the
     * same as those in the request, then the request is ignored.</p> </li> <li> <p>If
     * a version with this value already exists and that version's
     * <code>SecretString</code> and <code>SecretBinary</code> values are different
     * from those in the request, then the request fails because you cannot modify an
     * existing version. Instead, use <a>PutSecretValue</a> to create a new
     * version.</p> </li> </ul> <p>This value becomes the <code>VersionId</code> of the
     * new version.</p>
     */
    inline CreateSecretRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The description of the secret.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the secret.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the secret.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the secret.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the secret.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the secret.</p>
     */
    inline CreateSecretRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the secret.</p>
     */
    inline CreateSecretRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the secret.</p>
     */
    inline CreateSecretRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN, key ID, or alias of the KMS key that Secrets Manager uses to encrypt
     * the secret value in the secret. An alias is always prefixed by
     * <code>alias/</code>, for example <code>alias/aws/secretsmanager</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/alias-about.html">About
     * aliases</a>.</p> <p>To use a KMS key in a different account, use the key ARN or
     * the alias ARN.</p> <p>If you don't specify this value, then Secrets Manager uses
     * the key <code>aws/secretsmanager</code>. If that key doesn't yet exist, then
     * Secrets Manager creates it for you automatically the first time it encrypts the
     * secret value.</p> <p>If the secret is in a different Amazon Web Services account
     * from the credentials calling the API, then you can't use
     * <code>aws/secretsmanager</code> to encrypt the secret, and you must create and
     * use a customer managed KMS key. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ARN, key ID, or alias of the KMS key that Secrets Manager uses to encrypt
     * the secret value in the secret. An alias is always prefixed by
     * <code>alias/</code>, for example <code>alias/aws/secretsmanager</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/alias-about.html">About
     * aliases</a>.</p> <p>To use a KMS key in a different account, use the key ARN or
     * the alias ARN.</p> <p>If you don't specify this value, then Secrets Manager uses
     * the key <code>aws/secretsmanager</code>. If that key doesn't yet exist, then
     * Secrets Manager creates it for you automatically the first time it encrypts the
     * secret value.</p> <p>If the secret is in a different Amazon Web Services account
     * from the credentials calling the API, then you can't use
     * <code>aws/secretsmanager</code> to encrypt the secret, and you must create and
     * use a customer managed KMS key. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ARN, key ID, or alias of the KMS key that Secrets Manager uses to encrypt
     * the secret value in the secret. An alias is always prefixed by
     * <code>alias/</code>, for example <code>alias/aws/secretsmanager</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/alias-about.html">About
     * aliases</a>.</p> <p>To use a KMS key in a different account, use the key ARN or
     * the alias ARN.</p> <p>If you don't specify this value, then Secrets Manager uses
     * the key <code>aws/secretsmanager</code>. If that key doesn't yet exist, then
     * Secrets Manager creates it for you automatically the first time it encrypts the
     * secret value.</p> <p>If the secret is in a different Amazon Web Services account
     * from the credentials calling the API, then you can't use
     * <code>aws/secretsmanager</code> to encrypt the secret, and you must create and
     * use a customer managed KMS key. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ARN, key ID, or alias of the KMS key that Secrets Manager uses to encrypt
     * the secret value in the secret. An alias is always prefixed by
     * <code>alias/</code>, for example <code>alias/aws/secretsmanager</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/alias-about.html">About
     * aliases</a>.</p> <p>To use a KMS key in a different account, use the key ARN or
     * the alias ARN.</p> <p>If you don't specify this value, then Secrets Manager uses
     * the key <code>aws/secretsmanager</code>. If that key doesn't yet exist, then
     * Secrets Manager creates it for you automatically the first time it encrypts the
     * secret value.</p> <p>If the secret is in a different Amazon Web Services account
     * from the credentials calling the API, then you can't use
     * <code>aws/secretsmanager</code> to encrypt the secret, and you must create and
     * use a customer managed KMS key. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ARN, key ID, or alias of the KMS key that Secrets Manager uses to encrypt
     * the secret value in the secret. An alias is always prefixed by
     * <code>alias/</code>, for example <code>alias/aws/secretsmanager</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/alias-about.html">About
     * aliases</a>.</p> <p>To use a KMS key in a different account, use the key ARN or
     * the alias ARN.</p> <p>If you don't specify this value, then Secrets Manager uses
     * the key <code>aws/secretsmanager</code>. If that key doesn't yet exist, then
     * Secrets Manager creates it for you automatically the first time it encrypts the
     * secret value.</p> <p>If the secret is in a different Amazon Web Services account
     * from the credentials calling the API, then you can't use
     * <code>aws/secretsmanager</code> to encrypt the secret, and you must create and
     * use a customer managed KMS key. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ARN, key ID, or alias of the KMS key that Secrets Manager uses to encrypt
     * the secret value in the secret. An alias is always prefixed by
     * <code>alias/</code>, for example <code>alias/aws/secretsmanager</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/alias-about.html">About
     * aliases</a>.</p> <p>To use a KMS key in a different account, use the key ARN or
     * the alias ARN.</p> <p>If you don't specify this value, then Secrets Manager uses
     * the key <code>aws/secretsmanager</code>. If that key doesn't yet exist, then
     * Secrets Manager creates it for you automatically the first time it encrypts the
     * secret value.</p> <p>If the secret is in a different Amazon Web Services account
     * from the credentials calling the API, then you can't use
     * <code>aws/secretsmanager</code> to encrypt the secret, and you must create and
     * use a customer managed KMS key. </p>
     */
    inline CreateSecretRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ARN, key ID, or alias of the KMS key that Secrets Manager uses to encrypt
     * the secret value in the secret. An alias is always prefixed by
     * <code>alias/</code>, for example <code>alias/aws/secretsmanager</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/alias-about.html">About
     * aliases</a>.</p> <p>To use a KMS key in a different account, use the key ARN or
     * the alias ARN.</p> <p>If you don't specify this value, then Secrets Manager uses
     * the key <code>aws/secretsmanager</code>. If that key doesn't yet exist, then
     * Secrets Manager creates it for you automatically the first time it encrypts the
     * secret value.</p> <p>If the secret is in a different Amazon Web Services account
     * from the credentials calling the API, then you can't use
     * <code>aws/secretsmanager</code> to encrypt the secret, and you must create and
     * use a customer managed KMS key. </p>
     */
    inline CreateSecretRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ARN, key ID, or alias of the KMS key that Secrets Manager uses to encrypt
     * the secret value in the secret. An alias is always prefixed by
     * <code>alias/</code>, for example <code>alias/aws/secretsmanager</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/alias-about.html">About
     * aliases</a>.</p> <p>To use a KMS key in a different account, use the key ARN or
     * the alias ARN.</p> <p>If you don't specify this value, then Secrets Manager uses
     * the key <code>aws/secretsmanager</code>. If that key doesn't yet exist, then
     * Secrets Manager creates it for you automatically the first time it encrypts the
     * secret value.</p> <p>If the secret is in a different Amazon Web Services account
     * from the credentials calling the API, then you can't use
     * <code>aws/secretsmanager</code> to encrypt the secret, and you must create and
     * use a customer managed KMS key. </p>
     */
    inline CreateSecretRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The binary data to encrypt and store in the new version of the secret. We
     * recommend that you store your binary data in a file and then pass the contents
     * of the file as a parameter.</p> <p>Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both.</p> <p>This parameter
     * is not available in the Secrets Manager console.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetSecretBinary() const{ return m_secretBinary; }

    /**
     * <p>The binary data to encrypt and store in the new version of the secret. We
     * recommend that you store your binary data in a file and then pass the contents
     * of the file as a parameter.</p> <p>Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both.</p> <p>This parameter
     * is not available in the Secrets Manager console.</p>
     */
    inline bool SecretBinaryHasBeenSet() const { return m_secretBinaryHasBeenSet; }

    /**
     * <p>The binary data to encrypt and store in the new version of the secret. We
     * recommend that you store your binary data in a file and then pass the contents
     * of the file as a parameter.</p> <p>Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both.</p> <p>This parameter
     * is not available in the Secrets Manager console.</p>
     */
    inline void SetSecretBinary(const Aws::Utils::CryptoBuffer& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = value; }

    /**
     * <p>The binary data to encrypt and store in the new version of the secret. We
     * recommend that you store your binary data in a file and then pass the contents
     * of the file as a parameter.</p> <p>Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both.</p> <p>This parameter
     * is not available in the Secrets Manager console.</p>
     */
    inline void SetSecretBinary(Aws::Utils::CryptoBuffer&& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = std::move(value); }

    /**
     * <p>The binary data to encrypt and store in the new version of the secret. We
     * recommend that you store your binary data in a file and then pass the contents
     * of the file as a parameter.</p> <p>Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both.</p> <p>This parameter
     * is not available in the Secrets Manager console.</p>
     */
    inline CreateSecretRequest& WithSecretBinary(const Aws::Utils::CryptoBuffer& value) { SetSecretBinary(value); return *this;}

    /**
     * <p>The binary data to encrypt and store in the new version of the secret. We
     * recommend that you store your binary data in a file and then pass the contents
     * of the file as a parameter.</p> <p>Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both.</p> <p>This parameter
     * is not available in the Secrets Manager console.</p>
     */
    inline CreateSecretRequest& WithSecretBinary(Aws::Utils::CryptoBuffer&& value) { SetSecretBinary(std::move(value)); return *this;}


    /**
     * <p>The text data to encrypt and store in this new version of the secret. We
     * recommend you use a JSON structure of key/value pairs for your secret value.</p>
     * <p>Either <code>SecretString</code> or <code>SecretBinary</code> must have a
     * value, but not both.</p> <p>If you create a secret by using the Secrets Manager
     * console then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that a Lambda rotation
     * function can parse.</p>
     */
    inline const Aws::String& GetSecretString() const{ return m_secretString; }

    /**
     * <p>The text data to encrypt and store in this new version of the secret. We
     * recommend you use a JSON structure of key/value pairs for your secret value.</p>
     * <p>Either <code>SecretString</code> or <code>SecretBinary</code> must have a
     * value, but not both.</p> <p>If you create a secret by using the Secrets Manager
     * console then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that a Lambda rotation
     * function can parse.</p>
     */
    inline bool SecretStringHasBeenSet() const { return m_secretStringHasBeenSet; }

    /**
     * <p>The text data to encrypt and store in this new version of the secret. We
     * recommend you use a JSON structure of key/value pairs for your secret value.</p>
     * <p>Either <code>SecretString</code> or <code>SecretBinary</code> must have a
     * value, but not both.</p> <p>If you create a secret by using the Secrets Manager
     * console then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that a Lambda rotation
     * function can parse.</p>
     */
    inline void SetSecretString(const Aws::String& value) { m_secretStringHasBeenSet = true; m_secretString = value; }

    /**
     * <p>The text data to encrypt and store in this new version of the secret. We
     * recommend you use a JSON structure of key/value pairs for your secret value.</p>
     * <p>Either <code>SecretString</code> or <code>SecretBinary</code> must have a
     * value, but not both.</p> <p>If you create a secret by using the Secrets Manager
     * console then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that a Lambda rotation
     * function can parse.</p>
     */
    inline void SetSecretString(Aws::String&& value) { m_secretStringHasBeenSet = true; m_secretString = std::move(value); }

    /**
     * <p>The text data to encrypt and store in this new version of the secret. We
     * recommend you use a JSON structure of key/value pairs for your secret value.</p>
     * <p>Either <code>SecretString</code> or <code>SecretBinary</code> must have a
     * value, but not both.</p> <p>If you create a secret by using the Secrets Manager
     * console then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that a Lambda rotation
     * function can parse.</p>
     */
    inline void SetSecretString(const char* value) { m_secretStringHasBeenSet = true; m_secretString.assign(value); }

    /**
     * <p>The text data to encrypt and store in this new version of the secret. We
     * recommend you use a JSON structure of key/value pairs for your secret value.</p>
     * <p>Either <code>SecretString</code> or <code>SecretBinary</code> must have a
     * value, but not both.</p> <p>If you create a secret by using the Secrets Manager
     * console then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that a Lambda rotation
     * function can parse.</p>
     */
    inline CreateSecretRequest& WithSecretString(const Aws::String& value) { SetSecretString(value); return *this;}

    /**
     * <p>The text data to encrypt and store in this new version of the secret. We
     * recommend you use a JSON structure of key/value pairs for your secret value.</p>
     * <p>Either <code>SecretString</code> or <code>SecretBinary</code> must have a
     * value, but not both.</p> <p>If you create a secret by using the Secrets Manager
     * console then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that a Lambda rotation
     * function can parse.</p>
     */
    inline CreateSecretRequest& WithSecretString(Aws::String&& value) { SetSecretString(std::move(value)); return *this;}

    /**
     * <p>The text data to encrypt and store in this new version of the secret. We
     * recommend you use a JSON structure of key/value pairs for your secret value.</p>
     * <p>Either <code>SecretString</code> or <code>SecretBinary</code> must have a
     * value, but not both.</p> <p>If you create a secret by using the Secrets Manager
     * console then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that a Lambda rotation
     * function can parse.</p>
     */
    inline CreateSecretRequest& WithSecretString(const char* value) { SetSecretString(value); return *this;}


    /**
     * <p>A list of tags to attach to the secret. Each tag is a key and value pair of
     * strings in a JSON text string, for example:</p> <p>
     * <code>[{"Key":"CostCenter","Value":"12345"},{"Key":"environment","Value":"production"}]</code>
     * </p> <p>Secrets Manager tag key names are case sensitive. A tag with the key
     * "ABC" is a different tag from one with key "abc".</p> <p>If you check tags in
     * permissions policies as part of your security strategy, then adding or removing
     * a tag can change permissions. If the completion of this operation would result
     * in you losing your permissions for this secret, then Secrets Manager blocks the
     * operation and returns an <code>Access Denied</code> error. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#tag-secrets-abac">Control
     * access to secrets using tags</a> and <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#auth-and-access_tags2">Limit
     * access to identities with tags that match secrets' tags</a>.</p> <p>For
     * information about how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a>. If your command-line tool or SDK requires quotation
     * marks around the parameter, you should use single quotes to avoid confusion with
     * the double quotes required in the JSON text.</p> <p>The following restrictions
     * apply to tags:</p> <ul> <li> <p>Maximum number of tags per secret: 50</p> </li>
     * <li> <p>Maximum key length: 127 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length: 255 Unicode characters in UTF-8</p> </li> <li> <p>Tag
     * keys and values are case sensitive.</p> </li> <li> <p>Do not use the
     * <code>aws:</code> prefix in your tag names or values because Amazon Web Services
     * reserves it for Amazon Web Services use. You can't edit or delete tag names or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per secret limit.</p> </li> <li> <p>If you use your tagging schema across
     * multiple services and resources, other services might have restrictions on
     * allowed characters. Generally allowed characters: letters, spaces, and numbers
     * representable in UTF-8, plus the following special characters: + - = . _ : /
     * @.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to attach to the secret. Each tag is a key and value pair of
     * strings in a JSON text string, for example:</p> <p>
     * <code>[{"Key":"CostCenter","Value":"12345"},{"Key":"environment","Value":"production"}]</code>
     * </p> <p>Secrets Manager tag key names are case sensitive. A tag with the key
     * "ABC" is a different tag from one with key "abc".</p> <p>If you check tags in
     * permissions policies as part of your security strategy, then adding or removing
     * a tag can change permissions. If the completion of this operation would result
     * in you losing your permissions for this secret, then Secrets Manager blocks the
     * operation and returns an <code>Access Denied</code> error. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#tag-secrets-abac">Control
     * access to secrets using tags</a> and <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#auth-and-access_tags2">Limit
     * access to identities with tags that match secrets' tags</a>.</p> <p>For
     * information about how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a>. If your command-line tool or SDK requires quotation
     * marks around the parameter, you should use single quotes to avoid confusion with
     * the double quotes required in the JSON text.</p> <p>The following restrictions
     * apply to tags:</p> <ul> <li> <p>Maximum number of tags per secret: 50</p> </li>
     * <li> <p>Maximum key length: 127 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length: 255 Unicode characters in UTF-8</p> </li> <li> <p>Tag
     * keys and values are case sensitive.</p> </li> <li> <p>Do not use the
     * <code>aws:</code> prefix in your tag names or values because Amazon Web Services
     * reserves it for Amazon Web Services use. You can't edit or delete tag names or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per secret limit.</p> </li> <li> <p>If you use your tagging schema across
     * multiple services and resources, other services might have restrictions on
     * allowed characters. Generally allowed characters: letters, spaces, and numbers
     * representable in UTF-8, plus the following special characters: + - = . _ : /
     * @.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to attach to the secret. Each tag is a key and value pair of
     * strings in a JSON text string, for example:</p> <p>
     * <code>[{"Key":"CostCenter","Value":"12345"},{"Key":"environment","Value":"production"}]</code>
     * </p> <p>Secrets Manager tag key names are case sensitive. A tag with the key
     * "ABC" is a different tag from one with key "abc".</p> <p>If you check tags in
     * permissions policies as part of your security strategy, then adding or removing
     * a tag can change permissions. If the completion of this operation would result
     * in you losing your permissions for this secret, then Secrets Manager blocks the
     * operation and returns an <code>Access Denied</code> error. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#tag-secrets-abac">Control
     * access to secrets using tags</a> and <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#auth-and-access_tags2">Limit
     * access to identities with tags that match secrets' tags</a>.</p> <p>For
     * information about how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a>. If your command-line tool or SDK requires quotation
     * marks around the parameter, you should use single quotes to avoid confusion with
     * the double quotes required in the JSON text.</p> <p>The following restrictions
     * apply to tags:</p> <ul> <li> <p>Maximum number of tags per secret: 50</p> </li>
     * <li> <p>Maximum key length: 127 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length: 255 Unicode characters in UTF-8</p> </li> <li> <p>Tag
     * keys and values are case sensitive.</p> </li> <li> <p>Do not use the
     * <code>aws:</code> prefix in your tag names or values because Amazon Web Services
     * reserves it for Amazon Web Services use. You can't edit or delete tag names or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per secret limit.</p> </li> <li> <p>If you use your tagging schema across
     * multiple services and resources, other services might have restrictions on
     * allowed characters. Generally allowed characters: letters, spaces, and numbers
     * representable in UTF-8, plus the following special characters: + - = . _ : /
     * @.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to attach to the secret. Each tag is a key and value pair of
     * strings in a JSON text string, for example:</p> <p>
     * <code>[{"Key":"CostCenter","Value":"12345"},{"Key":"environment","Value":"production"}]</code>
     * </p> <p>Secrets Manager tag key names are case sensitive. A tag with the key
     * "ABC" is a different tag from one with key "abc".</p> <p>If you check tags in
     * permissions policies as part of your security strategy, then adding or removing
     * a tag can change permissions. If the completion of this operation would result
     * in you losing your permissions for this secret, then Secrets Manager blocks the
     * operation and returns an <code>Access Denied</code> error. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#tag-secrets-abac">Control
     * access to secrets using tags</a> and <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#auth-and-access_tags2">Limit
     * access to identities with tags that match secrets' tags</a>.</p> <p>For
     * information about how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a>. If your command-line tool or SDK requires quotation
     * marks around the parameter, you should use single quotes to avoid confusion with
     * the double quotes required in the JSON text.</p> <p>The following restrictions
     * apply to tags:</p> <ul> <li> <p>Maximum number of tags per secret: 50</p> </li>
     * <li> <p>Maximum key length: 127 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length: 255 Unicode characters in UTF-8</p> </li> <li> <p>Tag
     * keys and values are case sensitive.</p> </li> <li> <p>Do not use the
     * <code>aws:</code> prefix in your tag names or values because Amazon Web Services
     * reserves it for Amazon Web Services use. You can't edit or delete tag names or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per secret limit.</p> </li> <li> <p>If you use your tagging schema across
     * multiple services and resources, other services might have restrictions on
     * allowed characters. Generally allowed characters: letters, spaces, and numbers
     * representable in UTF-8, plus the following special characters: + - = . _ : /
     * @.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to attach to the secret. Each tag is a key and value pair of
     * strings in a JSON text string, for example:</p> <p>
     * <code>[{"Key":"CostCenter","Value":"12345"},{"Key":"environment","Value":"production"}]</code>
     * </p> <p>Secrets Manager tag key names are case sensitive. A tag with the key
     * "ABC" is a different tag from one with key "abc".</p> <p>If you check tags in
     * permissions policies as part of your security strategy, then adding or removing
     * a tag can change permissions. If the completion of this operation would result
     * in you losing your permissions for this secret, then Secrets Manager blocks the
     * operation and returns an <code>Access Denied</code> error. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#tag-secrets-abac">Control
     * access to secrets using tags</a> and <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#auth-and-access_tags2">Limit
     * access to identities with tags that match secrets' tags</a>.</p> <p>For
     * information about how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a>. If your command-line tool or SDK requires quotation
     * marks around the parameter, you should use single quotes to avoid confusion with
     * the double quotes required in the JSON text.</p> <p>The following restrictions
     * apply to tags:</p> <ul> <li> <p>Maximum number of tags per secret: 50</p> </li>
     * <li> <p>Maximum key length: 127 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length: 255 Unicode characters in UTF-8</p> </li> <li> <p>Tag
     * keys and values are case sensitive.</p> </li> <li> <p>Do not use the
     * <code>aws:</code> prefix in your tag names or values because Amazon Web Services
     * reserves it for Amazon Web Services use. You can't edit or delete tag names or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per secret limit.</p> </li> <li> <p>If you use your tagging schema across
     * multiple services and resources, other services might have restrictions on
     * allowed characters. Generally allowed characters: letters, spaces, and numbers
     * representable in UTF-8, plus the following special characters: + - = . _ : /
     * @.</p> </li> </ul>
     */
    inline CreateSecretRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to attach to the secret. Each tag is a key and value pair of
     * strings in a JSON text string, for example:</p> <p>
     * <code>[{"Key":"CostCenter","Value":"12345"},{"Key":"environment","Value":"production"}]</code>
     * </p> <p>Secrets Manager tag key names are case sensitive. A tag with the key
     * "ABC" is a different tag from one with key "abc".</p> <p>If you check tags in
     * permissions policies as part of your security strategy, then adding or removing
     * a tag can change permissions. If the completion of this operation would result
     * in you losing your permissions for this secret, then Secrets Manager blocks the
     * operation and returns an <code>Access Denied</code> error. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#tag-secrets-abac">Control
     * access to secrets using tags</a> and <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#auth-and-access_tags2">Limit
     * access to identities with tags that match secrets' tags</a>.</p> <p>For
     * information about how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a>. If your command-line tool or SDK requires quotation
     * marks around the parameter, you should use single quotes to avoid confusion with
     * the double quotes required in the JSON text.</p> <p>The following restrictions
     * apply to tags:</p> <ul> <li> <p>Maximum number of tags per secret: 50</p> </li>
     * <li> <p>Maximum key length: 127 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length: 255 Unicode characters in UTF-8</p> </li> <li> <p>Tag
     * keys and values are case sensitive.</p> </li> <li> <p>Do not use the
     * <code>aws:</code> prefix in your tag names or values because Amazon Web Services
     * reserves it for Amazon Web Services use. You can't edit or delete tag names or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per secret limit.</p> </li> <li> <p>If you use your tagging schema across
     * multiple services and resources, other services might have restrictions on
     * allowed characters. Generally allowed characters: letters, spaces, and numbers
     * representable in UTF-8, plus the following special characters: + - = . _ : /
     * @.</p> </li> </ul>
     */
    inline CreateSecretRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to attach to the secret. Each tag is a key and value pair of
     * strings in a JSON text string, for example:</p> <p>
     * <code>[{"Key":"CostCenter","Value":"12345"},{"Key":"environment","Value":"production"}]</code>
     * </p> <p>Secrets Manager tag key names are case sensitive. A tag with the key
     * "ABC" is a different tag from one with key "abc".</p> <p>If you check tags in
     * permissions policies as part of your security strategy, then adding or removing
     * a tag can change permissions. If the completion of this operation would result
     * in you losing your permissions for this secret, then Secrets Manager blocks the
     * operation and returns an <code>Access Denied</code> error. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#tag-secrets-abac">Control
     * access to secrets using tags</a> and <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#auth-and-access_tags2">Limit
     * access to identities with tags that match secrets' tags</a>.</p> <p>For
     * information about how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a>. If your command-line tool or SDK requires quotation
     * marks around the parameter, you should use single quotes to avoid confusion with
     * the double quotes required in the JSON text.</p> <p>The following restrictions
     * apply to tags:</p> <ul> <li> <p>Maximum number of tags per secret: 50</p> </li>
     * <li> <p>Maximum key length: 127 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length: 255 Unicode characters in UTF-8</p> </li> <li> <p>Tag
     * keys and values are case sensitive.</p> </li> <li> <p>Do not use the
     * <code>aws:</code> prefix in your tag names or values because Amazon Web Services
     * reserves it for Amazon Web Services use. You can't edit or delete tag names or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per secret limit.</p> </li> <li> <p>If you use your tagging schema across
     * multiple services and resources, other services might have restrictions on
     * allowed characters. Generally allowed characters: letters, spaces, and numbers
     * representable in UTF-8, plus the following special characters: + - = . _ : /
     * @.</p> </li> </ul>
     */
    inline CreateSecretRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to attach to the secret. Each tag is a key and value pair of
     * strings in a JSON text string, for example:</p> <p>
     * <code>[{"Key":"CostCenter","Value":"12345"},{"Key":"environment","Value":"production"}]</code>
     * </p> <p>Secrets Manager tag key names are case sensitive. A tag with the key
     * "ABC" is a different tag from one with key "abc".</p> <p>If you check tags in
     * permissions policies as part of your security strategy, then adding or removing
     * a tag can change permissions. If the completion of this operation would result
     * in you losing your permissions for this secret, then Secrets Manager blocks the
     * operation and returns an <code>Access Denied</code> error. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#tag-secrets-abac">Control
     * access to secrets using tags</a> and <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#auth-and-access_tags2">Limit
     * access to identities with tags that match secrets' tags</a>.</p> <p>For
     * information about how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a>. If your command-line tool or SDK requires quotation
     * marks around the parameter, you should use single quotes to avoid confusion with
     * the double quotes required in the JSON text.</p> <p>The following restrictions
     * apply to tags:</p> <ul> <li> <p>Maximum number of tags per secret: 50</p> </li>
     * <li> <p>Maximum key length: 127 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length: 255 Unicode characters in UTF-8</p> </li> <li> <p>Tag
     * keys and values are case sensitive.</p> </li> <li> <p>Do not use the
     * <code>aws:</code> prefix in your tag names or values because Amazon Web Services
     * reserves it for Amazon Web Services use. You can't edit or delete tag names or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per secret limit.</p> </li> <li> <p>If you use your tagging schema across
     * multiple services and resources, other services might have restrictions on
     * allowed characters. Generally allowed characters: letters, spaces, and numbers
     * representable in UTF-8, plus the following special characters: + - = . _ : /
     * @.</p> </li> </ul>
     */
    inline CreateSecretRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of Regions and KMS keys to replicate secrets.</p>
     */
    inline const Aws::Vector<ReplicaRegionType>& GetAddReplicaRegions() const{ return m_addReplicaRegions; }

    /**
     * <p>A list of Regions and KMS keys to replicate secrets.</p>
     */
    inline bool AddReplicaRegionsHasBeenSet() const { return m_addReplicaRegionsHasBeenSet; }

    /**
     * <p>A list of Regions and KMS keys to replicate secrets.</p>
     */
    inline void SetAddReplicaRegions(const Aws::Vector<ReplicaRegionType>& value) { m_addReplicaRegionsHasBeenSet = true; m_addReplicaRegions = value; }

    /**
     * <p>A list of Regions and KMS keys to replicate secrets.</p>
     */
    inline void SetAddReplicaRegions(Aws::Vector<ReplicaRegionType>&& value) { m_addReplicaRegionsHasBeenSet = true; m_addReplicaRegions = std::move(value); }

    /**
     * <p>A list of Regions and KMS keys to replicate secrets.</p>
     */
    inline CreateSecretRequest& WithAddReplicaRegions(const Aws::Vector<ReplicaRegionType>& value) { SetAddReplicaRegions(value); return *this;}

    /**
     * <p>A list of Regions and KMS keys to replicate secrets.</p>
     */
    inline CreateSecretRequest& WithAddReplicaRegions(Aws::Vector<ReplicaRegionType>&& value) { SetAddReplicaRegions(std::move(value)); return *this;}

    /**
     * <p>A list of Regions and KMS keys to replicate secrets.</p>
     */
    inline CreateSecretRequest& AddAddReplicaRegions(const ReplicaRegionType& value) { m_addReplicaRegionsHasBeenSet = true; m_addReplicaRegions.push_back(value); return *this; }

    /**
     * <p>A list of Regions and KMS keys to replicate secrets.</p>
     */
    inline CreateSecretRequest& AddAddReplicaRegions(ReplicaRegionType&& value) { m_addReplicaRegionsHasBeenSet = true; m_addReplicaRegions.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether to overwrite a secret with the same name in the destination
     * Region. By default, secrets aren't overwritten.</p>
     */
    inline bool GetForceOverwriteReplicaSecret() const{ return m_forceOverwriteReplicaSecret; }

    /**
     * <p>Specifies whether to overwrite a secret with the same name in the destination
     * Region. By default, secrets aren't overwritten.</p>
     */
    inline bool ForceOverwriteReplicaSecretHasBeenSet() const { return m_forceOverwriteReplicaSecretHasBeenSet; }

    /**
     * <p>Specifies whether to overwrite a secret with the same name in the destination
     * Region. By default, secrets aren't overwritten.</p>
     */
    inline void SetForceOverwriteReplicaSecret(bool value) { m_forceOverwriteReplicaSecretHasBeenSet = true; m_forceOverwriteReplicaSecret = value; }

    /**
     * <p>Specifies whether to overwrite a secret with the same name in the destination
     * Region. By default, secrets aren't overwritten.</p>
     */
    inline CreateSecretRequest& WithForceOverwriteReplicaSecret(bool value) { SetForceOverwriteReplicaSecret(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<ReplicaRegionType> m_addReplicaRegions;
    bool m_addReplicaRegionsHasBeenSet = false;

    bool m_forceOverwriteReplicaSecret;
    bool m_forceOverwriteReplicaSecretHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
