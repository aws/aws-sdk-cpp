/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeDataQualityJobDefinitionResult.h>
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

DescribeDataQualityJobDefinitionResult::DescribeDataQualityJobDefinitionResult()
{
}

DescribeDataQualityJobDefinitionResult::DescribeDataQualityJobDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDataQualityJobDefinitionResult& DescribeDataQualityJobDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobDefinitionArn"))
  {
    m_jobDefinitionArn = jsonValue.GetString("JobDefinitionArn");

  }

  if(jsonValue.ValueExists("JobDefinitionName"))
  {
    m_jobDefinitionName = jsonValue.GetString("JobDefinitionName");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("DataQualityBaselineConfig"))
  {
    m_dataQualityBaselineConfig = jsonValue.GetObject("DataQualityBaselineConfig");

  }

  if(jsonValue.ValueExists("DataQualityAppSpecification"))
  {
    m_dataQualityAppSpecification = jsonValue.GetObject("DataQualityAppSpecification");

  }

  if(jsonValue.ValueExists("DataQualityJobInput"))
  {
    m_dataQualityJobInput = jsonValue.GetObject("DataQualityJobInput");

  }

  if(jsonValue.ValueExists("DataQualityJobOutputConfig"))
  {
    m_dataQualityJobOutputConfig = jsonValue.GetObject("DataQualityJobOutputConfig");

  }

  if(jsonValue.ValueExists("JobResources"))
  {
    m_jobResources = jsonValue.GetObject("JobResources");

  }

  if(jsonValue.ValueExists("NetworkConfig"))
  {
    m_networkConfig = jsonValue.GetObject("NetworkConfig");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("StoppingCondition"))
  {
    m_stoppingCondition = jsonValue.GetObject("StoppingCondition");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
