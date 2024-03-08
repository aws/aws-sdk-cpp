/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/UpdateUserResult.h>
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

UpdateUserResult::UpdateUserResult()
{
}

UpdateUserResult::UpdateUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateUserResult& UpdateUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("userAliasesAdded"))
  {
    Aws::Utils::Array<JsonView> userAliasesAddedJsonList = jsonValue.GetArray("userAliasesAdded");
    for(unsigned userAliasesAddedIndex = 0; userAliasesAddedIndex < userAliasesAddedJsonList.GetLength(); ++userAliasesAddedIndex)
    {
      m_userAliasesAdded.push_back(userAliasesAddedJsonList[userAliasesAddedIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("userAliasesDeleted"))
  {
    Aws::Utils::Array<JsonView> userAliasesDeletedJsonList = jsonValue.GetArray("userAliasesDeleted");
    for(unsigned userAliasesDeletedIndex = 0; userAliasesDeletedIndex < userAliasesDeletedJsonList.GetLength(); ++userAliasesDeletedIndex)
    {
      m_userAliasesDeleted.push_back(userAliasesDeletedJsonList[userAliasesDeletedIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("userAliasesUpdated"))
  {
    Aws::Utils::Array<JsonView> userAliasesUpdatedJsonList = jsonValue.GetArray("userAliasesUpdated");
    for(unsigned userAliasesUpdatedIndex = 0; userAliasesUpdatedIndex < userAliasesUpdatedJsonList.GetLength(); ++userAliasesUpdatedIndex)
    {
      m_userAliasesUpdated.push_back(userAliasesUpdatedJsonList[userAliasesUpdatedIndex].AsObject());
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
