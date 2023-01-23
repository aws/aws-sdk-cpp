/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListStageDevicesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStageDevicesResult::ListStageDevicesResult()
{
}

ListStageDevicesResult::ListStageDevicesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStageDevicesResult& ListStageDevicesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeviceDeploymentSummaries"))
  {
    Aws::Utils::Array<JsonView> deviceDeploymentSummariesJsonList = jsonValue.GetArray("DeviceDeploymentSummaries");
    for(unsigned deviceDeploymentSummariesIndex = 0; deviceDeploymentSummariesIndex < deviceDeploymentSummariesJsonList.GetLength(); ++deviceDeploymentSummariesIndex)
    {
      m_deviceDeploymentSummaries.push_back(deviceDeploymentSummariesJsonList[deviceDeploymentSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
