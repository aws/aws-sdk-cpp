/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ServerDetail.h>
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

ServerDetail::ServerDetail() : 
    m_antipatternReportS3ObjectHasBeenSet(false),
    m_antipatternReportStatus(AntipatternReportStatus::NOT_SET),
    m_antipatternReportStatusHasBeenSet(false),
    m_antipatternReportStatusMessageHasBeenSet(false),
    m_applicationComponentStrategySummaryHasBeenSet(false),
    m_dataCollectionStatus(RunTimeAssessmentStatus::NOT_SET),
    m_dataCollectionStatusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastAnalyzedTimestampHasBeenSet(false),
    m_listAntipatternSeveritySummaryHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_recommendationSetHasBeenSet(false),
    m_serverErrorHasBeenSet(false),
    m_serverTypeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_systemInfoHasBeenSet(false)
{
}

ServerDetail::ServerDetail(JsonView jsonValue) : 
    m_antipatternReportS3ObjectHasBeenSet(false),
    m_antipatternReportStatus(AntipatternReportStatus::NOT_SET),
    m_antipatternReportStatusHasBeenSet(false),
    m_antipatternReportStatusMessageHasBeenSet(false),
    m_applicationComponentStrategySummaryHasBeenSet(false),
    m_dataCollectionStatus(RunTimeAssessmentStatus::NOT_SET),
    m_dataCollectionStatusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastAnalyzedTimestampHasBeenSet(false),
    m_listAntipatternSeveritySummaryHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_recommendationSetHasBeenSet(false),
    m_serverErrorHasBeenSet(false),
    m_serverTypeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_systemInfoHasBeenSet(false)
{
  *this = jsonValue;
}

ServerDetail& ServerDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("antipatternReportS3Object"))
  {
    m_antipatternReportS3Object = jsonValue.GetObject("antipatternReportS3Object");

    m_antipatternReportS3ObjectHasBeenSet = true;
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

  if(jsonValue.ValueExists("applicationComponentStrategySummary"))
  {
    Aws::Utils::Array<JsonView> applicationComponentStrategySummaryJsonList = jsonValue.GetArray("applicationComponentStrategySummary");
    for(unsigned applicationComponentStrategySummaryIndex = 0; applicationComponentStrategySummaryIndex < applicationComponentStrategySummaryJsonList.GetLength(); ++applicationComponentStrategySummaryIndex)
    {
      m_applicationComponentStrategySummary.push_back(applicationComponentStrategySummaryJsonList[applicationComponentStrategySummaryIndex].AsObject());
    }
    m_applicationComponentStrategySummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataCollectionStatus"))
  {
    m_dataCollectionStatus = RunTimeAssessmentStatusMapper::GetRunTimeAssessmentStatusForName(jsonValue.GetString("dataCollectionStatus"));

    m_dataCollectionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastAnalyzedTimestamp"))
  {
    m_lastAnalyzedTimestamp = jsonValue.GetDouble("lastAnalyzedTimestamp");

    m_lastAnalyzedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("listAntipatternSeveritySummary"))
  {
    Aws::Utils::Array<JsonView> listAntipatternSeveritySummaryJsonList = jsonValue.GetArray("listAntipatternSeveritySummary");
    for(unsigned listAntipatternSeveritySummaryIndex = 0; listAntipatternSeveritySummaryIndex < listAntipatternSeveritySummaryJsonList.GetLength(); ++listAntipatternSeveritySummaryIndex)
    {
      m_listAntipatternSeveritySummary.push_back(listAntipatternSeveritySummaryJsonList[listAntipatternSeveritySummaryIndex].AsObject());
    }
    m_listAntipatternSeveritySummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationSet"))
  {
    m_recommendationSet = jsonValue.GetObject("recommendationSet");

    m_recommendationSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverError"))
  {
    m_serverError = jsonValue.GetObject("serverError");

    m_serverErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverType"))
  {
    m_serverType = jsonValue.GetString("serverType");

    m_serverTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("systemInfo"))
  {
    m_systemInfo = jsonValue.GetObject("systemInfo");

    m_systemInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerDetail::Jsonize() const
{
  JsonValue payload;

  if(m_antipatternReportS3ObjectHasBeenSet)
  {
   payload.WithObject("antipatternReportS3Object", m_antipatternReportS3Object.Jsonize());

  }

  if(m_antipatternReportStatusHasBeenSet)
  {
   payload.WithString("antipatternReportStatus", AntipatternReportStatusMapper::GetNameForAntipatternReportStatus(m_antipatternReportStatus));
  }

  if(m_antipatternReportStatusMessageHasBeenSet)
  {
   payload.WithString("antipatternReportStatusMessage", m_antipatternReportStatusMessage);

  }

  if(m_applicationComponentStrategySummaryHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationComponentStrategySummaryJsonList(m_applicationComponentStrategySummary.size());
   for(unsigned applicationComponentStrategySummaryIndex = 0; applicationComponentStrategySummaryIndex < applicationComponentStrategySummaryJsonList.GetLength(); ++applicationComponentStrategySummaryIndex)
   {
     applicationComponentStrategySummaryJsonList[applicationComponentStrategySummaryIndex].AsObject(m_applicationComponentStrategySummary[applicationComponentStrategySummaryIndex].Jsonize());
   }
   payload.WithArray("applicationComponentStrategySummary", std::move(applicationComponentStrategySummaryJsonList));

  }

  if(m_dataCollectionStatusHasBeenSet)
  {
   payload.WithString("dataCollectionStatus", RunTimeAssessmentStatusMapper::GetNameForRunTimeAssessmentStatus(m_dataCollectionStatus));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_lastAnalyzedTimestampHasBeenSet)
  {
   payload.WithDouble("lastAnalyzedTimestamp", m_lastAnalyzedTimestamp.SecondsWithMSPrecision());
  }

  if(m_listAntipatternSeveritySummaryHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> listAntipatternSeveritySummaryJsonList(m_listAntipatternSeveritySummary.size());
   for(unsigned listAntipatternSeveritySummaryIndex = 0; listAntipatternSeveritySummaryIndex < listAntipatternSeveritySummaryJsonList.GetLength(); ++listAntipatternSeveritySummaryIndex)
   {
     listAntipatternSeveritySummaryJsonList[listAntipatternSeveritySummaryIndex].AsObject(m_listAntipatternSeveritySummary[listAntipatternSeveritySummaryIndex].Jsonize());
   }
   payload.WithArray("listAntipatternSeveritySummary", std::move(listAntipatternSeveritySummaryJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_recommendationSetHasBeenSet)
  {
   payload.WithObject("recommendationSet", m_recommendationSet.Jsonize());

  }

  if(m_serverErrorHasBeenSet)
  {
   payload.WithObject("serverError", m_serverError.Jsonize());

  }

  if(m_serverTypeHasBeenSet)
  {
   payload.WithString("serverType", m_serverType);

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_systemInfoHasBeenSet)
  {
   payload.WithObject("systemInfo", m_systemInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
