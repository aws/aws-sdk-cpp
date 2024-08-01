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
    AWS_SSMQUICKSETUP_API ConfigurationDefinition();
    AWS_SSMQUICKSETUP_API ConfigurationDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API ConfigurationDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the configuration definition.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ConfigurationDefinition& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ConfigurationDefinition& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ConfigurationDefinition& WithId(const char* value) { SetId(value); return *this;}
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
    inline ConfigurationDefinition& WithLocalDeploymentAdministrationRoleArn(const Aws::String& value) { SetLocalDeploymentAdministrationRoleArn(value); return *this;}
    inline ConfigurationDefinition& WithLocalDeploymentAdministrationRoleArn(Aws::String&& value) { SetLocalDeploymentAdministrationRoleArn(std::move(value)); return *this;}
    inline ConfigurationDefinition& WithLocalDeploymentAdministrationRoleArn(const char* value) { SetLocalDeploymentAdministrationRoleArn(value); return *this;}
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
    inline ConfigurationDefinition& WithLocalDeploymentExecutionRoleName(const Aws::String& value) { SetLocalDeploymentExecutionRoleName(value); return *this;}
    inline ConfigurationDefinition& WithLocalDeploymentExecutionRoleName(Aws::String&& value) { SetLocalDeploymentExecutionRoleName(std::move(value)); return *this;}
    inline ConfigurationDefinition& WithLocalDeploymentExecutionRoleName(const char* value) { SetLocalDeploymentExecutionRoleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs containing the required parameters for the
     * configuration type.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline ConfigurationDefinition& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline ConfigurationDefinition& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline ConfigurationDefinition& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline ConfigurationDefinition& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline ConfigurationDefinition& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline ConfigurationDefinition& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline ConfigurationDefinition& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline ConfigurationDefinition& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline ConfigurationDefinition& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the Quick Setup configuration.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline ConfigurationDefinition& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline ConfigurationDefinition& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline ConfigurationDefinition& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Quick Setup type used.</p>
     */
    inline const Aws::String& GetTypeVersion() const{ return m_typeVersion; }
    inline bool TypeVersionHasBeenSet() const { return m_typeVersionHasBeenSet; }
    inline void SetTypeVersion(const Aws::String& value) { m_typeVersionHasBeenSet = true; m_typeVersion = value; }
    inline void SetTypeVersion(Aws::String&& value) { m_typeVersionHasBeenSet = true; m_typeVersion = std::move(value); }
    inline void SetTypeVersion(const char* value) { m_typeVersionHasBeenSet = true; m_typeVersion.assign(value); }
    inline ConfigurationDefinition& WithTypeVersion(const Aws::String& value) { SetTypeVersion(value); return *this;}
    inline ConfigurationDefinition& WithTypeVersion(Aws::String&& value) { SetTypeVersion(std::move(value)); return *this;}
    inline ConfigurationDefinition& WithTypeVersion(const char* value) { SetTypeVersion(value); return *this;}
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
