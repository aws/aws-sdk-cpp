/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeDomainResult.h>
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

DescribeDomainResult::DescribeDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDomainResult& DescribeDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainArn"))
  {
    m_domainArn = jsonValue.GetString("DomainArn");
    m_domainArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");
    m_domainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HomeEfsFileSystemId"))
  {
    m_homeEfsFileSystemId = jsonValue.GetString("HomeEfsFileSystemId");
    m_homeEfsFileSystemIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SingleSignOnManagedApplicationInstanceId"))
  {
    m_singleSignOnManagedApplicationInstanceId = jsonValue.GetString("SingleSignOnManagedApplicationInstanceId");
    m_singleSignOnManagedApplicationInstanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SingleSignOnApplicationArn"))
  {
    m_singleSignOnApplicationArn = jsonValue.GetString("SingleSignOnApplicationArn");
    m_singleSignOnApplicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = DomainStatusMapper::GetDomainStatusForName(jsonValue.GetString("Status"));
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
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityGroupIdForDomainBoundary"))
  {
    m_securityGroupIdForDomainBoundary = jsonValue.GetString("SecurityGroupIdForDomainBoundary");
    m_securityGroupIdForDomainBoundaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthMode"))
  {
    m_authMode = AuthModeMapper::GetAuthModeForName(jsonValue.GetString("AuthMode"));
    m_authModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultUserSettings"))
  {
    m_defaultUserSettings = jsonValue.GetObject("DefaultUserSettings");
    m_defaultUserSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainSettings"))
  {
    m_domainSettings = jsonValue.GetObject("DomainSettings");
    m_domainSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppNetworkAccessType"))
  {
    m_appNetworkAccessType = AppNetworkAccessTypeMapper::GetAppNetworkAccessTypeForName(jsonValue.GetString("AppNetworkAccessType"));
    m_appNetworkAccessTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");
    m_urlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");
    m_vpcIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppSecurityGroupManagement"))
  {
    m_appSecurityGroupManagement = AppSecurityGroupManagementMapper::GetAppSecurityGroupManagementForName(jsonValue.GetString("AppSecurityGroupManagement"));
    m_appSecurityGroupManagementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TagPropagation"))
  {
    m_tagPropagation = TagPropagationMapper::GetTagPropagationForName(jsonValue.GetString("TagPropagation"));
    m_tagPropagationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultSpaceSettings"))
  {
    m_defaultSpaceSettings = jsonValue.GetObject("DefaultSpaceSettings");
    m_defaultSpaceSettingsHasBeenSet = true;
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
