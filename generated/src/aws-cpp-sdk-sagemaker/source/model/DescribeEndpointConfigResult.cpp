/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeEndpointConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEndpointConfigResult::DescribeEndpointConfigResult()
{
}

DescribeEndpointConfigResult::DescribeEndpointConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEndpointConfigResult& DescribeEndpointConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EndpointConfigName"))
  {
    m_endpointConfigName = jsonValue.GetString("EndpointConfigName");

  }

  if(jsonValue.ValueExists("EndpointConfigArn"))
  {
    m_endpointConfigArn = jsonValue.GetString("EndpointConfigArn");

  }

  if(jsonValue.ValueExists("ProductionVariants"))
  {
    Aws::Utils::Array<JsonView> productionVariantsJsonList = jsonValue.GetArray("ProductionVariants");
    for(unsigned productionVariantsIndex = 0; productionVariantsIndex < productionVariantsJsonList.GetLength(); ++productionVariantsIndex)
    {
      m_productionVariants.push_back(productionVariantsJsonList[productionVariantsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DataCaptureConfig"))
  {
    m_dataCaptureConfig = jsonValue.GetObject("DataCaptureConfig");

  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("AsyncInferenceConfig"))
  {
    m_asyncInferenceConfig = jsonValue.GetObject("AsyncInferenceConfig");

  }

  if(jsonValue.ValueExists("ExplainerConfig"))
  {
    m_explainerConfig = jsonValue.GetObject("ExplainerConfig");

  }

  if(jsonValue.ValueExists("ShadowProductionVariants"))
  {
    Aws::Utils::Array<JsonView> shadowProductionVariantsJsonList = jsonValue.GetArray("ShadowProductionVariants");
    for(unsigned shadowProductionVariantsIndex = 0; shadowProductionVariantsIndex < shadowProductionVariantsJsonList.GetLength(); ++shadowProductionVariantsIndex)
    {
      m_shadowProductionVariants.push_back(shadowProductionVariantsJsonList[shadowProductionVariantsIndex].AsObject());
    }
  }



  return *this;
}
