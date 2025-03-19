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
    AWS_MEDIALIVE_API UpdateCloudWatchAlarmTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCloudWatchAlarmTemplate"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    
    inline CloudWatchAlarmTemplateComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(CloudWatchAlarmTemplateComparisonOperator value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline UpdateCloudWatchAlarmTemplateRequest& WithComparisonOperator(CloudWatchAlarmTemplateComparisonOperator value) { SetComparisonOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of datapoints within the evaluation period that must be breaching to
     * trigger the alarm.
     */
    inline int GetDatapointsToAlarm() const { return m_datapointsToAlarm; }
    inline bool DatapointsToAlarmHasBeenSet() const { return m_datapointsToAlarmHasBeenSet; }
    inline void SetDatapointsToAlarm(int value) { m_datapointsToAlarmHasBeenSet = true; m_datapointsToAlarm = value; }
    inline UpdateCloudWatchAlarmTemplateRequest& WithDatapointsToAlarm(int value) { SetDatapointsToAlarm(value); return *this;}
    ///@}

    ///@{
    /**
     * A resource's optional description.
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateCloudWatchAlarmTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The number of periods over which data is compared to the specified threshold.
     */
    inline int GetEvaluationPeriods() const { return m_evaluationPeriods; }
    inline bool EvaluationPeriodsHasBeenSet() const { return m_evaluationPeriodsHasBeenSet; }
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }
    inline UpdateCloudWatchAlarmTemplateRequest& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}
    ///@}

    ///@{
    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline const Aws::String& GetGroupIdentifier() const { return m_groupIdentifier; }
    inline bool GroupIdentifierHasBeenSet() const { return m_groupIdentifierHasBeenSet; }
    template<typename GroupIdentifierT = Aws::String>
    void SetGroupIdentifier(GroupIdentifierT&& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = std::forward<GroupIdentifierT>(value); }
    template<typename GroupIdentifierT = Aws::String>
    UpdateCloudWatchAlarmTemplateRequest& WithGroupIdentifier(GroupIdentifierT&& value) { SetGroupIdentifier(std::forward<GroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A cloudwatch alarm template's identifier. Can be either be its id or current
     * name.
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateCloudWatchAlarmTemplateRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    UpdateCloudWatchAlarmTemplateRequest& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateCloudWatchAlarmTemplateRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The period, in seconds, over which the specified statistic is applied.
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline UpdateCloudWatchAlarmTemplateRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    
    inline CloudWatchAlarmTemplateStatistic GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(CloudWatchAlarmTemplateStatistic value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline UpdateCloudWatchAlarmTemplateRequest& WithStatistic(CloudWatchAlarmTemplateStatistic value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    
    inline CloudWatchAlarmTemplateTargetResourceType GetTargetResourceType() const { return m_targetResourceType; }
    inline bool TargetResourceTypeHasBeenSet() const { return m_targetResourceTypeHasBeenSet; }
    inline void SetTargetResourceType(CloudWatchAlarmTemplateTargetResourceType value) { m_targetResourceTypeHasBeenSet = true; m_targetResourceType = value; }
    inline UpdateCloudWatchAlarmTemplateRequest& WithTargetResourceType(CloudWatchAlarmTemplateTargetResourceType value) { SetTargetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * The threshold value to compare with the specified statistic.
     */
    inline double GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline UpdateCloudWatchAlarmTemplateRequest& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}

    ///@{
    
    inline CloudWatchAlarmTemplateTreatMissingData GetTreatMissingData() const { return m_treatMissingData; }
    inline bool TreatMissingDataHasBeenSet() const { return m_treatMissingDataHasBeenSet; }
    inline void SetTreatMissingData(CloudWatchAlarmTemplateTreatMissingData value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = value; }
    inline UpdateCloudWatchAlarmTemplateRequest& WithTreatMissingData(CloudWatchAlarmTemplateTreatMissingData value) { SetTreatMissingData(value); return *this;}
    ///@}
  private:

    CloudWatchAlarmTemplateComparisonOperator m_comparisonOperator{CloudWatchAlarmTemplateComparisonOperator::NOT_SET};
    bool m_comparisonOperatorHasBeenSet = false;

    int m_datapointsToAlarm{0};
    bool m_datapointsToAlarmHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_evaluationPeriods{0};
    bool m_evaluationPeriodsHasBeenSet = false;

    Aws::String m_groupIdentifier;
    bool m_groupIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    CloudWatchAlarmTemplateStatistic m_statistic{CloudWatchAlarmTemplateStatistic::NOT_SET};
    bool m_statisticHasBeenSet = false;

    CloudWatchAlarmTemplateTargetResourceType m_targetResourceType{CloudWatchAlarmTemplateTargetResourceType::NOT_SET};
    bool m_targetResourceTypeHasBeenSet = false;

    double m_threshold{0.0};
    bool m_thresholdHasBeenSet = false;

    CloudWatchAlarmTemplateTreatMissingData m_treatMissingData{CloudWatchAlarmTemplateTreatMissingData::NOT_SET};
    bool m_treatMissingDataHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
