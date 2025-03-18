/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateInputDeviceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateInputDeviceResult::UpdateInputDeviceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateInputDeviceResult& UpdateInputDeviceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectionState"))
  {
    m_connectionState = InputDeviceConnectionStateMapper::GetInputDeviceConnectionStateForName(jsonValue.GetString("connectionState"));
    m_connectionStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceSettingsSyncState"))
  {
    m_deviceSettingsSyncState = DeviceSettingsSyncStateMapper::GetDeviceSettingsSyncStateForName(jsonValue.GetString("deviceSettingsSyncState"));
    m_deviceSettingsSyncStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceUpdateStatus"))
  {
    m_deviceUpdateStatus = DeviceUpdateStatusMapper::GetDeviceUpdateStatusForName(jsonValue.GetString("deviceUpdateStatus"));
    m_deviceUpdateStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hdDeviceSettings"))
  {
    m_hdDeviceSettings = jsonValue.GetObject("hdDeviceSettings");
    m_hdDeviceSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("macAddress"))
  {
    m_macAddress = jsonValue.GetString("macAddress");
    m_macAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkSettings"))
  {
    m_networkSettings = jsonValue.GetObject("networkSettings");
    m_networkSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serialNumber"))
  {
    m_serialNumber = jsonValue.GetString("serialNumber");
    m_serialNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = InputDeviceTypeMapper::GetInputDeviceTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("uhdDeviceSettings"))
  {
    m_uhdDeviceSettings = jsonValue.GetObject("uhdDeviceSettings");
    m_uhdDeviceSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("medialiveInputArns"))
  {
    Aws::Utils::Array<JsonView> medialiveInputArnsJsonList = jsonValue.GetArray("medialiveInputArns");
    for(unsigned medialiveInputArnsIndex = 0; medialiveInputArnsIndex < medialiveInputArnsJsonList.GetLength(); ++medialiveInputArnsIndex)
    {
      m_medialiveInputArns.push_back(medialiveInputArnsJsonList[medialiveInputArnsIndex].AsString());
    }
    m_medialiveInputArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputType"))
  {
    m_outputType = InputDeviceOutputTypeMapper::GetInputDeviceOutputTypeForName(jsonValue.GetString("outputType"));
    m_outputTypeHasBeenSet = true;
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
