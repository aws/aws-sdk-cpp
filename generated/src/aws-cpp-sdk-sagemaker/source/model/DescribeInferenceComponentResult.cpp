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

DescribeInferenceComponentResult::DescribeInferenceComponentResult() : 
    m_inferenceComponentStatus(InferenceComponentStatus::NOT_SET)
{
}

DescribeInferenceComponentResult::DescribeInferenceComponentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_inferenceComponentStatus(InferenceComponentStatus::NOT_SET)
{
  *this = result;
}

DescribeInferenceComponentResult& DescribeInferenceComponentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InferenceComponentName"))
  {
    m_inferenceComponentName = jsonValue.GetString("InferenceComponentName");

  }

  if(jsonValue.ValueExists("InferenceComponentArn"))
  {
    m_inferenceComponentArn = jsonValue.GetString("InferenceComponentArn");

  }

  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");

  }

  if(jsonValue.ValueExists("EndpointArn"))
  {
    m_endpointArn = jsonValue.GetString("EndpointArn");

  }

  if(jsonValue.ValueExists("VariantName"))
  {
    m_variantName = jsonValue.GetString("VariantName");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("Specification"))
  {
    m_specification = jsonValue.GetObject("Specification");

  }

  if(jsonValue.ValueExists("RuntimeConfig"))
  {
    m_runtimeConfig = jsonValue.GetObject("RuntimeConfig");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("InferenceComponentStatus"))
  {
    m_inferenceComponentStatus = InferenceComponentStatusMapper::GetInferenceComponentStatusForName(jsonValue.GetString("InferenceComponentStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
