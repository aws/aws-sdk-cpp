/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/AntipatternSeveritySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

AntipatternSeveritySummary::AntipatternSeveritySummary() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_severity(Severity::NOT_SET),
    m_severityHasBeenSet(false)
{
}

AntipatternSeveritySummary::AntipatternSeveritySummary(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_severity(Severity::NOT_SET),
    m_severityHasBeenSet(false)
{
  *this = jsonValue;
}

AntipatternSeveritySummary& AntipatternSeveritySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severity"))
  {
    m_severity = SeverityMapper::GetSeverityForName(jsonValue.GetString("severity"));

    m_severityHasBeenSet = true;
  }

  return *this;
}

JsonValue AntipatternSeveritySummary::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("severity", SeverityMapper::GetNameForSeverity(m_severity));
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
