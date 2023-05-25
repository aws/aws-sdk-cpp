/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StudioComponent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

StudioComponent::StudioComponent() : 
    m_arnHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ec2SecurityGroupIdsHasBeenSet(false),
    m_initializationScriptsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_runtimeRoleArnHasBeenSet(false),
    m_scriptParametersHasBeenSet(false),
    m_secureInitializationRoleArnHasBeenSet(false),
    m_state(StudioComponentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusCode(StudioComponentStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_studioComponentIdHasBeenSet(false),
    m_subtype(StudioComponentSubtype::NOT_SET),
    m_subtypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(StudioComponentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
}

StudioComponent::StudioComponent(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ec2SecurityGroupIdsHasBeenSet(false),
    m_initializationScriptsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_runtimeRoleArnHasBeenSet(false),
    m_scriptParametersHasBeenSet(false),
    m_secureInitializationRoleArnHasBeenSet(false),
    m_state(StudioComponentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusCode(StudioComponentStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_studioComponentIdHasBeenSet(false),
    m_subtype(StudioComponentSubtype::NOT_SET),
    m_subtypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(StudioComponentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
  *this = jsonValue;
}

StudioComponent& StudioComponent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2SecurityGroupIds"))
  {
    Aws::Utils::Array<JsonView> ec2SecurityGroupIdsJsonList = jsonValue.GetArray("ec2SecurityGroupIds");
    for(unsigned ec2SecurityGroupIdsIndex = 0; ec2SecurityGroupIdsIndex < ec2SecurityGroupIdsJsonList.GetLength(); ++ec2SecurityGroupIdsIndex)
    {
      m_ec2SecurityGroupIds.push_back(ec2SecurityGroupIdsJsonList[ec2SecurityGroupIdsIndex].AsString());
    }
    m_ec2SecurityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initializationScripts"))
  {
    Aws::Utils::Array<JsonView> initializationScriptsJsonList = jsonValue.GetArray("initializationScripts");
    for(unsigned initializationScriptsIndex = 0; initializationScriptsIndex < initializationScriptsJsonList.GetLength(); ++initializationScriptsIndex)
    {
      m_initializationScripts.push_back(initializationScriptsJsonList[initializationScriptsIndex].AsObject());
    }
    m_initializationScriptsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runtimeRoleArn"))
  {
    m_runtimeRoleArn = jsonValue.GetString("runtimeRoleArn");

    m_runtimeRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scriptParameters"))
  {
    Aws::Utils::Array<JsonView> scriptParametersJsonList = jsonValue.GetArray("scriptParameters");
    for(unsigned scriptParametersIndex = 0; scriptParametersIndex < scriptParametersJsonList.GetLength(); ++scriptParametersIndex)
    {
      m_scriptParameters.push_back(scriptParametersJsonList[scriptParametersIndex].AsObject());
    }
    m_scriptParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secureInitializationRoleArn"))
  {
    m_secureInitializationRoleArn = jsonValue.GetString("secureInitializationRoleArn");

    m_secureInitializationRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = StudioComponentStateMapper::GetStudioComponentStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = StudioComponentStatusCodeMapper::GetStudioComponentStatusCodeForName(jsonValue.GetString("statusCode"));

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("studioComponentId"))
  {
    m_studioComponentId = jsonValue.GetString("studioComponentId");

    m_studioComponentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subtype"))
  {
    m_subtype = StudioComponentSubtypeMapper::GetStudioComponentSubtypeForName(jsonValue.GetString("subtype"));

    m_subtypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = StudioComponentTypeMapper::GetStudioComponentTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

    m_updatedByHasBeenSet = true;
  }

  return *this;
}

JsonValue StudioComponent::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_ec2SecurityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ec2SecurityGroupIdsJsonList(m_ec2SecurityGroupIds.size());
   for(unsigned ec2SecurityGroupIdsIndex = 0; ec2SecurityGroupIdsIndex < ec2SecurityGroupIdsJsonList.GetLength(); ++ec2SecurityGroupIdsIndex)
   {
     ec2SecurityGroupIdsJsonList[ec2SecurityGroupIdsIndex].AsString(m_ec2SecurityGroupIds[ec2SecurityGroupIdsIndex]);
   }
   payload.WithArray("ec2SecurityGroupIds", std::move(ec2SecurityGroupIdsJsonList));

  }

  if(m_initializationScriptsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> initializationScriptsJsonList(m_initializationScripts.size());
   for(unsigned initializationScriptsIndex = 0; initializationScriptsIndex < initializationScriptsJsonList.GetLength(); ++initializationScriptsIndex)
   {
     initializationScriptsJsonList[initializationScriptsIndex].AsObject(m_initializationScripts[initializationScriptsIndex].Jsonize());
   }
   payload.WithArray("initializationScripts", std::move(initializationScriptsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_runtimeRoleArnHasBeenSet)
  {
   payload.WithString("runtimeRoleArn", m_runtimeRoleArn);

  }

  if(m_scriptParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scriptParametersJsonList(m_scriptParameters.size());
   for(unsigned scriptParametersIndex = 0; scriptParametersIndex < scriptParametersJsonList.GetLength(); ++scriptParametersIndex)
   {
     scriptParametersJsonList[scriptParametersIndex].AsObject(m_scriptParameters[scriptParametersIndex].Jsonize());
   }
   payload.WithArray("scriptParameters", std::move(scriptParametersJsonList));

  }

  if(m_secureInitializationRoleArnHasBeenSet)
  {
   payload.WithString("secureInitializationRoleArn", m_secureInitializationRoleArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", StudioComponentStateMapper::GetNameForStudioComponentState(m_state));
  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", StudioComponentStatusCodeMapper::GetNameForStudioComponentStatusCode(m_statusCode));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_studioComponentIdHasBeenSet)
  {
   payload.WithString("studioComponentId", m_studioComponentId);

  }

  if(m_subtypeHasBeenSet)
  {
   payload.WithString("subtype", StudioComponentSubtypeMapper::GetNameForStudioComponentSubtype(m_subtype));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", StudioComponentTypeMapper::GetNameForStudioComponentType(m_type));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
