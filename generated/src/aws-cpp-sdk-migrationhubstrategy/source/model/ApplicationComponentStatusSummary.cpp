/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ApplicationComponentStatusSummary.h>
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

ApplicationComponentStatusSummary::ApplicationComponentStatusSummary() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_srcCodeOrDbAnalysisStatus(SrcCodeOrDbAnalysisStatus::NOT_SET),
    m_srcCodeOrDbAnalysisStatusHasBeenSet(false)
{
}

ApplicationComponentStatusSummary::ApplicationComponentStatusSummary(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_srcCodeOrDbAnalysisStatus(SrcCodeOrDbAnalysisStatus::NOT_SET),
    m_srcCodeOrDbAnalysisStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationComponentStatusSummary& ApplicationComponentStatusSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("srcCodeOrDbAnalysisStatus"))
  {
    m_srcCodeOrDbAnalysisStatus = SrcCodeOrDbAnalysisStatusMapper::GetSrcCodeOrDbAnalysisStatusForName(jsonValue.GetString("srcCodeOrDbAnalysisStatus"));

    m_srcCodeOrDbAnalysisStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationComponentStatusSummary::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  if(m_srcCodeOrDbAnalysisStatusHasBeenSet)
  {
   payload.WithString("srcCodeOrDbAnalysisStatus", SrcCodeOrDbAnalysisStatusMapper::GetNameForSrcCodeOrDbAnalysisStatus(m_srcCodeOrDbAnalysisStatus));
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
