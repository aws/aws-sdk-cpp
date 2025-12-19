/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/model/ExternalSecretRotationMetadataItem.h>
#include <aws/secretsmanager/model/RotationRulesType.h>

#include <utility>

namespace Aws {
namespace SecretsManager {
namespace Model {

/**
 */
class RotateSecretRequest : public SecretsManagerRequest {
 public:
  AWS_SECRETSMANAGER_API RotateSecretRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RotateSecret"; }

  AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

  AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN or name of the secret to rotate.</p> <p>For an ARN, we recommend that
   * you specify a complete ARN rather than a partial ARN. See <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
   * a secret from a partial ARN</a>.</p>
   */
  inline const Aws::String& GetSecretId() const { return m_secretId; }
  inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
  template <typename SecretIdT = Aws::String>
  void SetSecretId(SecretIdT&& value) {
    m_secretIdHasBeenSet = true;
    m_secretId = std::forward<SecretIdT>(value);
  }
  template <typename SecretIdT = Aws::String>
  RotateSecretRequest& WithSecretId(SecretIdT&& value) {
    SetSecretId(std::forward<SecretIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the new version of the secret. You only need to
   * specify this value if you implement your own retry logic and you want to ensure
   * that Secrets Manager doesn't attempt to create a secret version twice.</p>
   *  <p>If you use the Amazon Web Services CLI or one of the Amazon Web
   * Services SDKs to call this operation, then you can leave this parameter empty.
   * The CLI or SDK generates a random UUID for you and includes it as the value for
   * this parameter in the request. </p>  <p>If you generate a raw HTTP
   * request to the Secrets Manager service endpoint, then you must generate a
   * <code>ClientRequestToken</code> and include it in the request.</p> <p>This value
   * helps ensure idempotency. Secrets Manager uses this value to prevent the
   * accidental creation of duplicate versions if there are failures and retries
   * during a rotation. We recommend that you generate a <a
   * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
   * value to ensure uniqueness of your versions within the specified secret. </p>
   */
  inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
  inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
  template <typename ClientRequestTokenT = Aws::String>
  void SetClientRequestToken(ClientRequestTokenT&& value) {
    m_clientRequestTokenHasBeenSet = true;
    m_clientRequestToken = std::forward<ClientRequestTokenT>(value);
  }
  template <typename ClientRequestTokenT = Aws::String>
  RotateSecretRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For secrets that use a Lambda rotation function to rotate, the ARN of the
   * Lambda rotation function. </p> <p>For secrets that use <i>managed rotation</i>,
   * omit this field. For more information, see <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_managed.html">Managed
   * rotation</a> in the <i>Secrets Manager User Guide</i>.</p>
   */
  inline const Aws::String& GetRotationLambdaARN() const { return m_rotationLambdaARN; }
  inline bool RotationLambdaARNHasBeenSet() const { return m_rotationLambdaARNHasBeenSet; }
  template <typename RotationLambdaARNT = Aws::String>
  void SetRotationLambdaARN(RotationLambdaARNT&& value) {
    m_rotationLambdaARNHasBeenSet = true;
    m_rotationLambdaARN = std::forward<RotationLambdaARNT>(value);
  }
  template <typename RotationLambdaARNT = Aws::String>
  RotateSecretRequest& WithRotationLambdaARN(RotationLambdaARNT&& value) {
    SetRotationLambdaARN(std::forward<RotationLambdaARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A structure that defines the rotation configuration for this secret.</p>
   *  <p>When changing an existing rotation schedule and setting
   * <code>RotateImmediately</code> to <code>false</code>:</p> <ul> <li> <p>If using
   * <code>AutomaticallyAfterDays</code> or a <code>ScheduleExpression</code> with
   * <code>rate()</code>, the previously scheduled rotation might still occur.</p>
   * </li> <li> <p>To prevent unintended rotations, use a
   * <code>ScheduleExpression</code> with <code>cron()</code> for granular control
   * over rotation windows.</p> </li> </ul>
   */
  inline const RotationRulesType& GetRotationRules() const { return m_rotationRules; }
  inline bool RotationRulesHasBeenSet() const { return m_rotationRulesHasBeenSet; }
  template <typename RotationRulesT = RotationRulesType>
  void SetRotationRules(RotationRulesT&& value) {
    m_rotationRulesHasBeenSet = true;
    m_rotationRules = std::forward<RotationRulesT>(value);
  }
  template <typename RotationRulesT = RotationRulesType>
  RotateSecretRequest& WithRotationRules(RotationRulesT&& value) {
    SetRotationRules(std::forward<RotationRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata needed to successfully rotate a managed external secret. A list
   * of key value pairs in JSON format specified by the partner. For more information
   * about the required information, see <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/managed-external-secrets.html">Using
   * Secrets Manager managed external secrets</a> </p>
   */
  inline const Aws::Vector<ExternalSecretRotationMetadataItem>& GetExternalSecretRotationMetadata() const {
    return m_externalSecretRotationMetadata;
  }
  inline bool ExternalSecretRotationMetadataHasBeenSet() const { return m_externalSecretRotationMetadataHasBeenSet; }
  template <typename ExternalSecretRotationMetadataT = Aws::Vector<ExternalSecretRotationMetadataItem>>
  void SetExternalSecretRotationMetadata(ExternalSecretRotationMetadataT&& value) {
    m_externalSecretRotationMetadataHasBeenSet = true;
    m_externalSecretRotationMetadata = std::forward<ExternalSecretRotationMetadataT>(value);
  }
  template <typename ExternalSecretRotationMetadataT = Aws::Vector<ExternalSecretRotationMetadataItem>>
  RotateSecretRequest& WithExternalSecretRotationMetadata(ExternalSecretRotationMetadataT&& value) {
    SetExternalSecretRotationMetadata(std::forward<ExternalSecretRotationMetadataT>(value));
    return *this;
  }
  template <typename ExternalSecretRotationMetadataT = ExternalSecretRotationMetadataItem>
  RotateSecretRequest& AddExternalSecretRotationMetadata(ExternalSecretRotationMetadataT&& value) {
    m_externalSecretRotationMetadataHasBeenSet = true;
    m_externalSecretRotationMetadata.emplace_back(std::forward<ExternalSecretRotationMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the role that allows Secrets Manager to
   * rotate a secret held by a third-party partner. For more information, see <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/mes-security.html">Security
   * and permissions</a>.</p>
   */
  inline const Aws::String& GetExternalSecretRotationRoleArn() const { return m_externalSecretRotationRoleArn; }
  inline bool ExternalSecretRotationRoleArnHasBeenSet() const { return m_externalSecretRotationRoleArnHasBeenSet; }
  template <typename ExternalSecretRotationRoleArnT = Aws::String>
  void SetExternalSecretRotationRoleArn(ExternalSecretRotationRoleArnT&& value) {
    m_externalSecretRotationRoleArnHasBeenSet = true;
    m_externalSecretRotationRoleArn = std::forward<ExternalSecretRotationRoleArnT>(value);
  }
  template <typename ExternalSecretRotationRoleArnT = Aws::String>
  RotateSecretRequest& WithExternalSecretRotationRoleArn(ExternalSecretRotationRoleArnT&& value) {
    SetExternalSecretRotationRoleArn(std::forward<ExternalSecretRotationRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to rotate the secret immediately or wait until the next
   * scheduled rotation window. The rotation schedule is defined in
   * <a>RotateSecretRequest$RotationRules</a>.</p> <p>The default for
   * <code>RotateImmediately</code> is <code>true</code>. If you don't specify this
   * value, Secrets Manager rotates the secret immediately.</p> <p>If you set
   * <code>RotateImmediately</code> to <code>false</code>, Secrets Manager tests the
   * rotation configuration by running the <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">
   * <code>testSecret</code> step</a> of the Lambda rotation function. This test
   * creates an <code>AWSPENDING</code> version of the secret and then removes
   * it.</p> <p>When changing an existing rotation schedule and setting
   * <code>RotateImmediately</code> to <code>false</code>:</p> <ul> <li> <p>If using
   * <code>AutomaticallyAfterDays</code> or a <code>ScheduleExpression</code> with
   * <code>rate()</code>, the previously scheduled rotation might still occur.</p>
   * </li> <li> <p>To prevent unintended rotations, use a
   * <code>ScheduleExpression</code> with <code>cron()</code> for granular control
   * over rotation windows.</p> </li> </ul> <p>Rotation is an asynchronous process.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">How
   * rotation works</a>.</p>
   */
  inline bool GetRotateImmediately() const { return m_rotateImmediately; }
  inline bool RotateImmediatelyHasBeenSet() const { return m_rotateImmediatelyHasBeenSet; }
  inline void SetRotateImmediately(bool value) {
    m_rotateImmediatelyHasBeenSet = true;
    m_rotateImmediately = value;
  }
  inline RotateSecretRequest& WithRotateImmediately(bool value) {
    SetRotateImmediately(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_secretId;

  Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_rotationLambdaARN;

  RotationRulesType m_rotationRules;

  Aws::Vector<ExternalSecretRotationMetadataItem> m_externalSecretRotationMetadata;

  Aws::String m_externalSecretRotationRoleArn;

  bool m_rotateImmediately{false};
  bool m_secretIdHasBeenSet = false;
  bool m_clientRequestTokenHasBeenSet = true;
  bool m_rotationLambdaARNHasBeenSet = false;
  bool m_rotationRulesHasBeenSet = false;
  bool m_externalSecretRotationMetadataHasBeenSet = false;
  bool m_externalSecretRotationRoleArnHasBeenSet = false;
  bool m_rotateImmediatelyHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecretsManager
}  // namespace Aws
