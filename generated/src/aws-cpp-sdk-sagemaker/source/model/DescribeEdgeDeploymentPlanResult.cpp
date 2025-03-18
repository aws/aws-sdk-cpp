/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeEdgeDeploymentPlanResult.h>
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

DescribeEdgeDeploymentPlanResult::DescribeEdgeDeploymentPlanResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEdgeDeploymentPlanResult& DescribeEdgeDeploymentPlanResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EdgeDeploymentPlanArn"))
  {
    m_edgeDeploymentPlanArn = jsonValue.GetString("EdgeDeploymentPlanArn");
    m_edgeDeploymentPlanArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EdgeDeploymentPlanName"))
  {
    m_edgeDeploymentPlanName = jsonValue.GetString("EdgeDeploymentPlanName");
    m_edgeDeploymentPlanNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelConfigs"))
  {
    Aws::Utils::Array<JsonView> modelConfigsJsonList = jsonValue.GetArray("ModelConfigs");
    for(unsigned modelConfigsIndex = 0; modelConfigsIndex < modelConfigsJsonList.GetLength(); ++modelConfigsIndex)
    {
      m_modelConfigs.push_back(modelConfigsJsonList[modelConfigsIndex].AsObject());
    }
    m_modelConfigsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceFleetName"))
  {
    m_deviceFleetName = jsonValue.GetString("DeviceFleetName");
    m_deviceFleetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EdgeDeploymentSuccess"))
  {
    m_edgeDeploymentSuccess = jsonValue.GetInteger("EdgeDeploymentSuccess");
    m_edgeDeploymentSuccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EdgeDeploymentPending"))
  {
    m_edgeDeploymentPending = jsonValue.GetInteger("EdgeDeploymentPending");
    m_edgeDeploymentPendingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EdgeDeploymentFailed"))
  {
    m_edgeDeploymentFailed = jsonValue.GetInteger("EdgeDeploymentFailed");
    m_edgeDeploymentFailedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Stages"))
  {
    Aws::Utils::Array<JsonView> stagesJsonList = jsonValue.GetArray("Stages");
    for(unsigned stagesIndex = 0; stagesIndex < stagesJsonList.GetLength(); ++stagesIndex)
    {
      m_stages.push_back(stagesJsonList[stagesIndex].AsObject());
    }
    m_stagesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
