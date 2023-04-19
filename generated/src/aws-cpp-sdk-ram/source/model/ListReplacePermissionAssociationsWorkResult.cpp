/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ListReplacePermissionAssociationsWorkResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReplacePermissionAssociationsWorkResult::ListReplacePermissionAssociationsWorkResult()
{
}

ListReplacePermissionAssociationsWorkResult::ListReplacePermissionAssociationsWorkResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReplacePermissionAssociationsWorkResult& ListReplacePermissionAssociationsWorkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("replacePermissionAssociationsWorks"))
  {
    Aws::Utils::Array<JsonView> replacePermissionAssociationsWorksJsonList = jsonValue.GetArray("replacePermissionAssociationsWorks");
    for(unsigned replacePermissionAssociationsWorksIndex = 0; replacePermissionAssociationsWorksIndex < replacePermissionAssociationsWorksJsonList.GetLength(); ++replacePermissionAssociationsWorksIndex)
    {
      m_replacePermissionAssociationsWorks.push_back(replacePermissionAssociationsWorksJsonList[replacePermissionAssociationsWorksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
