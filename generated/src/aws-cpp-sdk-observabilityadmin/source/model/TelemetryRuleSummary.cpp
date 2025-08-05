/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/TelemetryRuleSummary.h>
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

TelemetryRuleSummary::TelemetryRuleSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

TelemetryRuleSummary& TelemetryRuleSummary::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TelemetryType"))
  {
    m_telemetryType = TelemetryTypeMapper::GetTelemetryTypeForName(jsonValue.GetString("TelemetryType"));
    m_telemetryTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue TelemetryRuleSummary::Jsonize() const
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

  if(m_createdTimeStampHasBeenSet)
  {
   payload.WithInt64("CreatedTimeStamp", m_createdTimeStamp);

  }

  if(m_lastUpdateTimeStampHasBeenSet)
  {
   payload.WithInt64("LastUpdateTimeStamp", m_lastUpdateTimeStamp);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_telemetryTypeHasBeenSet)
  {
   payload.WithString("TelemetryType", TelemetryTypeMapper::GetNameForTelemetryType(m_telemetryType));
  }

  return payload;
}

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
