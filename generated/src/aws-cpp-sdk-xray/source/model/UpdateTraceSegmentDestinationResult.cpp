/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/UpdateTraceSegmentDestinationResult.h>
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

UpdateTraceSegmentDestinationResult::UpdateTraceSegmentDestinationResult() : 
    m_destination(TraceSegmentDestination::NOT_SET),
    m_status(TraceSegmentDestinationStatus::NOT_SET)
{
}

UpdateTraceSegmentDestinationResult::UpdateTraceSegmentDestinationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateTraceSegmentDestinationResult()
{
  *this = result;
}

UpdateTraceSegmentDestinationResult& UpdateTraceSegmentDestinationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = TraceSegmentDestinationMapper::GetTraceSegmentDestinationForName(jsonValue.GetString("Destination"));

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = TraceSegmentDestinationStatusMapper::GetTraceSegmentDestinationStatusForName(jsonValue.GetString("Status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
