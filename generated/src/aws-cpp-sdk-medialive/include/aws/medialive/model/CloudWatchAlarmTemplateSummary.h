/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/CloudWatchAlarmTemplateComparisonOperator.h>
#include <aws/core/utils/DateTime.h>
#include <aws/medialive/model/CloudWatchAlarmTemplateStatistic.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/CloudWatchAlarmTemplateTargetResourceType.h>
#include <aws/medialive/model/CloudWatchAlarmTemplateTreatMissingData.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for CloudWatchAlarmTemplateSummary<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CloudWatchAlarmTemplateSummary">AWS
   * API Reference</a></p>
   */
  class CloudWatchAlarmTemplateSummary
  {
  public:
    AWS_MEDIALIVE_API CloudWatchAlarmTemplateSummary();
    AWS_MEDIALIVE_API CloudWatchAlarmTemplateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API CloudWatchAlarmTemplateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A cloudwatch alarm template's ARN (Amazon Resource Name)
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * A cloudwatch alarm template's ARN (Amazon Resource Name)
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * A cloudwatch alarm template's ARN (Amazon Resource Name)
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * A cloudwatch alarm template's ARN (Amazon Resource Name)
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * A cloudwatch alarm template's ARN (Amazon Resource Name)
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * A cloudwatch alarm template's ARN (Amazon Resource Name)
     */
    inline CloudWatchAlarmTemplateSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * A cloudwatch alarm template's ARN (Amazon Resource Name)
     */
    inline CloudWatchAlarmTemplateSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * A cloudwatch alarm template's ARN (Amazon Resource Name)
     */
    inline CloudWatchAlarmTemplateSummary& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const CloudWatchAlarmTemplateComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

    
    inline void SetComparisonOperator(const CloudWatchAlarmTemplateComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    
    inline void SetComparisonOperator(CloudWatchAlarmTemplateComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    
    inline CloudWatchAlarmTemplateSummary& WithComparisonOperator(const CloudWatchAlarmTemplateComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    
    inline CloudWatchAlarmTemplateSummary& WithComparisonOperator(CloudWatchAlarmTemplateComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    
    inline CloudWatchAlarmTemplateSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    
    inline CloudWatchAlarmTemplateSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * The number of datapoints within the evaluation period that must be breaching to
     * trigger the alarm.
     */
    inline int GetDatapointsToAlarm() const{ return m_datapointsToAlarm; }

    /**
     * The number of datapoints within the evaluation period that must be breaching to
     * trigger the alarm.
     */
    inline bool DatapointsToAlarmHasBeenSet() const { return m_datapointsToAlarmHasBeenSet; }

    /**
     * The number of datapoints within the evaluation period that must be breaching to
     * trigger the alarm.
     */
    inline void SetDatapointsToAlarm(int value) { m_datapointsToAlarmHasBeenSet = true; m_datapointsToAlarm = value; }

    /**
     * The number of datapoints within the evaluation period that must be breaching to
     * trigger the alarm.
     */
    inline CloudWatchAlarmTemplateSummary& WithDatapointsToAlarm(int value) { SetDatapointsToAlarm(value); return *this;}


    /**
     * A resource's optional description.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A resource's optional description.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A resource's optional description.
     */
    inline CloudWatchAlarmTemplateSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A resource's optional description.
     */
    inline CloudWatchAlarmTemplateSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A resource's optional description.
     */
    inline CloudWatchAlarmTemplateSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The number of periods over which data is compared to the specified threshold.
     */
    inline int GetEvaluationPeriods() const{ return m_evaluationPeriods; }

    /**
     * The number of periods over which data is compared to the specified threshold.
     */
    inline bool EvaluationPeriodsHasBeenSet() const { return m_evaluationPeriodsHasBeenSet; }

    /**
     * The number of periods over which data is compared to the specified threshold.
     */
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }

    /**
     * The number of periods over which data is compared to the specified threshold.
     */
    inline CloudWatchAlarmTemplateSummary& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}


    /**
     * A cloudwatch alarm template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * A cloudwatch alarm template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * A cloudwatch alarm template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * A cloudwatch alarm template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * A cloudwatch alarm template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * A cloudwatch alarm template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline CloudWatchAlarmTemplateSummary& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * A cloudwatch alarm template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline CloudWatchAlarmTemplateSummary& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * A cloudwatch alarm template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline CloudWatchAlarmTemplateSummary& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * A cloudwatch alarm template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * A cloudwatch alarm template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * A cloudwatch alarm template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * A cloudwatch alarm template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * A cloudwatch alarm template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * A cloudwatch alarm template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline CloudWatchAlarmTemplateSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * A cloudwatch alarm template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline CloudWatchAlarmTemplateSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * A cloudwatch alarm template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline CloudWatchAlarmTemplateSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline CloudWatchAlarmTemplateSummary& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline CloudWatchAlarmTemplateSummary& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline CloudWatchAlarmTemplateSummary& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }

    
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }

    
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }

    
    inline CloudWatchAlarmTemplateSummary& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    
    inline CloudWatchAlarmTemplateSummary& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline CloudWatchAlarmTemplateSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline CloudWatchAlarmTemplateSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline CloudWatchAlarmTemplateSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The period, in seconds, over which the specified statistic is applied.
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * The period, in seconds, over which the specified statistic is applied.
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * The period, in seconds, over which the specified statistic is applied.
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * The period, in seconds, over which the specified statistic is applied.
     */
    inline CloudWatchAlarmTemplateSummary& WithPeriod(int value) { SetPeriod(value); return *this;}


    
    inline const CloudWatchAlarmTemplateStatistic& GetStatistic() const{ return m_statistic; }

    
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    
    inline void SetStatistic(const CloudWatchAlarmTemplateStatistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    
    inline void SetStatistic(CloudWatchAlarmTemplateStatistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    
    inline CloudWatchAlarmTemplateSummary& WithStatistic(const CloudWatchAlarmTemplateStatistic& value) { SetStatistic(value); return *this;}

    
    inline CloudWatchAlarmTemplateSummary& WithStatistic(CloudWatchAlarmTemplateStatistic&& value) { SetStatistic(std::move(value)); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CloudWatchAlarmTemplateSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline CloudWatchAlarmTemplateSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CloudWatchAlarmTemplateSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline CloudWatchAlarmTemplateSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CloudWatchAlarmTemplateSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CloudWatchAlarmTemplateSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CloudWatchAlarmTemplateSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CloudWatchAlarmTemplateSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CloudWatchAlarmTemplateSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    
    inline const CloudWatchAlarmTemplateTargetResourceType& GetTargetResourceType() const{ return m_targetResourceType; }

    
    inline bool TargetResourceTypeHasBeenSet() const { return m_targetResourceTypeHasBeenSet; }

    
    inline void SetTargetResourceType(const CloudWatchAlarmTemplateTargetResourceType& value) { m_targetResourceTypeHasBeenSet = true; m_targetResourceType = value; }

    
    inline void SetTargetResourceType(CloudWatchAlarmTemplateTargetResourceType&& value) { m_targetResourceTypeHasBeenSet = true; m_targetResourceType = std::move(value); }

    
    inline CloudWatchAlarmTemplateSummary& WithTargetResourceType(const CloudWatchAlarmTemplateTargetResourceType& value) { SetTargetResourceType(value); return *this;}

    
    inline CloudWatchAlarmTemplateSummary& WithTargetResourceType(CloudWatchAlarmTemplateTargetResourceType&& value) { SetTargetResourceType(std::move(value)); return *this;}


    /**
     * The threshold value to compare with the specified statistic.
     */
    inline double GetThreshold() const{ return m_threshold; }

    /**
     * The threshold value to compare with the specified statistic.
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * The threshold value to compare with the specified statistic.
     */
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * The threshold value to compare with the specified statistic.
     */
    inline CloudWatchAlarmTemplateSummary& WithThreshold(double value) { SetThreshold(value); return *this;}


    
    inline const CloudWatchAlarmTemplateTreatMissingData& GetTreatMissingData() const{ return m_treatMissingData; }

    
    inline bool TreatMissingDataHasBeenSet() const { return m_treatMissingDataHasBeenSet; }

    
    inline void SetTreatMissingData(const CloudWatchAlarmTemplateTreatMissingData& value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = value; }

    
    inline void SetTreatMissingData(CloudWatchAlarmTemplateTreatMissingData&& value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = std::move(value); }

    
    inline CloudWatchAlarmTemplateSummary& WithTreatMissingData(const CloudWatchAlarmTemplateTreatMissingData& value) { SetTreatMissingData(value); return *this;}

    
    inline CloudWatchAlarmTemplateSummary& WithTreatMissingData(CloudWatchAlarmTemplateTreatMissingData&& value) { SetTreatMissingData(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    CloudWatchAlarmTemplateComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    int m_datapointsToAlarm;
    bool m_datapointsToAlarmHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_evaluationPeriods;
    bool m_evaluationPeriodsHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    CloudWatchAlarmTemplateStatistic m_statistic;
    bool m_statisticHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    CloudWatchAlarmTemplateTargetResourceType m_targetResourceType;
    bool m_targetResourceTypeHasBeenSet = false;

    double m_threshold;
    bool m_thresholdHasBeenSet = false;

    CloudWatchAlarmTemplateTreatMissingData m_treatMissingData;
    bool m_treatMissingDataHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
