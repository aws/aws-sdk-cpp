/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/medialive/model/CloudWatchAlarmTemplateComparisonOperator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/CloudWatchAlarmTemplateStatistic.h>
#include <aws/medialive/model/CloudWatchAlarmTemplateTargetResourceType.h>
#include <aws/medialive/model/CloudWatchAlarmTemplateTreatMissingData.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for UpdateCloudWatchAlarmTemplateRequest<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateCloudWatchAlarmTemplateRequest">AWS
   * API Reference</a></p>
   */
  class UpdateCloudWatchAlarmTemplateRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateCloudWatchAlarmTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCloudWatchAlarmTemplate"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    
    inline const CloudWatchAlarmTemplateComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

    
    inline void SetComparisonOperator(const CloudWatchAlarmTemplateComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    
    inline void SetComparisonOperator(CloudWatchAlarmTemplateComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    
    inline UpdateCloudWatchAlarmTemplateRequest& WithComparisonOperator(const CloudWatchAlarmTemplateComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    
    inline UpdateCloudWatchAlarmTemplateRequest& WithComparisonOperator(CloudWatchAlarmTemplateComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}


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
    inline UpdateCloudWatchAlarmTemplateRequest& WithDatapointsToAlarm(int value) { SetDatapointsToAlarm(value); return *this;}


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
    inline UpdateCloudWatchAlarmTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A resource's optional description.
     */
    inline UpdateCloudWatchAlarmTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A resource's optional description.
     */
    inline UpdateCloudWatchAlarmTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline UpdateCloudWatchAlarmTemplateRequest& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}


    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline const Aws::String& GetGroupIdentifier() const{ return m_groupIdentifier; }

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline bool GroupIdentifierHasBeenSet() const { return m_groupIdentifierHasBeenSet; }

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetGroupIdentifier(const Aws::String& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = value; }

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetGroupIdentifier(Aws::String&& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = std::move(value); }

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetGroupIdentifier(const char* value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier.assign(value); }

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline UpdateCloudWatchAlarmTemplateRequest& WithGroupIdentifier(const Aws::String& value) { SetGroupIdentifier(value); return *this;}

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline UpdateCloudWatchAlarmTemplateRequest& WithGroupIdentifier(Aws::String&& value) { SetGroupIdentifier(std::move(value)); return *this;}

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline UpdateCloudWatchAlarmTemplateRequest& WithGroupIdentifier(const char* value) { SetGroupIdentifier(value); return *this;}


    /**
     * A cloudwatch alarm template's identifier. Can be either be its id or current
     * name.
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * A cloudwatch alarm template's identifier. Can be either be its id or current
     * name.
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * A cloudwatch alarm template's identifier. Can be either be its id or current
     * name.
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * A cloudwatch alarm template's identifier. Can be either be its id or current
     * name.
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * A cloudwatch alarm template's identifier. Can be either be its id or current
     * name.
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * A cloudwatch alarm template's identifier. Can be either be its id or current
     * name.
     */
    inline UpdateCloudWatchAlarmTemplateRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * A cloudwatch alarm template's identifier. Can be either be its id or current
     * name.
     */
    inline UpdateCloudWatchAlarmTemplateRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * A cloudwatch alarm template's identifier. Can be either be its id or current
     * name.
     */
    inline UpdateCloudWatchAlarmTemplateRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


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
    inline UpdateCloudWatchAlarmTemplateRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline UpdateCloudWatchAlarmTemplateRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline UpdateCloudWatchAlarmTemplateRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}


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
    inline UpdateCloudWatchAlarmTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline UpdateCloudWatchAlarmTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline UpdateCloudWatchAlarmTemplateRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline UpdateCloudWatchAlarmTemplateRequest& WithPeriod(int value) { SetPeriod(value); return *this;}


    
    inline const CloudWatchAlarmTemplateStatistic& GetStatistic() const{ return m_statistic; }

    
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    
    inline void SetStatistic(const CloudWatchAlarmTemplateStatistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    
    inline void SetStatistic(CloudWatchAlarmTemplateStatistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    
    inline UpdateCloudWatchAlarmTemplateRequest& WithStatistic(const CloudWatchAlarmTemplateStatistic& value) { SetStatistic(value); return *this;}

    
    inline UpdateCloudWatchAlarmTemplateRequest& WithStatistic(CloudWatchAlarmTemplateStatistic&& value) { SetStatistic(std::move(value)); return *this;}


    
    inline const CloudWatchAlarmTemplateTargetResourceType& GetTargetResourceType() const{ return m_targetResourceType; }

    
    inline bool TargetResourceTypeHasBeenSet() const { return m_targetResourceTypeHasBeenSet; }

    
    inline void SetTargetResourceType(const CloudWatchAlarmTemplateTargetResourceType& value) { m_targetResourceTypeHasBeenSet = true; m_targetResourceType = value; }

    
    inline void SetTargetResourceType(CloudWatchAlarmTemplateTargetResourceType&& value) { m_targetResourceTypeHasBeenSet = true; m_targetResourceType = std::move(value); }

    
    inline UpdateCloudWatchAlarmTemplateRequest& WithTargetResourceType(const CloudWatchAlarmTemplateTargetResourceType& value) { SetTargetResourceType(value); return *this;}

    
    inline UpdateCloudWatchAlarmTemplateRequest& WithTargetResourceType(CloudWatchAlarmTemplateTargetResourceType&& value) { SetTargetResourceType(std::move(value)); return *this;}


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
    inline UpdateCloudWatchAlarmTemplateRequest& WithThreshold(double value) { SetThreshold(value); return *this;}


    
    inline const CloudWatchAlarmTemplateTreatMissingData& GetTreatMissingData() const{ return m_treatMissingData; }

    
    inline bool TreatMissingDataHasBeenSet() const { return m_treatMissingDataHasBeenSet; }

    
    inline void SetTreatMissingData(const CloudWatchAlarmTemplateTreatMissingData& value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = value; }

    
    inline void SetTreatMissingData(CloudWatchAlarmTemplateTreatMissingData&& value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = std::move(value); }

    
    inline UpdateCloudWatchAlarmTemplateRequest& WithTreatMissingData(const CloudWatchAlarmTemplateTreatMissingData& value) { SetTreatMissingData(value); return *this;}

    
    inline UpdateCloudWatchAlarmTemplateRequest& WithTreatMissingData(CloudWatchAlarmTemplateTreatMissingData&& value) { SetTreatMissingData(std::move(value)); return *this;}

  private:

    CloudWatchAlarmTemplateComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;

    int m_datapointsToAlarm;
    bool m_datapointsToAlarmHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_evaluationPeriods;
    bool m_evaluationPeriodsHasBeenSet = false;

    Aws::String m_groupIdentifier;
    bool m_groupIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    CloudWatchAlarmTemplateStatistic m_statistic;
    bool m_statisticHasBeenSet = false;

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
