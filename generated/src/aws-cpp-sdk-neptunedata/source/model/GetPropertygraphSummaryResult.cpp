/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/GetPropertygraphSummaryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPropertygraphSummaryResult::GetPropertygraphSummaryResult() : 
    m_statusCode(0)
{
}

GetPropertygraphSummaryResult::GetPropertygraphSummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_statusCode(0)
{
  *this = result;
}

GetPropertygraphSummaryResult& GetPropertygraphSummaryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("payload"))
  {
    m_payload = jsonValue.GetObject("payload");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  m_statusCode = static_cast<int>(result.GetResponseCode());

  return *this;
}
