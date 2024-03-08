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
    AWS_SAGEMAKER_API DockerSettings();
    AWS_SAGEMAKER_API DockerSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DockerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the domain can access Docker.</p>
     */
    inline const FeatureStatus& GetEnableDockerAccess() const{ return m_enableDockerAccess; }

    /**
     * <p>Indicates whether the domain can access Docker.</p>
     */
    inline bool EnableDockerAccessHasBeenSet() const { return m_enableDockerAccessHasBeenSet; }

    /**
     * <p>Indicates whether the domain can access Docker.</p>
     */
    inline void SetEnableDockerAccess(const FeatureStatus& value) { m_enableDockerAccessHasBeenSet = true; m_enableDockerAccess = value; }

    /**
     * <p>Indicates whether the domain can access Docker.</p>
     */
    inline void SetEnableDockerAccess(FeatureStatus&& value) { m_enableDockerAccessHasBeenSet = true; m_enableDockerAccess = std::move(value); }

    /**
     * <p>Indicates whether the domain can access Docker.</p>
     */
    inline DockerSettings& WithEnableDockerAccess(const FeatureStatus& value) { SetEnableDockerAccess(value); return *this;}

    /**
     * <p>Indicates whether the domain can access Docker.</p>
     */
    inline DockerSettings& WithEnableDockerAccess(FeatureStatus&& value) { SetEnableDockerAccess(std::move(value)); return *this;}


    /**
     * <p>The list of Amazon Web Services accounts that are trusted when the domain is
     * created in VPC-only mode.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcOnlyTrustedAccounts() const{ return m_vpcOnlyTrustedAccounts; }

    /**
     * <p>The list of Amazon Web Services accounts that are trusted when the domain is
     * created in VPC-only mode.</p>
     */
    inline bool VpcOnlyTrustedAccountsHasBeenSet() const { return m_vpcOnlyTrustedAccountsHasBeenSet; }

    /**
     * <p>The list of Amazon Web Services accounts that are trusted when the domain is
     * created in VPC-only mode.</p>
     */
    inline void SetVpcOnlyTrustedAccounts(const Aws::Vector<Aws::String>& value) { m_vpcOnlyTrustedAccountsHasBeenSet = true; m_vpcOnlyTrustedAccounts = value; }

    /**
     * <p>The list of Amazon Web Services accounts that are trusted when the domain is
     * created in VPC-only mode.</p>
     */
    inline void SetVpcOnlyTrustedAccounts(Aws::Vector<Aws::String>&& value) { m_vpcOnlyTrustedAccountsHasBeenSet = true; m_vpcOnlyTrustedAccounts = std::move(value); }

    /**
     * <p>The list of Amazon Web Services accounts that are trusted when the domain is
     * created in VPC-only mode.</p>
     */
    inline DockerSettings& WithVpcOnlyTrustedAccounts(const Aws::Vector<Aws::String>& value) { SetVpcOnlyTrustedAccounts(value); return *this;}

    /**
     * <p>The list of Amazon Web Services accounts that are trusted when the domain is
     * created in VPC-only mode.</p>
     */
    inline DockerSettings& WithVpcOnlyTrustedAccounts(Aws::Vector<Aws::String>&& value) { SetVpcOnlyTrustedAccounts(std::move(value)); return *this;}

    /**
     * <p>The list of Amazon Web Services accounts that are trusted when the domain is
     * created in VPC-only mode.</p>
     */
    inline DockerSettings& AddVpcOnlyTrustedAccounts(const Aws::String& value) { m_vpcOnlyTrustedAccountsHasBeenSet = true; m_vpcOnlyTrustedAccounts.push_back(value); return *this; }

    /**
     * <p>The list of Amazon Web Services accounts that are trusted when the domain is
     * created in VPC-only mode.</p>
     */
    inline DockerSettings& AddVpcOnlyTrustedAccounts(Aws::String&& value) { m_vpcOnlyTrustedAccountsHasBeenSet = true; m_vpcOnlyTrustedAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Amazon Web Services accounts that are trusted when the domain is
     * created in VPC-only mode.</p>
     */
    inline DockerSettings& AddVpcOnlyTrustedAccounts(const char* value) { m_vpcOnlyTrustedAccountsHasBeenSet = true; m_vpcOnlyTrustedAccounts.push_back(value); return *this; }

  private:

    FeatureStatus m_enableDockerAccess;
    bool m_enableDockerAccessHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcOnlyTrustedAccounts;
    bool m_vpcOnlyTrustedAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
