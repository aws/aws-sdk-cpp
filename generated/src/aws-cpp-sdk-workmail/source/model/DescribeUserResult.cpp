/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/DescribeUserResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeUserResult::DescribeUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeUserResult& DescribeUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");
    m_userIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetString("Email");
    m_emailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = EntityStateMapper::GetEntityStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserRole"))
  {
    m_userRole = UserRoleMapper::GetUserRoleForName(jsonValue.GetString("UserRole"));
    m_userRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnabledDate"))
  {
    m_enabledDate = jsonValue.GetDouble("EnabledDate");
    m_enabledDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisabledDate"))
  {
    m_disabledDate = jsonValue.GetDouble("DisabledDate");
    m_disabledDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MailboxProvisionedDate"))
  {
    m_mailboxProvisionedDate = jsonValue.GetDouble("MailboxProvisionedDate");
    m_mailboxProvisionedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MailboxDeprovisionedDate"))
  {
    m_mailboxDeprovisionedDate = jsonValue.GetDouble("MailboxDeprovisionedDate");
    m_mailboxDeprovisionedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FirstName"))
  {
    m_firstName = jsonValue.GetString("FirstName");
    m_firstNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastName"))
  {
    m_lastName = jsonValue.GetString("LastName");
    m_lastNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HiddenFromGlobalAddressList"))
  {
    m_hiddenFromGlobalAddressList = jsonValue.GetBool("HiddenFromGlobalAddressList");
    m_hiddenFromGlobalAddressListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Initials"))
  {
    m_initials = jsonValue.GetString("Initials");
    m_initialsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Telephone"))
  {
    m_telephone = jsonValue.GetString("Telephone");
    m_telephoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Street"))
  {
    m_street = jsonValue.GetString("Street");
    m_streetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobTitle"))
  {
    m_jobTitle = jsonValue.GetString("JobTitle");
    m_jobTitleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("City"))
  {
    m_city = jsonValue.GetString("City");
    m_cityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Company"))
  {
    m_company = jsonValue.GetString("Company");
    m_companyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ZipCode"))
  {
    m_zipCode = jsonValue.GetString("ZipCode");
    m_zipCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Department"))
  {
    m_department = jsonValue.GetString("Department");
    m_departmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");
    m_countryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Office"))
  {
    m_office = jsonValue.GetString("Office");
    m_officeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityProviderUserId"))
  {
    m_identityProviderUserId = jsonValue.GetString("IdentityProviderUserId");
    m_identityProviderUserIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityProviderIdentityStoreId"))
  {
    m_identityProviderIdentityStoreId = jsonValue.GetString("IdentityProviderIdentityStoreId");
    m_identityProviderIdentityStoreIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
