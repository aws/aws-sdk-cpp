/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/GetDecryptedAPIKeyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDecryptedAPIKeyResult::GetDecryptedAPIKeyResult()
{
}

GetDecryptedAPIKeyResult::GetDecryptedAPIKeyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDecryptedAPIKeyResult& GetDecryptedAPIKeyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TokenDomains"))
  {
    Aws::Utils::Array<JsonView> tokenDomainsJsonList = jsonValue.GetArray("TokenDomains");
    for(unsigned tokenDomainsIndex = 0; tokenDomainsIndex < tokenDomainsJsonList.GetLength(); ++tokenDomainsIndex)
    {
      m_tokenDomains.push_back(tokenDomainsJsonList[tokenDomainsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
