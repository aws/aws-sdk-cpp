﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ListAccountAssignmentCreationStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAccountAssignmentCreationStatusResult::ListAccountAssignmentCreationStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAccountAssignmentCreationStatusResult& ListAccountAssignmentCreationStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccountAssignmentsCreationStatus"))
  {
    Aws::Utils::Array<JsonView> accountAssignmentsCreationStatusJsonList = jsonValue.GetArray("AccountAssignmentsCreationStatus");
    for(unsigned accountAssignmentsCreationStatusIndex = 0; accountAssignmentsCreationStatusIndex < accountAssignmentsCreationStatusJsonList.GetLength(); ++accountAssignmentsCreationStatusIndex)
    {
      m_accountAssignmentsCreationStatus.push_back(accountAssignmentsCreationStatusJsonList[accountAssignmentsCreationStatusIndex].AsObject());
    }
    m_accountAssignmentsCreationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
