/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/ProvisionDeviceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ProvisionDeviceResult::ProvisionDeviceResult() : 
    m_status(DeviceStatus::NOT_SET)
{
}

ProvisionDeviceResult::ProvisionDeviceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(DeviceStatus::NOT_SET)
{
  *this = result;
}

ProvisionDeviceResult& ProvisionDeviceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Certificates"))
  {
    m_certificates = HashingUtils::Base64Decode(jsonValue.GetString("Certificates"));
  }

  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");

  }

  if(jsonValue.ValueExists("IotThingName"))
  {
    m_iotThingName = jsonValue.GetString("IotThingName");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DeviceStatusMapper::GetDeviceStatusForName(jsonValue.GetString("Status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
