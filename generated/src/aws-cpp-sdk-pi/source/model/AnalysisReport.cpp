/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/AnalysisReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PI
{
namespace Model
{

AnalysisReport::AnalysisReport() : 
    m_analysisReportIdHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_serviceType(ServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_status(AnalysisStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_insightsHasBeenSet(false)
{
}

AnalysisReport::AnalysisReport(JsonView jsonValue) : 
    m_analysisReportIdHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_serviceType(ServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_status(AnalysisStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_insightsHasBeenSet(false)
{
  *this = jsonValue;
}

AnalysisReport& AnalysisReport::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnalysisReportId"))
  {
    m_analysisReportId = jsonValue.GetString("AnalysisReportId");

    m_analysisReportIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceType"))
  {
    m_serviceType = ServiceTypeMapper::GetServiceTypeForName(jsonValue.GetString("ServiceType"));

    m_serviceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetDouble("CreateTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = AnalysisStatusMapper::GetAnalysisStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Insights"))
  {
    Aws::Utils::Array<JsonView> insightsJsonList = jsonValue.GetArray("Insights");
    for(unsigned insightsIndex = 0; insightsIndex < insightsJsonList.GetLength(); ++insightsIndex)
    {
      m_insights.push_back(insightsJsonList[insightsIndex].AsObject());
    }
    m_insightsHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalysisReport::Jsonize() const
{
  JsonValue payload;

  if(m_analysisReportIdHasBeenSet)
  {
   payload.WithString("AnalysisReportId", m_analysisReportId);

  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_serviceTypeHasBeenSet)
  {
   payload.WithString("ServiceType", ServiceTypeMapper::GetNameForServiceType(m_serviceType));
  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("CreateTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", AnalysisStatusMapper::GetNameForAnalysisStatus(m_status));
  }

  if(m_insightsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> insightsJsonList(m_insights.size());
   for(unsigned insightsIndex = 0; insightsIndex < insightsJsonList.GetLength(); ++insightsIndex)
   {
     insightsJsonList[insightsIndex].AsObject(m_insights[insightsIndex].Jsonize());
   }
   payload.WithArray("Insights", std::move(insightsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PI
} // namespace Aws
