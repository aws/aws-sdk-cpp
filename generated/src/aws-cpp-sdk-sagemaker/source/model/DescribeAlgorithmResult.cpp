/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeAlgorithmResult.h>
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

DescribeAlgorithmResult::DescribeAlgorithmResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAlgorithmResult& DescribeAlgorithmResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AlgorithmName"))
  {
    m_algorithmName = jsonValue.GetString("AlgorithmName");
    m_algorithmNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AlgorithmArn"))
  {
    m_algorithmArn = jsonValue.GetString("AlgorithmArn");
    m_algorithmArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AlgorithmDescription"))
  {
    m_algorithmDescription = jsonValue.GetString("AlgorithmDescription");
    m_algorithmDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingSpecification"))
  {
    m_trainingSpecification = jsonValue.GetObject("TrainingSpecification");
    m_trainingSpecificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InferenceSpecification"))
  {
    m_inferenceSpecification = jsonValue.GetObject("InferenceSpecification");
    m_inferenceSpecificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValidationSpecification"))
  {
    m_validationSpecification = jsonValue.GetObject("ValidationSpecification");
    m_validationSpecificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AlgorithmStatus"))
  {
    m_algorithmStatus = AlgorithmStatusMapper::GetAlgorithmStatusForName(jsonValue.GetString("AlgorithmStatus"));
    m_algorithmStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AlgorithmStatusDetails"))
  {
    m_algorithmStatusDetails = jsonValue.GetObject("AlgorithmStatusDetails");
    m_algorithmStatusDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProductId"))
  {
    m_productId = jsonValue.GetString("ProductId");
    m_productIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CertifyForMarketplace"))
  {
    m_certifyForMarketplace = jsonValue.GetBool("CertifyForMarketplace");
    m_certifyForMarketplaceHasBeenSet = true;
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
