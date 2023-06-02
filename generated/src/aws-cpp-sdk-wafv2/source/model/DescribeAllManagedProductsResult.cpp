/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/DescribeAllManagedProductsResult.h>
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

DescribeAllManagedProductsResult::DescribeAllManagedProductsResult()
{
}

DescribeAllManagedProductsResult::DescribeAllManagedProductsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAllManagedProductsResult& DescribeAllManagedProductsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ManagedProducts"))
  {
    Aws::Utils::Array<JsonView> managedProductsJsonList = jsonValue.GetArray("ManagedProducts");
    for(unsigned managedProductsIndex = 0; managedProductsIndex < managedProductsJsonList.GetLength(); ++managedProductsIndex)
    {
      m_managedProducts.push_back(managedProductsJsonList[managedProductsIndex].AsObject());
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
