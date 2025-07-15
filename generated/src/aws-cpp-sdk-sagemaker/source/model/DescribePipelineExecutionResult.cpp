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

DescribePipelineExecutionResult::DescribePipelineExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePipelineExecutionResult& DescribePipelineExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PipelineArn"))
  {
    m_pipelineArn = jsonValue.GetString("PipelineArn");
    m_pipelineArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineExecutionArn"))
  {
    m_pipelineExecutionArn = jsonValue.GetString("PipelineExecutionArn");
    m_pipelineExecutionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineExecutionDisplayName"))
  {
    m_pipelineExecutionDisplayName = jsonValue.GetString("PipelineExecutionDisplayName");
    m_pipelineExecutionDisplayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineExecutionStatus"))
  {
    m_pipelineExecutionStatus = PipelineExecutionStatusMapper::GetPipelineExecutionStatusForName(jsonValue.GetString("PipelineExecutionStatus"));
    m_pipelineExecutionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineExecutionDescription"))
  {
    m_pipelineExecutionDescription = jsonValue.GetString("PipelineExecutionDescription");
    m_pipelineExecutionDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineExperimentConfig"))
  {
    m_pipelineExperimentConfig = jsonValue.GetObject("PipelineExperimentConfig");
    m_pipelineExperimentConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
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
  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");
    m_lastModifiedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParallelismConfiguration"))
  {
    m_parallelismConfiguration = jsonValue.GetObject("ParallelismConfiguration");
    m_parallelismConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SelectiveExecutionConfig"))
  {
    m_selectiveExecutionConfig = jsonValue.GetObject("SelectiveExecutionConfig");
    m_selectiveExecutionConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineVersionId"))
  {
    m_pipelineVersionId = jsonValue.GetInt64("PipelineVersionId");
    m_pipelineVersionIdHasBeenSet = true;
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
