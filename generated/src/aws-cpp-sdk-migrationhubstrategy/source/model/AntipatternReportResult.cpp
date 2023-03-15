/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/AntipatternReportResult.h>
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

AntipatternReportResult::AntipatternReportResult() : 
    m_analyzerNameHasBeenSet(false),
    m_antiPatternReportS3ObjectHasBeenSet(false),
    m_antipatternReportStatus(AntipatternReportStatus::NOT_SET),
    m_antipatternReportStatusHasBeenSet(false),
    m_antipatternReportStatusMessageHasBeenSet(false)
{
}

AntipatternReportResult::AntipatternReportResult(JsonView jsonValue) : 
    m_analyzerNameHasBeenSet(false),
    m_antiPatternReportS3ObjectHasBeenSet(false),
    m_antipatternReportStatus(AntipatternReportStatus::NOT_SET),
    m_antipatternReportStatusHasBeenSet(false),
    m_antipatternReportStatusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

AntipatternReportResult& AntipatternReportResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("analyzerName"))
  {
    m_analyzerName = jsonValue.GetObject("analyzerName");

    m_analyzerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("antiPatternReportS3Object"))
  {
    m_antiPatternReportS3Object = jsonValue.GetObject("antiPatternReportS3Object");

    m_antiPatternReportS3ObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("antipatternReportStatus"))
  {
    m_antipatternReportStatus = AntipatternReportStatusMapper::GetAntipatternReportStatusForName(jsonValue.GetString("antipatternReportStatus"));

    m_antipatternReportStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("antipatternReportStatusMessage"))
  {
    m_antipatternReportStatusMessage = jsonValue.GetString("antipatternReportStatusMessage");

    m_antipatternReportStatusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue AntipatternReportResult::Jsonize() const
{
  JsonValue payload;

  if(m_analyzerNameHasBeenSet)
  {
   payload.WithObject("analyzerName", m_analyzerName.Jsonize());

  }

  if(m_antiPatternReportS3ObjectHasBeenSet)
  {
   payload.WithObject("antiPatternReportS3Object", m_antiPatternReportS3Object.Jsonize());

  }

  if(m_antipatternReportStatusHasBeenSet)
  {
   payload.WithString("antipatternReportStatus", AntipatternReportStatusMapper::GetNameForAntipatternReportStatus(m_antipatternReportStatus));
  }

  if(m_antipatternReportStatusMessageHasBeenSet)
  {
   payload.WithString("antipatternReportStatusMessage", m_antipatternReportStatusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
