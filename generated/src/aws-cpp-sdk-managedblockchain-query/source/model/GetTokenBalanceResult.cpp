/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/GetTokenBalanceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ManagedBlockchainQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTokenBalanceResult::GetTokenBalanceResult()
{
}

GetTokenBalanceResult::GetTokenBalanceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTokenBalanceResult& GetTokenBalanceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ownerIdentifier"))
  {
    m_ownerIdentifier = jsonValue.GetObject("ownerIdentifier");

  }

  if(jsonValue.ValueExists("tokenIdentifier"))
  {
    m_tokenIdentifier = jsonValue.GetObject("tokenIdentifier");

  }

  if(jsonValue.ValueExists("balance"))
  {
    m_balance = jsonValue.GetString("balance");

  }

  if(jsonValue.ValueExists("atBlockchainInstant"))
  {
    m_atBlockchainInstant = jsonValue.GetObject("atBlockchainInstant");

  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetObject("lastUpdatedTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
