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

DescribePipelineResult::DescribePipelineResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePipelineResult& DescribePipelineResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PipelineArn"))
  {
    m_pipelineArn = jsonValue.GetString("PipelineArn");
    m_pipelineArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineName"))
  {
    m_pipelineName = jsonValue.GetString("PipelineName");
    m_pipelineNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineDisplayName"))
  {
    m_pipelineDisplayName = jsonValue.GetString("PipelineDisplayName");
    m_pipelineDisplayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineDefinition"))
  {
    m_pipelineDefinition = jsonValue.GetString("PipelineDefinition");
    m_pipelineDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineDescription"))
  {
    m_pipelineDescription = jsonValue.GetString("PipelineDescription");
    m_pipelineDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineStatus"))
  {
    m_pipelineStatus = PipelineStatusMapper::GetPipelineStatusForName(jsonValue.GetString("PipelineStatus"));
    m_pipelineStatusHasBeenSet = true;
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
  if(jsonValue.ValueExists("LastRunTime"))
  {
    m_lastRunTime = jsonValue.GetDouble("LastRunTime");
    m_lastRunTimeHasBeenSet = true;
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
  if(jsonValue.ValueExists("PipelineVersionDisplayName"))
  {
    m_pipelineVersionDisplayName = jsonValue.GetString("PipelineVersionDisplayName");
    m_pipelineVersionDisplayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineVersionDescription"))
  {
    m_pipelineVersionDescription = jsonValue.GetString("PipelineVersionDescription");
    m_pipelineVersionDescriptionHasBeenSet = true;
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
