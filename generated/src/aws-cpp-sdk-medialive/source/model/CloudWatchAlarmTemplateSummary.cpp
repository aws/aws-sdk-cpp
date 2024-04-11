/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CloudWatchAlarmTemplateSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

CloudWatchAlarmTemplateSummary::CloudWatchAlarmTemplateSummary() : 
    m_arnHasBeenSet(false),
    m_comparisonOperator(CloudWatchAlarmTemplateComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_datapointsToAlarm(0),
    m_datapointsToAlarmHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_evaluationPeriods(0),
    m_evaluationPeriodsHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_statistic(CloudWatchAlarmTemplateStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_targetResourceType(CloudWatchAlarmTemplateTargetResourceType::NOT_SET),
    m_targetResourceTypeHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_treatMissingData(CloudWatchAlarmTemplateTreatMissingData::NOT_SET),
    m_treatMissingDataHasBeenSet(false)
{
}

CloudWatchAlarmTemplateSummary::CloudWatchAlarmTemplateSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_comparisonOperator(CloudWatchAlarmTemplateComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_datapointsToAlarm(0),
    m_datapointsToAlarmHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_evaluationPeriods(0),
    m_evaluationPeriodsHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_statistic(CloudWatchAlarmTemplateStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_targetResourceType(CloudWatchAlarmTemplateTargetResourceType::NOT_SET),
    m_targetResourceTypeHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_treatMissingData(CloudWatchAlarmTemplateTreatMissingData::NOT_SET),
    m_treatMissingDataHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchAlarmTemplateSummary& CloudWatchAlarmTemplateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("comparisonOperator"))
  {
    m_comparisonOperator = CloudWatchAlarmTemplateComparisonOperatorMapper::GetCloudWatchAlarmTemplateComparisonOperatorForName(jsonValue.GetString("comparisonOperator"));

    m_comparisonOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datapointsToAlarm"))
  {
    m_datapointsToAlarm = jsonValue.GetInteger("datapointsToAlarm");

    m_datapointsToAlarmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evaluationPeriods"))
  {
    m_evaluationPeriods = jsonValue.GetInteger("evaluationPeriods");

    m_evaluationPeriodsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupId"))
  {
    m_groupId = jsonValue.GetString("groupId");

    m_groupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = jsonValue.GetString("metricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("period"))
  {
    m_period = jsonValue.GetInteger("period");

    m_periodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statistic"))
  {
    m_statistic = CloudWatchAlarmTemplateStatisticMapper::GetCloudWatchAlarmTemplateStatisticForName(jsonValue.GetString("statistic"));

    m_statisticHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetResourceType"))
  {
    m_targetResourceType = CloudWatchAlarmTemplateTargetResourceTypeMapper::GetCloudWatchAlarmTemplateTargetResourceTypeForName(jsonValue.GetString("targetResourceType"));

    m_targetResourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("threshold"))
  {
    m_threshold = jsonValue.GetDouble("threshold");

    m_thresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("treatMissingData"))
  {
    m_treatMissingData = CloudWatchAlarmTemplateTreatMissingDataMapper::GetCloudWatchAlarmTemplateTreatMissingDataForName(jsonValue.GetString("treatMissingData"));

    m_treatMissingDataHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchAlarmTemplateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("comparisonOperator", CloudWatchAlarmTemplateComparisonOperatorMapper::GetNameForCloudWatchAlarmTemplateComparisonOperator(m_comparisonOperator));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
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

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("groupId", m_groupId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", m_metricName);

  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithString("modifiedAt", m_modifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

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

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
