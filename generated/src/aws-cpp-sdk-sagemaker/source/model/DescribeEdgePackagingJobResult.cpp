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

DescribeEdgePackagingJobResult::DescribeEdgePackagingJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEdgePackagingJobResult& DescribeEdgePackagingJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EdgePackagingJobArn"))
  {
    m_edgePackagingJobArn = jsonValue.GetString("EdgePackagingJobArn");
    m_edgePackagingJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EdgePackagingJobName"))
  {
    m_edgePackagingJobName = jsonValue.GetString("EdgePackagingJobName");
    m_edgePackagingJobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompilationJobName"))
  {
    m_compilationJobName = jsonValue.GetString("CompilationJobName");
    m_compilationJobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");
    m_modelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelVersion"))
  {
    m_modelVersion = jsonValue.GetString("ModelVersion");
    m_modelVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceKey"))
  {
    m_resourceKey = jsonValue.GetString("ResourceKey");
    m_resourceKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EdgePackagingJobStatus"))
  {
    m_edgePackagingJobStatus = EdgePackagingJobStatusMapper::GetEdgePackagingJobStatusForName(jsonValue.GetString("EdgePackagingJobStatus"));
    m_edgePackagingJobStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EdgePackagingJobStatusMessage"))
  {
    m_edgePackagingJobStatusMessage = jsonValue.GetString("EdgePackagingJobStatusMessage");
    m_edgePackagingJobStatusMessageHasBeenSet = true;
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
  if(jsonValue.ValueExists("ModelArtifact"))
  {
    m_modelArtifact = jsonValue.GetString("ModelArtifact");
    m_modelArtifactHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelSignature"))
  {
    m_modelSignature = jsonValue.GetString("ModelSignature");
    m_modelSignatureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PresetDeploymentOutput"))
  {
    m_presetDeploymentOutput = jsonValue.GetObject("PresetDeploymentOutput");
    m_presetDeploymentOutputHasBeenSet = true;
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
