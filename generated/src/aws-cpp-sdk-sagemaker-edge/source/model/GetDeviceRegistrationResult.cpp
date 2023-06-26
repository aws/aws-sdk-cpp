/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/model/GetDeviceRegistrationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SagemakerEdgeManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeviceRegistrationResult::GetDeviceRegistrationResult()
{
}

GetDeviceRegistrationResult::GetDeviceRegistrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDeviceRegistrationResult& GetDeviceRegistrationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeviceRegistration"))
  {
    m_deviceRegistration = jsonValue.GetString("DeviceRegistration");

  }

  if(jsonValue.ValueExists("CacheTTL"))
  {
    m_cacheTTL = jsonValue.GetString("CacheTTL");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
