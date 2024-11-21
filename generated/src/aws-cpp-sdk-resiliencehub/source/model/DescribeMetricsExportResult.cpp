/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DescribeMetricsExportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMetricsExportResult::DescribeMetricsExportResult() : 
    m_status(MetricsExportStatusType::NOT_SET)
{
}

DescribeMetricsExportResult::DescribeMetricsExportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribeMetricsExportResult()
{
  *this = result;
}

DescribeMetricsExportResult& DescribeMetricsExportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

  }

  if(jsonValue.ValueExists("exportLocation"))
  {
    m_exportLocation = jsonValue.GetObject("exportLocation");

  }

  if(jsonValue.ValueExists("metricsExportId"))
  {
    m_metricsExportId = jsonValue.GetString("metricsExportId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = MetricsExportStatusTypeMapper::GetMetricsExportStatusTypeForName(jsonValue.GetString("status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
