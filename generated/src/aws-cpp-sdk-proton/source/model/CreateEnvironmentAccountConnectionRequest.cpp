/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/CreateEnvironmentAccountConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEnvironmentAccountConnectionRequest::CreateEnvironmentAccountConnectionRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_codebuildRoleArnHasBeenSet(false),
    m_componentRoleArnHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_managementAccountIdHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateEnvironmentAccountConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_codebuildRoleArnHasBeenSet)
  {
   payload.WithString("codebuildRoleArn", m_codebuildRoleArn);

  }

  if(m_componentRoleArnHasBeenSet)
  {
   payload.WithString("componentRoleArn", m_componentRoleArn);

  }

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("environmentName", m_environmentName);

  }

  if(m_managementAccountIdHasBeenSet)
  {
   payload.WithString("managementAccountId", m_managementAccountId);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEnvironmentAccountConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.CreateEnvironmentAccountConnection"));
  return headers;

}




