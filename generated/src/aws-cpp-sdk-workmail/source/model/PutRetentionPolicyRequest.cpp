/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/PutRetentionPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRetentionPolicyRequest::PutRetentionPolicyRequest() : 
    m_organizationIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_folderConfigurationsHasBeenSet(false)
{
}

Aws::String PutRetentionPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_folderConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> folderConfigurationsJsonList(m_folderConfigurations.size());
   for(unsigned folderConfigurationsIndex = 0; folderConfigurationsIndex < folderConfigurationsJsonList.GetLength(); ++folderConfigurationsIndex)
   {
     folderConfigurationsJsonList[folderConfigurationsIndex].AsObject(m_folderConfigurations[folderConfigurationsIndex].Jsonize());
   }
   payload.WithArray("FolderConfigurations", std::move(folderConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutRetentionPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.PutRetentionPolicy"));
  return headers;

}




