/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ListSecurityControlDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSecurityControlDefinitionsResult::ListSecurityControlDefinitionsResult()
{
}

ListSecurityControlDefinitionsResult::ListSecurityControlDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSecurityControlDefinitionsResult& ListSecurityControlDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SecurityControlDefinitions"))
  {
    Aws::Utils::Array<JsonView> securityControlDefinitionsJsonList = jsonValue.GetArray("SecurityControlDefinitions");
    for(unsigned securityControlDefinitionsIndex = 0; securityControlDefinitionsIndex < securityControlDefinitionsJsonList.GetLength(); ++securityControlDefinitionsIndex)
    {
      m_securityControlDefinitions.push_back(securityControlDefinitionsJsonList[securityControlDefinitionsIndex].AsObject());
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
