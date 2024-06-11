/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/StudioComponentConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/StudioComponentSubtype.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/nimble/model/StudioComponentType.h>
#include <aws/nimble/model/StudioComponentInitializationScript.h>
#include <aws/nimble/model/ScriptParameterKeyValue.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class CreateStudioComponentRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API CreateStudioComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStudioComponent"; }

    AWS_NIMBLESTUDIO_API Aws::String SerializePayload() const override;

    AWS_NIMBLESTUDIO_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateStudioComponentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateStudioComponentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateStudioComponentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the studio component, based on component type.</p>
     */
    inline const StudioComponentConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const StudioComponentConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(StudioComponentConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline CreateStudioComponentRequest& WithConfiguration(const StudioComponentConfiguration& value) { SetConfiguration(value); return *this;}
    inline CreateStudioComponentRequest& WithConfiguration(StudioComponentConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateStudioComponentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateStudioComponentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateStudioComponentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 security groups that control access to the studio component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEc2SecurityGroupIds() const{ return m_ec2SecurityGroupIds; }
    inline bool Ec2SecurityGroupIdsHasBeenSet() const { return m_ec2SecurityGroupIdsHasBeenSet; }
    inline void SetEc2SecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds = value; }
    inline void SetEc2SecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds = std::move(value); }
    inline CreateStudioComponentRequest& WithEc2SecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetEc2SecurityGroupIds(value); return *this;}
    inline CreateStudioComponentRequest& WithEc2SecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetEc2SecurityGroupIds(std::move(value)); return *this;}
    inline CreateStudioComponentRequest& AddEc2SecurityGroupIds(const Aws::String& value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds.push_back(value); return *this; }
    inline CreateStudioComponentRequest& AddEc2SecurityGroupIds(Aws::String&& value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds.push_back(std::move(value)); return *this; }
    inline CreateStudioComponentRequest& AddEc2SecurityGroupIds(const char* value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Initialization scripts for studio components.</p>
     */
    inline const Aws::Vector<StudioComponentInitializationScript>& GetInitializationScripts() const{ return m_initializationScripts; }
    inline bool InitializationScriptsHasBeenSet() const { return m_initializationScriptsHasBeenSet; }
    inline void SetInitializationScripts(const Aws::Vector<StudioComponentInitializationScript>& value) { m_initializationScriptsHasBeenSet = true; m_initializationScripts = value; }
    inline void SetInitializationScripts(Aws::Vector<StudioComponentInitializationScript>&& value) { m_initializationScriptsHasBeenSet = true; m_initializationScripts = std::move(value); }
    inline CreateStudioComponentRequest& WithInitializationScripts(const Aws::Vector<StudioComponentInitializationScript>& value) { SetInitializationScripts(value); return *this;}
    inline CreateStudioComponentRequest& WithInitializationScripts(Aws::Vector<StudioComponentInitializationScript>&& value) { SetInitializationScripts(std::move(value)); return *this;}
    inline CreateStudioComponentRequest& AddInitializationScripts(const StudioComponentInitializationScript& value) { m_initializationScriptsHasBeenSet = true; m_initializationScripts.push_back(value); return *this; }
    inline CreateStudioComponentRequest& AddInitializationScripts(StudioComponentInitializationScript&& value) { m_initializationScriptsHasBeenSet = true; m_initializationScripts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name for the studio component.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateStudioComponentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateStudioComponentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateStudioComponentRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline CreateStudioComponentRequest& WithRuntimeRoleArn(const Aws::String& value) { SetRuntimeRoleArn(value); return *this;}
    inline CreateStudioComponentRequest& WithRuntimeRoleArn(Aws::String&& value) { SetRuntimeRoleArn(std::move(value)); return *this;}
    inline CreateStudioComponentRequest& WithRuntimeRoleArn(const char* value) { SetRuntimeRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters for the studio component scripts.</p>
     */
    inline const Aws::Vector<ScriptParameterKeyValue>& GetScriptParameters() const{ return m_scriptParameters; }
    inline bool ScriptParametersHasBeenSet() const { return m_scriptParametersHasBeenSet; }
    inline void SetScriptParameters(const Aws::Vector<ScriptParameterKeyValue>& value) { m_scriptParametersHasBeenSet = true; m_scriptParameters = value; }
    inline void SetScriptParameters(Aws::Vector<ScriptParameterKeyValue>&& value) { m_scriptParametersHasBeenSet = true; m_scriptParameters = std::move(value); }
    inline CreateStudioComponentRequest& WithScriptParameters(const Aws::Vector<ScriptParameterKeyValue>& value) { SetScriptParameters(value); return *this;}
    inline CreateStudioComponentRequest& WithScriptParameters(Aws::Vector<ScriptParameterKeyValue>&& value) { SetScriptParameters(std::move(value)); return *this;}
    inline CreateStudioComponentRequest& AddScriptParameters(const ScriptParameterKeyValue& value) { m_scriptParametersHasBeenSet = true; m_scriptParameters.push_back(value); return *this; }
    inline CreateStudioComponentRequest& AddScriptParameters(ScriptParameterKeyValue&& value) { m_scriptParametersHasBeenSet = true; m_scriptParameters.push_back(std::move(value)); return *this; }
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
    inline CreateStudioComponentRequest& WithSecureInitializationRoleArn(const Aws::String& value) { SetSecureInitializationRoleArn(value); return *this;}
    inline CreateStudioComponentRequest& WithSecureInitializationRoleArn(Aws::String&& value) { SetSecureInitializationRoleArn(std::move(value)); return *this;}
    inline CreateStudioComponentRequest& WithSecureInitializationRoleArn(const char* value) { SetSecureInitializationRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The studio ID. </p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }
    inline CreateStudioComponentRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}
    inline CreateStudioComponentRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}
    inline CreateStudioComponentRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific subtype of a studio component.</p>
     */
    inline const StudioComponentSubtype& GetSubtype() const{ return m_subtype; }
    inline bool SubtypeHasBeenSet() const { return m_subtypeHasBeenSet; }
    inline void SetSubtype(const StudioComponentSubtype& value) { m_subtypeHasBeenSet = true; m_subtype = value; }
    inline void SetSubtype(StudioComponentSubtype&& value) { m_subtypeHasBeenSet = true; m_subtype = std::move(value); }
    inline CreateStudioComponentRequest& WithSubtype(const StudioComponentSubtype& value) { SetSubtype(value); return *this;}
    inline CreateStudioComponentRequest& WithSubtype(StudioComponentSubtype&& value) { SetSubtype(std::move(value)); return *this;}
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
    inline CreateStudioComponentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateStudioComponentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateStudioComponentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateStudioComponentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateStudioComponentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateStudioComponentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateStudioComponentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateStudioComponentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateStudioComponentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the studio component.</p>
     */
    inline const StudioComponentType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const StudioComponentType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(StudioComponentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateStudioComponentRequest& WithType(const StudioComponentType& value) { SetType(value); return *this;}
    inline CreateStudioComponentRequest& WithType(StudioComponentType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    StudioComponentConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

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

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;

    StudioComponentSubtype m_subtype;
    bool m_subtypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    StudioComponentType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
