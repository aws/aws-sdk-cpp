/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribePartnerAppResult.h>
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

DescribePartnerAppResult::DescribePartnerAppResult() : 
    m_type(PartnerAppType::NOT_SET),
    m_status(PartnerAppStatus::NOT_SET),
    m_authType(PartnerAppAuthType::NOT_SET),
    m_enableIamSessionBasedIdentity(false)
{
}

DescribePartnerAppResult::DescribePartnerAppResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribePartnerAppResult()
{
  *this = result;
}

DescribePartnerAppResult& DescribePartnerAppResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = PartnerAppTypeMapper::GetPartnerAppTypeForName(jsonValue.GetString("Type"));

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = PartnerAppStatusMapper::GetPartnerAppStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("ExecutionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");

  }

  if(jsonValue.ValueExists("BaseUrl"))
  {
    m_baseUrl = jsonValue.GetString("BaseUrl");

  }

  if(jsonValue.ValueExists("MaintenanceConfig"))
  {
    m_maintenanceConfig = jsonValue.GetObject("MaintenanceConfig");

  }

  if(jsonValue.ValueExists("Tier"))
  {
    m_tier = jsonValue.GetString("Tier");

  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

  }

  if(jsonValue.ValueExists("ApplicationConfig"))
  {
    m_applicationConfig = jsonValue.GetObject("ApplicationConfig");

  }

  if(jsonValue.ValueExists("AuthType"))
  {
    m_authType = PartnerAppAuthTypeMapper::GetPartnerAppAuthTypeForName(jsonValue.GetString("AuthType"));

  }

  if(jsonValue.ValueExists("EnableIamSessionBasedIdentity"))
  {
    m_enableIamSessionBasedIdentity = jsonValue.GetBool("EnableIamSessionBasedIdentity");

  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
