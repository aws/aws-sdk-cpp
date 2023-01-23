/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeModelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeModelResult::DescribeModelResult() : 
    m_enableNetworkIsolation(false)
{
}

DescribeModelResult::DescribeModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_enableNetworkIsolation(false)
{
  *this = result;
}

DescribeModelResult& DescribeModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

  }

  if(jsonValue.ValueExists("PrimaryContainer"))
  {
    m_primaryContainer = jsonValue.GetObject("PrimaryContainer");

  }

  if(jsonValue.ValueExists("Containers"))
  {
    Aws::Utils::Array<JsonView> containersJsonList = jsonValue.GetArray("Containers");
    for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
    {
      m_containers.push_back(containersJsonList[containersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("InferenceExecutionConfig"))
  {
    m_inferenceExecutionConfig = jsonValue.GetObject("InferenceExecutionConfig");

  }

  if(jsonValue.ValueExists("ExecutionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");

  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("ModelArn"))
  {
    m_modelArn = jsonValue.GetString("ModelArn");

  }

  if(jsonValue.ValueExists("EnableNetworkIsolation"))
  {
    m_enableNetworkIsolation = jsonValue.GetBool("EnableNetworkIsolation");

  }



  return *this;
}
