/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/CreateGovCloudAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateGovCloudAccountRequest::CreateGovCloudAccountRequest() : 
    m_emailHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_iamUserAccessToBilling(IAMUserAccessToBilling::NOT_SET),
    m_iamUserAccessToBillingHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateGovCloudAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_accountNameHasBeenSet)
  {
   payload.WithString("AccountName", m_accountName);

  }

  if(m_roleNameHasBeenSet)
  {
   payload.WithString("RoleName", m_roleName);

  }

  if(m_iamUserAccessToBillingHasBeenSet)
  {
   payload.WithString("IamUserAccessToBilling", IAMUserAccessToBillingMapper::GetNameForIAMUserAccessToBilling(m_iamUserAccessToBilling));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateGovCloudAccountRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.CreateGovCloudAccount"));
  return headers;

}




