/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/ssm-quicksetup/SSMQuickSetupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace SSMQuickSetup
{
namespace Model
{

  /**
   */
  class UpdateConfigurationDefinitionRequest : public SSMQuickSetupRequest
  {
  public:
    AWS_SSMQUICKSETUP_API UpdateConfigurationDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfigurationDefinition"; }

    AWS_SSMQUICKSETUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the configuration definition you want to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateConfigurationDefinitionRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateConfigurationDefinitionRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateConfigurationDefinitionRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role used to administrate local configuration
     * deployments.</p>
     */
    inline const Aws::String& GetLocalDeploymentAdministrationRoleArn() const{ return m_localDeploymentAdministrationRoleArn; }
    inline bool LocalDeploymentAdministrationRoleArnHasBeenSet() const { return m_localDeploymentAdministrationRoleArnHasBeenSet; }
    inline void SetLocalDeploymentAdministrationRoleArn(const Aws::String& value) { m_localDeploymentAdministrationRoleArnHasBeenSet = true; m_localDeploymentAdministrationRoleArn = value; }
    inline void SetLocalDeploymentAdministrationRoleArn(Aws::String&& value) { m_localDeploymentAdministrationRoleArnHasBeenSet = true; m_localDeploymentAdministrationRoleArn = std::move(value); }
    inline void SetLocalDeploymentAdministrationRoleArn(const char* value) { m_localDeploymentAdministrationRoleArnHasBeenSet = true; m_localDeploymentAdministrationRoleArn.assign(value); }
    inline UpdateConfigurationDefinitionRequest& WithLocalDeploymentAdministrationRoleArn(const Aws::String& value) { SetLocalDeploymentAdministrationRoleArn(value); return *this;}
    inline UpdateConfigurationDefinitionRequest& WithLocalDeploymentAdministrationRoleArn(Aws::String&& value) { SetLocalDeploymentAdministrationRoleArn(std::move(value)); return *this;}
    inline UpdateConfigurationDefinitionRequest& WithLocalDeploymentAdministrationRoleArn(const char* value) { SetLocalDeploymentAdministrationRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role used to deploy local configurations.</p>
     */
    inline const Aws::String& GetLocalDeploymentExecutionRoleName() const{ return m_localDeploymentExecutionRoleName; }
    inline bool LocalDeploymentExecutionRoleNameHasBeenSet() const { return m_localDeploymentExecutionRoleNameHasBeenSet; }
    inline void SetLocalDeploymentExecutionRoleName(const Aws::String& value) { m_localDeploymentExecutionRoleNameHasBeenSet = true; m_localDeploymentExecutionRoleName = value; }
    inline void SetLocalDeploymentExecutionRoleName(Aws::String&& value) { m_localDeploymentExecutionRoleNameHasBeenSet = true; m_localDeploymentExecutionRoleName = std::move(value); }
    inline void SetLocalDeploymentExecutionRoleName(const char* value) { m_localDeploymentExecutionRoleNameHasBeenSet = true; m_localDeploymentExecutionRoleName.assign(value); }
    inline UpdateConfigurationDefinitionRequest& WithLocalDeploymentExecutionRoleName(const Aws::String& value) { SetLocalDeploymentExecutionRoleName(value); return *this;}
    inline UpdateConfigurationDefinitionRequest& WithLocalDeploymentExecutionRoleName(Aws::String&& value) { SetLocalDeploymentExecutionRoleName(std::move(value)); return *this;}
    inline UpdateConfigurationDefinitionRequest& WithLocalDeploymentExecutionRoleName(const char* value) { SetLocalDeploymentExecutionRoleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the configuration manager associated with the definition to
     * update.</p>
     */
    inline const Aws::String& GetManagerArn() const{ return m_managerArn; }
    inline bool ManagerArnHasBeenSet() const { return m_managerArnHasBeenSet; }
    inline void SetManagerArn(const Aws::String& value) { m_managerArnHasBeenSet = true; m_managerArn = value; }
    inline void SetManagerArn(Aws::String&& value) { m_managerArnHasBeenSet = true; m_managerArn = std::move(value); }
    inline void SetManagerArn(const char* value) { m_managerArnHasBeenSet = true; m_managerArn.assign(value); }
    inline UpdateConfigurationDefinitionRequest& WithManagerArn(const Aws::String& value) { SetManagerArn(value); return *this;}
    inline UpdateConfigurationDefinitionRequest& WithManagerArn(Aws::String&& value) { SetManagerArn(std::move(value)); return *this;}
    inline UpdateConfigurationDefinitionRequest& WithManagerArn(const char* value) { SetManagerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the configuration definition type.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline UpdateConfigurationDefinitionRequest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline UpdateConfigurationDefinitionRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline UpdateConfigurationDefinitionRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline UpdateConfigurationDefinitionRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline UpdateConfigurationDefinitionRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline UpdateConfigurationDefinitionRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateConfigurationDefinitionRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline UpdateConfigurationDefinitionRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline UpdateConfigurationDefinitionRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the Quick Setup type to use.</p>
     */
    inline const Aws::String& GetTypeVersion() const{ return m_typeVersion; }
    inline bool TypeVersionHasBeenSet() const { return m_typeVersionHasBeenSet; }
    inline void SetTypeVersion(const Aws::String& value) { m_typeVersionHasBeenSet = true; m_typeVersion = value; }
    inline void SetTypeVersion(Aws::String&& value) { m_typeVersionHasBeenSet = true; m_typeVersion = std::move(value); }
    inline void SetTypeVersion(const char* value) { m_typeVersionHasBeenSet = true; m_typeVersion.assign(value); }
    inline UpdateConfigurationDefinitionRequest& WithTypeVersion(const Aws::String& value) { SetTypeVersion(value); return *this;}
    inline UpdateConfigurationDefinitionRequest& WithTypeVersion(Aws::String&& value) { SetTypeVersion(std::move(value)); return *this;}
    inline UpdateConfigurationDefinitionRequest& WithTypeVersion(const char* value) { SetTypeVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_localDeploymentAdministrationRoleArn;
    bool m_localDeploymentAdministrationRoleArnHasBeenSet = false;

    Aws::String m_localDeploymentExecutionRoleName;
    bool m_localDeploymentExecutionRoleNameHasBeenSet = false;

    Aws::String m_managerArn;
    bool m_managerArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_typeVersion;
    bool m_typeVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
