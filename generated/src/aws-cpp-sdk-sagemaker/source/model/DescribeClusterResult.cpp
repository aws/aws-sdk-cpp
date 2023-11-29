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

DescribeClusterResult::DescribeClusterResult() : 
    m_clusterStatus(ClusterStatus::NOT_SET)
{
}

DescribeClusterResult::DescribeClusterResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_clusterStatus(ClusterStatus::NOT_SET)
{
  *this = result;
}

DescribeClusterResult& DescribeClusterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ClusterArn"))
  {
    m_clusterArn = jsonValue.GetString("ClusterArn");

  }

  if(jsonValue.ValueExists("ClusterName"))
  {
    m_clusterName = jsonValue.GetString("ClusterName");

  }

  if(jsonValue.ValueExists("ClusterStatus"))
  {
    m_clusterStatus = ClusterStatusMapper::GetClusterStatusForName(jsonValue.GetString("ClusterStatus"));

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("FailureMessage"))
  {
    m_failureMessage = jsonValue.GetString("FailureMessage");

  }

  if(jsonValue.ValueExists("InstanceGroups"))
  {
    Aws::Utils::Array<JsonView> instanceGroupsJsonList = jsonValue.GetArray("InstanceGroups");
    for(unsigned instanceGroupsIndex = 0; instanceGroupsIndex < instanceGroupsJsonList.GetLength(); ++instanceGroupsIndex)
    {
      m_instanceGroups.push_back(instanceGroupsJsonList[instanceGroupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
