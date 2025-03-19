/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/UpdateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_givenNameHasBeenSet)
  {
   payload.WithString("GivenName", m_givenName);

  }

  if(m_surnameHasBeenSet)
  {
   payload.WithString("Surname", m_surname);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", UserTypeMapper::GetNameForUserType(m_type));
  }

  if(m_storageRuleHasBeenSet)
  {
   payload.WithObject("StorageRule", m_storageRule.Jsonize());

  }

  if(m_timeZoneIdHasBeenSet)
  {
   payload.WithString("TimeZoneId", m_timeZoneId);

  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("Locale", LocaleTypeMapper::GetNameForLocaleType(m_locale));
  }

  if(m_grantPoweruserPrivilegesHasBeenSet)
  {
   payload.WithString("GrantPoweruserPrivileges", BooleanEnumTypeMapper::GetNameForBooleanEnumType(m_grantPoweruserPrivileges));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateUserRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_authenticationTokenHasBeenSet)
  {
    ss << m_authenticationToken;
    headers.emplace("authentication",  ss.str());
    ss.str("");
  }

  return headers;

}




