/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/DescribeProductsV2Result.h>
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

DescribeProductsV2Result::DescribeProductsV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeProductsV2Result& DescribeProductsV2Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProductsV2"))
  {
    Aws::Utils::Array<JsonView> productsV2JsonList = jsonValue.GetArray("ProductsV2");
    for(unsigned productsV2Index = 0; productsV2Index < productsV2JsonList.GetLength(); ++productsV2Index)
    {
      m_productsV2.push_back(productsV2JsonList[productsV2Index].AsObject());
    }
    m_productsV2HasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
