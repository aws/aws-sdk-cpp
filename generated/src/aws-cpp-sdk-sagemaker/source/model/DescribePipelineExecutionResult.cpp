/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribePipelineExecutionResult.h>
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

DescribePipelineExecutionResult::DescribePipelineExecutionResult() : 
    m_pipelineExecutionStatus(PipelineExecutionStatus::NOT_SET)
{
}

DescribePipelineExecutionResult::DescribePipelineExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_pipelineExecutionStatus(PipelineExecutionStatus::NOT_SET)
{
  *this = result;
}

DescribePipelineExecutionResult& DescribePipelineExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PipelineArn"))
  {
    m_pipelineArn = jsonValue.GetString("PipelineArn");

  }

  if(jsonValue.ValueExists("PipelineExecutionArn"))
  {
    m_pipelineExecutionArn = jsonValue.GetString("PipelineExecutionArn");

  }

  if(jsonValue.ValueExists("PipelineExecutionDisplayName"))
  {
    m_pipelineExecutionDisplayName = jsonValue.GetString("PipelineExecutionDisplayName");

  }

  if(jsonValue.ValueExists("PipelineExecutionStatus"))
  {
    m_pipelineExecutionStatus = PipelineExecutionStatusMapper::GetPipelineExecutionStatusForName(jsonValue.GetString("PipelineExecutionStatus"));

  }

  if(jsonValue.ValueExists("PipelineExecutionDescription"))
  {
    m_pipelineExecutionDescription = jsonValue.GetString("PipelineExecutionDescription");

  }

  if(jsonValue.ValueExists("PipelineExperimentConfig"))
  {
    m_pipelineExperimentConfig = jsonValue.GetObject("PipelineExperimentConfig");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");

  }

  if(jsonValue.ValueExists("ParallelismConfiguration"))
  {
    m_parallelismConfiguration = jsonValue.GetObject("ParallelismConfiguration");

  }

  if(jsonValue.ValueExists("SelectiveExecutionConfig"))
  {
    m_selectiveExecutionConfig = jsonValue.GetObject("SelectiveExecutionConfig");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
