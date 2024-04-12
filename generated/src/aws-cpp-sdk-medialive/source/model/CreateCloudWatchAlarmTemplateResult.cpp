/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CreateCloudWatchAlarmTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateCloudWatchAlarmTemplateResult::CreateCloudWatchAlarmTemplateResult() : 
    m_comparisonOperator(CloudWatchAlarmTemplateComparisonOperator::NOT_SET),
    m_datapointsToAlarm(0),
    m_evaluationPeriods(0),
    m_period(0),
    m_statistic(CloudWatchAlarmTemplateStatistic::NOT_SET),
    m_targetResourceType(CloudWatchAlarmTemplateTargetResourceType::NOT_SET),
    m_threshold(0.0),
    m_treatMissingData(CloudWatchAlarmTemplateTreatMissingData::NOT_SET)
{
}

CreateCloudWatchAlarmTemplateResult::CreateCloudWatchAlarmTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_comparisonOperator(CloudWatchAlarmTemplateComparisonOperator::NOT_SET),
    m_datapointsToAlarm(0),
    m_evaluationPeriods(0),
    m_period(0),
    m_statistic(CloudWatchAlarmTemplateStatistic::NOT_SET),
    m_targetResourceType(CloudWatchAlarmTemplateTargetResourceType::NOT_SET),
    m_threshold(0.0),
    m_treatMissingData(CloudWatchAlarmTemplateTreatMissingData::NOT_SET)
{
  *this = result;
}

CreateCloudWatchAlarmTemplateResult& CreateCloudWatchAlarmTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("comparisonOperator"))
  {
    m_comparisonOperator = CloudWatchAlarmTemplateComparisonOperatorMapper::GetCloudWatchAlarmTemplateComparisonOperatorForName(jsonValue.GetString("comparisonOperator"));

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("datapointsToAlarm"))
  {
    m_datapointsToAlarm = jsonValue.GetInteger("datapointsToAlarm");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("evaluationPeriods"))
  {
    m_evaluationPeriods = jsonValue.GetInteger("evaluationPeriods");

  }

  if(jsonValue.ValueExists("groupId"))
  {
    m_groupId = jsonValue.GetString("groupId");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = jsonValue.GetString("metricName");

  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("period"))
  {
    m_period = jsonValue.GetInteger("period");

  }

  if(jsonValue.ValueExists("statistic"))
  {
    m_statistic = CloudWatchAlarmTemplateStatisticMapper::GetCloudWatchAlarmTemplateStatisticForName(jsonValue.GetString("statistic"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("targetResourceType"))
  {
    m_targetResourceType = CloudWatchAlarmTemplateTargetResourceTypeMapper::GetCloudWatchAlarmTemplateTargetResourceTypeForName(jsonValue.GetString("targetResourceType"));

  }

  if(jsonValue.ValueExists("threshold"))
  {
    m_threshold = jsonValue.GetDouble("threshold");

  }

  if(jsonValue.ValueExists("treatMissingData"))
  {
    m_treatMissingData = CloudWatchAlarmTemplateTreatMissingDataMapper::GetCloudWatchAlarmTemplateTreatMissingDataForName(jsonValue.GetString("treatMissingData"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
