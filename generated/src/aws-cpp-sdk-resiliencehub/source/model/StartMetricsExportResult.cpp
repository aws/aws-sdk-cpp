/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/StartMetricsExportResult.h>
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

StartMetricsExportResult::StartMetricsExportResult() : 
    m_status(MetricsExportStatusType::NOT_SET)
{
}

StartMetricsExportResult::StartMetricsExportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : StartMetricsExportResult()
{
  *this = result;
}

StartMetricsExportResult& StartMetricsExportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
