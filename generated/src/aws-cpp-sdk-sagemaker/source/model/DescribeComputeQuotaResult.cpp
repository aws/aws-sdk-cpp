/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeComputeQuotaResult.h>
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

DescribeComputeQuotaResult::DescribeComputeQuotaResult() : 
    m_computeQuotaVersion(0),
    m_status(SchedulerResourceStatus::NOT_SET),
    m_activationState(ActivationState::NOT_SET)
{
}

DescribeComputeQuotaResult::DescribeComputeQuotaResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribeComputeQuotaResult()
{
  *this = result;
}

DescribeComputeQuotaResult& DescribeComputeQuotaResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ComputeQuotaArn"))
  {
    m_computeQuotaArn = jsonValue.GetString("ComputeQuotaArn");

  }

  if(jsonValue.ValueExists("ComputeQuotaId"))
  {
    m_computeQuotaId = jsonValue.GetString("ComputeQuotaId");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("ComputeQuotaVersion"))
  {
    m_computeQuotaVersion = jsonValue.GetInteger("ComputeQuotaVersion");

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

  if(jsonValue.ValueExists("ComputeQuotaConfig"))
  {
    m_computeQuotaConfig = jsonValue.GetObject("ComputeQuotaConfig");

  }

  if(jsonValue.ValueExists("ComputeQuotaTarget"))
  {
    m_computeQuotaTarget = jsonValue.GetObject("ComputeQuotaTarget");

  }

  if(jsonValue.ValueExists("ActivationState"))
  {
    m_activationState = ActivationStateMapper::GetActivationStateForName(jsonValue.GetString("ActivationState"));

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
