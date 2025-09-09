/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RStudioServerProDomainSettingsForUpdate.h>
#include <aws/sagemaker/model/ExecutionRoleIdentityConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/TrustedIdentityPropagationSettings.h>
#include <aws/sagemaker/model/DockerSettings.h>
#include <aws/sagemaker/model/AmazonQSettings.h>
#include <aws/sagemaker/model/UnifiedStudioSettings.h>
#include <aws/sagemaker/model/IPAddressType.h>
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
   * <p>A collection of <code>Domain</code> configuration settings to
   * update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DomainSettingsForUpdate">AWS
   * API Reference</a></p>
   */
  class DomainSettingsForUpdate
  {
  public:
    AWS_SAGEMAKER_API DomainSettingsForUpdate() = default;
    AWS_SAGEMAKER_API DomainSettingsForUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DomainSettingsForUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A collection of <code>RStudioServerPro</code> Domain-level app settings to
     * update. A single <code>RStudioServerPro</code> application is created for a
     * domain.</p>
     */
    inline const RStudioServerProDomainSettingsForUpdate& GetRStudioServerProDomainSettingsForUpdate() const { return m_rStudioServerProDomainSettingsForUpdate; }
    inline bool RStudioServerProDomainSettingsForUpdateHasBeenSet() const { return m_rStudioServerProDomainSettingsForUpdateHasBeenSet; }
    template<typename RStudioServerProDomainSettingsForUpdateT = RStudioServerProDomainSettingsForUpdate>
    void SetRStudioServerProDomainSettingsForUpdate(RStudioServerProDomainSettingsForUpdateT&& value) { m_rStudioServerProDomainSettingsForUpdateHasBeenSet = true; m_rStudioServerProDomainSettingsForUpdate = std::forward<RStudioServerProDomainSettingsForUpdateT>(value); }
    template<typename RStudioServerProDomainSettingsForUpdateT = RStudioServerProDomainSettingsForUpdate>
    DomainSettingsForUpdate& WithRStudioServerProDomainSettingsForUpdate(RStudioServerProDomainSettingsForUpdateT&& value) { SetRStudioServerProDomainSettingsForUpdate(std::forward<RStudioServerProDomainSettingsForUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for attaching a SageMaker AI user profile name to the
     * execution role as a <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">sts:SourceIdentity
     * key</a>. This configuration can only be modified if there are no apps in the
     * <code>InService</code> or <code>Pending</code> state.</p>
     */
    inline ExecutionRoleIdentityConfig GetExecutionRoleIdentityConfig() const { return m_executionRoleIdentityConfig; }
    inline bool ExecutionRoleIdentityConfigHasBeenSet() const { return m_executionRoleIdentityConfigHasBeenSet; }
    inline void SetExecutionRoleIdentityConfig(ExecutionRoleIdentityConfig value) { m_executionRoleIdentityConfigHasBeenSet = true; m_executionRoleIdentityConfig = value; }
    inline DomainSettingsForUpdate& WithExecutionRoleIdentityConfig(ExecutionRoleIdentityConfig value) { SetExecutionRoleIdentityConfig(value); return *this;}
    ///@}

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
    DomainSettingsForUpdate& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    DomainSettingsForUpdate& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Trusted Identity Propagation (TIP) settings for the SageMaker domain.
     * These settings determine how user identities from IAM Identity Center are
     * propagated through the domain to TIP enabled Amazon Web Services services.</p>
     */
    inline const TrustedIdentityPropagationSettings& GetTrustedIdentityPropagationSettings() const { return m_trustedIdentityPropagationSettings; }
    inline bool TrustedIdentityPropagationSettingsHasBeenSet() const { return m_trustedIdentityPropagationSettingsHasBeenSet; }
    template<typename TrustedIdentityPropagationSettingsT = TrustedIdentityPropagationSettings>
    void SetTrustedIdentityPropagationSettings(TrustedIdentityPropagationSettingsT&& value) { m_trustedIdentityPropagationSettingsHasBeenSet = true; m_trustedIdentityPropagationSettings = std::forward<TrustedIdentityPropagationSettingsT>(value); }
    template<typename TrustedIdentityPropagationSettingsT = TrustedIdentityPropagationSettings>
    DomainSettingsForUpdate& WithTrustedIdentityPropagationSettings(TrustedIdentityPropagationSettingsT&& value) { SetTrustedIdentityPropagationSettings(std::forward<TrustedIdentityPropagationSettingsT>(value)); return *this;}
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
    DomainSettingsForUpdate& WithDockerSettings(DockerSettingsT&& value) { SetDockerSettings(std::forward<DockerSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of settings that configure the Amazon Q experience within the
     * domain.</p>
     */
    inline const AmazonQSettings& GetAmazonQSettings() const { return m_amazonQSettings; }
    inline bool AmazonQSettingsHasBeenSet() const { return m_amazonQSettingsHasBeenSet; }
    template<typename AmazonQSettingsT = AmazonQSettings>
    void SetAmazonQSettings(AmazonQSettingsT&& value) { m_amazonQSettingsHasBeenSet = true; m_amazonQSettings = std::forward<AmazonQSettingsT>(value); }
    template<typename AmazonQSettingsT = AmazonQSettings>
    DomainSettingsForUpdate& WithAmazonQSettings(AmazonQSettingsT&& value) { SetAmazonQSettings(std::forward<AmazonQSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings that apply to an SageMaker AI domain when you use it in Amazon
     * SageMaker Unified Studio.</p>
     */
    inline const UnifiedStudioSettings& GetUnifiedStudioSettings() const { return m_unifiedStudioSettings; }
    inline bool UnifiedStudioSettingsHasBeenSet() const { return m_unifiedStudioSettingsHasBeenSet; }
    template<typename UnifiedStudioSettingsT = UnifiedStudioSettings>
    void SetUnifiedStudioSettings(UnifiedStudioSettingsT&& value) { m_unifiedStudioSettingsHasBeenSet = true; m_unifiedStudioSettings = std::forward<UnifiedStudioSettingsT>(value); }
    template<typename UnifiedStudioSettingsT = UnifiedStudioSettings>
    DomainSettingsForUpdate& WithUnifiedStudioSettings(UnifiedStudioSettingsT&& value) { SetUnifiedStudioSettings(std::forward<UnifiedStudioSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type for the domain. Specify <code>ipv4</code> for IPv4-only
     * connectivity or <code>dualstack</code> for both IPv4 and IPv6 connectivity. When
     * you specify <code>dualstack</code>, the subnet must support IPv6 CIDR
     * blocks.</p>
     */
    inline IPAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IPAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline DomainSettingsForUpdate& WithIpAddressType(IPAddressType value) { SetIpAddressType(value); return *this;}
    ///@}
  private:

    RStudioServerProDomainSettingsForUpdate m_rStudioServerProDomainSettingsForUpdate;
    bool m_rStudioServerProDomainSettingsForUpdateHasBeenSet = false;

    ExecutionRoleIdentityConfig m_executionRoleIdentityConfig{ExecutionRoleIdentityConfig::NOT_SET};
    bool m_executionRoleIdentityConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    TrustedIdentityPropagationSettings m_trustedIdentityPropagationSettings;
    bool m_trustedIdentityPropagationSettingsHasBeenSet = false;

    DockerSettings m_dockerSettings;
    bool m_dockerSettingsHasBeenSet = false;

    AmazonQSettings m_amazonQSettings;
    bool m_amazonQSettingsHasBeenSet = false;

    UnifiedStudioSettings m_unifiedStudioSettings;
    bool m_unifiedStudioSettingsHasBeenSet = false;

    IPAddressType m_ipAddressType{IPAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
