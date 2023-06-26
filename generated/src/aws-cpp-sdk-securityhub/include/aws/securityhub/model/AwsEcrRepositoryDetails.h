/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEcrRepositoryImageScanningConfigurationDetails.h>
#include <aws/securityhub/model/AwsEcrRepositoryLifecyclePolicyDetails.h>
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
   * <p>Provides information about an Amazon Elastic Container Registry
   * repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcrRepositoryDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcrRepositoryDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcrRepositoryDetails();
    AWS_SECURITYHUB_API AwsEcrRepositoryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcrRepositoryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the repository.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the repository.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the repository.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the repository.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the repository.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the repository.</p>
     */
    inline AwsEcrRepositoryDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the repository.</p>
     */
    inline AwsEcrRepositoryDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the repository.</p>
     */
    inline AwsEcrRepositoryDetails& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The image scanning configuration for a repository.</p>
     */
    inline const AwsEcrRepositoryImageScanningConfigurationDetails& GetImageScanningConfiguration() const{ return m_imageScanningConfiguration; }

    /**
     * <p>The image scanning configuration for a repository.</p>
     */
    inline bool ImageScanningConfigurationHasBeenSet() const { return m_imageScanningConfigurationHasBeenSet; }

    /**
     * <p>The image scanning configuration for a repository.</p>
     */
    inline void SetImageScanningConfiguration(const AwsEcrRepositoryImageScanningConfigurationDetails& value) { m_imageScanningConfigurationHasBeenSet = true; m_imageScanningConfiguration = value; }

    /**
     * <p>The image scanning configuration for a repository.</p>
     */
    inline void SetImageScanningConfiguration(AwsEcrRepositoryImageScanningConfigurationDetails&& value) { m_imageScanningConfigurationHasBeenSet = true; m_imageScanningConfiguration = std::move(value); }

    /**
     * <p>The image scanning configuration for a repository.</p>
     */
    inline AwsEcrRepositoryDetails& WithImageScanningConfiguration(const AwsEcrRepositoryImageScanningConfigurationDetails& value) { SetImageScanningConfiguration(value); return *this;}

    /**
     * <p>The image scanning configuration for a repository.</p>
     */
    inline AwsEcrRepositoryDetails& WithImageScanningConfiguration(AwsEcrRepositoryImageScanningConfigurationDetails&& value) { SetImageScanningConfiguration(std::move(value)); return *this;}


    /**
     * <p>The tag mutability setting for the repository. Valid values are
     * <code>IMMUTABLE</code> or <code>MUTABLE</code>.</p>
     */
    inline const Aws::String& GetImageTagMutability() const{ return m_imageTagMutability; }

    /**
     * <p>The tag mutability setting for the repository. Valid values are
     * <code>IMMUTABLE</code> or <code>MUTABLE</code>.</p>
     */
    inline bool ImageTagMutabilityHasBeenSet() const { return m_imageTagMutabilityHasBeenSet; }

    /**
     * <p>The tag mutability setting for the repository. Valid values are
     * <code>IMMUTABLE</code> or <code>MUTABLE</code>.</p>
     */
    inline void SetImageTagMutability(const Aws::String& value) { m_imageTagMutabilityHasBeenSet = true; m_imageTagMutability = value; }

    /**
     * <p>The tag mutability setting for the repository. Valid values are
     * <code>IMMUTABLE</code> or <code>MUTABLE</code>.</p>
     */
    inline void SetImageTagMutability(Aws::String&& value) { m_imageTagMutabilityHasBeenSet = true; m_imageTagMutability = std::move(value); }

    /**
     * <p>The tag mutability setting for the repository. Valid values are
     * <code>IMMUTABLE</code> or <code>MUTABLE</code>.</p>
     */
    inline void SetImageTagMutability(const char* value) { m_imageTagMutabilityHasBeenSet = true; m_imageTagMutability.assign(value); }

    /**
     * <p>The tag mutability setting for the repository. Valid values are
     * <code>IMMUTABLE</code> or <code>MUTABLE</code>.</p>
     */
    inline AwsEcrRepositoryDetails& WithImageTagMutability(const Aws::String& value) { SetImageTagMutability(value); return *this;}

    /**
     * <p>The tag mutability setting for the repository. Valid values are
     * <code>IMMUTABLE</code> or <code>MUTABLE</code>.</p>
     */
    inline AwsEcrRepositoryDetails& WithImageTagMutability(Aws::String&& value) { SetImageTagMutability(std::move(value)); return *this;}

    /**
     * <p>The tag mutability setting for the repository. Valid values are
     * <code>IMMUTABLE</code> or <code>MUTABLE</code>.</p>
     */
    inline AwsEcrRepositoryDetails& WithImageTagMutability(const char* value) { SetImageTagMutability(value); return *this;}


    /**
     * <p>Information about the lifecycle policy for the repository.</p>
     */
    inline const AwsEcrRepositoryLifecyclePolicyDetails& GetLifecyclePolicy() const{ return m_lifecyclePolicy; }

    /**
     * <p>Information about the lifecycle policy for the repository.</p>
     */
    inline bool LifecyclePolicyHasBeenSet() const { return m_lifecyclePolicyHasBeenSet; }

    /**
     * <p>Information about the lifecycle policy for the repository.</p>
     */
    inline void SetLifecyclePolicy(const AwsEcrRepositoryLifecyclePolicyDetails& value) { m_lifecyclePolicyHasBeenSet = true; m_lifecyclePolicy = value; }

    /**
     * <p>Information about the lifecycle policy for the repository.</p>
     */
    inline void SetLifecyclePolicy(AwsEcrRepositoryLifecyclePolicyDetails&& value) { m_lifecyclePolicyHasBeenSet = true; m_lifecyclePolicy = std::move(value); }

    /**
     * <p>Information about the lifecycle policy for the repository.</p>
     */
    inline AwsEcrRepositoryDetails& WithLifecyclePolicy(const AwsEcrRepositoryLifecyclePolicyDetails& value) { SetLifecyclePolicy(value); return *this;}

    /**
     * <p>Information about the lifecycle policy for the repository.</p>
     */
    inline AwsEcrRepositoryDetails& WithLifecyclePolicy(AwsEcrRepositoryLifecyclePolicyDetails&& value) { SetLifecyclePolicy(std::move(value)); return *this;}


    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository.</p>
     */
    inline AwsEcrRepositoryDetails& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository.</p>
     */
    inline AwsEcrRepositoryDetails& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository.</p>
     */
    inline AwsEcrRepositoryDetails& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The text of the repository policy.</p>
     */
    inline const Aws::String& GetRepositoryPolicyText() const{ return m_repositoryPolicyText; }

    /**
     * <p>The text of the repository policy.</p>
     */
    inline bool RepositoryPolicyTextHasBeenSet() const { return m_repositoryPolicyTextHasBeenSet; }

    /**
     * <p>The text of the repository policy.</p>
     */
    inline void SetRepositoryPolicyText(const Aws::String& value) { m_repositoryPolicyTextHasBeenSet = true; m_repositoryPolicyText = value; }

    /**
     * <p>The text of the repository policy.</p>
     */
    inline void SetRepositoryPolicyText(Aws::String&& value) { m_repositoryPolicyTextHasBeenSet = true; m_repositoryPolicyText = std::move(value); }

    /**
     * <p>The text of the repository policy.</p>
     */
    inline void SetRepositoryPolicyText(const char* value) { m_repositoryPolicyTextHasBeenSet = true; m_repositoryPolicyText.assign(value); }

    /**
     * <p>The text of the repository policy.</p>
     */
    inline AwsEcrRepositoryDetails& WithRepositoryPolicyText(const Aws::String& value) { SetRepositoryPolicyText(value); return *this;}

    /**
     * <p>The text of the repository policy.</p>
     */
    inline AwsEcrRepositoryDetails& WithRepositoryPolicyText(Aws::String&& value) { SetRepositoryPolicyText(std::move(value)); return *this;}

    /**
     * <p>The text of the repository policy.</p>
     */
    inline AwsEcrRepositoryDetails& WithRepositoryPolicyText(const char* value) { SetRepositoryPolicyText(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AwsEcrRepositoryImageScanningConfigurationDetails m_imageScanningConfiguration;
    bool m_imageScanningConfigurationHasBeenSet = false;

    Aws::String m_imageTagMutability;
    bool m_imageTagMutabilityHasBeenSet = false;

    AwsEcrRepositoryLifecyclePolicyDetails m_lifecyclePolicy;
    bool m_lifecyclePolicyHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_repositoryPolicyText;
    bool m_repositoryPolicyTextHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
