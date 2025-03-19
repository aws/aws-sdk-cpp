/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/AnalysisReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

AnalysisReport::AnalysisReport(JsonView jsonValue)
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
  if(jsonValue.ValueExists("AnalysisType"))
  {
    m_analysisType = EnabledAnalysisTypeMapper::GetEnabledAnalysisTypeForName(jsonValue.GetString("AnalysisType"));
    m_analysisTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReportTime"))
  {
    m_reportTime = jsonValue.GetDouble("ReportTime");
    m_reportTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");
    m_statusHasBeenSet = true;
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

  if(m_analysisTypeHasBeenSet)
  {
   payload.WithString("AnalysisType", EnabledAnalysisTypeMapper::GetNameForEnabledAnalysisType(m_analysisType));
  }

  if(m_reportTimeHasBeenSet)
  {
   payload.WithDouble("ReportTime", m_reportTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
