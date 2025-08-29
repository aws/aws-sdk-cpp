/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/SamplingBoostStatisticsDocument.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

SamplingBoostStatisticsDocument::SamplingBoostStatisticsDocument(JsonView jsonValue)
{
  *this = jsonValue;
}

SamplingBoostStatisticsDocument& SamplingBoostStatisticsDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleName"))
  {
    m_ruleName = jsonValue.GetString("RuleName");
    m_ruleNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceName"))
  {
    m_serviceName = jsonValue.GetString("ServiceName");
    m_serviceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");
    m_timestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnomalyCount"))
  {
    m_anomalyCount = jsonValue.GetInteger("AnomalyCount");
    m_anomalyCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalCount"))
  {
    m_totalCount = jsonValue.GetInteger("TotalCount");
    m_totalCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SampledAnomalyCount"))
  {
    m_sampledAnomalyCount = jsonValue.GetInteger("SampledAnomalyCount");
    m_sampledAnomalyCountHasBeenSet = true;
  }
  return *this;
}

JsonValue SamplingBoostStatisticsDocument::Jsonize() const
{
  JsonValue payload;

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("RuleName", m_ruleName);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", m_serviceName);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_anomalyCountHasBeenSet)
  {
   payload.WithInteger("AnomalyCount", m_anomalyCount);

  }

  if(m_totalCountHasBeenSet)
  {
   payload.WithInteger("TotalCount", m_totalCount);

  }

  if(m_sampledAnomalyCountHasBeenSet)
  {
   payload.WithInteger("SampledAnomalyCount", m_sampledAnomalyCount);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
