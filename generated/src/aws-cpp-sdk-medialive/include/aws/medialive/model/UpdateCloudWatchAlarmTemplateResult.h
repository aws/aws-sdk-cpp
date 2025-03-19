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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for UpdateCloudWatchAlarmTemplateResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateCloudWatchAlarmTemplateResponse">AWS
   * API Reference</a></p>
   */
  class UpdateCloudWatchAlarmTemplateResult
  {
  public:
    AWS_MEDIALIVE_API UpdateCloudWatchAlarmTemplateResult() = default;
    AWS_MEDIALIVE_API UpdateCloudWatchAlarmTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API UpdateCloudWatchAlarmTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A cloudwatch alarm template's ARN (Amazon Resource Name)
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateCloudWatchAlarmTemplateResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline CloudWatchAlarmTemplateComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
    inline void SetComparisonOperator(CloudWatchAlarmTemplateComparisonOperator value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline UpdateCloudWatchAlarmTemplateResult& WithComparisonOperator(CloudWatchAlarmTemplateComparisonOperator value) { SetComparisonOperator(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    UpdateCloudWatchAlarmTemplateResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The number of datapoints within the evaluation period that must be breaching to
     * trigger the alarm.
     */
    inline int GetDatapointsToAlarm() const { return m_datapointsToAlarm; }
    inline void SetDatapointsToAlarm(int value) { m_datapointsToAlarmHasBeenSet = true; m_datapointsToAlarm = value; }
    inline UpdateCloudWatchAlarmTemplateResult& WithDatapointsToAlarm(int value) { SetDatapointsToAlarm(value); return *this;}
    ///@}

    ///@{
    /**
     * A resource's optional description.
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateCloudWatchAlarmTemplateResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The number of periods over which data is compared to the specified threshold.
     */
    inline int GetEvaluationPeriods() const { return m_evaluationPeriods; }
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }
    inline UpdateCloudWatchAlarmTemplateResult& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}
    ///@}

    ///@{
    /**
     * A cloudwatch alarm template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    UpdateCloudWatchAlarmTemplateResult& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A cloudwatch alarm template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateCloudWatchAlarmTemplateResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    UpdateCloudWatchAlarmTemplateResult& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    UpdateCloudWatchAlarmTemplateResult& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateCloudWatchAlarmTemplateResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The period, in seconds, over which the specified statistic is applied.
     */
    inline int GetPeriod() const { return m_period; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline UpdateCloudWatchAlarmTemplateResult& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    
    inline CloudWatchAlarmTemplateStatistic GetStatistic() const { return m_statistic; }
    inline void SetStatistic(CloudWatchAlarmTemplateStatistic value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline UpdateCloudWatchAlarmTemplateResult& WithStatistic(CloudWatchAlarmTemplateStatistic value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    UpdateCloudWatchAlarmTemplateResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    UpdateCloudWatchAlarmTemplateResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline CloudWatchAlarmTemplateTargetResourceType GetTargetResourceType() const { return m_targetResourceType; }
    inline void SetTargetResourceType(CloudWatchAlarmTemplateTargetResourceType value) { m_targetResourceTypeHasBeenSet = true; m_targetResourceType = value; }
    inline UpdateCloudWatchAlarmTemplateResult& WithTargetResourceType(CloudWatchAlarmTemplateTargetResourceType value) { SetTargetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * The threshold value to compare with the specified statistic.
     */
    inline double GetThreshold() const { return m_threshold; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline UpdateCloudWatchAlarmTemplateResult& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}

    ///@{
    
    inline CloudWatchAlarmTemplateTreatMissingData GetTreatMissingData() const { return m_treatMissingData; }
    inline void SetTreatMissingData(CloudWatchAlarmTemplateTreatMissingData value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = value; }
    inline UpdateCloudWatchAlarmTemplateResult& WithTreatMissingData(CloudWatchAlarmTemplateTreatMissingData value) { SetTreatMissingData(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateCloudWatchAlarmTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    CloudWatchAlarmTemplateComparisonOperator m_comparisonOperator{CloudWatchAlarmTemplateComparisonOperator::NOT_SET};
    bool m_comparisonOperatorHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    int m_datapointsToAlarm{0};
    bool m_datapointsToAlarmHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_evaluationPeriods{0};
    bool m_evaluationPeriodsHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    CloudWatchAlarmTemplateStatistic m_statistic{CloudWatchAlarmTemplateStatistic::NOT_SET};
    bool m_statisticHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    CloudWatchAlarmTemplateTargetResourceType m_targetResourceType{CloudWatchAlarmTemplateTargetResourceType::NOT_SET};
    bool m_targetResourceTypeHasBeenSet = false;

    double m_threshold{0.0};
    bool m_thresholdHasBeenSet = false;

    CloudWatchAlarmTemplateTreatMissingData m_treatMissingData{CloudWatchAlarmTemplateTreatMissingData::NOT_SET};
    bool m_treatMissingDataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
