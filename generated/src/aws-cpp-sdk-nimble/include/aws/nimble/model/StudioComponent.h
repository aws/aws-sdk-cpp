/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/StudioComponentConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/StudioComponentState.h>
#include <aws/nimble/model/StudioComponentStatusCode.h>
#include <aws/nimble/model/StudioComponentSubtype.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/nimble/model/StudioComponentType.h>
#include <aws/nimble/model/StudioComponentInitializationScript.h>
#include <aws/nimble/model/ScriptParameterKeyValue.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>A studio component represents a network resource to be used by a studio's
   * users and workflows. A typical studio contains studio components for each of the
   * following: render farm, Active Directory, licensing, and file system.</p>
   * <p>Access to a studio component is managed by specifying security groups for the
   * resource, as well as its endpoint.</p> <p>A studio component also has a set of
   * initialization scripts that are returned by
   * <code>GetLaunchProfileInitialization</code>. These initialization scripts run on
   * streaming sessions when they start. They provide users with flexibility in
   * controlling how the studio resources are configured on a streaming
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StudioComponent">AWS
   * API Reference</a></p>
   */
  class StudioComponent
  {
  public:
    AWS_NIMBLESTUDIO_API StudioComponent();
    AWS_NIMBLESTUDIO_API StudioComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API StudioComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline StudioComponent& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline StudioComponent& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline StudioComponent& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the studio component, based on component type.</p>
     */
    inline const StudioComponentConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const StudioComponentConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(StudioComponentConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline StudioComponent& WithConfiguration(const StudioComponentConfiguration& value) { SetConfiguration(value); return *this;}
    inline StudioComponent& WithConfiguration(StudioComponentConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline StudioComponent& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline StudioComponent& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of the user that created the studio component.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline StudioComponent& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline StudioComponent& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline StudioComponent& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable description for the studio component resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StudioComponent& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StudioComponent& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StudioComponent& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 security groups that control access to the studio component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEc2SecurityGroupIds() const{ return m_ec2SecurityGroupIds; }
    inline bool Ec2SecurityGroupIdsHasBeenSet() const { return m_ec2SecurityGroupIdsHasBeenSet; }
    inline void SetEc2SecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds = value; }
    inline void SetEc2SecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds = std::move(value); }
    inline StudioComponent& WithEc2SecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetEc2SecurityGroupIds(value); return *this;}
    inline StudioComponent& WithEc2SecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetEc2SecurityGroupIds(std::move(value)); return *this;}
    inline StudioComponent& AddEc2SecurityGroupIds(const Aws::String& value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds.push_back(value); return *this; }
    inline StudioComponent& AddEc2SecurityGroupIds(Aws::String&& value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds.push_back(std::move(value)); return *this; }
    inline StudioComponent& AddEc2SecurityGroupIds(const char* value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Initialization scripts for studio components.</p>
     */
    inline const Aws::Vector<StudioComponentInitializationScript>& GetInitializationScripts() const{ return m_initializationScripts; }
    inline bool InitializationScriptsHasBeenSet() const { return m_initializationScriptsHasBeenSet; }
    inline void SetInitializationScripts(const Aws::Vector<StudioComponentInitializationScript>& value) { m_initializationScriptsHasBeenSet = true; m_initializationScripts = value; }
    inline void SetInitializationScripts(Aws::Vector<StudioComponentInitializationScript>&& value) { m_initializationScriptsHasBeenSet = true; m_initializationScripts = std::move(value); }
    inline StudioComponent& WithInitializationScripts(const Aws::Vector<StudioComponentInitializationScript>& value) { SetInitializationScripts(value); return *this;}
    inline StudioComponent& WithInitializationScripts(Aws::Vector<StudioComponentInitializationScript>&& value) { SetInitializationScripts(std::move(value)); return *this;}
    inline StudioComponent& AddInitializationScripts(const StudioComponentInitializationScript& value) { m_initializationScriptsHasBeenSet = true; m_initializationScripts.push_back(value); return *this; }
    inline StudioComponent& AddInitializationScripts(StudioComponentInitializationScript&& value) { m_initializationScriptsHasBeenSet = true; m_initializationScripts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A friendly name for the studio component resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StudioComponent& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StudioComponent& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StudioComponent& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM role attached to a Studio Component that gives the studio component
     * access to Amazon Web Services resources at anytime while the instance is
     * running. </p>
     */
    inline const Aws::String& GetRuntimeRoleArn() const{ return m_runtimeRoleArn; }
    inline bool RuntimeRoleArnHasBeenSet() const { return m_runtimeRoleArnHasBeenSet; }
    inline void SetRuntimeRoleArn(const Aws::String& value) { m_runtimeRoleArnHasBeenSet = true; m_runtimeRoleArn = value; }
    inline void SetRuntimeRoleArn(Aws::String&& value) { m_runtimeRoleArnHasBeenSet = true; m_runtimeRoleArn = std::move(value); }
    inline void SetRuntimeRoleArn(const char* value) { m_runtimeRoleArnHasBeenSet = true; m_runtimeRoleArn.assign(value); }
    inline StudioComponent& WithRuntimeRoleArn(const Aws::String& value) { SetRuntimeRoleArn(value); return *this;}
    inline StudioComponent& WithRuntimeRoleArn(Aws::String&& value) { SetRuntimeRoleArn(std::move(value)); return *this;}
    inline StudioComponent& WithRuntimeRoleArn(const char* value) { SetRuntimeRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters for the studio component scripts.</p>
     */
    inline const Aws::Vector<ScriptParameterKeyValue>& GetScriptParameters() const{ return m_scriptParameters; }
    inline bool ScriptParametersHasBeenSet() const { return m_scriptParametersHasBeenSet; }
    inline void SetScriptParameters(const Aws::Vector<ScriptParameterKeyValue>& value) { m_scriptParametersHasBeenSet = true; m_scriptParameters = value; }
    inline void SetScriptParameters(Aws::Vector<ScriptParameterKeyValue>&& value) { m_scriptParametersHasBeenSet = true; m_scriptParameters = std::move(value); }
    inline StudioComponent& WithScriptParameters(const Aws::Vector<ScriptParameterKeyValue>& value) { SetScriptParameters(value); return *this;}
    inline StudioComponent& WithScriptParameters(Aws::Vector<ScriptParameterKeyValue>&& value) { SetScriptParameters(std::move(value)); return *this;}
    inline StudioComponent& AddScriptParameters(const ScriptParameterKeyValue& value) { m_scriptParametersHasBeenSet = true; m_scriptParameters.push_back(value); return *this; }
    inline StudioComponent& AddScriptParameters(ScriptParameterKeyValue&& value) { m_scriptParametersHasBeenSet = true; m_scriptParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An IAM role attached to Studio Component when the system initialization
     * script runs which give the studio component access to Amazon Web Services
     * resources when the system initialization script runs.</p>
     */
    inline const Aws::String& GetSecureInitializationRoleArn() const{ return m_secureInitializationRoleArn; }
    inline bool SecureInitializationRoleArnHasBeenSet() const { return m_secureInitializationRoleArnHasBeenSet; }
    inline void SetSecureInitializationRoleArn(const Aws::String& value) { m_secureInitializationRoleArnHasBeenSet = true; m_secureInitializationRoleArn = value; }
    inline void SetSecureInitializationRoleArn(Aws::String&& value) { m_secureInitializationRoleArnHasBeenSet = true; m_secureInitializationRoleArn = std::move(value); }
    inline void SetSecureInitializationRoleArn(const char* value) { m_secureInitializationRoleArnHasBeenSet = true; m_secureInitializationRoleArn.assign(value); }
    inline StudioComponent& WithSecureInitializationRoleArn(const Aws::String& value) { SetSecureInitializationRoleArn(value); return *this;}
    inline StudioComponent& WithSecureInitializationRoleArn(Aws::String&& value) { SetSecureInitializationRoleArn(std::move(value)); return *this;}
    inline StudioComponent& WithSecureInitializationRoleArn(const char* value) { SetSecureInitializationRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state.</p>
     */
    inline const StudioComponentState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const StudioComponentState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(StudioComponentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline StudioComponent& WithState(const StudioComponentState& value) { SetState(value); return *this;}
    inline StudioComponent& WithState(StudioComponentState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code.</p>
     */
    inline const StudioComponentStatusCode& GetStatusCode() const{ return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(const StudioComponentStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline void SetStatusCode(StudioComponentStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }
    inline StudioComponent& WithStatusCode(const StudioComponentStatusCode& value) { SetStatusCode(value); return *this;}
    inline StudioComponent& WithStatusCode(StudioComponentStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for the studio component.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline StudioComponent& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline StudioComponent& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline StudioComponent& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline const Aws::String& GetStudioComponentId() const{ return m_studioComponentId; }
    inline bool StudioComponentIdHasBeenSet() const { return m_studioComponentIdHasBeenSet; }
    inline void SetStudioComponentId(const Aws::String& value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId = value; }
    inline void SetStudioComponentId(Aws::String&& value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId = std::move(value); }
    inline void SetStudioComponentId(const char* value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId.assign(value); }
    inline StudioComponent& WithStudioComponentId(const Aws::String& value) { SetStudioComponentId(value); return *this;}
    inline StudioComponent& WithStudioComponentId(Aws::String&& value) { SetStudioComponentId(std::move(value)); return *this;}
    inline StudioComponent& WithStudioComponentId(const char* value) { SetStudioComponentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific subtype of a studio component.</p>
     */
    inline const StudioComponentSubtype& GetSubtype() const{ return m_subtype; }
    inline bool SubtypeHasBeenSet() const { return m_subtypeHasBeenSet; }
    inline void SetSubtype(const StudioComponentSubtype& value) { m_subtypeHasBeenSet = true; m_subtype = value; }
    inline void SetSubtype(StudioComponentSubtype&& value) { m_subtypeHasBeenSet = true; m_subtype = std::move(value); }
    inline StudioComponent& WithSubtype(const StudioComponentSubtype& value) { SetSubtype(value); return *this;}
    inline StudioComponent& WithSubtype(StudioComponentSubtype&& value) { SetSubtype(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StudioComponent& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline StudioComponent& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline StudioComponent& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline StudioComponent& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StudioComponent& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StudioComponent& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline StudioComponent& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StudioComponent& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StudioComponent& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the studio component.</p>
     */
    inline const StudioComponentType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const StudioComponentType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(StudioComponentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline StudioComponent& WithType(const StudioComponentType& value) { SetType(value); return *this;}
    inline StudioComponent& WithType(StudioComponentType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline StudioComponent& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline StudioComponent& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }
    inline StudioComponent& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline StudioComponent& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline StudioComponent& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    StudioComponentConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_ec2SecurityGroupIds;
    bool m_ec2SecurityGroupIdsHasBeenSet = false;

    Aws::Vector<StudioComponentInitializationScript> m_initializationScripts;
    bool m_initializationScriptsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_runtimeRoleArn;
    bool m_runtimeRoleArnHasBeenSet = false;

    Aws::Vector<ScriptParameterKeyValue> m_scriptParameters;
    bool m_scriptParametersHasBeenSet = false;

    Aws::String m_secureInitializationRoleArn;
    bool m_secureInitializationRoleArnHasBeenSet = false;

    StudioComponentState m_state;
    bool m_stateHasBeenSet = false;

    StudioComponentStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_studioComponentId;
    bool m_studioComponentIdHasBeenSet = false;

    StudioComponentSubtype m_subtype;
    bool m_subtypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    StudioComponentType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
