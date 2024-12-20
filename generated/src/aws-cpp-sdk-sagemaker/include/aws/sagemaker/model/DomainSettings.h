/**
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
    AWS_SAGEMAKER_API DomainSettings();
    AWS_SAGEMAKER_API DomainSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DomainSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The security groups for the Amazon Virtual Private Cloud that the
     * <code>Domain</code> uses for communication between Domain-level apps and user
     * apps.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline DomainSettings& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline DomainSettings& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline DomainSettings& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline DomainSettings& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline DomainSettings& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of settings that configure the <code>RStudioServerPro</code>
     * Domain-level app.</p>
     */
    inline const RStudioServerProDomainSettings& GetRStudioServerProDomainSettings() const{ return m_rStudioServerProDomainSettings; }
    inline bool RStudioServerProDomainSettingsHasBeenSet() const { return m_rStudioServerProDomainSettingsHasBeenSet; }
    inline void SetRStudioServerProDomainSettings(const RStudioServerProDomainSettings& value) { m_rStudioServerProDomainSettingsHasBeenSet = true; m_rStudioServerProDomainSettings = value; }
    inline void SetRStudioServerProDomainSettings(RStudioServerProDomainSettings&& value) { m_rStudioServerProDomainSettingsHasBeenSet = true; m_rStudioServerProDomainSettings = std::move(value); }
    inline DomainSettings& WithRStudioServerProDomainSettings(const RStudioServerProDomainSettings& value) { SetRStudioServerProDomainSettings(value); return *this;}
    inline DomainSettings& WithRStudioServerProDomainSettings(RStudioServerProDomainSettings&& value) { SetRStudioServerProDomainSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for attaching a SageMaker AI user profile name to the
     * execution role as a <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">sts:SourceIdentity
     * key</a>.</p>
     */
    inline const ExecutionRoleIdentityConfig& GetExecutionRoleIdentityConfig() const{ return m_executionRoleIdentityConfig; }
    inline bool ExecutionRoleIdentityConfigHasBeenSet() const { return m_executionRoleIdentityConfigHasBeenSet; }
    inline void SetExecutionRoleIdentityConfig(const ExecutionRoleIdentityConfig& value) { m_executionRoleIdentityConfigHasBeenSet = true; m_executionRoleIdentityConfig = value; }
    inline void SetExecutionRoleIdentityConfig(ExecutionRoleIdentityConfig&& value) { m_executionRoleIdentityConfigHasBeenSet = true; m_executionRoleIdentityConfig = std::move(value); }
    inline DomainSettings& WithExecutionRoleIdentityConfig(const ExecutionRoleIdentityConfig& value) { SetExecutionRoleIdentityConfig(value); return *this;}
    inline DomainSettings& WithExecutionRoleIdentityConfig(ExecutionRoleIdentityConfig&& value) { SetExecutionRoleIdentityConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of settings that configure the domain's Docker interaction.</p>
     */
    inline const DockerSettings& GetDockerSettings() const{ return m_dockerSettings; }
    inline bool DockerSettingsHasBeenSet() const { return m_dockerSettingsHasBeenSet; }
    inline void SetDockerSettings(const DockerSettings& value) { m_dockerSettingsHasBeenSet = true; m_dockerSettings = value; }
    inline void SetDockerSettings(DockerSettings&& value) { m_dockerSettingsHasBeenSet = true; m_dockerSettings = std::move(value); }
    inline DomainSettings& WithDockerSettings(const DockerSettings& value) { SetDockerSettings(value); return *this;}
    inline DomainSettings& WithDockerSettings(DockerSettings&& value) { SetDockerSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of settings that configure the Amazon Q experience within the
     * domain. The <code>AuthMode</code> that you use to create the domain must be
     * <code>SSO</code>.</p>
     */
    inline const AmazonQSettings& GetAmazonQSettings() const{ return m_amazonQSettings; }
    inline bool AmazonQSettingsHasBeenSet() const { return m_amazonQSettingsHasBeenSet; }
    inline void SetAmazonQSettings(const AmazonQSettings& value) { m_amazonQSettingsHasBeenSet = true; m_amazonQSettings = value; }
    inline void SetAmazonQSettings(AmazonQSettings&& value) { m_amazonQSettingsHasBeenSet = true; m_amazonQSettings = std::move(value); }
    inline DomainSettings& WithAmazonQSettings(const AmazonQSettings& value) { SetAmazonQSettings(value); return *this;}
    inline DomainSettings& WithAmazonQSettings(AmazonQSettings&& value) { SetAmazonQSettings(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    RStudioServerProDomainSettings m_rStudioServerProDomainSettings;
    bool m_rStudioServerProDomainSettingsHasBeenSet = false;

    ExecutionRoleIdentityConfig m_executionRoleIdentityConfig;
    bool m_executionRoleIdentityConfigHasBeenSet = false;

    DockerSettings m_dockerSettings;
    bool m_dockerSettingsHasBeenSet = false;

    AmazonQSettings m_amazonQSettings;
    bool m_amazonQSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
