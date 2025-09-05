/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/FeatureStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A collection of settings that configure the domain's Docker
   * interaction.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DockerSettings">AWS
   * API Reference</a></p>
   */
  class DockerSettings
  {
  public:
    AWS_SAGEMAKER_API DockerSettings() = default;
    AWS_SAGEMAKER_API DockerSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DockerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the domain can access Docker.</p>
     */
    inline FeatureStatus GetEnableDockerAccess() const { return m_enableDockerAccess; }
    inline bool EnableDockerAccessHasBeenSet() const { return m_enableDockerAccessHasBeenSet; }
    inline void SetEnableDockerAccess(FeatureStatus value) { m_enableDockerAccessHasBeenSet = true; m_enableDockerAccess = value; }
    inline DockerSettings& WithEnableDockerAccess(FeatureStatus value) { SetEnableDockerAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Amazon Web Services accounts that are trusted when the domain is
     * created in VPC-only mode.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcOnlyTrustedAccounts() const { return m_vpcOnlyTrustedAccounts; }
    inline bool VpcOnlyTrustedAccountsHasBeenSet() const { return m_vpcOnlyTrustedAccountsHasBeenSet; }
    template<typename VpcOnlyTrustedAccountsT = Aws::Vector<Aws::String>>
    void SetVpcOnlyTrustedAccounts(VpcOnlyTrustedAccountsT&& value) { m_vpcOnlyTrustedAccountsHasBeenSet = true; m_vpcOnlyTrustedAccounts = std::forward<VpcOnlyTrustedAccountsT>(value); }
    template<typename VpcOnlyTrustedAccountsT = Aws::Vector<Aws::String>>
    DockerSettings& WithVpcOnlyTrustedAccounts(VpcOnlyTrustedAccountsT&& value) { SetVpcOnlyTrustedAccounts(std::forward<VpcOnlyTrustedAccountsT>(value)); return *this;}
    template<typename VpcOnlyTrustedAccountsT = Aws::String>
    DockerSettings& AddVpcOnlyTrustedAccounts(VpcOnlyTrustedAccountsT&& value) { m_vpcOnlyTrustedAccountsHasBeenSet = true; m_vpcOnlyTrustedAccounts.emplace_back(std::forward<VpcOnlyTrustedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether to use rootless Docker.</p>
     */
    inline FeatureStatus GetRootlessDocker() const { return m_rootlessDocker; }
    inline bool RootlessDockerHasBeenSet() const { return m_rootlessDockerHasBeenSet; }
    inline void SetRootlessDocker(FeatureStatus value) { m_rootlessDockerHasBeenSet = true; m_rootlessDocker = value; }
    inline DockerSettings& WithRootlessDocker(FeatureStatus value) { SetRootlessDocker(value); return *this;}
    ///@}
  private:

    FeatureStatus m_enableDockerAccess{FeatureStatus::NOT_SET};
    bool m_enableDockerAccessHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcOnlyTrustedAccounts;
    bool m_vpcOnlyTrustedAccountsHasBeenSet = false;

    FeatureStatus m_rootlessDocker{FeatureStatus::NOT_SET};
    bool m_rootlessDockerHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
