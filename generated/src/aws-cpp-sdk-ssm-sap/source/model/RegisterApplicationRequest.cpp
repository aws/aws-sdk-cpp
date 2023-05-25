/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/RegisterApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SsmSap::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterApplicationRequest::RegisterApplicationRequest() : 
    m_applicationIdHasBeenSet(false),
    m_applicationType(ApplicationType::NOT_SET),
    m_applicationTypeHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_sapInstanceNumberHasBeenSet(false),
    m_sidHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_credentialsHasBeenSet(false)
{
}

Aws::String RegisterApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_applicationTypeHasBeenSet)
  {
   payload.WithString("ApplicationType", ApplicationTypeMapper::GetNameForApplicationType(m_applicationType));
  }

  if(m_instancesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instancesJsonList(m_instances.size());
   for(unsigned instancesIndex = 0; instancesIndex < instancesJsonList.GetLength(); ++instancesIndex)
   {
     instancesJsonList[instancesIndex].AsString(m_instances[instancesIndex]);
   }
   payload.WithArray("Instances", std::move(instancesJsonList));

  }

  if(m_sapInstanceNumberHasBeenSet)
  {
   payload.WithString("SapInstanceNumber", m_sapInstanceNumber);

  }

  if(m_sidHasBeenSet)
  {
   payload.WithString("Sid", m_sid);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_credentialsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> credentialsJsonList(m_credentials.size());
   for(unsigned credentialsIndex = 0; credentialsIndex < credentialsJsonList.GetLength(); ++credentialsIndex)
   {
     credentialsJsonList[credentialsIndex].AsObject(m_credentials[credentialsIndex].Jsonize());
   }
   payload.WithArray("Credentials", std::move(credentialsJsonList));

  }

  return payload.View().WriteReadable();
}




