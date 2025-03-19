/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SSMQuickSetup
{
namespace Model
{

  /**
   * <p>The definition of a Quick Setup configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/ConfigurationDefinition">AWS
   * API Reference</a></p>
   */
  class ConfigurationDefinition
  {
  public:
    AWS_SSMQUICKSETUP_API ConfigurationDefinition() = default;
    AWS_SSMQUICKSETUP_API ConfigurationDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API ConfigurationDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the configuration definition.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ConfigurationDefinition& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    ConfigurationDefinition& WithLocalDeploymentAdministrationRoleArn(LocalDeploymentAdministrationRoleArnT&& value) { SetLocalDeploymentAdministrationRoleArn(std::forward<LocalDeploymentAdministrationRoleArnT>(value)); return *this;}
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
    ConfigurationDefinition& WithLocalDeploymentExecutionRoleName(LocalDeploymentExecutionRoleNameT&& value) { SetLocalDeploymentExecutionRoleName(std::forward<LocalDeploymentExecutionRoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs containing the required parameters for the
     * configuration type.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    ConfigurationDefinition& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    ConfigurationDefinition& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type of the Quick Setup configuration.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ConfigurationDefinition& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Quick Setup type used.</p>
     */
    inline const Aws::String& GetTypeVersion() const { return m_typeVersion; }
    inline bool TypeVersionHasBeenSet() const { return m_typeVersionHasBeenSet; }
    template<typename TypeVersionT = Aws::String>
    void SetTypeVersion(TypeVersionT&& value) { m_typeVersionHasBeenSet = true; m_typeVersion = std::forward<TypeVersionT>(value); }
    template<typename TypeVersionT = Aws::String>
    ConfigurationDefinition& WithTypeVersion(TypeVersionT&& value) { SetTypeVersion(std::forward<TypeVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_localDeploymentAdministrationRoleArn;
    bool m_localDeploymentAdministrationRoleArnHasBeenSet = false;

    Aws::String m_localDeploymentExecutionRoleName;
    bool m_localDeploymentExecutionRoleNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_typeVersion;
    bool m_typeVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
