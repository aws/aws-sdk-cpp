/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/GetRevocationStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRevocationStatusResult::GetRevocationStatusResult()
{
}

GetRevocationStatusResult::GetRevocationStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRevocationStatusResult& GetRevocationStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("revokedEntities"))
  {
    Aws::Utils::Array<JsonView> revokedEntitiesJsonList = jsonValue.GetArray("revokedEntities");
    for(unsigned revokedEntitiesIndex = 0; revokedEntitiesIndex < revokedEntitiesJsonList.GetLength(); ++revokedEntitiesIndex)
    {
      m_revokedEntities.push_back(revokedEntitiesJsonList[revokedEntitiesIndex].AsString());
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
