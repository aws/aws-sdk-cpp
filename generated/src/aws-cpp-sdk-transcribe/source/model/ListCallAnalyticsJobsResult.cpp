/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/ListCallAnalyticsJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCallAnalyticsJobsResult::ListCallAnalyticsJobsResult() : 
    m_status(CallAnalyticsJobStatus::NOT_SET)
{
}

ListCallAnalyticsJobsResult::ListCallAnalyticsJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(CallAnalyticsJobStatus::NOT_SET)
{
  *this = result;
}

ListCallAnalyticsJobsResult& ListCallAnalyticsJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = CallAnalyticsJobStatusMapper::GetCallAnalyticsJobStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("CallAnalyticsJobSummaries"))
  {
    Aws::Utils::Array<JsonView> callAnalyticsJobSummariesJsonList = jsonValue.GetArray("CallAnalyticsJobSummaries");
    for(unsigned callAnalyticsJobSummariesIndex = 0; callAnalyticsJobSummariesIndex < callAnalyticsJobSummariesJsonList.GetLength(); ++callAnalyticsJobSummariesIndex)
    {
      m_callAnalyticsJobSummaries.push_back(callAnalyticsJobSummariesJsonList[callAnalyticsJobSummariesIndex].AsObject());
    }
  }



  return *this;
}
