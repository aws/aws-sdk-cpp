/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeClusterSchedulerConfigResult.h>
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

DescribeClusterSchedulerConfigResult::DescribeClusterSchedulerConfigResult() : 
    m_clusterSchedulerConfigVersion(0),
    m_status(SchedulerResourceStatus::NOT_SET)
{
}

DescribeClusterSchedulerConfigResult::DescribeClusterSchedulerConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribeClusterSchedulerConfigResult()
{
  *this = result;
}

DescribeClusterSchedulerConfigResult& DescribeClusterSchedulerConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ClusterSchedulerConfigArn"))
  {
    m_clusterSchedulerConfigArn = jsonValue.GetString("ClusterSchedulerConfigArn");

  }

  if(jsonValue.ValueExists("ClusterSchedulerConfigId"))
  {
    m_clusterSchedulerConfigId = jsonValue.GetString("ClusterSchedulerConfigId");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("ClusterSchedulerConfigVersion"))
  {
    m_clusterSchedulerConfigVersion = jsonValue.GetInteger("ClusterSchedulerConfigVersion");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = SchedulerResourceStatusMapper::GetSchedulerResourceStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("ClusterArn"))
  {
    m_clusterArn = jsonValue.GetString("ClusterArn");

  }

  if(jsonValue.ValueExists("SchedulerConfig"))
  {
    m_schedulerConfig = jsonValue.GetObject("SchedulerConfig");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

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
