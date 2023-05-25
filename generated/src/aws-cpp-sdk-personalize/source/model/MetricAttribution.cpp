/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/MetricAttribution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

MetricAttribution::MetricAttribution() : 
    m_nameHasBeenSet(false),
    m_metricAttributionArnHasBeenSet(false),
    m_datasetGroupArnHasBeenSet(false),
    m_metricsOutputConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

MetricAttribution::MetricAttribution(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_metricAttributionArnHasBeenSet(false),
    m_datasetGroupArnHasBeenSet(false),
    m_metricsOutputConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

MetricAttribution& MetricAttribution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricAttributionArn"))
  {
    m_metricAttributionArn = jsonValue.GetString("metricAttributionArn");

    m_metricAttributionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datasetGroupArn"))
  {
    m_datasetGroupArn = jsonValue.GetString("datasetGroupArn");

    m_datasetGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricsOutputConfig"))
  {
    m_metricsOutputConfig = jsonValue.GetObject("metricsOutputConfig");

    m_metricsOutputConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricAttribution::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_metricAttributionArnHasBeenSet)
  {
   payload.WithString("metricAttributionArn", m_metricAttributionArn);

  }

  if(m_datasetGroupArnHasBeenSet)
  {
   payload.WithString("datasetGroupArn", m_datasetGroupArn);

  }

  if(m_metricsOutputConfigHasBeenSet)
  {
   payload.WithObject("metricsOutputConfig", m_metricsOutputConfig.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
