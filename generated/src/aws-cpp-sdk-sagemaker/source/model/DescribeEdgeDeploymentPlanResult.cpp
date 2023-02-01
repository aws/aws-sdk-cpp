/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeEdgeDeploymentPlanResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEdgeDeploymentPlanResult::DescribeEdgeDeploymentPlanResult() : 
    m_edgeDeploymentSuccess(0),
    m_edgeDeploymentPending(0),
    m_edgeDeploymentFailed(0)
{
}

DescribeEdgeDeploymentPlanResult::DescribeEdgeDeploymentPlanResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_edgeDeploymentSuccess(0),
    m_edgeDeploymentPending(0),
    m_edgeDeploymentFailed(0)
{
  *this = result;
}

DescribeEdgeDeploymentPlanResult& DescribeEdgeDeploymentPlanResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EdgeDeploymentPlanArn"))
  {
    m_edgeDeploymentPlanArn = jsonValue.GetString("EdgeDeploymentPlanArn");

  }

  if(jsonValue.ValueExists("EdgeDeploymentPlanName"))
  {
    m_edgeDeploymentPlanName = jsonValue.GetString("EdgeDeploymentPlanName");

  }

  if(jsonValue.ValueExists("ModelConfigs"))
  {
    Aws::Utils::Array<JsonView> modelConfigsJsonList = jsonValue.GetArray("ModelConfigs");
    for(unsigned modelConfigsIndex = 0; modelConfigsIndex < modelConfigsJsonList.GetLength(); ++modelConfigsIndex)
    {
      m_modelConfigs.push_back(modelConfigsJsonList[modelConfigsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DeviceFleetName"))
  {
    m_deviceFleetName = jsonValue.GetString("DeviceFleetName");

  }

  if(jsonValue.ValueExists("EdgeDeploymentSuccess"))
  {
    m_edgeDeploymentSuccess = jsonValue.GetInteger("EdgeDeploymentSuccess");

  }

  if(jsonValue.ValueExists("EdgeDeploymentPending"))
  {
    m_edgeDeploymentPending = jsonValue.GetInteger("EdgeDeploymentPending");

  }

  if(jsonValue.ValueExists("EdgeDeploymentFailed"))
  {
    m_edgeDeploymentFailed = jsonValue.GetInteger("EdgeDeploymentFailed");

  }

  if(jsonValue.ValueExists("Stages"))
  {
    Aws::Utils::Array<JsonView> stagesJsonList = jsonValue.GetArray("Stages");
    for(unsigned stagesIndex = 0; stagesIndex < stagesJsonList.GetLength(); ++stagesIndex)
    {
      m_stages.push_back(stagesJsonList[stagesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }



  return *this;
}
