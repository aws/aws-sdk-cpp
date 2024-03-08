/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/GetAssetContractResult.h>
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

GetAssetContractResult::GetAssetContractResult() : 
    m_tokenStandard(QueryTokenStandard::NOT_SET)
{
}

GetAssetContractResult::GetAssetContractResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_tokenStandard(QueryTokenStandard::NOT_SET)
{
  *this = result;
}

GetAssetContractResult& GetAssetContractResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("contractIdentifier"))
  {
    m_contractIdentifier = jsonValue.GetObject("contractIdentifier");

  }

  if(jsonValue.ValueExists("tokenStandard"))
  {
    m_tokenStandard = QueryTokenStandardMapper::GetQueryTokenStandardForName(jsonValue.GetString("tokenStandard"));

  }

  if(jsonValue.ValueExists("deployerAddress"))
  {
    m_deployerAddress = jsonValue.GetString("deployerAddress");

  }

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
