/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeviceSelectionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

DeviceSelectionConfig::DeviceSelectionConfig() : 
    m_deviceSubsetType(DeviceSubsetType::NOT_SET),
    m_deviceSubsetTypeHasBeenSet(false),
    m_percentage(0),
    m_percentageHasBeenSet(false),
    m_deviceNamesHasBeenSet(false),
    m_deviceNameContainsHasBeenSet(false)
{
}

DeviceSelectionConfig::DeviceSelectionConfig(JsonView jsonValue) : 
    m_deviceSubsetType(DeviceSubsetType::NOT_SET),
    m_deviceSubsetTypeHasBeenSet(false),
    m_percentage(0),
    m_percentageHasBeenSet(false),
    m_deviceNamesHasBeenSet(false),
    m_deviceNameContainsHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceSelectionConfig& DeviceSelectionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceSubsetType"))
  {
    m_deviceSubsetType = DeviceSubsetTypeMapper::GetDeviceSubsetTypeForName(jsonValue.GetString("DeviceSubsetType"));

    m_deviceSubsetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Percentage"))
  {
    m_percentage = jsonValue.GetInteger("Percentage");

    m_percentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceNames"))
  {
    Aws::Utils::Array<JsonView> deviceNamesJsonList = jsonValue.GetArray("DeviceNames");
    for(unsigned deviceNamesIndex = 0; deviceNamesIndex < deviceNamesJsonList.GetLength(); ++deviceNamesIndex)
    {
      m_deviceNames.push_back(deviceNamesJsonList[deviceNamesIndex].AsString());
    }
    m_deviceNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceNameContains"))
  {
    m_deviceNameContains = jsonValue.GetString("DeviceNameContains");

    m_deviceNameContainsHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceSelectionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_deviceSubsetTypeHasBeenSet)
  {
   payload.WithString("DeviceSubsetType", DeviceSubsetTypeMapper::GetNameForDeviceSubsetType(m_deviceSubsetType));
  }

  if(m_percentageHasBeenSet)
  {
   payload.WithInteger("Percentage", m_percentage);

  }

  if(m_deviceNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceNamesJsonList(m_deviceNames.size());
   for(unsigned deviceNamesIndex = 0; deviceNamesIndex < deviceNamesJsonList.GetLength(); ++deviceNamesIndex)
   {
     deviceNamesJsonList[deviceNamesIndex].AsString(m_deviceNames[deviceNamesIndex]);
   }
   payload.WithArray("DeviceNames", std::move(deviceNamesJsonList));

  }

  if(m_deviceNameContainsHasBeenSet)
  {
   payload.WithString("DeviceNameContains", m_deviceNameContains);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
