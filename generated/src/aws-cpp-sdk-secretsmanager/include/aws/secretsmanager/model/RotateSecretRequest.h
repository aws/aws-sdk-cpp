/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/model/RotationRulesType.h>
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
  class RotateSecretRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API RotateSecretRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RotateSecret"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN or name of the secret to rotate.</p> <p>For an ARN, we recommend that
     * you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>The ARN or name of the secret to rotate.</p> <p>For an ARN, we recommend that
     * you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>The ARN or name of the secret to rotate.</p> <p>For an ARN, we recommend that
     * you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>The ARN or name of the secret to rotate.</p> <p>For an ARN, we recommend that
     * you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>The ARN or name of the secret to rotate.</p> <p>For an ARN, we recommend that
     * you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>The ARN or name of the secret to rotate.</p> <p>For an ARN, we recommend that
     * you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline RotateSecretRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>The ARN or name of the secret to rotate.</p> <p>For an ARN, we recommend that
     * you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline RotateSecretRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>The ARN or name of the secret to rotate.</p> <p>For an ARN, we recommend that
     * you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline RotateSecretRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>A unique identifier for the new version of the secret that helps ensure
     * idempotency. Secrets Manager uses this value to prevent the accidental creation
     * of duplicate versions if there are failures and retries during rotation. This
     * value becomes the <code>VersionId</code> of the new version.</p> <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes that in the request for this parameter. If you
     * don't use the SDK and instead generate a raw HTTP request to the Secrets Manager
     * service endpoint, then you must generate a <code>ClientRequestToken</code>
     * yourself for new versions and include that value in the request.</p> <p>You only
     * need to specify this value if you implement your own retry logic and you want to
     * ensure that Secrets Manager doesn't attempt to create a secret version twice. We
     * recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique identifier for the new version of the secret that helps ensure
     * idempotency. Secrets Manager uses this value to prevent the accidental creation
     * of duplicate versions if there are failures and retries during rotation. This
     * value becomes the <code>VersionId</code> of the new version.</p> <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes that in the request for this parameter. If you
     * don't use the SDK and instead generate a raw HTTP request to the Secrets Manager
     * service endpoint, then you must generate a <code>ClientRequestToken</code>
     * yourself for new versions and include that value in the request.</p> <p>You only
     * need to specify this value if you implement your own retry logic and you want to
     * ensure that Secrets Manager doesn't attempt to create a secret version twice. We
     * recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique identifier for the new version of the secret that helps ensure
     * idempotency. Secrets Manager uses this value to prevent the accidental creation
     * of duplicate versions if there are failures and retries during rotation. This
     * value becomes the <code>VersionId</code> of the new version.</p> <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes that in the request for this parameter. If you
     * don't use the SDK and instead generate a raw HTTP request to the Secrets Manager
     * service endpoint, then you must generate a <code>ClientRequestToken</code>
     * yourself for new versions and include that value in the request.</p> <p>You only
     * need to specify this value if you implement your own retry logic and you want to
     * ensure that Secrets Manager doesn't attempt to create a secret version twice. We
     * recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique identifier for the new version of the secret that helps ensure
     * idempotency. Secrets Manager uses this value to prevent the accidental creation
     * of duplicate versions if there are failures and retries during rotation. This
     * value becomes the <code>VersionId</code> of the new version.</p> <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes that in the request for this parameter. If you
     * don't use the SDK and instead generate a raw HTTP request to the Secrets Manager
     * service endpoint, then you must generate a <code>ClientRequestToken</code>
     * yourself for new versions and include that value in the request.</p> <p>You only
     * need to specify this value if you implement your own retry logic and you want to
     * ensure that Secrets Manager doesn't attempt to create a secret version twice. We
     * recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique identifier for the new version of the secret that helps ensure
     * idempotency. Secrets Manager uses this value to prevent the accidental creation
     * of duplicate versions if there are failures and retries during rotation. This
     * value becomes the <code>VersionId</code> of the new version.</p> <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes that in the request for this parameter. If you
     * don't use the SDK and instead generate a raw HTTP request to the Secrets Manager
     * service endpoint, then you must generate a <code>ClientRequestToken</code>
     * yourself for new versions and include that value in the request.</p> <p>You only
     * need to specify this value if you implement your own retry logic and you want to
     * ensure that Secrets Manager doesn't attempt to create a secret version twice. We
     * recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique identifier for the new version of the secret that helps ensure
     * idempotency. Secrets Manager uses this value to prevent the accidental creation
     * of duplicate versions if there are failures and retries during rotation. This
     * value becomes the <code>VersionId</code> of the new version.</p> <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes that in the request for this parameter. If you
     * don't use the SDK and instead generate a raw HTTP request to the Secrets Manager
     * service endpoint, then you must generate a <code>ClientRequestToken</code>
     * yourself for new versions and include that value in the request.</p> <p>You only
     * need to specify this value if you implement your own retry logic and you want to
     * ensure that Secrets Manager doesn't attempt to create a secret version twice. We
     * recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p>
     */
    inline RotateSecretRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique identifier for the new version of the secret that helps ensure
     * idempotency. Secrets Manager uses this value to prevent the accidental creation
     * of duplicate versions if there are failures and retries during rotation. This
     * value becomes the <code>VersionId</code> of the new version.</p> <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes that in the request for this parameter. If you
     * don't use the SDK and instead generate a raw HTTP request to the Secrets Manager
     * service endpoint, then you must generate a <code>ClientRequestToken</code>
     * yourself for new versions and include that value in the request.</p> <p>You only
     * need to specify this value if you implement your own retry logic and you want to
     * ensure that Secrets Manager doesn't attempt to create a secret version twice. We
     * recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p>
     */
    inline RotateSecretRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the new version of the secret that helps ensure
     * idempotency. Secrets Manager uses this value to prevent the accidental creation
     * of duplicate versions if there are failures and retries during rotation. This
     * value becomes the <code>VersionId</code> of the new version.</p> <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes that in the request for this parameter. If you
     * don't use the SDK and instead generate a raw HTTP request to the Secrets Manager
     * service endpoint, then you must generate a <code>ClientRequestToken</code>
     * yourself for new versions and include that value in the request.</p> <p>You only
     * need to specify this value if you implement your own retry logic and you want to
     * ensure that Secrets Manager doesn't attempt to create a secret version twice. We
     * recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p>
     */
    inline RotateSecretRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>For secrets that use a Lambda rotation function to rotate, the ARN of the
     * Lambda rotation function. </p> <p>For secrets that use <i>managed rotation</i>,
     * omit this field. For more information, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_managed.html">Managed
     * rotation</a> in the <i>Secrets Manager User Guide</i>.</p>
     */
    inline const Aws::String& GetRotationLambdaARN() const{ return m_rotationLambdaARN; }

    /**
     * <p>For secrets that use a Lambda rotation function to rotate, the ARN of the
     * Lambda rotation function. </p> <p>For secrets that use <i>managed rotation</i>,
     * omit this field. For more information, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_managed.html">Managed
     * rotation</a> in the <i>Secrets Manager User Guide</i>.</p>
     */
    inline bool RotationLambdaARNHasBeenSet() const { return m_rotationLambdaARNHasBeenSet; }

    /**
     * <p>For secrets that use a Lambda rotation function to rotate, the ARN of the
     * Lambda rotation function. </p> <p>For secrets that use <i>managed rotation</i>,
     * omit this field. For more information, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_managed.html">Managed
     * rotation</a> in the <i>Secrets Manager User Guide</i>.</p>
     */
    inline void SetRotationLambdaARN(const Aws::String& value) { m_rotationLambdaARNHasBeenSet = true; m_rotationLambdaARN = value; }

    /**
     * <p>For secrets that use a Lambda rotation function to rotate, the ARN of the
     * Lambda rotation function. </p> <p>For secrets that use <i>managed rotation</i>,
     * omit this field. For more information, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_managed.html">Managed
     * rotation</a> in the <i>Secrets Manager User Guide</i>.</p>
     */
    inline void SetRotationLambdaARN(Aws::String&& value) { m_rotationLambdaARNHasBeenSet = true; m_rotationLambdaARN = std::move(value); }

    /**
     * <p>For secrets that use a Lambda rotation function to rotate, the ARN of the
     * Lambda rotation function. </p> <p>For secrets that use <i>managed rotation</i>,
     * omit this field. For more information, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_managed.html">Managed
     * rotation</a> in the <i>Secrets Manager User Guide</i>.</p>
     */
    inline void SetRotationLambdaARN(const char* value) { m_rotationLambdaARNHasBeenSet = true; m_rotationLambdaARN.assign(value); }

    /**
     * <p>For secrets that use a Lambda rotation function to rotate, the ARN of the
     * Lambda rotation function. </p> <p>For secrets that use <i>managed rotation</i>,
     * omit this field. For more information, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_managed.html">Managed
     * rotation</a> in the <i>Secrets Manager User Guide</i>.</p>
     */
    inline RotateSecretRequest& WithRotationLambdaARN(const Aws::String& value) { SetRotationLambdaARN(value); return *this;}

    /**
     * <p>For secrets that use a Lambda rotation function to rotate, the ARN of the
     * Lambda rotation function. </p> <p>For secrets that use <i>managed rotation</i>,
     * omit this field. For more information, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_managed.html">Managed
     * rotation</a> in the <i>Secrets Manager User Guide</i>.</p>
     */
    inline RotateSecretRequest& WithRotationLambdaARN(Aws::String&& value) { SetRotationLambdaARN(std::move(value)); return *this;}

    /**
     * <p>For secrets that use a Lambda rotation function to rotate, the ARN of the
     * Lambda rotation function. </p> <p>For secrets that use <i>managed rotation</i>,
     * omit this field. For more information, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_managed.html">Managed
     * rotation</a> in the <i>Secrets Manager User Guide</i>.</p>
     */
    inline RotateSecretRequest& WithRotationLambdaARN(const char* value) { SetRotationLambdaARN(value); return *this;}


    /**
     * <p>A structure that defines the rotation configuration for this secret.</p>
     */
    inline const RotationRulesType& GetRotationRules() const{ return m_rotationRules; }

    /**
     * <p>A structure that defines the rotation configuration for this secret.</p>
     */
    inline bool RotationRulesHasBeenSet() const { return m_rotationRulesHasBeenSet; }

    /**
     * <p>A structure that defines the rotation configuration for this secret.</p>
     */
    inline void SetRotationRules(const RotationRulesType& value) { m_rotationRulesHasBeenSet = true; m_rotationRules = value; }

    /**
     * <p>A structure that defines the rotation configuration for this secret.</p>
     */
    inline void SetRotationRules(RotationRulesType&& value) { m_rotationRulesHasBeenSet = true; m_rotationRules = std::move(value); }

    /**
     * <p>A structure that defines the rotation configuration for this secret.</p>
     */
    inline RotateSecretRequest& WithRotationRules(const RotationRulesType& value) { SetRotationRules(value); return *this;}

    /**
     * <p>A structure that defines the rotation configuration for this secret.</p>
     */
    inline RotateSecretRequest& WithRotationRules(RotationRulesType&& value) { SetRotationRules(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to rotate the secret immediately or wait until the next
     * scheduled rotation window. The rotation schedule is defined in
     * <a>RotateSecretRequest$RotationRules</a>.</p> <p>For secrets that use a Lambda
     * rotation function to rotate, if you don't immediately rotate the secret, Secrets
     * Manager tests the rotation configuration by running the <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">
     * <code>testSecret</code> step</a> of the Lambda rotation function. The test
     * creates an <code>AWSPENDING</code> version of the secret and then removes
     * it.</p> <p>By default, Secrets Manager rotates the secret immediately.</p>
     */
    inline bool GetRotateImmediately() const{ return m_rotateImmediately; }

    /**
     * <p>Specifies whether to rotate the secret immediately or wait until the next
     * scheduled rotation window. The rotation schedule is defined in
     * <a>RotateSecretRequest$RotationRules</a>.</p> <p>For secrets that use a Lambda
     * rotation function to rotate, if you don't immediately rotate the secret, Secrets
     * Manager tests the rotation configuration by running the <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">
     * <code>testSecret</code> step</a> of the Lambda rotation function. The test
     * creates an <code>AWSPENDING</code> version of the secret and then removes
     * it.</p> <p>By default, Secrets Manager rotates the secret immediately.</p>
     */
    inline bool RotateImmediatelyHasBeenSet() const { return m_rotateImmediatelyHasBeenSet; }

    /**
     * <p>Specifies whether to rotate the secret immediately or wait until the next
     * scheduled rotation window. The rotation schedule is defined in
     * <a>RotateSecretRequest$RotationRules</a>.</p> <p>For secrets that use a Lambda
     * rotation function to rotate, if you don't immediately rotate the secret, Secrets
     * Manager tests the rotation configuration by running the <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">
     * <code>testSecret</code> step</a> of the Lambda rotation function. The test
     * creates an <code>AWSPENDING</code> version of the secret and then removes
     * it.</p> <p>By default, Secrets Manager rotates the secret immediately.</p>
     */
    inline void SetRotateImmediately(bool value) { m_rotateImmediatelyHasBeenSet = true; m_rotateImmediately = value; }

    /**
     * <p>Specifies whether to rotate the secret immediately or wait until the next
     * scheduled rotation window. The rotation schedule is defined in
     * <a>RotateSecretRequest$RotationRules</a>.</p> <p>For secrets that use a Lambda
     * rotation function to rotate, if you don't immediately rotate the secret, Secrets
     * Manager tests the rotation configuration by running the <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">
     * <code>testSecret</code> step</a> of the Lambda rotation function. The test
     * creates an <code>AWSPENDING</code> version of the secret and then removes
     * it.</p> <p>By default, Secrets Manager rotates the secret immediately.</p>
     */
    inline RotateSecretRequest& WithRotateImmediately(bool value) { SetRotateImmediately(value); return *this;}

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_rotationLambdaARN;
    bool m_rotationLambdaARNHasBeenSet = false;

    RotationRulesType m_rotationRules;
    bool m_rotationRulesHasBeenSet = false;

    bool m_rotateImmediately;
    bool m_rotateImmediatelyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
