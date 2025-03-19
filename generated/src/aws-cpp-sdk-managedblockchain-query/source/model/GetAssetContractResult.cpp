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

GetAssetContractResult::GetAssetContractResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAssetContractResult& GetAssetContractResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("contractIdentifier"))
  {
    m_contractIdentifier = jsonValue.GetObject("contractIdentifier");
    m_contractIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tokenStandard"))
  {
    m_tokenStandard = QueryTokenStandardMapper::GetQueryTokenStandardForName(jsonValue.GetString("tokenStandard"));
    m_tokenStandardHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deployerAddress"))
  {
    m_deployerAddress = jsonValue.GetString("deployerAddress");
    m_deployerAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
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
