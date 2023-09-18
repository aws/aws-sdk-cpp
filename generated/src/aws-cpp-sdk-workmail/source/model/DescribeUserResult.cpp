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

DescribeUserResult::DescribeUserResult() : 
    m_state(EntityState::NOT_SET),
    m_userRole(UserRole::NOT_SET),
    m_hiddenFromGlobalAddressList(false)
{
}

DescribeUserResult::DescribeUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(EntityState::NOT_SET),
    m_userRole(UserRole::NOT_SET),
    m_hiddenFromGlobalAddressList(false)
{
  *this = result;
}

DescribeUserResult& DescribeUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetString("Email");

  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = EntityStateMapper::GetEntityStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("UserRole"))
  {
    m_userRole = UserRoleMapper::GetUserRoleForName(jsonValue.GetString("UserRole"));

  }

  if(jsonValue.ValueExists("EnabledDate"))
  {
    m_enabledDate = jsonValue.GetDouble("EnabledDate");

  }

  if(jsonValue.ValueExists("DisabledDate"))
  {
    m_disabledDate = jsonValue.GetDouble("DisabledDate");

  }

  if(jsonValue.ValueExists("MailboxProvisionedDate"))
  {
    m_mailboxProvisionedDate = jsonValue.GetDouble("MailboxProvisionedDate");

  }

  if(jsonValue.ValueExists("MailboxDeprovisionedDate"))
  {
    m_mailboxDeprovisionedDate = jsonValue.GetDouble("MailboxDeprovisionedDate");

  }

  if(jsonValue.ValueExists("FirstName"))
  {
    m_firstName = jsonValue.GetString("FirstName");

  }

  if(jsonValue.ValueExists("LastName"))
  {
    m_lastName = jsonValue.GetString("LastName");

  }

  if(jsonValue.ValueExists("HiddenFromGlobalAddressList"))
  {
    m_hiddenFromGlobalAddressList = jsonValue.GetBool("HiddenFromGlobalAddressList");

  }

  if(jsonValue.ValueExists("Initials"))
  {
    m_initials = jsonValue.GetString("Initials");

  }

  if(jsonValue.ValueExists("Telephone"))
  {
    m_telephone = jsonValue.GetString("Telephone");

  }

  if(jsonValue.ValueExists("Street"))
  {
    m_street = jsonValue.GetString("Street");

  }

  if(jsonValue.ValueExists("JobTitle"))
  {
    m_jobTitle = jsonValue.GetString("JobTitle");

  }

  if(jsonValue.ValueExists("City"))
  {
    m_city = jsonValue.GetString("City");

  }

  if(jsonValue.ValueExists("Company"))
  {
    m_company = jsonValue.GetString("Company");

  }

  if(jsonValue.ValueExists("ZipCode"))
  {
    m_zipCode = jsonValue.GetString("ZipCode");

  }

  if(jsonValue.ValueExists("Department"))
  {
    m_department = jsonValue.GetString("Department");

  }

  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");

  }

  if(jsonValue.ValueExists("Office"))
  {
    m_office = jsonValue.GetString("Office");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
