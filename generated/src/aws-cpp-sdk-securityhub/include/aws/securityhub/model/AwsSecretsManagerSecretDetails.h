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
    AWS_SECURITYHUB_API AwsSecretsManagerSecretDetails() = default;
    AWS_SECURITYHUB_API AwsSecretsManagerSecretDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsSecretsManagerSecretDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the rotation schedule for the secret.</p>
     */
    inline const AwsSecretsManagerSecretRotationRules& GetRotationRules() const { return m_rotationRules; }
    inline bool RotationRulesHasBeenSet() const { return m_rotationRulesHasBeenSet; }
    template<typename RotationRulesT = AwsSecretsManagerSecretRotationRules>
    void SetRotationRules(RotationRulesT&& value) { m_rotationRulesHasBeenSet = true; m_rotationRules = std::forward<RotationRulesT>(value); }
    template<typename RotationRulesT = AwsSecretsManagerSecretRotationRules>
    AwsSecretsManagerSecretDetails& WithRotationRules(RotationRulesT&& value) { SetRotationRules(std::forward<RotationRulesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the rotation occurred within the specified rotation frequency.</p>
     */
    inline bool GetRotationOccurredWithinFrequency() const { return m_rotationOccurredWithinFrequency; }
    inline bool RotationOccurredWithinFrequencyHasBeenSet() const { return m_rotationOccurredWithinFrequencyHasBeenSet; }
    inline void SetRotationOccurredWithinFrequency(bool value) { m_rotationOccurredWithinFrequencyHasBeenSet = true; m_rotationOccurredWithinFrequency = value; }
    inline AwsSecretsManagerSecretDetails& WithRotationOccurredWithinFrequency(bool value) { SetRotationOccurredWithinFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN, Key ID, or alias of the KMS key used to encrypt the
     * <code>SecretString</code> or <code>SecretBinary</code> values for versions of
     * this secret.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    AwsSecretsManagerSecretDetails& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether rotation is enabled.</p>
     */
    inline bool GetRotationEnabled() const { return m_rotationEnabled; }
    inline bool RotationEnabledHasBeenSet() const { return m_rotationEnabledHasBeenSet; }
    inline void SetRotationEnabled(bool value) { m_rotationEnabledHasBeenSet = true; m_rotationEnabled = value; }
    inline AwsSecretsManagerSecretDetails& WithRotationEnabled(bool value) { SetRotationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Lambda function that rotates the secret.</p>
     */
    inline const Aws::String& GetRotationLambdaArn() const { return m_rotationLambdaArn; }
    inline bool RotationLambdaArnHasBeenSet() const { return m_rotationLambdaArnHasBeenSet; }
    template<typename RotationLambdaArnT = Aws::String>
    void SetRotationLambdaArn(RotationLambdaArnT&& value) { m_rotationLambdaArnHasBeenSet = true; m_rotationLambdaArn = std::forward<RotationLambdaArnT>(value); }
    template<typename RotationLambdaArnT = Aws::String>
    AwsSecretsManagerSecretDetails& WithRotationLambdaArn(RotationLambdaArnT&& value) { SetRotationLambdaArn(std::forward<RotationLambdaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the secret is deleted.</p>
     */
    inline bool GetDeleted() const { return m_deleted; }
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }
    inline void SetDeleted(bool value) { m_deletedHasBeenSet = true; m_deleted = value; }
    inline AwsSecretsManagerSecretDetails& WithDeleted(bool value) { SetDeleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the secret.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsSecretsManagerSecretDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AwsSecretsManagerSecretDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    AwsSecretsManagerSecretRotationRules m_rotationRules;
    bool m_rotationRulesHasBeenSet = false;

    bool m_rotationOccurredWithinFrequency{false};
    bool m_rotationOccurredWithinFrequencyHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_rotationEnabled{false};
    bool m_rotationEnabledHasBeenSet = false;

    Aws::String m_rotationLambdaArn;
    bool m_rotationLambdaArnHasBeenSet = false;

    bool m_deleted{false};
    bool m_deletedHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
