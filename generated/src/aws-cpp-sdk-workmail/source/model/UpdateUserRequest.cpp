/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/UpdateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserRequest::UpdateUserRequest() : 
    m_organizationIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_role(UserRole::NOT_SET),
    m_roleHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_hiddenFromGlobalAddressList(false),
    m_hiddenFromGlobalAddressListHasBeenSet(false),
    m_initialsHasBeenSet(false),
    m_telephoneHasBeenSet(false),
    m_streetHasBeenSet(false),
    m_jobTitleHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_companyHasBeenSet(false),
    m_zipCodeHasBeenSet(false),
    m_departmentHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_officeHasBeenSet(false)
{
}

Aws::String UpdateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", UserRoleMapper::GetNameForUserRole(m_role));
  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_firstNameHasBeenSet)
  {
   payload.WithString("FirstName", m_firstName);

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithString("LastName", m_lastName);

  }

  if(m_hiddenFromGlobalAddressListHasBeenSet)
  {
   payload.WithBool("HiddenFromGlobalAddressList", m_hiddenFromGlobalAddressList);

  }

  if(m_initialsHasBeenSet)
  {
   payload.WithString("Initials", m_initials);

  }

  if(m_telephoneHasBeenSet)
  {
   payload.WithString("Telephone", m_telephone);

  }

  if(m_streetHasBeenSet)
  {
   payload.WithString("Street", m_street);

  }

  if(m_jobTitleHasBeenSet)
  {
   payload.WithString("JobTitle", m_jobTitle);

  }

  if(m_cityHasBeenSet)
  {
   payload.WithString("City", m_city);

  }

  if(m_companyHasBeenSet)
  {
   payload.WithString("Company", m_company);

  }

  if(m_zipCodeHasBeenSet)
  {
   payload.WithString("ZipCode", m_zipCode);

  }

  if(m_departmentHasBeenSet)
  {
   payload.WithString("Department", m_department);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_officeHasBeenSet)
  {
   payload.WithString("Office", m_office);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateUserRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.UpdateUser"));
  return headers;

}




