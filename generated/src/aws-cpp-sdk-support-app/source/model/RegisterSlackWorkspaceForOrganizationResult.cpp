﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support-app/model/RegisterSlackWorkspaceForOrganizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SupportApp::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RegisterSlackWorkspaceForOrganizationResult::RegisterSlackWorkspaceForOrganizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RegisterSlackWorkspaceForOrganizationResult& RegisterSlackWorkspaceForOrganizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accountType"))
  {
    m_accountType = AccountTypeMapper::GetAccountTypeForName(jsonValue.GetString("accountType"));
    m_accountTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("teamId"))
  {
    m_teamId = jsonValue.GetString("teamId");
    m_teamIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("teamName"))
  {
    m_teamName = jsonValue.GetString("teamName");
    m_teamNameHasBeenSet = true;
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
