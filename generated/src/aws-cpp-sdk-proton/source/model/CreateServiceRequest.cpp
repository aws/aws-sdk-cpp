/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/CreateServiceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateServiceRequest::CreateServiceRequest() : 
    m_branchNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_repositoryConnectionArnHasBeenSet(false),
    m_repositoryIdHasBeenSet(false),
    m_specHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templateMajorVersionHasBeenSet(false),
    m_templateMinorVersionHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
}

Aws::String CreateServiceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_branchNameHasBeenSet)
  {
   payload.WithString("branchName", m_branchName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_repositoryConnectionArnHasBeenSet)
  {
   payload.WithString("repositoryConnectionArn", m_repositoryConnectionArn);

  }

  if(m_repositoryIdHasBeenSet)
  {
   payload.WithString("repositoryId", m_repositoryId);

  }

  if(m_specHasBeenSet)
  {
   payload.WithString("spec", m_spec);

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

  if(m_templateMajorVersionHasBeenSet)
  {
   payload.WithString("templateMajorVersion", m_templateMajorVersion);

  }

  if(m_templateMinorVersionHasBeenSet)
  {
   payload.WithString("templateMinorVersion", m_templateMinorVersion);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateServiceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.CreateService"));
  return headers;

}




