/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ServerStatusSummary.h>
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

ServerStatusSummary::ServerStatusSummary() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_runTimeAssessmentStatus(RunTimeAssessmentStatus::NOT_SET),
    m_runTimeAssessmentStatusHasBeenSet(false)
{
}

ServerStatusSummary::ServerStatusSummary(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_runTimeAssessmentStatus(RunTimeAssessmentStatus::NOT_SET),
    m_runTimeAssessmentStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ServerStatusSummary& ServerStatusSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runTimeAssessmentStatus"))
  {
    m_runTimeAssessmentStatus = RunTimeAssessmentStatusMapper::GetRunTimeAssessmentStatusForName(jsonValue.GetString("runTimeAssessmentStatus"));

    m_runTimeAssessmentStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerStatusSummary::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  if(m_runTimeAssessmentStatusHasBeenSet)
  {
   payload.WithString("runTimeAssessmentStatus", RunTimeAssessmentStatusMapper::GetNameForRunTimeAssessmentStatus(m_runTimeAssessmentStatus));
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
