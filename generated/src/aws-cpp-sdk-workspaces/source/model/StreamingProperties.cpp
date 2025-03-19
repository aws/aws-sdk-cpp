/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/StreamingProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

StreamingProperties::StreamingProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

StreamingProperties& StreamingProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StreamingExperiencePreferredProtocol"))
  {
    m_streamingExperiencePreferredProtocol = StreamingExperiencePreferredProtocolEnumMapper::GetStreamingExperiencePreferredProtocolEnumForName(jsonValue.GetString("StreamingExperiencePreferredProtocol"));
    m_streamingExperiencePreferredProtocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserSettings"))
  {
    Aws::Utils::Array<JsonView> userSettingsJsonList = jsonValue.GetArray("UserSettings");
    for(unsigned userSettingsIndex = 0; userSettingsIndex < userSettingsJsonList.GetLength(); ++userSettingsIndex)
    {
      m_userSettings.push_back(userSettingsJsonList[userSettingsIndex].AsObject());
    }
    m_userSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StorageConnectors"))
  {
    Aws::Utils::Array<JsonView> storageConnectorsJsonList = jsonValue.GetArray("StorageConnectors");
    for(unsigned storageConnectorsIndex = 0; storageConnectorsIndex < storageConnectorsJsonList.GetLength(); ++storageConnectorsIndex)
    {
      m_storageConnectors.push_back(storageConnectorsJsonList[storageConnectorsIndex].AsObject());
    }
    m_storageConnectorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GlobalAccelerator"))
  {
    m_globalAccelerator = jsonValue.GetObject("GlobalAccelerator");
    m_globalAcceleratorHasBeenSet = true;
  }
  return *this;
}

JsonValue StreamingProperties::Jsonize() const
{
  JsonValue payload;

  if(m_streamingExperiencePreferredProtocolHasBeenSet)
  {
   payload.WithString("StreamingExperiencePreferredProtocol", StreamingExperiencePreferredProtocolEnumMapper::GetNameForStreamingExperiencePreferredProtocolEnum(m_streamingExperiencePreferredProtocol));
  }

  if(m_userSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userSettingsJsonList(m_userSettings.size());
   for(unsigned userSettingsIndex = 0; userSettingsIndex < userSettingsJsonList.GetLength(); ++userSettingsIndex)
   {
     userSettingsJsonList[userSettingsIndex].AsObject(m_userSettings[userSettingsIndex].Jsonize());
   }
   payload.WithArray("UserSettings", std::move(userSettingsJsonList));

  }

  if(m_storageConnectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> storageConnectorsJsonList(m_storageConnectors.size());
   for(unsigned storageConnectorsIndex = 0; storageConnectorsIndex < storageConnectorsJsonList.GetLength(); ++storageConnectorsIndex)
   {
     storageConnectorsJsonList[storageConnectorsIndex].AsObject(m_storageConnectors[storageConnectorsIndex].Jsonize());
   }
   payload.WithArray("StorageConnectors", std::move(storageConnectorsJsonList));

  }

  if(m_globalAcceleratorHasBeenSet)
  {
   payload.WithObject("GlobalAccelerator", m_globalAccelerator.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
