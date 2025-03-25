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

DescribePartnerAppResult::DescribePartnerAppResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePartnerAppResult& DescribePartnerAppResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = PartnerAppTypeMapper::GetPartnerAppTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = PartnerAppStatusMapper::GetPartnerAppStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
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
  if(jsonValue.ValueExists("ExecutionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BaseUrl"))
  {
    m_baseUrl = jsonValue.GetString("BaseUrl");
    m_baseUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaintenanceConfig"))
  {
    m_maintenanceConfig = jsonValue.GetObject("MaintenanceConfig");
    m_maintenanceConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tier"))
  {
    m_tier = jsonValue.GetString("Tier");
    m_tierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationConfig"))
  {
    m_applicationConfig = jsonValue.GetObject("ApplicationConfig");
    m_applicationConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthType"))
  {
    m_authType = PartnerAppAuthTypeMapper::GetPartnerAppAuthTypeForName(jsonValue.GetString("AuthType"));
    m_authTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnableIamSessionBasedIdentity"))
  {
    m_enableIamSessionBasedIdentity = jsonValue.GetBool("EnableIamSessionBasedIdentity");
    m_enableIamSessionBasedIdentityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");
    m_errorHasBeenSet = true;
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
