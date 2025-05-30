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

DescribeMlflowTrackingServerResult::DescribeMlflowTrackingServerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeMlflowTrackingServerResult& DescribeMlflowTrackingServerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TrackingServerArn"))
  {
    m_trackingServerArn = jsonValue.GetString("TrackingServerArn");
    m_trackingServerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrackingServerName"))
  {
    m_trackingServerName = jsonValue.GetString("TrackingServerName");
    m_trackingServerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ArtifactStoreUri"))
  {
    m_artifactStoreUri = jsonValue.GetString("ArtifactStoreUri");
    m_artifactStoreUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrackingServerSize"))
  {
    m_trackingServerSize = TrackingServerSizeMapper::GetTrackingServerSizeForName(jsonValue.GetString("TrackingServerSize"));
    m_trackingServerSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MlflowVersion"))
  {
    m_mlflowVersion = jsonValue.GetString("MlflowVersion");
    m_mlflowVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrackingServerStatus"))
  {
    m_trackingServerStatus = TrackingServerStatusMapper::GetTrackingServerStatusForName(jsonValue.GetString("TrackingServerStatus"));
    m_trackingServerStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrackingServerMaintenanceStatus"))
  {
    m_trackingServerMaintenanceStatus = TrackingServerMaintenanceStatusMapper::GetTrackingServerMaintenanceStatusForName(jsonValue.GetString("TrackingServerMaintenanceStatus"));
    m_trackingServerMaintenanceStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsActive"))
  {
    m_isActive = IsTrackingServerActiveMapper::GetIsTrackingServerActiveForName(jsonValue.GetString("IsActive"));
    m_isActiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrackingServerUrl"))
  {
    m_trackingServerUrl = jsonValue.GetString("TrackingServerUrl");
    m_trackingServerUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WeeklyMaintenanceWindowStart"))
  {
    m_weeklyMaintenanceWindowStart = jsonValue.GetString("WeeklyMaintenanceWindowStart");
    m_weeklyMaintenanceWindowStartHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutomaticModelRegistration"))
  {
    m_automaticModelRegistration = jsonValue.GetBool("AutomaticModelRegistration");
    m_automaticModelRegistrationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");
    m_lastModifiedByHasBeenSet = true;
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
