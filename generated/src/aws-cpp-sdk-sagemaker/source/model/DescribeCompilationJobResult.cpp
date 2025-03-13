/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeCompilationJobResult.h>
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

DescribeCompilationJobResult::DescribeCompilationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeCompilationJobResult& DescribeCompilationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CompilationJobName"))
  {
    m_compilationJobName = jsonValue.GetString("CompilationJobName");
    m_compilationJobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompilationJobArn"))
  {
    m_compilationJobArn = jsonValue.GetString("CompilationJobArn");
    m_compilationJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompilationJobStatus"))
  {
    m_compilationJobStatus = CompilationJobStatusMapper::GetCompilationJobStatusForName(jsonValue.GetString("CompilationJobStatus"));
    m_compilationJobStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompilationStartTime"))
  {
    m_compilationStartTime = jsonValue.GetDouble("CompilationStartTime");
    m_compilationStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompilationEndTime"))
  {
    m_compilationEndTime = jsonValue.GetDouble("CompilationEndTime");
    m_compilationEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StoppingCondition"))
  {
    m_stoppingCondition = jsonValue.GetObject("StoppingCondition");
    m_stoppingConditionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InferenceImage"))
  {
    m_inferenceImage = jsonValue.GetString("InferenceImage");
    m_inferenceImageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelPackageVersionArn"))
  {
    m_modelPackageVersionArn = jsonValue.GetString("ModelPackageVersionArn");
    m_modelPackageVersionArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("ModelArtifacts"))
  {
    m_modelArtifacts = jsonValue.GetObject("ModelArtifacts");
    m_modelArtifactsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelDigests"))
  {
    m_modelDigests = jsonValue.GetObject("ModelDigests");
    m_modelDigestsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InputConfig"))
  {
    m_inputConfig = jsonValue.GetObject("InputConfig");
    m_inputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");
    m_vpcConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DerivedInformation"))
  {
    m_derivedInformation = jsonValue.GetObject("DerivedInformation");
    m_derivedInformationHasBeenSet = true;
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
