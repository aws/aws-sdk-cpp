﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", UserRoleMapper::GetNameForUserRole(m_role));
  }

  if(m_customPermissionsNameHasBeenSet)
  {
   payload.WithString("CustomPermissionsName", m_customPermissionsName);

  }

  if(m_unapplyCustomPermissionsHasBeenSet)
  {
   payload.WithBool("UnapplyCustomPermissions", m_unapplyCustomPermissions);

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

  return payload.View().WriteReadable();
}




