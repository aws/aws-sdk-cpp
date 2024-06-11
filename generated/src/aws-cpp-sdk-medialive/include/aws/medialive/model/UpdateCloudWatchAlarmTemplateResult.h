﻿/**
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
    AWS_MEDIALIVE_API UpdateCloudWatchAlarmTemplateResult();
    AWS_MEDIALIVE_API UpdateCloudWatchAlarmTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API UpdateCloudWatchAlarmTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A cloudwatch alarm template's ARN (Amazon Resource Name)
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateCloudWatchAlarmTemplateResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchAlarmTemplateComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }
    inline void SetComparisonOperator(const CloudWatchAlarmTemplateComparisonOperator& value) { m_comparisonOperator = value; }
    inline void SetComparisonOperator(CloudWatchAlarmTemplateComparisonOperator&& value) { m_comparisonOperator = std::move(value); }
    inline UpdateCloudWatchAlarmTemplateResult& WithComparisonOperator(const CloudWatchAlarmTemplateComparisonOperator& value) { SetComparisonOperator(value); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithComparisonOperator(CloudWatchAlarmTemplateComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline UpdateCloudWatchAlarmTemplateResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The number of datapoints within the evaluation period that must be breaching to
     * trigger the alarm.
     */
    inline int GetDatapointsToAlarm() const{ return m_datapointsToAlarm; }
    inline void SetDatapointsToAlarm(int value) { m_datapointsToAlarm = value; }
    inline UpdateCloudWatchAlarmTemplateResult& WithDatapointsToAlarm(int value) { SetDatapointsToAlarm(value); return *this;}
    ///@}

    ///@{
    /**
     * A resource's optional description.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateCloudWatchAlarmTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of periods over which data is compared to the specified threshold.
     */
    inline int GetEvaluationPeriods() const{ return m_evaluationPeriods; }
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriods = value; }
    inline UpdateCloudWatchAlarmTemplateResult& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}
    ///@}

    ///@{
    /**
     * A cloudwatch alarm template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline void SetGroupId(const Aws::String& value) { m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupId.assign(value); }
    inline UpdateCloudWatchAlarmTemplateResult& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * A cloudwatch alarm template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateCloudWatchAlarmTemplateResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the metric associated with the alarm. Must be compatible with
     * targetResourceType.
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline void SetMetricName(const Aws::String& value) { m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricName.assign(value); }
    inline UpdateCloudWatchAlarmTemplateResult& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }
    inline UpdateCloudWatchAlarmTemplateResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateCloudWatchAlarmTemplateResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The period, in seconds, over which the specified statistic is applied.
     */
    inline int GetPeriod() const{ return m_period; }
    inline void SetPeriod(int value) { m_period = value; }
    inline UpdateCloudWatchAlarmTemplateResult& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchAlarmTemplateStatistic& GetStatistic() const{ return m_statistic; }
    inline void SetStatistic(const CloudWatchAlarmTemplateStatistic& value) { m_statistic = value; }
    inline void SetStatistic(CloudWatchAlarmTemplateStatistic&& value) { m_statistic = std::move(value); }
    inline UpdateCloudWatchAlarmTemplateResult& WithStatistic(const CloudWatchAlarmTemplateStatistic& value) { SetStatistic(value); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithStatistic(CloudWatchAlarmTemplateStatistic&& value) { SetStatistic(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline UpdateCloudWatchAlarmTemplateResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline UpdateCloudWatchAlarmTemplateResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateCloudWatchAlarmTemplateResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateCloudWatchAlarmTemplateResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateCloudWatchAlarmTemplateResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateCloudWatchAlarmTemplateResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateCloudWatchAlarmTemplateResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const CloudWatchAlarmTemplateTargetResourceType& GetTargetResourceType() const{ return m_targetResourceType; }
    inline void SetTargetResourceType(const CloudWatchAlarmTemplateTargetResourceType& value) { m_targetResourceType = value; }
    inline void SetTargetResourceType(CloudWatchAlarmTemplateTargetResourceType&& value) { m_targetResourceType = std::move(value); }
    inline UpdateCloudWatchAlarmTemplateResult& WithTargetResourceType(const CloudWatchAlarmTemplateTargetResourceType& value) { SetTargetResourceType(value); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithTargetResourceType(CloudWatchAlarmTemplateTargetResourceType&& value) { SetTargetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The threshold value to compare with the specified statistic.
     */
    inline double GetThreshold() const{ return m_threshold; }
    inline void SetThreshold(double value) { m_threshold = value; }
    inline UpdateCloudWatchAlarmTemplateResult& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchAlarmTemplateTreatMissingData& GetTreatMissingData() const{ return m_treatMissingData; }
    inline void SetTreatMissingData(const CloudWatchAlarmTemplateTreatMissingData& value) { m_treatMissingData = value; }
    inline void SetTreatMissingData(CloudWatchAlarmTemplateTreatMissingData&& value) { m_treatMissingData = std::move(value); }
    inline UpdateCloudWatchAlarmTemplateResult& WithTreatMissingData(const CloudWatchAlarmTemplateTreatMissingData& value) { SetTreatMissingData(value); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithTreatMissingData(CloudWatchAlarmTemplateTreatMissingData&& value) { SetTreatMissingData(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateCloudWatchAlarmTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateCloudWatchAlarmTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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
