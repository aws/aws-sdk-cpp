/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribePipelineResult.h>
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

DescribePipelineResult::DescribePipelineResult() : 
    m_pipelineStatus(PipelineStatus::NOT_SET)
{
}

DescribePipelineResult::DescribePipelineResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_pipelineStatus(PipelineStatus::NOT_SET)
{
  *this = result;
}

DescribePipelineResult& DescribePipelineResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PipelineArn"))
  {
    m_pipelineArn = jsonValue.GetString("PipelineArn");

  }

  if(jsonValue.ValueExists("PipelineName"))
  {
    m_pipelineName = jsonValue.GetString("PipelineName");

  }

  if(jsonValue.ValueExists("PipelineDisplayName"))
  {
    m_pipelineDisplayName = jsonValue.GetString("PipelineDisplayName");

  }

  if(jsonValue.ValueExists("PipelineDefinition"))
  {
    m_pipelineDefinition = jsonValue.GetString("PipelineDefinition");

  }

  if(jsonValue.ValueExists("PipelineDescription"))
  {
    m_pipelineDescription = jsonValue.GetString("PipelineDescription");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("PipelineStatus"))
  {
    m_pipelineStatus = PipelineStatusMapper::GetPipelineStatusForName(jsonValue.GetString("PipelineStatus"));

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("LastRunTime"))
  {
    m_lastRunTime = jsonValue.GetDouble("LastRunTime");

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


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
