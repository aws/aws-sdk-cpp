/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RegisterUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterUserRequest::RegisterUserRequest() : 
    m_identityType(IdentityType::NOT_SET),
    m_identityTypeHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_userRole(UserRole::NOT_SET),
    m_userRoleHasBeenSet(false),
    m_iamArnHasBeenSet(false),
    m_sessionNameHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_customPermissionsNameHasBeenSet(false),
    m_externalLoginFederationProviderTypeHasBeenSet(false),
    m_customFederationProviderUrlHasBeenSet(false),
    m_externalLoginIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String RegisterUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityTypeHasBeenSet)
  {
   payload.WithString("IdentityType", IdentityTypeMapper::GetNameForIdentityType(m_identityType));
  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_userRoleHasBeenSet)
  {
   payload.WithString("UserRole", UserRoleMapper::GetNameForUserRole(m_userRole));
  }

  if(m_iamArnHasBeenSet)
  {
   payload.WithString("IamArn", m_iamArn);

  }

  if(m_sessionNameHasBeenSet)
  {
   payload.WithString("SessionName", m_sessionName);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_customPermissionsNameHasBeenSet)
  {
   payload.WithString("CustomPermissionsName", m_customPermissionsName);

  }

  if(m_externalLoginFederationProviderTypeHasBeenSet)
  {
   payload.WithString("ExternalLoginFederationProviderType", m_externalLoginFederationProviderType);

  }

  if(m_customFederationProviderUrlHasBeenSet)
  {
   payload.WithString("CustomFederationProviderUrl", m_customFederationProviderUrl);

  }

  if(m_externalLoginIdHasBeenSet)
  {
   payload.WithString("ExternalLoginId", m_externalLoginId);

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




