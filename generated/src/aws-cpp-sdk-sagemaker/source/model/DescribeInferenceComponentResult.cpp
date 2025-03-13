/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeInferenceComponentResult.h>
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

DescribeInferenceComponentResult::DescribeInferenceComponentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeInferenceComponentResult& DescribeInferenceComponentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InferenceComponentName"))
  {
    m_inferenceComponentName = jsonValue.GetString("InferenceComponentName");
    m_inferenceComponentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InferenceComponentArn"))
  {
    m_inferenceComponentArn = jsonValue.GetString("InferenceComponentArn");
    m_inferenceComponentArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");
    m_endpointNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointArn"))
  {
    m_endpointArn = jsonValue.GetString("EndpointArn");
    m_endpointArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VariantName"))
  {
    m_variantName = jsonValue.GetString("VariantName");
    m_variantNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Specification"))
  {
    m_specification = jsonValue.GetObject("Specification");
    m_specificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuntimeConfig"))
  {
    m_runtimeConfig = jsonValue.GetObject("RuntimeConfig");
    m_runtimeConfigHasBeenSet = true;
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
  if(jsonValue.ValueExists("InferenceComponentStatus"))
  {
    m_inferenceComponentStatus = InferenceComponentStatusMapper::GetInferenceComponentStatusForName(jsonValue.GetString("InferenceComponentStatus"));
    m_inferenceComponentStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastDeploymentConfig"))
  {
    m_lastDeploymentConfig = jsonValue.GetObject("LastDeploymentConfig");
    m_lastDeploymentConfigHasBeenSet = true;
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
