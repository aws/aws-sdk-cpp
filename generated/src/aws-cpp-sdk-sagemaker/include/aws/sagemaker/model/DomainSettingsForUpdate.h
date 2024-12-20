/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RStudioServerProDomainSettingsForUpdate.h>
#include <aws/sagemaker/model/ExecutionRoleIdentityConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A collection of <code>Domain</code> configuration settings to
   * update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DomainSettingsForUpdate">AWS
   * API Reference</a></p>
   */
  class DomainSettingsForUpdate
  {
  public:
    AWS_SAGEMAKER_API DomainSettingsForUpdate();
    AWS_SAGEMAKER_API DomainSettingsForUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DomainSettingsForUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A collection of <code>RStudioServerPro</code> Domain-level app settings to
     * update. A single <code>RStudioServerPro</code> application is created for a
     * domain.</p>
     */
    inline const RStudioServerProDomainSettingsForUpdate& GetRStudioServerProDomainSettingsForUpdate() const{ return m_rStudioServerProDomainSettingsForUpdate; }
    inline bool RStudioServerProDomainSettingsForUpdateHasBeenSet() const { return m_rStudioServerProDomainSettingsForUpdateHasBeenSet; }
    inline void SetRStudioServerProDomainSettingsForUpdate(const RStudioServerProDomainSettingsForUpdate& value) { m_rStudioServerProDomainSettingsForUpdateHasBeenSet = true; m_rStudioServerProDomainSettingsForUpdate = value; }
    inline void SetRStudioServerProDomainSettingsForUpdate(RStudioServerProDomainSettingsForUpdate&& value) { m_rStudioServerProDomainSettingsForUpdateHasBeenSet = true; m_rStudioServerProDomainSettingsForUpdate = std::move(value); }
    inline DomainSettingsForUpdate& WithRStudioServerProDomainSettingsForUpdate(const RStudioServerProDomainSettingsForUpdate& value) { SetRStudioServerProDomainSettingsForUpdate(value); return *this;}
    inline DomainSettingsForUpdate& WithRStudioServerProDomainSettingsForUpdate(RStudioServerProDomainSettingsForUpdate&& value) { SetRStudioServerProDomainSettingsForUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for attaching a SageMaker AI user profile name to the
     * execution role as a <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">sts:SourceIdentity
     * key</a>. This configuration can only be modified if there are no apps in the
     * <code>InService</code> or <code>Pending</code> state.</p>
     */
    inline const ExecutionRoleIdentityConfig& GetExecutionRoleIdentityConfig() const{ return m_executionRoleIdentityConfig; }
    inline bool ExecutionRoleIdentityConfigHasBeenSet() const { return m_executionRoleIdentityConfigHasBeenSet; }
    inline void SetExecutionRoleIdentityConfig(const ExecutionRoleIdentityConfig& value) { m_executionRoleIdentityConfigHasBeenSet = true; m_executionRoleIdentityConfig = value; }
    inline void SetExecutionRoleIdentityConfig(ExecutionRoleIdentityConfig&& value) { m_executionRoleIdentityConfigHasBeenSet = true; m_executionRoleIdentityConfig = std::move(value); }
    inline DomainSettingsForUpdate& WithExecutionRoleIdentityConfig(const ExecutionRoleIdentityConfig& value) { SetExecutionRoleIdentityConfig(value); return *this;}
    inline DomainSettingsForUpdate& WithExecutionRoleIdentityConfig(ExecutionRoleIdentityConfig&& value) { SetExecutionRoleIdentityConfig(std::move(value)); return *this;}
    ///@}

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
    inline DomainSettingsForUpdate& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline DomainSettingsForUpdate& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline DomainSettingsForUpdate& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline DomainSettingsForUpdate& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline DomainSettingsForUpdate& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of settings that configure the domain's Docker interaction.</p>
     */
    inline const DockerSettings& GetDockerSettings() const{ return m_dockerSettings; }
    inline bool DockerSettingsHasBeenSet() const { return m_dockerSettingsHasBeenSet; }
    inline void SetDockerSettings(const DockerSettings& value) { m_dockerSettingsHasBeenSet = true; m_dockerSettings = value; }
    inline void SetDockerSettings(DockerSettings&& value) { m_dockerSettingsHasBeenSet = true; m_dockerSettings = std::move(value); }
    inline DomainSettingsForUpdate& WithDockerSettings(const DockerSettings& value) { SetDockerSettings(value); return *this;}
    inline DomainSettingsForUpdate& WithDockerSettings(DockerSettings&& value) { SetDockerSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of settings that configure the Amazon Q experience within the
     * domain.</p>
     */
    inline const AmazonQSettings& GetAmazonQSettings() const{ return m_amazonQSettings; }
    inline bool AmazonQSettingsHasBeenSet() const { return m_amazonQSettingsHasBeenSet; }
    inline void SetAmazonQSettings(const AmazonQSettings& value) { m_amazonQSettingsHasBeenSet = true; m_amazonQSettings = value; }
    inline void SetAmazonQSettings(AmazonQSettings&& value) { m_amazonQSettingsHasBeenSet = true; m_amazonQSettings = std::move(value); }
    inline DomainSettingsForUpdate& WithAmazonQSettings(const AmazonQSettings& value) { SetAmazonQSettings(value); return *this;}
    inline DomainSettingsForUpdate& WithAmazonQSettings(AmazonQSettings&& value) { SetAmazonQSettings(std::move(value)); return *this;}
    ///@}
  private:

    RStudioServerProDomainSettingsForUpdate m_rStudioServerProDomainSettingsForUpdate;
    bool m_rStudioServerProDomainSettingsForUpdateHasBeenSet = false;

    ExecutionRoleIdentityConfig m_executionRoleIdentityConfig;
    bool m_executionRoleIdentityConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    DockerSettings m_dockerSettings;
    bool m_dockerSettingsHasBeenSet = false;

    AmazonQSettings m_amazonQSettings;
    bool m_amazonQSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
