/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/UpdateStudioComponentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateStudioComponentRequest::UpdateStudioComponentRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_configurationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ec2SecurityGroupIdsHasBeenSet(false),
    m_initializationScriptsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_runtimeRoleArnHasBeenSet(false),
    m_scriptParametersHasBeenSet(false),
    m_secureInitializationRoleArnHasBeenSet(false),
    m_studioComponentIdHasBeenSet(false),
    m_studioIdHasBeenSet(false),
    m_subtype(StudioComponentSubtype::NOT_SET),
    m_subtypeHasBeenSet(false),
    m_type(StudioComponentType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String UpdateStudioComponentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

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

  if(m_subtypeHasBeenSet)
  {
   payload.WithString("subtype", StudioComponentSubtypeMapper::GetNameForStudioComponentSubtype(m_subtype));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", StudioComponentTypeMapper::GetNameForStudioComponentType(m_type));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateStudioComponentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amz-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




