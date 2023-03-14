/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeEdgePackagingJobResult.h>
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

DescribeEdgePackagingJobResult::DescribeEdgePackagingJobResult() : 
    m_edgePackagingJobStatus(EdgePackagingJobStatus::NOT_SET)
{
}

DescribeEdgePackagingJobResult::DescribeEdgePackagingJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_edgePackagingJobStatus(EdgePackagingJobStatus::NOT_SET)
{
  *this = result;
}

DescribeEdgePackagingJobResult& DescribeEdgePackagingJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EdgePackagingJobArn"))
  {
    m_edgePackagingJobArn = jsonValue.GetString("EdgePackagingJobArn");

  }

  if(jsonValue.ValueExists("EdgePackagingJobName"))
  {
    m_edgePackagingJobName = jsonValue.GetString("EdgePackagingJobName");

  }

  if(jsonValue.ValueExists("CompilationJobName"))
  {
    m_compilationJobName = jsonValue.GetString("CompilationJobName");

  }

  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

  }

  if(jsonValue.ValueExists("ModelVersion"))
  {
    m_modelVersion = jsonValue.GetString("ModelVersion");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");

  }

  if(jsonValue.ValueExists("ResourceKey"))
  {
    m_resourceKey = jsonValue.GetString("ResourceKey");

  }

  if(jsonValue.ValueExists("EdgePackagingJobStatus"))
  {
    m_edgePackagingJobStatus = EdgePackagingJobStatusMapper::GetEdgePackagingJobStatusForName(jsonValue.GetString("EdgePackagingJobStatus"));

  }

  if(jsonValue.ValueExists("EdgePackagingJobStatusMessage"))
  {
    m_edgePackagingJobStatusMessage = jsonValue.GetString("EdgePackagingJobStatusMessage");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("ModelArtifact"))
  {
    m_modelArtifact = jsonValue.GetString("ModelArtifact");

  }

  if(jsonValue.ValueExists("ModelSignature"))
  {
    m_modelSignature = jsonValue.GetString("ModelSignature");

  }

  if(jsonValue.ValueExists("PresetDeploymentOutput"))
  {
    m_presetDeploymentOutput = jsonValue.GetObject("PresetDeploymentOutput");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
