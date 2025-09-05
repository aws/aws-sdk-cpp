/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeNotebookInstanceResult.h>
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

DescribeNotebookInstanceResult::DescribeNotebookInstanceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeNotebookInstanceResult& DescribeNotebookInstanceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NotebookInstanceArn"))
  {
    m_notebookInstanceArn = jsonValue.GetString("NotebookInstanceArn");
    m_notebookInstanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NotebookInstanceName"))
  {
    m_notebookInstanceName = jsonValue.GetString("NotebookInstanceName");
    m_notebookInstanceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NotebookInstanceStatus"))
  {
    m_notebookInstanceStatus = NotebookInstanceStatusMapper::GetNotebookInstanceStatusForName(jsonValue.GetString("NotebookInstanceStatus"));
    m_notebookInstanceStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");
    m_urlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IpAddressType"))
  {
    m_ipAddressType = IPAddressTypeMapper::GetIPAddressTypeForName(jsonValue.GetString("IpAddressType"));
    m_ipAddressTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");
    m_subnetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("SecurityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NetworkInterfaceId"))
  {
    m_networkInterfaceId = jsonValue.GetString("NetworkInterfaceId");
    m_networkInterfaceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NotebookInstanceLifecycleConfigName"))
  {
    m_notebookInstanceLifecycleConfigName = jsonValue.GetString("NotebookInstanceLifecycleConfigName");
    m_notebookInstanceLifecycleConfigNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DirectInternetAccess"))
  {
    m_directInternetAccess = DirectInternetAccessMapper::GetDirectInternetAccessForName(jsonValue.GetString("DirectInternetAccess"));
    m_directInternetAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VolumeSizeInGB"))
  {
    m_volumeSizeInGB = jsonValue.GetInteger("VolumeSizeInGB");
    m_volumeSizeInGBHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AcceleratorTypes"))
  {
    Aws::Utils::Array<JsonView> acceleratorTypesJsonList = jsonValue.GetArray("AcceleratorTypes");
    for(unsigned acceleratorTypesIndex = 0; acceleratorTypesIndex < acceleratorTypesJsonList.GetLength(); ++acceleratorTypesIndex)
    {
      m_acceleratorTypes.push_back(NotebookInstanceAcceleratorTypeMapper::GetNotebookInstanceAcceleratorTypeForName(acceleratorTypesJsonList[acceleratorTypesIndex].AsString()));
    }
    m_acceleratorTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultCodeRepository"))
  {
    m_defaultCodeRepository = jsonValue.GetString("DefaultCodeRepository");
    m_defaultCodeRepositoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdditionalCodeRepositories"))
  {
    Aws::Utils::Array<JsonView> additionalCodeRepositoriesJsonList = jsonValue.GetArray("AdditionalCodeRepositories");
    for(unsigned additionalCodeRepositoriesIndex = 0; additionalCodeRepositoriesIndex < additionalCodeRepositoriesJsonList.GetLength(); ++additionalCodeRepositoriesIndex)
    {
      m_additionalCodeRepositories.push_back(additionalCodeRepositoriesJsonList[additionalCodeRepositoriesIndex].AsString());
    }
    m_additionalCodeRepositoriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RootAccess"))
  {
    m_rootAccess = RootAccessMapper::GetRootAccessForName(jsonValue.GetString("RootAccess"));
    m_rootAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PlatformIdentifier"))
  {
    m_platformIdentifier = jsonValue.GetString("PlatformIdentifier");
    m_platformIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceMetadataServiceConfiguration"))
  {
    m_instanceMetadataServiceConfiguration = jsonValue.GetObject("InstanceMetadataServiceConfiguration");
    m_instanceMetadataServiceConfigurationHasBeenSet = true;
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
