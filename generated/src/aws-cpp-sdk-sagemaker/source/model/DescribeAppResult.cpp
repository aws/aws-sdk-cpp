/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeAppResult.h>
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

DescribeAppResult::DescribeAppResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAppResult& DescribeAppResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AppArn"))
  {
    m_appArn = jsonValue.GetString("AppArn");
    m_appArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppType"))
  {
    m_appType = AppTypeMapper::GetAppTypeForName(jsonValue.GetString("AppType"));
    m_appTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppName"))
  {
    m_appName = jsonValue.GetString("AppName");
    m_appNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");
    m_domainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserProfileName"))
  {
    m_userProfileName = jsonValue.GetString("UserProfileName");
    m_userProfileNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpaceName"))
  {
    m_spaceName = jsonValue.GetString("SpaceName");
    m_spaceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = AppStatusMapper::GetAppStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EffectiveTrustedIdentityPropagationStatus"))
  {
    m_effectiveTrustedIdentityPropagationStatus = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("EffectiveTrustedIdentityPropagationStatus"));
    m_effectiveTrustedIdentityPropagationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecoveryMode"))
  {
    m_recoveryMode = jsonValue.GetBool("RecoveryMode");
    m_recoveryModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastHealthCheckTimestamp"))
  {
    m_lastHealthCheckTimestamp = jsonValue.GetDouble("LastHealthCheckTimestamp");
    m_lastHealthCheckTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUserActivityTimestamp"))
  {
    m_lastUserActivityTimestamp = jsonValue.GetDouble("LastUserActivityTimestamp");
    m_lastUserActivityTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceSpec"))
  {
    m_resourceSpec = jsonValue.GetObject("ResourceSpec");
    m_resourceSpecHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BuiltInLifecycleConfigArn"))
  {
    m_builtInLifecycleConfigArn = jsonValue.GetString("BuiltInLifecycleConfigArn");
    m_builtInLifecycleConfigArnHasBeenSet = true;
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
