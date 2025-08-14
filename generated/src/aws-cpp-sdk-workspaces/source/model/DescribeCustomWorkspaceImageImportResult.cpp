/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeCustomWorkspaceImageImportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCustomWorkspaceImageImportResult::DescribeCustomWorkspaceImageImportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeCustomWorkspaceImageImportResult& DescribeCustomWorkspaceImageImportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ImageId"))
  {
    m_imageId = jsonValue.GetString("ImageId");
    m_imageIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InfrastructureConfigurationArn"))
  {
    m_infrastructureConfigurationArn = jsonValue.GetString("InfrastructureConfigurationArn");
    m_infrastructureConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = CustomWorkspaceImageImportStateMapper::GetCustomWorkspaceImageImportStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Created"))
  {
    m_created = jsonValue.GetDouble("Created");
    m_createdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImageSource"))
  {
    m_imageSource = jsonValue.GetObject("ImageSource");
    m_imageSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImageBuilderInstanceId"))
  {
    m_imageBuilderInstanceId = jsonValue.GetString("ImageBuilderInstanceId");
    m_imageBuilderInstanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorDetails"))
  {
    Aws::Utils::Array<JsonView> errorDetailsJsonList = jsonValue.GetArray("ErrorDetails");
    for(unsigned errorDetailsIndex = 0; errorDetailsIndex < errorDetailsJsonList.GetLength(); ++errorDetailsIndex)
    {
      m_errorDetails.push_back(errorDetailsJsonList[errorDetailsIndex].AsObject());
    }
    m_errorDetailsHasBeenSet = true;
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
