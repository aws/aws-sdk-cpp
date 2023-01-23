/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeFeatureGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFeatureGroupResult::DescribeFeatureGroupResult() : 
    m_featureGroupStatus(FeatureGroupStatus::NOT_SET),
    m_onlineStoreTotalSizeBytes(0)
{
}

DescribeFeatureGroupResult::DescribeFeatureGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_featureGroupStatus(FeatureGroupStatus::NOT_SET),
    m_onlineStoreTotalSizeBytes(0)
{
  *this = result;
}

DescribeFeatureGroupResult& DescribeFeatureGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FeatureGroupArn"))
  {
    m_featureGroupArn = jsonValue.GetString("FeatureGroupArn");

  }

  if(jsonValue.ValueExists("FeatureGroupName"))
  {
    m_featureGroupName = jsonValue.GetString("FeatureGroupName");

  }

  if(jsonValue.ValueExists("RecordIdentifierFeatureName"))
  {
    m_recordIdentifierFeatureName = jsonValue.GetString("RecordIdentifierFeatureName");

  }

  if(jsonValue.ValueExists("EventTimeFeatureName"))
  {
    m_eventTimeFeatureName = jsonValue.GetString("EventTimeFeatureName");

  }

  if(jsonValue.ValueExists("FeatureDefinitions"))
  {
    Aws::Utils::Array<JsonView> featureDefinitionsJsonList = jsonValue.GetArray("FeatureDefinitions");
    for(unsigned featureDefinitionsIndex = 0; featureDefinitionsIndex < featureDefinitionsJsonList.GetLength(); ++featureDefinitionsIndex)
    {
      m_featureDefinitions.push_back(featureDefinitionsJsonList[featureDefinitionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("OnlineStoreConfig"))
  {
    m_onlineStoreConfig = jsonValue.GetObject("OnlineStoreConfig");

  }

  if(jsonValue.ValueExists("OfflineStoreConfig"))
  {
    m_offlineStoreConfig = jsonValue.GetObject("OfflineStoreConfig");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("FeatureGroupStatus"))
  {
    m_featureGroupStatus = FeatureGroupStatusMapper::GetFeatureGroupStatusForName(jsonValue.GetString("FeatureGroupStatus"));

  }

  if(jsonValue.ValueExists("OfflineStoreStatus"))
  {
    m_offlineStoreStatus = jsonValue.GetObject("OfflineStoreStatus");

  }

  if(jsonValue.ValueExists("LastUpdateStatus"))
  {
    m_lastUpdateStatus = jsonValue.GetObject("LastUpdateStatus");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("OnlineStoreTotalSizeBytes"))
  {
    m_onlineStoreTotalSizeBytes = jsonValue.GetInt64("OnlineStoreTotalSizeBytes");

  }



  return *this;
}
