/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ListTemplateGroupAccessControlEntriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PcaConnectorAd::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTemplateGroupAccessControlEntriesResult::ListTemplateGroupAccessControlEntriesResult()
{
}

ListTemplateGroupAccessControlEntriesResult::ListTemplateGroupAccessControlEntriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTemplateGroupAccessControlEntriesResult& ListTemplateGroupAccessControlEntriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccessControlEntries"))
  {
    Aws::Utils::Array<JsonView> accessControlEntriesJsonList = jsonValue.GetArray("AccessControlEntries");
    for(unsigned accessControlEntriesIndex = 0; accessControlEntriesIndex < accessControlEntriesJsonList.GetLength(); ++accessControlEntriesIndex)
    {
      m_accessControlEntries.push_back(accessControlEntriesJsonList[accessControlEntriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
