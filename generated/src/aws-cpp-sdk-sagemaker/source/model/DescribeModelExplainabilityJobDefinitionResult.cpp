/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeModelExplainabilityJobDefinitionResult.h>
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

DescribeModelExplainabilityJobDefinitionResult::DescribeModelExplainabilityJobDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeModelExplainabilityJobDefinitionResult& DescribeModelExplainabilityJobDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobDefinitionArn"))
  {
    m_jobDefinitionArn = jsonValue.GetString("JobDefinitionArn");
    m_jobDefinitionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobDefinitionName"))
  {
    m_jobDefinitionName = jsonValue.GetString("JobDefinitionName");
    m_jobDefinitionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelExplainabilityBaselineConfig"))
  {
    m_modelExplainabilityBaselineConfig = jsonValue.GetObject("ModelExplainabilityBaselineConfig");
    m_modelExplainabilityBaselineConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelExplainabilityAppSpecification"))
  {
    m_modelExplainabilityAppSpecification = jsonValue.GetObject("ModelExplainabilityAppSpecification");
    m_modelExplainabilityAppSpecificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelExplainabilityJobInput"))
  {
    m_modelExplainabilityJobInput = jsonValue.GetObject("ModelExplainabilityJobInput");
    m_modelExplainabilityJobInputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelExplainabilityJobOutputConfig"))
  {
    m_modelExplainabilityJobOutputConfig = jsonValue.GetObject("ModelExplainabilityJobOutputConfig");
    m_modelExplainabilityJobOutputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobResources"))
  {
    m_jobResources = jsonValue.GetObject("JobResources");
    m_jobResourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NetworkConfig"))
  {
    m_networkConfig = jsonValue.GetObject("NetworkConfig");
    m_networkConfigHasBeenSet = true;
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
