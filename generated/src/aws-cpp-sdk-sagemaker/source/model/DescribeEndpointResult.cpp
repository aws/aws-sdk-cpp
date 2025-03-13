/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeEndpointResult.h>
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

DescribeEndpointResult::DescribeEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEndpointResult& DescribeEndpointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
  if(jsonValue.ValueExists("EndpointConfigName"))
  {
    m_endpointConfigName = jsonValue.GetString("EndpointConfigName");
    m_endpointConfigNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProductionVariants"))
  {
    Aws::Utils::Array<JsonView> productionVariantsJsonList = jsonValue.GetArray("ProductionVariants");
    for(unsigned productionVariantsIndex = 0; productionVariantsIndex < productionVariantsJsonList.GetLength(); ++productionVariantsIndex)
    {
      m_productionVariants.push_back(productionVariantsJsonList[productionVariantsIndex].AsObject());
    }
    m_productionVariantsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataCaptureConfig"))
  {
    m_dataCaptureConfig = jsonValue.GetObject("DataCaptureConfig");
    m_dataCaptureConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointStatus"))
  {
    m_endpointStatus = EndpointStatusMapper::GetEndpointStatusForName(jsonValue.GetString("EndpointStatus"));
    m_endpointStatusHasBeenSet = true;
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
  if(jsonValue.ValueExists("LastDeploymentConfig"))
  {
    m_lastDeploymentConfig = jsonValue.GetObject("LastDeploymentConfig");
    m_lastDeploymentConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AsyncInferenceConfig"))
  {
    m_asyncInferenceConfig = jsonValue.GetObject("AsyncInferenceConfig");
    m_asyncInferenceConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PendingDeploymentSummary"))
  {
    m_pendingDeploymentSummary = jsonValue.GetObject("PendingDeploymentSummary");
    m_pendingDeploymentSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExplainerConfig"))
  {
    m_explainerConfig = jsonValue.GetObject("ExplainerConfig");
    m_explainerConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ShadowProductionVariants"))
  {
    Aws::Utils::Array<JsonView> shadowProductionVariantsJsonList = jsonValue.GetArray("ShadowProductionVariants");
    for(unsigned shadowProductionVariantsIndex = 0; shadowProductionVariantsIndex < shadowProductionVariantsJsonList.GetLength(); ++shadowProductionVariantsIndex)
    {
      m_shadowProductionVariants.push_back(shadowProductionVariantsJsonList[shadowProductionVariantsIndex].AsObject());
    }
    m_shadowProductionVariantsHasBeenSet = true;
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
