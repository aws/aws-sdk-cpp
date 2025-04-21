/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/CheckDocumentAccessResult.h>
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

CheckDocumentAccessResult::CheckDocumentAccessResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CheckDocumentAccessResult& CheckDocumentAccessResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("userGroups"))
  {
    Aws::Utils::Array<JsonView> userGroupsJsonList = jsonValue.GetArray("userGroups");
    for(unsigned userGroupsIndex = 0; userGroupsIndex < userGroupsJsonList.GetLength(); ++userGroupsIndex)
    {
      m_userGroups.push_back(userGroupsJsonList[userGroupsIndex].AsObject());
    }
    m_userGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userAliases"))
  {
    Aws::Utils::Array<JsonView> userAliasesJsonList = jsonValue.GetArray("userAliases");
    for(unsigned userAliasesIndex = 0; userAliasesIndex < userAliasesJsonList.GetLength(); ++userAliasesIndex)
    {
      m_userAliases.push_back(userAliasesJsonList[userAliasesIndex].AsObject());
    }
    m_userAliasesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hasAccess"))
  {
    m_hasAccess = jsonValue.GetBool("hasAccess");
    m_hasAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("documentAcl"))
  {
    m_documentAcl = jsonValue.GetObject("documentAcl");
    m_documentAclHasBeenSet = true;
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
