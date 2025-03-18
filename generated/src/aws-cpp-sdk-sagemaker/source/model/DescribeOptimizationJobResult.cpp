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

DescribeOptimizationJobResult::DescribeOptimizationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeOptimizationJobResult& DescribeOptimizationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OptimizationJobArn"))
  {
    m_optimizationJobArn = jsonValue.GetString("OptimizationJobArn");
    m_optimizationJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptimizationJobStatus"))
  {
    m_optimizationJobStatus = OptimizationJobStatusMapper::GetOptimizationJobStatusForName(jsonValue.GetString("OptimizationJobStatus"));
    m_optimizationJobStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptimizationStartTime"))
  {
    m_optimizationStartTime = jsonValue.GetDouble("OptimizationStartTime");
    m_optimizationStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptimizationEndTime"))
  {
    m_optimizationEndTime = jsonValue.GetDouble("OptimizationEndTime");
    m_optimizationEndTimeHasBeenSet = true;
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
  if(jsonValue.ValueExists("OptimizationJobName"))
  {
    m_optimizationJobName = jsonValue.GetString("OptimizationJobName");
    m_optimizationJobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelSource"))
  {
    m_modelSource = jsonValue.GetObject("ModelSource");
    m_modelSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptimizationEnvironment"))
  {
    Aws::Map<Aws::String, JsonView> optimizationEnvironmentJsonMap = jsonValue.GetObject("OptimizationEnvironment").GetAllObjects();
    for(auto& optimizationEnvironmentItem : optimizationEnvironmentJsonMap)
    {
      m_optimizationEnvironment[optimizationEnvironmentItem.first] = optimizationEnvironmentItem.second.AsString();
    }
    m_optimizationEnvironmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeploymentInstanceType"))
  {
    m_deploymentInstanceType = OptimizationJobDeploymentInstanceTypeMapper::GetOptimizationJobDeploymentInstanceTypeForName(jsonValue.GetString("DeploymentInstanceType"));
    m_deploymentInstanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptimizationConfigs"))
  {
    Aws::Utils::Array<JsonView> optimizationConfigsJsonList = jsonValue.GetArray("OptimizationConfigs");
    for(unsigned optimizationConfigsIndex = 0; optimizationConfigsIndex < optimizationConfigsJsonList.GetLength(); ++optimizationConfigsIndex)
    {
      m_optimizationConfigs.push_back(optimizationConfigsJsonList[optimizationConfigsIndex].AsObject());
    }
    m_optimizationConfigsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptimizationOutput"))
  {
    m_optimizationOutput = jsonValue.GetObject("OptimizationOutput");
    m_optimizationOutputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StoppingCondition"))
  {
    m_stoppingCondition = jsonValue.GetObject("StoppingCondition");
    m_stoppingConditionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");
    m_vpcConfigHasBeenSet = true;
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
