/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/CreateDeliverabilityTestReportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDeliverabilityTestReportResult::CreateDeliverabilityTestReportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateDeliverabilityTestReportResult& CreateDeliverabilityTestReportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReportId"))
  {
    m_reportId = jsonValue.GetString("ReportId");
    m_reportIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeliverabilityTestStatus"))
  {
    m_deliverabilityTestStatus = DeliverabilityTestStatusMapper::GetDeliverabilityTestStatusForName(jsonValue.GetString("DeliverabilityTestStatus"));
    m_deliverabilityTestStatusHasBeenSet = true;
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
