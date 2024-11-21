/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/ListRetrievedTracesResult.h>
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

ListRetrievedTracesResult::ListRetrievedTracesResult() : 
    m_retrievalStatus(RetrievalStatus::NOT_SET),
    m_traceFormat(TraceFormatType::NOT_SET)
{
}

ListRetrievedTracesResult::ListRetrievedTracesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : ListRetrievedTracesResult()
{
  *this = result;
}

ListRetrievedTracesResult& ListRetrievedTracesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RetrievalStatus"))
  {
    m_retrievalStatus = RetrievalStatusMapper::GetRetrievalStatusForName(jsonValue.GetString("RetrievalStatus"));

  }

  if(jsonValue.ValueExists("TraceFormat"))
  {
    m_traceFormat = TraceFormatTypeMapper::GetTraceFormatTypeForName(jsonValue.GetString("TraceFormat"));

  }

  if(jsonValue.ValueExists("Traces"))
  {
    Aws::Utils::Array<JsonView> tracesJsonList = jsonValue.GetArray("Traces");
    for(unsigned tracesIndex = 0; tracesIndex < tracesJsonList.GetLength(); ++tracesIndex)
    {
      m_traces.push_back(tracesJsonList[tracesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
