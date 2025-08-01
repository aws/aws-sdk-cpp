/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/ListTelemetryRulesForOrganizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTelemetryRulesForOrganizationResult::ListTelemetryRulesForOrganizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTelemetryRulesForOrganizationResult& ListTelemetryRulesForOrganizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TelemetryRuleSummaries"))
  {
    Aws::Utils::Array<JsonView> telemetryRuleSummariesJsonList = jsonValue.GetArray("TelemetryRuleSummaries");
    for(unsigned telemetryRuleSummariesIndex = 0; telemetryRuleSummariesIndex < telemetryRuleSummariesJsonList.GetLength(); ++telemetryRuleSummariesIndex)
    {
      m_telemetryRuleSummaries.push_back(telemetryRuleSummariesJsonList[telemetryRuleSummariesIndex].AsObject());
    }
    m_telemetryRuleSummariesHasBeenSet = true;
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
