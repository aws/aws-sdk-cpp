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
   * Placeholder documentation for GetCloudWatchAlarmTemplateResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/GetCloudWatchAlarmTemplateResponse">AWS
   * API Reference</a></p>
   */
  class GetCloudWatchAlarmTemplateResult
  {
  public:
    AWS_MEDIALIVE_API GetCloudWatchAlarmTemplateResult();
    AWS_MEDIALIVE_API GetCloudWatchAlarmTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API GetCloudWatchAlarmTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A cloudwatch alarm template's ARN (Amazon Resource Name)
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * A cloudwatch alarm template's ARN (Amazon Resource Name)
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * A cloudwatch alarm template's ARN (Amazon Resource Name)
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * A cloudwatch alarm template's ARN (Amazon Resource Name)
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * A cloudwatch alarm template's ARN (Amazon Resource Name)
     */
    inline GetCloudWatchAlarmTemplateResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * A cloudwatch alarm template's ARN (Amazon Resource Name)
     */
    inline GetCloudWatchAlarmTemplateResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * A cloudwatch alarm template's ARN (Amazon Resource Name)
     */
    inline GetCloudWatchAlarmTemplateResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const CloudWatchAlarmTemplateComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    
    inline void SetComparisonOperator(const CloudWatchAlarmTemplateComparisonOperator& value) { m_comparisonOperator = value; }

    
    inline void SetComparisonOperator(CloudWatchAlarmTemplateComparisonOperator&& value) { m_comparisonOperator = std::move(value); }

    
    inline GetCloudWatchAlarmTemplateResult& WithComparisonOperator(const CloudWatchAlarmTemplateComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    
    inline GetCloudWatchAlarmTemplateResult& WithComparisonOperator(CloudWatchAlarmTemplateComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    
    inline GetCloudWatchAlarmTemplateResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    
    inline GetCloudWatchAlarmTemplateResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * The number of datapoints within the evaluation period that must be breaching to
     * trigger the alarm.
     */
    inline int GetDatapointsToAlarm() const{ return m_datapointsToAlarm; }

    /**
     * The number of datapoints within the evaluation period that must be breaching to
     * trigger the alarm.
     */
    inline void SetDatapointsToAlarm(int value) { m_datapointsToAlarm = value; }

    /**
     * The number of datapoints within the evaluation period that must be breaching to
     * trigger the alarm.
     */
    inline GetCloudWatchAlarmTemplateResult& WithDatapointsToAlarm(int value) { SetDatapointsToAlarm(value); return *this;}


    /**
     * A resource's optional description.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * A resource's optional description.
     */
    inline GetCloudWatchAlarmTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A resource's optional description.
     */
    inline GetCloudWatchAlarmTemplateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A resource's optional description.
     */
    inline GetCloudWatchAlarmTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The number of periods over which data is compared to the specified threshold.
     */
    inline int GetEvaluationPeriods() const{ return m_evaluationPeriods; }

    /**
     * The number of periods over which data is compared to the specified threshold.
     */
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriods = value; }

    /**
     * The number of periods over which data is compared to the specified threshold.
     */
    inline GetCloudWatchAlarmTemplateResult& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}


    /**
     * A cloudwatch alarm template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * A cloudwatch alarm template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline void SetGroupId(const Aws::String& value) { m_groupId = value; }

    /**
     * A cloudwatch alarm template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline void SetGroupId(Aws::String&& value) { m_groupId = std::move(value); }

    /**
     * A cloudwatch alarm template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline void SetGroupId(const char* value) { m_groupId.assign(value); }

    /**
     * A cloudwatch alarm template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline GetCloudWatchAlarmTemplateResult& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * A cloudwatch alarm template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline GetCloudWatchAlarmTemplateResult& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * A cloudwatch alarm template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline GetCloudWatchAlarmTemplateResult& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * A cloudwatch alarm template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * A cloudwatch alarm template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * A cloudwatch alarm template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * A cloudwatch alarm template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * A cloudwatch alarm template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline GetCloudWatchAlarmTemplateResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * A cloudwatch alarm template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline GetCloudWatchAlarmTemplateResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * A cloudwatch alarm template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline GetCloudWatchAlarmTemplateResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline void SetMetricName(const Aws::String& value) { m_metricName = value; }

    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline void SetMetricName(Aws::String&& value) { m_metricName = std::move(value); }

    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline void SetMetricName(const char* value) { m_metricName.assign(value); }

    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline GetCloudWatchAlarmTemplateResult& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline GetCloudWatchAlarmTemplateResult& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline GetCloudWatchAlarmTemplateResult& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }

    
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }

    
    inline GetCloudWatchAlarmTemplateResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    
    inline GetCloudWatchAlarmTemplateResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline GetCloudWatchAlarmTemplateResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline GetCloudWatchAlarmTemplateResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline GetCloudWatchAlarmTemplateResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The period, in seconds, over which the specified statistic is applied.
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * The period, in seconds, over which the specified statistic is applied.
     */
    inline void SetPeriod(int value) { m_period = value; }

    /**
     * The period, in seconds, over which the specified statistic is applied.
     */
    inline GetCloudWatchAlarmTemplateResult& WithPeriod(int value) { SetPeriod(value); return *this;}


    
    inline const CloudWatchAlarmTemplateStatistic& GetStatistic() const{ return m_statistic; }

    
    inline void SetStatistic(const CloudWatchAlarmTemplateStatistic& value) { m_statistic = value; }

    
    inline void SetStatistic(CloudWatchAlarmTemplateStatistic&& value) { m_statistic = std::move(value); }

    
    inline GetCloudWatchAlarmTemplateResult& WithStatistic(const CloudWatchAlarmTemplateStatistic& value) { SetStatistic(value); return *this;}

    
    inline GetCloudWatchAlarmTemplateResult& WithStatistic(CloudWatchAlarmTemplateStatistic&& value) { SetStatistic(std::move(value)); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    
    inline GetCloudWatchAlarmTemplateResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline GetCloudWatchAlarmTemplateResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline GetCloudWatchAlarmTemplateResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    
    inline GetCloudWatchAlarmTemplateResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline GetCloudWatchAlarmTemplateResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline GetCloudWatchAlarmTemplateResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline GetCloudWatchAlarmTemplateResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline GetCloudWatchAlarmTemplateResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline GetCloudWatchAlarmTemplateResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const CloudWatchAlarmTemplateTargetResourceType& GetTargetResourceType() const{ return m_targetResourceType; }

    
    inline void SetTargetResourceType(const CloudWatchAlarmTemplateTargetResourceType& value) { m_targetResourceType = value; }

    
    inline void SetTargetResourceType(CloudWatchAlarmTemplateTargetResourceType&& value) { m_targetResourceType = std::move(value); }

    
    inline GetCloudWatchAlarmTemplateResult& WithTargetResourceType(const CloudWatchAlarmTemplateTargetResourceType& value) { SetTargetResourceType(value); return *this;}

    
    inline GetCloudWatchAlarmTemplateResult& WithTargetResourceType(CloudWatchAlarmTemplateTargetResourceType&& value) { SetTargetResourceType(std::move(value)); return *this;}


    /**
     * The threshold value to compare with the specified statistic.
     */
    inline double GetThreshold() const{ return m_threshold; }

    /**
     * The threshold value to compare with the specified statistic.
     */
    inline void SetThreshold(double value) { m_threshold = value; }

    /**
     * The threshold value to compare with the specified statistic.
     */
    inline GetCloudWatchAlarmTemplateResult& WithThreshold(double value) { SetThreshold(value); return *this;}


    
    inline const CloudWatchAlarmTemplateTreatMissingData& GetTreatMissingData() const{ return m_treatMissingData; }

    
    inline void SetTreatMissingData(const CloudWatchAlarmTemplateTreatMissingData& value) { m_treatMissingData = value; }

    
    inline void SetTreatMissingData(CloudWatchAlarmTemplateTreatMissingData&& value) { m_treatMissingData = std::move(value); }

    
    inline GetCloudWatchAlarmTemplateResult& WithTreatMissingData(const CloudWatchAlarmTemplateTreatMissingData& value) { SetTreatMissingData(value); return *this;}

    
    inline GetCloudWatchAlarmTemplateResult& WithTreatMissingData(CloudWatchAlarmTemplateTreatMissingData&& value) { SetTreatMissingData(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCloudWatchAlarmTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCloudWatchAlarmTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCloudWatchAlarmTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    CloudWatchAlarmTemplateComparisonOperator m_comparisonOperator;

    Aws::Utils::DateTime m_createdAt;

    int m_datapointsToAlarm;

    Aws::String m_description;

    int m_evaluationPeriods;

    Aws::String m_groupId;

    Aws::String m_id;

    Aws::String m_metricName;

    Aws::Utils::DateTime m_modifiedAt;

    Aws::String m_name;

    int m_period;

    CloudWatchAlarmTemplateStatistic m_statistic;

    Aws::Map<Aws::String, Aws::String> m_tags;

    CloudWatchAlarmTemplateTargetResourceType m_targetResourceType;

    double m_threshold;

    CloudWatchAlarmTemplateTreatMissingData m_treatMissingData;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
