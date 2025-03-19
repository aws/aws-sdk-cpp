/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeFlowDefinitionResult.h>
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

DescribeFlowDefinitionResult::DescribeFlowDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFlowDefinitionResult& DescribeFlowDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FlowDefinitionArn"))
  {
    m_flowDefinitionArn = jsonValue.GetString("FlowDefinitionArn");
    m_flowDefinitionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FlowDefinitionName"))
  {
    m_flowDefinitionName = jsonValue.GetString("FlowDefinitionName");
    m_flowDefinitionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FlowDefinitionStatus"))
  {
    m_flowDefinitionStatus = FlowDefinitionStatusMapper::GetFlowDefinitionStatusForName(jsonValue.GetString("FlowDefinitionStatus"));
    m_flowDefinitionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HumanLoopRequestSource"))
  {
    m_humanLoopRequestSource = jsonValue.GetObject("HumanLoopRequestSource");
    m_humanLoopRequestSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HumanLoopActivationConfig"))
  {
    m_humanLoopActivationConfig = jsonValue.GetObject("HumanLoopActivationConfig");
    m_humanLoopActivationConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HumanLoopConfig"))
  {
    m_humanLoopConfig = jsonValue.GetObject("HumanLoopConfig");
    m_humanLoopConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
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
