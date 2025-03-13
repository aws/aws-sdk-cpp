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
    AWS_SECURITYHUB_API AwsEcrRepositoryDetails() = default;
    AWS_SECURITYHUB_API AwsEcrRepositoryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcrRepositoryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the repository.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AwsEcrRepositoryDetails& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image scanning configuration for a repository.</p>
     */
    inline const AwsEcrRepositoryImageScanningConfigurationDetails& GetImageScanningConfiguration() const { return m_imageScanningConfiguration; }
    inline bool ImageScanningConfigurationHasBeenSet() const { return m_imageScanningConfigurationHasBeenSet; }
    template<typename ImageScanningConfigurationT = AwsEcrRepositoryImageScanningConfigurationDetails>
    void SetImageScanningConfiguration(ImageScanningConfigurationT&& value) { m_imageScanningConfigurationHasBeenSet = true; m_imageScanningConfiguration = std::forward<ImageScanningConfigurationT>(value); }
    template<typename ImageScanningConfigurationT = AwsEcrRepositoryImageScanningConfigurationDetails>
    AwsEcrRepositoryDetails& WithImageScanningConfiguration(ImageScanningConfigurationT&& value) { SetImageScanningConfiguration(std::forward<ImageScanningConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag mutability setting for the repository. Valid values are
     * <code>IMMUTABLE</code> or <code>MUTABLE</code>.</p>
     */
    inline const Aws::String& GetImageTagMutability() const { return m_imageTagMutability; }
    inline bool ImageTagMutabilityHasBeenSet() const { return m_imageTagMutabilityHasBeenSet; }
    template<typename ImageTagMutabilityT = Aws::String>
    void SetImageTagMutability(ImageTagMutabilityT&& value) { m_imageTagMutabilityHasBeenSet = true; m_imageTagMutability = std::forward<ImageTagMutabilityT>(value); }
    template<typename ImageTagMutabilityT = Aws::String>
    AwsEcrRepositoryDetails& WithImageTagMutability(ImageTagMutabilityT&& value) { SetImageTagMutability(std::forward<ImageTagMutabilityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the lifecycle policy for the repository.</p>
     */
    inline const AwsEcrRepositoryLifecyclePolicyDetails& GetLifecyclePolicy() const { return m_lifecyclePolicy; }
    inline bool LifecyclePolicyHasBeenSet() const { return m_lifecyclePolicyHasBeenSet; }
    template<typename LifecyclePolicyT = AwsEcrRepositoryLifecyclePolicyDetails>
    void SetLifecyclePolicy(LifecyclePolicyT&& value) { m_lifecyclePolicyHasBeenSet = true; m_lifecyclePolicy = std::forward<LifecyclePolicyT>(value); }
    template<typename LifecyclePolicyT = AwsEcrRepositoryLifecyclePolicyDetails>
    AwsEcrRepositoryDetails& WithLifecyclePolicy(LifecyclePolicyT&& value) { SetLifecyclePolicy(std::forward<LifecyclePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    AwsEcrRepositoryDetails& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the repository policy.</p>
     */
    inline const Aws::String& GetRepositoryPolicyText() const { return m_repositoryPolicyText; }
    inline bool RepositoryPolicyTextHasBeenSet() const { return m_repositoryPolicyTextHasBeenSet; }
    template<typename RepositoryPolicyTextT = Aws::String>
    void SetRepositoryPolicyText(RepositoryPolicyTextT&& value) { m_repositoryPolicyTextHasBeenSet = true; m_repositoryPolicyText = std::forward<RepositoryPolicyTextT>(value); }
    template<typename RepositoryPolicyTextT = Aws::String>
    AwsEcrRepositoryDetails& WithRepositoryPolicyText(RepositoryPolicyTextT&& value) { SetRepositoryPolicyText(std::forward<RepositoryPolicyTextT>(value)); return *this;}
    ///@}
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
