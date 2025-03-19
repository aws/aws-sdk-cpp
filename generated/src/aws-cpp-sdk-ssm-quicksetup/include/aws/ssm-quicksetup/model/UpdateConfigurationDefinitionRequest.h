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
    AWS_SSMQUICKSETUP_API UpdateConfigurationDefinitionRequest() = default;

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
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateConfigurationDefinitionRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role used to administrate local configuration
     * deployments.</p>
     */
    inline const Aws::String& GetLocalDeploymentAdministrationRoleArn() const { return m_localDeploymentAdministrationRoleArn; }
    inline bool LocalDeploymentAdministrationRoleArnHasBeenSet() const { return m_localDeploymentAdministrationRoleArnHasBeenSet; }
    template<typename LocalDeploymentAdministrationRoleArnT = Aws::String>
    void SetLocalDeploymentAdministrationRoleArn(LocalDeploymentAdministrationRoleArnT&& value) { m_localDeploymentAdministrationRoleArnHasBeenSet = true; m_localDeploymentAdministrationRoleArn = std::forward<LocalDeploymentAdministrationRoleArnT>(value); }
    template<typename LocalDeploymentAdministrationRoleArnT = Aws::String>
    UpdateConfigurationDefinitionRequest& WithLocalDeploymentAdministrationRoleArn(LocalDeploymentAdministrationRoleArnT&& value) { SetLocalDeploymentAdministrationRoleArn(std::forward<LocalDeploymentAdministrationRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role used to deploy local configurations.</p>
     */
    inline const Aws::String& GetLocalDeploymentExecutionRoleName() const { return m_localDeploymentExecutionRoleName; }
    inline bool LocalDeploymentExecutionRoleNameHasBeenSet() const { return m_localDeploymentExecutionRoleNameHasBeenSet; }
    template<typename LocalDeploymentExecutionRoleNameT = Aws::String>
    void SetLocalDeploymentExecutionRoleName(LocalDeploymentExecutionRoleNameT&& value) { m_localDeploymentExecutionRoleNameHasBeenSet = true; m_localDeploymentExecutionRoleName = std::forward<LocalDeploymentExecutionRoleNameT>(value); }
    template<typename LocalDeploymentExecutionRoleNameT = Aws::String>
    UpdateConfigurationDefinitionRequest& WithLocalDeploymentExecutionRoleName(LocalDeploymentExecutionRoleNameT&& value) { SetLocalDeploymentExecutionRoleName(std::forward<LocalDeploymentExecutionRoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the configuration manager associated with the definition to
     * update.</p>
     */
    inline const Aws::String& GetManagerArn() const { return m_managerArn; }
    inline bool ManagerArnHasBeenSet() const { return m_managerArnHasBeenSet; }
    template<typename ManagerArnT = Aws::String>
    void SetManagerArn(ManagerArnT&& value) { m_managerArnHasBeenSet = true; m_managerArn = std::forward<ManagerArnT>(value); }
    template<typename ManagerArnT = Aws::String>
    UpdateConfigurationDefinitionRequest& WithManagerArn(ManagerArnT&& value) { SetManagerArn(std::forward<ManagerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the configuration definition type.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    UpdateConfigurationDefinitionRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    UpdateConfigurationDefinitionRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The version of the Quick Setup type to use.</p>
     */
    inline const Aws::String& GetTypeVersion() const { return m_typeVersion; }
    inline bool TypeVersionHasBeenSet() const { return m_typeVersionHasBeenSet; }
    template<typename TypeVersionT = Aws::String>
    void SetTypeVersion(TypeVersionT&& value) { m_typeVersionHasBeenSet = true; m_typeVersion = std::forward<TypeVersionT>(value); }
    template<typename TypeVersionT = Aws::String>
    UpdateConfigurationDefinitionRequest& WithTypeVersion(TypeVersionT&& value) { SetTypeVersion(std::forward<TypeVersionT>(value)); return *this;}
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
