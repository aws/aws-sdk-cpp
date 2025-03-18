﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/RStudioServerProDomainSettings.h>
#include <aws/sagemaker/model/ExecutionRoleIdentityConfig.h>
#include <aws/sagemaker/model/DockerSettings.h>
#include <aws/sagemaker/model/AmazonQSettings.h>
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
   * <p>A collection of settings that apply to the <code>SageMaker Domain</code>.
   * These settings are specified through the <code>CreateDomain</code> API
   * call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DomainSettings">AWS
   * API Reference</a></p>
   */
  class DomainSettings
  {
  public:
    AWS_SAGEMAKER_API DomainSettings() = default;
    AWS_SAGEMAKER_API DomainSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DomainSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The security groups for the Amazon Virtual Private Cloud that the
     * <code>Domain</code> uses for communication between Domain-level apps and user
     * apps.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    DomainSettings& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    DomainSettings& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of settings that configure the <code>RStudioServerPro</code>
     * Domain-level app.</p>
     */
    inline const RStudioServerProDomainSettings& GetRStudioServerProDomainSettings() const { return m_rStudioServerProDomainSettings; }
    inline bool RStudioServerProDomainSettingsHasBeenSet() const { return m_rStudioServerProDomainSettingsHasBeenSet; }
    template<typename RStudioServerProDomainSettingsT = RStudioServerProDomainSettings>
    void SetRStudioServerProDomainSettings(RStudioServerProDomainSettingsT&& value) { m_rStudioServerProDomainSettingsHasBeenSet = true; m_rStudioServerProDomainSettings = std::forward<RStudioServerProDomainSettingsT>(value); }
    template<typename RStudioServerProDomainSettingsT = RStudioServerProDomainSettings>
    DomainSettings& WithRStudioServerProDomainSettings(RStudioServerProDomainSettingsT&& value) { SetRStudioServerProDomainSettings(std::forward<RStudioServerProDomainSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for attaching a SageMaker AI user profile name to the
     * execution role as a <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">sts:SourceIdentity
     * key</a>.</p>
     */
    inline ExecutionRoleIdentityConfig GetExecutionRoleIdentityConfig() const { return m_executionRoleIdentityConfig; }
    inline bool ExecutionRoleIdentityConfigHasBeenSet() const { return m_executionRoleIdentityConfigHasBeenSet; }
    inline void SetExecutionRoleIdentityConfig(ExecutionRoleIdentityConfig value) { m_executionRoleIdentityConfigHasBeenSet = true; m_executionRoleIdentityConfig = value; }
    inline DomainSettings& WithExecutionRoleIdentityConfig(ExecutionRoleIdentityConfig value) { SetExecutionRoleIdentityConfig(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of settings that configure the domain's Docker interaction.</p>
     */
    inline const DockerSettings& GetDockerSettings() const { return m_dockerSettings; }
    inline bool DockerSettingsHasBeenSet() const { return m_dockerSettingsHasBeenSet; }
    template<typename DockerSettingsT = DockerSettings>
    void SetDockerSettings(DockerSettingsT&& value) { m_dockerSettingsHasBeenSet = true; m_dockerSettings = std::forward<DockerSettingsT>(value); }
    template<typename DockerSettingsT = DockerSettings>
    DomainSettings& WithDockerSettings(DockerSettingsT&& value) { SetDockerSettings(std::forward<DockerSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of settings that configure the Amazon Q experience within the
     * domain. The <code>AuthMode</code> that you use to create the domain must be
     * <code>SSO</code>.</p>
     */
    inline const AmazonQSettings& GetAmazonQSettings() const { return m_amazonQSettings; }
    inline bool AmazonQSettingsHasBeenSet() const { return m_amazonQSettingsHasBeenSet; }
    template<typename AmazonQSettingsT = AmazonQSettings>
    void SetAmazonQSettings(AmazonQSettingsT&& value) { m_amazonQSettingsHasBeenSet = true; m_amazonQSettings = std::forward<AmazonQSettingsT>(value); }
    template<typename AmazonQSettingsT = AmazonQSettings>
    DomainSettings& WithAmazonQSettings(AmazonQSettingsT&& value) { SetAmazonQSettings(std::forward<AmazonQSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    RStudioServerProDomainSettings m_rStudioServerProDomainSettings;
    bool m_rStudioServerProDomainSettingsHasBeenSet = false;

    ExecutionRoleIdentityConfig m_executionRoleIdentityConfig{ExecutionRoleIdentityConfig::NOT_SET};
    bool m_executionRoleIdentityConfigHasBeenSet = false;

    DockerSettings m_dockerSettings;
    bool m_dockerSettingsHasBeenSet = false;

    AmazonQSettings m_amazonQSettings;
    bool m_amazonQSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
