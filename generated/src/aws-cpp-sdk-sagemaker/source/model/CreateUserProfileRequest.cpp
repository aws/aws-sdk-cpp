/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateUserProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUserProfileRequest::CreateUserProfileRequest() : 
    m_domainIdHasBeenSet(false),
    m_userProfileNameHasBeenSet(false),
    m_singleSignOnUserIdentifierHasBeenSet(false),
    m_singleSignOnUserValueHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_userSettingsHasBeenSet(false)
{
}

Aws::String CreateUserProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_userProfileNameHasBeenSet)
  {
   payload.WithString("UserProfileName", m_userProfileName);

  }

  if(m_singleSignOnUserIdentifierHasBeenSet)
  {
   payload.WithString("SingleSignOnUserIdentifier", m_singleSignOnUserIdentifier);

  }

  if(m_singleSignOnUserValueHasBeenSet)
  {
   payload.WithString("SingleSignOnUserValue", m_singleSignOnUserValue);

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

  if(m_userSettingsHasBeenSet)
  {
   payload.WithObject("UserSettings", m_userSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateUserProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateUserProfile"));
  return headers;

}




