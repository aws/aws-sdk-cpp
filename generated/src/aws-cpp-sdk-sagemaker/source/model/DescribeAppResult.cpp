/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeAppResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAppResult::DescribeAppResult() : 
    m_appType(AppType::NOT_SET),
    m_status(AppStatus::NOT_SET)
{
}

DescribeAppResult::DescribeAppResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_appType(AppType::NOT_SET),
    m_status(AppStatus::NOT_SET)
{
  *this = result;
}

DescribeAppResult& DescribeAppResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AppArn"))
  {
    m_appArn = jsonValue.GetString("AppArn");

  }

  if(jsonValue.ValueExists("AppType"))
  {
    m_appType = AppTypeMapper::GetAppTypeForName(jsonValue.GetString("AppType"));

  }

  if(jsonValue.ValueExists("AppName"))
  {
    m_appName = jsonValue.GetString("AppName");

  }

  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");

  }

  if(jsonValue.ValueExists("UserProfileName"))
  {
    m_userProfileName = jsonValue.GetString("UserProfileName");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = AppStatusMapper::GetAppStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("LastHealthCheckTimestamp"))
  {
    m_lastHealthCheckTimestamp = jsonValue.GetDouble("LastHealthCheckTimestamp");

  }

  if(jsonValue.ValueExists("LastUserActivityTimestamp"))
  {
    m_lastUserActivityTimestamp = jsonValue.GetDouble("LastUserActivityTimestamp");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("ResourceSpec"))
  {
    m_resourceSpec = jsonValue.GetObject("ResourceSpec");

  }

  if(jsonValue.ValueExists("SpaceName"))
  {
    m_spaceName = jsonValue.GetString("SpaceName");

  }



  return *this;
}
