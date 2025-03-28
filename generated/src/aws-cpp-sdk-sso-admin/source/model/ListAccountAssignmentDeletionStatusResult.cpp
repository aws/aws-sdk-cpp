﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ListAccountAssignmentDeletionStatusResult.h>
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

ListAccountAssignmentDeletionStatusResult::ListAccountAssignmentDeletionStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAccountAssignmentDeletionStatusResult& ListAccountAssignmentDeletionStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccountAssignmentsDeletionStatus"))
  {
    Aws::Utils::Array<JsonView> accountAssignmentsDeletionStatusJsonList = jsonValue.GetArray("AccountAssignmentsDeletionStatus");
    for(unsigned accountAssignmentsDeletionStatusIndex = 0; accountAssignmentsDeletionStatusIndex < accountAssignmentsDeletionStatusJsonList.GetLength(); ++accountAssignmentsDeletionStatusIndex)
    {
      m_accountAssignmentsDeletionStatus.push_back(accountAssignmentsDeletionStatusJsonList[accountAssignmentsDeletionStatusIndex].AsObject());
    }
    m_accountAssignmentsDeletionStatusHasBeenSet = true;
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
