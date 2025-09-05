/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeClusterResult.h>
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

DescribeClusterResult::DescribeClusterResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeClusterResult& DescribeClusterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ClusterArn"))
  {
    m_clusterArn = jsonValue.GetString("ClusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClusterName"))
  {
    m_clusterName = jsonValue.GetString("ClusterName");
    m_clusterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClusterStatus"))
  {
    m_clusterStatus = ClusterStatusMapper::GetClusterStatusForName(jsonValue.GetString("ClusterStatus"));
    m_clusterStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureMessage"))
  {
    m_failureMessage = jsonValue.GetString("FailureMessage");
    m_failureMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceGroups"))
  {
    Aws::Utils::Array<JsonView> instanceGroupsJsonList = jsonValue.GetArray("InstanceGroups");
    for(unsigned instanceGroupsIndex = 0; instanceGroupsIndex < instanceGroupsJsonList.GetLength(); ++instanceGroupsIndex)
    {
      m_instanceGroups.push_back(instanceGroupsJsonList[instanceGroupsIndex].AsObject());
    }
    m_instanceGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RestrictedInstanceGroups"))
  {
    Aws::Utils::Array<JsonView> restrictedInstanceGroupsJsonList = jsonValue.GetArray("RestrictedInstanceGroups");
    for(unsigned restrictedInstanceGroupsIndex = 0; restrictedInstanceGroupsIndex < restrictedInstanceGroupsJsonList.GetLength(); ++restrictedInstanceGroupsIndex)
    {
      m_restrictedInstanceGroups.push_back(restrictedInstanceGroupsJsonList[restrictedInstanceGroupsIndex].AsObject());
    }
    m_restrictedInstanceGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");
    m_vpcConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Orchestrator"))
  {
    m_orchestrator = jsonValue.GetObject("Orchestrator");
    m_orchestratorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TieredStorageConfig"))
  {
    m_tieredStorageConfig = jsonValue.GetObject("TieredStorageConfig");
    m_tieredStorageConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NodeRecovery"))
  {
    m_nodeRecovery = ClusterNodeRecoveryMapper::GetClusterNodeRecoveryForName(jsonValue.GetString("NodeRecovery"));
    m_nodeRecoveryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NodeProvisioningMode"))
  {
    m_nodeProvisioningMode = ClusterNodeProvisioningModeMapper::GetClusterNodeProvisioningModeForName(jsonValue.GetString("NodeProvisioningMode"));
    m_nodeProvisioningModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClusterRole"))
  {
    m_clusterRole = jsonValue.GetString("ClusterRole");
    m_clusterRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoScaling"))
  {
    m_autoScaling = jsonValue.GetObject("AutoScaling");
    m_autoScalingHasBeenSet = true;
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
