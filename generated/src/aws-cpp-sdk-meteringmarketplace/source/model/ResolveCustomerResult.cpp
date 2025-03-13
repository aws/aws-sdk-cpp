/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/meteringmarketplace/model/ResolveCustomerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MarketplaceMetering::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ResolveCustomerResult::ResolveCustomerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ResolveCustomerResult& ResolveCustomerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CustomerIdentifier"))
  {
    m_customerIdentifier = jsonValue.GetString("CustomerIdentifier");
    m_customerIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProductCode"))
  {
    m_productCode = jsonValue.GetString("ProductCode");
    m_productCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomerAWSAccountId"))
  {
    m_customerAWSAccountId = jsonValue.GetString("CustomerAWSAccountId");
    m_customerAWSAccountIdHasBeenSet = true;
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
