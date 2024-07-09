/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeOptimizationJobResult.h>
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

DescribeOptimizationJobResult::DescribeOptimizationJobResult() : 
    m_optimizationJobStatus(OptimizationJobStatus::NOT_SET),
    m_deploymentInstanceType(OptimizationJobDeploymentInstanceType::NOT_SET)
{
}

DescribeOptimizationJobResult::DescribeOptimizationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribeOptimizationJobResult()
{
  *this = result;
}

DescribeOptimizationJobResult& DescribeOptimizationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OptimizationJobArn"))
  {
    m_optimizationJobArn = jsonValue.GetString("OptimizationJobArn");

  }

  if(jsonValue.ValueExists("OptimizationJobStatus"))
  {
    m_optimizationJobStatus = OptimizationJobStatusMapper::GetOptimizationJobStatusForName(jsonValue.GetString("OptimizationJobStatus"));

  }

  if(jsonValue.ValueExists("OptimizationStartTime"))
  {
    m_optimizationStartTime = jsonValue.GetDouble("OptimizationStartTime");

  }

  if(jsonValue.ValueExists("OptimizationEndTime"))
  {
    m_optimizationEndTime = jsonValue.GetDouble("OptimizationEndTime");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("OptimizationJobName"))
  {
    m_optimizationJobName = jsonValue.GetString("OptimizationJobName");

  }

  if(jsonValue.ValueExists("ModelSource"))
  {
    m_modelSource = jsonValue.GetObject("ModelSource");

  }

  if(jsonValue.ValueExists("OptimizationEnvironment"))
  {
    Aws::Map<Aws::String, JsonView> optimizationEnvironmentJsonMap = jsonValue.GetObject("OptimizationEnvironment").GetAllObjects();
    for(auto& optimizationEnvironmentItem : optimizationEnvironmentJsonMap)
    {
      m_optimizationEnvironment[optimizationEnvironmentItem.first] = optimizationEnvironmentItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("DeploymentInstanceType"))
  {
    m_deploymentInstanceType = OptimizationJobDeploymentInstanceTypeMapper::GetOptimizationJobDeploymentInstanceTypeForName(jsonValue.GetString("DeploymentInstanceType"));

  }

  if(jsonValue.ValueExists("OptimizationConfigs"))
  {
    Aws::Utils::Array<JsonView> optimizationConfigsJsonList = jsonValue.GetArray("OptimizationConfigs");
    for(unsigned optimizationConfigsIndex = 0; optimizationConfigsIndex < optimizationConfigsJsonList.GetLength(); ++optimizationConfigsIndex)
    {
      m_optimizationConfigs.push_back(optimizationConfigsJsonList[optimizationConfigsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");

  }

  if(jsonValue.ValueExists("OptimizationOutput"))
  {
    m_optimizationOutput = jsonValue.GetObject("OptimizationOutput");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("StoppingCondition"))
  {
    m_stoppingCondition = jsonValue.GetObject("StoppingCondition");

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
