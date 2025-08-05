/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/GetTelemetryRuleResult.h>
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

GetTelemetryRuleResult::GetTelemetryRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTelemetryRuleResult& GetTelemetryRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RuleName"))
  {
    m_ruleName = jsonValue.GetString("RuleName");
    m_ruleNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleArn"))
  {
    m_ruleArn = jsonValue.GetString("RuleArn");
    m_ruleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimeStamp"))
  {
    m_createdTimeStamp = jsonValue.GetInt64("CreatedTimeStamp");
    m_createdTimeStampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdateTimeStamp"))
  {
    m_lastUpdateTimeStamp = jsonValue.GetInt64("LastUpdateTimeStamp");
    m_lastUpdateTimeStampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TelemetryRule"))
  {
    m_telemetryRule = jsonValue.GetObject("TelemetryRule");
    m_telemetryRuleHasBeenSet = true;
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
