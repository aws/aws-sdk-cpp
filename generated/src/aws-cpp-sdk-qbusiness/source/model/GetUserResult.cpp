/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GetUserResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUserResult::GetUserResult()
{
}

GetUserResult::GetUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetUserResult& GetUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("userAliases"))
  {
    Aws::Utils::Array<JsonView> userAliasesJsonList = jsonValue.GetArray("userAliases");
    for(unsigned userAliasesIndex = 0; userAliasesIndex < userAliasesJsonList.GetLength(); ++userAliasesIndex)
    {
      m_userAliases.push_back(userAliasesJsonList[userAliasesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
