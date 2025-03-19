/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/GetTraceSummariesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTraceSummariesResult::GetTraceSummariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTraceSummariesResult& GetTraceSummariesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TraceSummaries"))
  {
    Aws::Utils::Array<JsonView> traceSummariesJsonList = jsonValue.GetArray("TraceSummaries");
    for(unsigned traceSummariesIndex = 0; traceSummariesIndex < traceSummariesJsonList.GetLength(); ++traceSummariesIndex)
    {
      m_traceSummaries.push_back(traceSummariesJsonList[traceSummariesIndex].AsObject());
    }
    m_traceSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApproximateTime"))
  {
    m_approximateTime = jsonValue.GetDouble("ApproximateTime");
    m_approximateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TracesProcessedCount"))
  {
    m_tracesProcessedCount = jsonValue.GetInt64("TracesProcessedCount");
    m_tracesProcessedCountHasBeenSet = true;
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
