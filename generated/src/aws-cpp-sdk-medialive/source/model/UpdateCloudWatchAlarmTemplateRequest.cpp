/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateCloudWatchAlarmTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateCloudWatchAlarmTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("comparisonOperator", CloudWatchAlarmTemplateComparisonOperatorMapper::GetNameForCloudWatchAlarmTemplateComparisonOperator(m_comparisonOperator));
  }

  if(m_datapointsToAlarmHasBeenSet)
  {
   payload.WithInteger("datapointsToAlarm", m_datapointsToAlarm);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_evaluationPeriodsHasBeenSet)
  {
   payload.WithInteger("evaluationPeriods", m_evaluationPeriods);

  }

  if(m_groupIdentifierHasBeenSet)
  {
   payload.WithString("groupIdentifier", m_groupIdentifier);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", m_metricName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_periodHasBeenSet)
  {
   payload.WithInteger("period", m_period);

  }

  if(m_statisticHasBeenSet)
  {
   payload.WithString("statistic", CloudWatchAlarmTemplateStatisticMapper::GetNameForCloudWatchAlarmTemplateStatistic(m_statistic));
  }

  if(m_targetResourceTypeHasBeenSet)
  {
   payload.WithString("targetResourceType", CloudWatchAlarmTemplateTargetResourceTypeMapper::GetNameForCloudWatchAlarmTemplateTargetResourceType(m_targetResourceType));
  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithDouble("threshold", m_threshold);

  }

  if(m_treatMissingDataHasBeenSet)
  {
   payload.WithString("treatMissingData", CloudWatchAlarmTemplateTreatMissingDataMapper::GetNameForCloudWatchAlarmTemplateTreatMissingData(m_treatMissingData));
  }

  return payload.View().WriteReadable();
}




