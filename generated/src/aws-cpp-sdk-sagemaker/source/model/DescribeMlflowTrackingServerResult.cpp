/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeMlflowTrackingServerResult.h>
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

DescribeMlflowTrackingServerResult::DescribeMlflowTrackingServerResult() : 
    m_trackingServerSize(TrackingServerSize::NOT_SET),
    m_trackingServerStatus(TrackingServerStatus::NOT_SET),
    m_isActive(IsTrackingServerActive::NOT_SET),
    m_automaticModelRegistration(false)
{
}

DescribeMlflowTrackingServerResult::DescribeMlflowTrackingServerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribeMlflowTrackingServerResult()
{
  *this = result;
}

DescribeMlflowTrackingServerResult& DescribeMlflowTrackingServerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TrackingServerArn"))
  {
    m_trackingServerArn = jsonValue.GetString("TrackingServerArn");

  }

  if(jsonValue.ValueExists("TrackingServerName"))
  {
    m_trackingServerName = jsonValue.GetString("TrackingServerName");

  }

  if(jsonValue.ValueExists("ArtifactStoreUri"))
  {
    m_artifactStoreUri = jsonValue.GetString("ArtifactStoreUri");

  }

  if(jsonValue.ValueExists("TrackingServerSize"))
  {
    m_trackingServerSize = TrackingServerSizeMapper::GetTrackingServerSizeForName(jsonValue.GetString("TrackingServerSize"));

  }

  if(jsonValue.ValueExists("MlflowVersion"))
  {
    m_mlflowVersion = jsonValue.GetString("MlflowVersion");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("TrackingServerStatus"))
  {
    m_trackingServerStatus = TrackingServerStatusMapper::GetTrackingServerStatusForName(jsonValue.GetString("TrackingServerStatus"));

  }

  if(jsonValue.ValueExists("IsActive"))
  {
    m_isActive = IsTrackingServerActiveMapper::GetIsTrackingServerActiveForName(jsonValue.GetString("IsActive"));

  }

  if(jsonValue.ValueExists("TrackingServerUrl"))
  {
    m_trackingServerUrl = jsonValue.GetString("TrackingServerUrl");

  }

  if(jsonValue.ValueExists("WeeklyMaintenanceWindowStart"))
  {
    m_weeklyMaintenanceWindowStart = jsonValue.GetString("WeeklyMaintenanceWindowStart");

  }

  if(jsonValue.ValueExists("AutomaticModelRegistration"))
  {
    m_automaticModelRegistration = jsonValue.GetBool("AutomaticModelRegistration");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
