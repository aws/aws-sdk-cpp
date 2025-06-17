/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GetAutomationRuleV2Result.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAutomationRuleV2Result::GetAutomationRuleV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAutomationRuleV2Result& GetAutomationRuleV2Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RuleArn"))
  {
    m_ruleArn = jsonValue.GetString("RuleArn");
    m_ruleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleId"))
  {
    m_ruleId = jsonValue.GetString("RuleId");
    m_ruleIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleOrder"))
  {
    m_ruleOrder = jsonValue.GetDouble("RuleOrder");
    m_ruleOrderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleName"))
  {
    m_ruleName = jsonValue.GetString("RuleName");
    m_ruleNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleStatus"))
  {
    m_ruleStatus = RuleStatusV2Mapper::GetRuleStatusV2ForName(jsonValue.GetString("RuleStatus"));
    m_ruleStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Criteria"))
  {
    m_criteria = jsonValue.GetObject("Criteria");
    m_criteriaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("Actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
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
