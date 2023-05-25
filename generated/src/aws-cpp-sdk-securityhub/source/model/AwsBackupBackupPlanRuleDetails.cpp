/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsBackupBackupPlanRuleDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsBackupBackupPlanRuleDetails::AwsBackupBackupPlanRuleDetails() : 
    m_targetBackupVaultHasBeenSet(false),
    m_startWindowMinutes(0),
    m_startWindowMinutesHasBeenSet(false),
    m_scheduleExpressionHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_enableContinuousBackup(false),
    m_enableContinuousBackupHasBeenSet(false),
    m_completionWindowMinutes(0),
    m_completionWindowMinutesHasBeenSet(false),
    m_copyActionsHasBeenSet(false),
    m_lifecycleHasBeenSet(false)
{
}

AwsBackupBackupPlanRuleDetails::AwsBackupBackupPlanRuleDetails(JsonView jsonValue) : 
    m_targetBackupVaultHasBeenSet(false),
    m_startWindowMinutes(0),
    m_startWindowMinutesHasBeenSet(false),
    m_scheduleExpressionHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_enableContinuousBackup(false),
    m_enableContinuousBackupHasBeenSet(false),
    m_completionWindowMinutes(0),
    m_completionWindowMinutesHasBeenSet(false),
    m_copyActionsHasBeenSet(false),
    m_lifecycleHasBeenSet(false)
{
  *this = jsonValue;
}

AwsBackupBackupPlanRuleDetails& AwsBackupBackupPlanRuleDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetBackupVault"))
  {
    m_targetBackupVault = jsonValue.GetString("TargetBackupVault");

    m_targetBackupVaultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartWindowMinutes"))
  {
    m_startWindowMinutes = jsonValue.GetInt64("StartWindowMinutes");

    m_startWindowMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduleExpression"))
  {
    m_scheduleExpression = jsonValue.GetString("ScheduleExpression");

    m_scheduleExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleName"))
  {
    m_ruleName = jsonValue.GetString("RuleName");

    m_ruleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleId"))
  {
    m_ruleId = jsonValue.GetString("RuleId");

    m_ruleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableContinuousBackup"))
  {
    m_enableContinuousBackup = jsonValue.GetBool("EnableContinuousBackup");

    m_enableContinuousBackupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionWindowMinutes"))
  {
    m_completionWindowMinutes = jsonValue.GetInt64("CompletionWindowMinutes");

    m_completionWindowMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CopyActions"))
  {
    Aws::Utils::Array<JsonView> copyActionsJsonList = jsonValue.GetArray("CopyActions");
    for(unsigned copyActionsIndex = 0; copyActionsIndex < copyActionsJsonList.GetLength(); ++copyActionsIndex)
    {
      m_copyActions.push_back(copyActionsJsonList[copyActionsIndex].AsObject());
    }
    m_copyActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = jsonValue.GetObject("Lifecycle");

    m_lifecycleHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsBackupBackupPlanRuleDetails::Jsonize() const
{
  JsonValue payload;

  if(m_targetBackupVaultHasBeenSet)
  {
   payload.WithString("TargetBackupVault", m_targetBackupVault);

  }

  if(m_startWindowMinutesHasBeenSet)
  {
   payload.WithInt64("StartWindowMinutes", m_startWindowMinutes);

  }

  if(m_scheduleExpressionHasBeenSet)
  {
   payload.WithString("ScheduleExpression", m_scheduleExpression);

  }

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("RuleName", m_ruleName);

  }

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  if(m_enableContinuousBackupHasBeenSet)
  {
   payload.WithBool("EnableContinuousBackup", m_enableContinuousBackup);

  }

  if(m_completionWindowMinutesHasBeenSet)
  {
   payload.WithInt64("CompletionWindowMinutes", m_completionWindowMinutes);

  }

  if(m_copyActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> copyActionsJsonList(m_copyActions.size());
   for(unsigned copyActionsIndex = 0; copyActionsIndex < copyActionsJsonList.GetLength(); ++copyActionsIndex)
   {
     copyActionsJsonList[copyActionsIndex].AsObject(m_copyActions[copyActionsIndex].Jsonize());
   }
   payload.WithArray("CopyActions", std::move(copyActionsJsonList));

  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithObject("Lifecycle", m_lifecycle.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
