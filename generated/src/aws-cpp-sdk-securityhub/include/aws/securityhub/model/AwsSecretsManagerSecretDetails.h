/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsSecretsManagerSecretRotationRules.h>
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
   * <p>Details about an Secrets Manager secret.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsSecretsManagerSecretDetails">AWS
   * API Reference</a></p>
   */
  class AwsSecretsManagerSecretDetails
  {
  public:
    AWS_SECURITYHUB_API AwsSecretsManagerSecretDetails();
    AWS_SECURITYHUB_API AwsSecretsManagerSecretDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsSecretsManagerSecretDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the rotation schedule for the secret.</p>
     */
    inline const AwsSecretsManagerSecretRotationRules& GetRotationRules() const{ return m_rotationRules; }

    /**
     * <p>Defines the rotation schedule for the secret.</p>
     */
    inline bool RotationRulesHasBeenSet() const { return m_rotationRulesHasBeenSet; }

    /**
     * <p>Defines the rotation schedule for the secret.</p>
     */
    inline void SetRotationRules(const AwsSecretsManagerSecretRotationRules& value) { m_rotationRulesHasBeenSet = true; m_rotationRules = value; }

    /**
     * <p>Defines the rotation schedule for the secret.</p>
     */
    inline void SetRotationRules(AwsSecretsManagerSecretRotationRules&& value) { m_rotationRulesHasBeenSet = true; m_rotationRules = std::move(value); }

    /**
     * <p>Defines the rotation schedule for the secret.</p>
     */
    inline AwsSecretsManagerSecretDetails& WithRotationRules(const AwsSecretsManagerSecretRotationRules& value) { SetRotationRules(value); return *this;}

    /**
     * <p>Defines the rotation schedule for the secret.</p>
     */
    inline AwsSecretsManagerSecretDetails& WithRotationRules(AwsSecretsManagerSecretRotationRules&& value) { SetRotationRules(std::move(value)); return *this;}


    /**
     * <p>Whether the rotation occurred within the specified rotation frequency.</p>
     */
    inline bool GetRotationOccurredWithinFrequency() const{ return m_rotationOccurredWithinFrequency; }

    /**
     * <p>Whether the rotation occurred within the specified rotation frequency.</p>
     */
    inline bool RotationOccurredWithinFrequencyHasBeenSet() const { return m_rotationOccurredWithinFrequencyHasBeenSet; }

    /**
     * <p>Whether the rotation occurred within the specified rotation frequency.</p>
     */
    inline void SetRotationOccurredWithinFrequency(bool value) { m_rotationOccurredWithinFrequencyHasBeenSet = true; m_rotationOccurredWithinFrequency = value; }

    /**
     * <p>Whether the rotation occurred within the specified rotation frequency.</p>
     */
    inline AwsSecretsManagerSecretDetails& WithRotationOccurredWithinFrequency(bool value) { SetRotationOccurredWithinFrequency(value); return *this;}


    /**
     * <p>The ARN, Key ID, or alias of the KMS key used to encrypt the
     * <code>SecretString</code> or <code>SecretBinary</code> values for versions of
     * this secret.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ARN, Key ID, or alias of the KMS key used to encrypt the
     * <code>SecretString</code> or <code>SecretBinary</code> values for versions of
     * this secret.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ARN, Key ID, or alias of the KMS key used to encrypt the
     * <code>SecretString</code> or <code>SecretBinary</code> values for versions of
     * this secret.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ARN, Key ID, or alias of the KMS key used to encrypt the
     * <code>SecretString</code> or <code>SecretBinary</code> values for versions of
     * this secret.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ARN, Key ID, or alias of the KMS key used to encrypt the
     * <code>SecretString</code> or <code>SecretBinary</code> values for versions of
     * this secret.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ARN, Key ID, or alias of the KMS key used to encrypt the
     * <code>SecretString</code> or <code>SecretBinary</code> values for versions of
     * this secret.</p>
     */
    inline AwsSecretsManagerSecretDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ARN, Key ID, or alias of the KMS key used to encrypt the
     * <code>SecretString</code> or <code>SecretBinary</code> values for versions of
     * this secret.</p>
     */
    inline AwsSecretsManagerSecretDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ARN, Key ID, or alias of the KMS key used to encrypt the
     * <code>SecretString</code> or <code>SecretBinary</code> values for versions of
     * this secret.</p>
     */
    inline AwsSecretsManagerSecretDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Whether rotation is enabled.</p>
     */
    inline bool GetRotationEnabled() const{ return m_rotationEnabled; }

    /**
     * <p>Whether rotation is enabled.</p>
     */
    inline bool RotationEnabledHasBeenSet() const { return m_rotationEnabledHasBeenSet; }

    /**
     * <p>Whether rotation is enabled.</p>
     */
    inline void SetRotationEnabled(bool value) { m_rotationEnabledHasBeenSet = true; m_rotationEnabled = value; }

    /**
     * <p>Whether rotation is enabled.</p>
     */
    inline AwsSecretsManagerSecretDetails& WithRotationEnabled(bool value) { SetRotationEnabled(value); return *this;}


    /**
     * <p>The ARN of the Lambda function that rotates the secret.</p>
     */
    inline const Aws::String& GetRotationLambdaArn() const{ return m_rotationLambdaArn; }

    /**
     * <p>The ARN of the Lambda function that rotates the secret.</p>
     */
    inline bool RotationLambdaArnHasBeenSet() const { return m_rotationLambdaArnHasBeenSet; }

    /**
     * <p>The ARN of the Lambda function that rotates the secret.</p>
     */
    inline void SetRotationLambdaArn(const Aws::String& value) { m_rotationLambdaArnHasBeenSet = true; m_rotationLambdaArn = value; }

    /**
     * <p>The ARN of the Lambda function that rotates the secret.</p>
     */
    inline void SetRotationLambdaArn(Aws::String&& value) { m_rotationLambdaArnHasBeenSet = true; m_rotationLambdaArn = std::move(value); }

    /**
     * <p>The ARN of the Lambda function that rotates the secret.</p>
     */
    inline void SetRotationLambdaArn(const char* value) { m_rotationLambdaArnHasBeenSet = true; m_rotationLambdaArn.assign(value); }

    /**
     * <p>The ARN of the Lambda function that rotates the secret.</p>
     */
    inline AwsSecretsManagerSecretDetails& WithRotationLambdaArn(const Aws::String& value) { SetRotationLambdaArn(value); return *this;}

    /**
     * <p>The ARN of the Lambda function that rotates the secret.</p>
     */
    inline AwsSecretsManagerSecretDetails& WithRotationLambdaArn(Aws::String&& value) { SetRotationLambdaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda function that rotates the secret.</p>
     */
    inline AwsSecretsManagerSecretDetails& WithRotationLambdaArn(const char* value) { SetRotationLambdaArn(value); return *this;}


    /**
     * <p>Whether the secret is deleted.</p>
     */
    inline bool GetDeleted() const{ return m_deleted; }

    /**
     * <p>Whether the secret is deleted.</p>
     */
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }

    /**
     * <p>Whether the secret is deleted.</p>
     */
    inline void SetDeleted(bool value) { m_deletedHasBeenSet = true; m_deleted = value; }

    /**
     * <p>Whether the secret is deleted.</p>
     */
    inline AwsSecretsManagerSecretDetails& WithDeleted(bool value) { SetDeleted(value); return *this;}


    /**
     * <p>The name of the secret.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the secret.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the secret.</p>
     */
    inline AwsSecretsManagerSecretDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the secret.</p>
     */
    inline AwsSecretsManagerSecretDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the secret.</p>
     */
    inline AwsSecretsManagerSecretDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline AwsSecretsManagerSecretDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline AwsSecretsManagerSecretDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline AwsSecretsManagerSecretDetails& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    AwsSecretsManagerSecretRotationRules m_rotationRules;
    bool m_rotationRulesHasBeenSet = false;

    bool m_rotationOccurredWithinFrequency;
    bool m_rotationOccurredWithinFrequencyHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_rotationEnabled;
    bool m_rotationEnabledHasBeenSet = false;

    Aws::String m_rotationLambdaArn;
    bool m_rotationLambdaArnHasBeenSet = false;

    bool m_deleted;
    bool m_deletedHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
