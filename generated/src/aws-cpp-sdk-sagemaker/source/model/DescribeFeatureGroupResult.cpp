/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeFeatureGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFeatureGroupResult::DescribeFeatureGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFeatureGroupResult& DescribeFeatureGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FeatureGroupArn"))
  {
    m_featureGroupArn = jsonValue.GetString("FeatureGroupArn");
    m_featureGroupArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FeatureGroupName"))
  {
    m_featureGroupName = jsonValue.GetString("FeatureGroupName");
    m_featureGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecordIdentifierFeatureName"))
  {
    m_recordIdentifierFeatureName = jsonValue.GetString("RecordIdentifierFeatureName");
    m_recordIdentifierFeatureNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventTimeFeatureName"))
  {
    m_eventTimeFeatureName = jsonValue.GetString("EventTimeFeatureName");
    m_eventTimeFeatureNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FeatureDefinitions"))
  {
    Aws::Utils::Array<JsonView> featureDefinitionsJsonList = jsonValue.GetArray("FeatureDefinitions");
    for(unsigned featureDefinitionsIndex = 0; featureDefinitionsIndex < featureDefinitionsJsonList.GetLength(); ++featureDefinitionsIndex)
    {
      m_featureDefinitions.push_back(featureDefinitionsJsonList[featureDefinitionsIndex].AsObject());
    }
    m_featureDefinitionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OnlineStoreConfig"))
  {
    m_onlineStoreConfig = jsonValue.GetObject("OnlineStoreConfig");
    m_onlineStoreConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OfflineStoreConfig"))
  {
    m_offlineStoreConfig = jsonValue.GetObject("OfflineStoreConfig");
    m_offlineStoreConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ThroughputConfig"))
  {
    m_throughputConfig = jsonValue.GetObject("ThroughputConfig");
    m_throughputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FeatureGroupStatus"))
  {
    m_featureGroupStatus = FeatureGroupStatusMapper::GetFeatureGroupStatusForName(jsonValue.GetString("FeatureGroupStatus"));
    m_featureGroupStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OfflineStoreStatus"))
  {
    m_offlineStoreStatus = jsonValue.GetObject("OfflineStoreStatus");
    m_offlineStoreStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdateStatus"))
  {
    m_lastUpdateStatus = jsonValue.GetObject("LastUpdateStatus");
    m_lastUpdateStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OnlineStoreTotalSizeBytes"))
  {
    m_onlineStoreTotalSizeBytes = jsonValue.GetInt64("OnlineStoreTotalSizeBytes");
    m_onlineStoreTotalSizeBytesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
