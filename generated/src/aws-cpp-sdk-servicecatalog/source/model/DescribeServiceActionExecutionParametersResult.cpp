/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DescribeServiceActionExecutionParametersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeServiceActionExecutionParametersResult::DescribeServiceActionExecutionParametersResult()
{
}

DescribeServiceActionExecutionParametersResult::DescribeServiceActionExecutionParametersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeServiceActionExecutionParametersResult& DescribeServiceActionExecutionParametersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ServiceActionParameters"))
  {
    Aws::Utils::Array<JsonView> serviceActionParametersJsonList = jsonValue.GetArray("ServiceActionParameters");
    for(unsigned serviceActionParametersIndex = 0; serviceActionParametersIndex < serviceActionParametersJsonList.GetLength(); ++serviceActionParametersIndex)
    {
      m_serviceActionParameters.push_back(serviceActionParametersJsonList[serviceActionParametersIndex].AsObject());
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
