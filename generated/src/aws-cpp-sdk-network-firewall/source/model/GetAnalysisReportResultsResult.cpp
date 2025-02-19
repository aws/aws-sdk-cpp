/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/GetAnalysisReportResultsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAnalysisReportResultsResult::GetAnalysisReportResultsResult() : 
    m_analysisType(EnabledAnalysisType::NOT_SET)
{
}

GetAnalysisReportResultsResult::GetAnalysisReportResultsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetAnalysisReportResultsResult()
{
  *this = result;
}

GetAnalysisReportResultsResult& GetAnalysisReportResultsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

  }

  if(jsonValue.ValueExists("ReportTime"))
  {
    m_reportTime = jsonValue.GetDouble("ReportTime");

  }

  if(jsonValue.ValueExists("AnalysisType"))
  {
    m_analysisType = EnabledAnalysisTypeMapper::GetEnabledAnalysisTypeForName(jsonValue.GetString("AnalysisType"));

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("AnalysisReportResults"))
  {
    Aws::Utils::Array<JsonView> analysisReportResultsJsonList = jsonValue.GetArray("AnalysisReportResults");
    for(unsigned analysisReportResultsIndex = 0; analysisReportResultsIndex < analysisReportResultsJsonList.GetLength(); ++analysisReportResultsIndex)
    {
      m_analysisReportResults.push_back(analysisReportResultsJsonList[analysisReportResultsIndex].AsObject());
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
