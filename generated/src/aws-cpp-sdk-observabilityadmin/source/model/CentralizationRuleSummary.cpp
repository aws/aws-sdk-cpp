/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/CentralizationRuleSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ObservabilityAdmin
{
namespace Model
{

CentralizationRuleSummary::CentralizationRuleSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CentralizationRuleSummary& CentralizationRuleSummary::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("DestinationAccountId"))
  {
    m_destinationAccountId = jsonValue.GetString("DestinationAccountId");
    m_destinationAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationRegion"))
  {
    m_destinationRegion = jsonValue.GetString("DestinationRegion");
    m_destinationRegionHasBeenSet = true;
  }
  return *this;
}

JsonValue CentralizationRuleSummary::Jsonize() const
{
  JsonValue payload;

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("RuleName", m_ruleName);

  }

  if(m_ruleArnHasBeenSet)
  {
   payload.WithString("RuleArn", m_ruleArn);

  }

  if(m_creatorAccountIdHasBeenSet)
  {
   payload.WithString("CreatorAccountId", m_creatorAccountId);

  }

  if(m_createdTimeStampHasBeenSet)
  {
   payload.WithInt64("CreatedTimeStamp", m_createdTimeStamp);

  }

  if(m_createdRegionHasBeenSet)
  {
   payload.WithString("CreatedRegion", m_createdRegion);

  }

  if(m_lastUpdateTimeStampHasBeenSet)
  {
   payload.WithInt64("LastUpdateTimeStamp", m_lastUpdateTimeStamp);

  }

  if(m_ruleHealthHasBeenSet)
  {
   payload.WithString("RuleHealth", RuleHealthMapper::GetNameForRuleHealth(m_ruleHealth));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", CentralizationFailureReasonMapper::GetNameForCentralizationFailureReason(m_failureReason));
  }

  if(m_destinationAccountIdHasBeenSet)
  {
   payload.WithString("DestinationAccountId", m_destinationAccountId);

  }

  if(m_destinationRegionHasBeenSet)
  {
   payload.WithString("DestinationRegion", m_destinationRegion);

  }

  return payload;
}

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
