/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DescribeApplicationInstanceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeApplicationInstanceResult::DescribeApplicationInstanceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeApplicationInstanceResult& DescribeApplicationInstanceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationInstanceId"))
  {
    m_applicationInstanceId = jsonValue.GetString("ApplicationInstanceId");
    m_applicationInstanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationInstanceIdToReplace"))
  {
    m_applicationInstanceIdToReplace = jsonValue.GetString("ApplicationInstanceIdToReplace");
    m_applicationInstanceIdToReplaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultRuntimeContextDevice"))
  {
    m_defaultRuntimeContextDevice = jsonValue.GetString("DefaultRuntimeContextDevice");
    m_defaultRuntimeContextDeviceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultRuntimeContextDeviceName"))
  {
    m_defaultRuntimeContextDeviceName = jsonValue.GetString("DefaultRuntimeContextDeviceName");
    m_defaultRuntimeContextDeviceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HealthStatus"))
  {
    m_healthStatus = ApplicationInstanceHealthStatusMapper::GetApplicationInstanceHealthStatusForName(jsonValue.GetString("HealthStatus"));
    m_healthStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuntimeContextStates"))
  {
    Aws::Utils::Array<JsonView> runtimeContextStatesJsonList = jsonValue.GetArray("RuntimeContextStates");
    for(unsigned runtimeContextStatesIndex = 0; runtimeContextStatesIndex < runtimeContextStatesJsonList.GetLength(); ++runtimeContextStatesIndex)
    {
      m_runtimeContextStates.push_back(runtimeContextStatesJsonList[runtimeContextStatesIndex].AsObject());
    }
    m_runtimeContextStatesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuntimeRoleArn"))
  {
    m_runtimeRoleArn = jsonValue.GetString("RuntimeRoleArn");
    m_runtimeRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ApplicationInstanceStatusMapper::GetApplicationInstanceStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusDescription"))
  {
    m_statusDescription = jsonValue.GetString("StatusDescription");
    m_statusDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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
