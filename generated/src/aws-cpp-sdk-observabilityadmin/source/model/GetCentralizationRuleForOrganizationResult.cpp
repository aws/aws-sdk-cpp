/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/GetCentralizationRuleForOrganizationResult.h>
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

GetCentralizationRuleForOrganizationResult::GetCentralizationRuleForOrganizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCentralizationRuleForOrganizationResult& GetCentralizationRuleForOrganizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
  if(jsonValue.ValueExists("CreatorAccountId"))
  {
    m_creatorAccountId = jsonValue.GetString("CreatorAccountId");
    m_creatorAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimeStamp"))
  {
    m_createdTimeStamp = jsonValue.GetInt64("CreatedTimeStamp");
    m_createdTimeStampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedRegion"))
  {
    m_createdRegion = jsonValue.GetString("CreatedRegion");
    m_createdRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdateTimeStamp"))
  {
    m_lastUpdateTimeStamp = jsonValue.GetInt64("LastUpdateTimeStamp");
    m_lastUpdateTimeStampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleHealth"))
  {
    m_ruleHealth = RuleHealthMapper::GetRuleHealthForName(jsonValue.GetString("RuleHealth"));
    m_ruleHealthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = CentralizationFailureReasonMapper::GetCentralizationFailureReasonForName(jsonValue.GetString("FailureReason"));
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CentralizationRule"))
  {
    m_centralizationRule = jsonValue.GetObject("CentralizationRule");
    m_centralizationRuleHasBeenSet = true;
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
