/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Smpte2110ReceiverGroupSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

Smpte2110ReceiverGroupSettings::Smpte2110ReceiverGroupSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

Smpte2110ReceiverGroupSettings& Smpte2110ReceiverGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("smpte2110ReceiverGroups"))
  {
    Aws::Utils::Array<JsonView> smpte2110ReceiverGroupsJsonList = jsonValue.GetArray("smpte2110ReceiverGroups");
    for(unsigned smpte2110ReceiverGroupsIndex = 0; smpte2110ReceiverGroupsIndex < smpte2110ReceiverGroupsJsonList.GetLength(); ++smpte2110ReceiverGroupsIndex)
    {
      m_smpte2110ReceiverGroups.push_back(smpte2110ReceiverGroupsJsonList[smpte2110ReceiverGroupsIndex].AsObject());
    }
    m_smpte2110ReceiverGroupsHasBeenSet = true;
  }
  return *this;
}

JsonValue Smpte2110ReceiverGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_smpte2110ReceiverGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> smpte2110ReceiverGroupsJsonList(m_smpte2110ReceiverGroups.size());
   for(unsigned smpte2110ReceiverGroupsIndex = 0; smpte2110ReceiverGroupsIndex < smpte2110ReceiverGroupsJsonList.GetLength(); ++smpte2110ReceiverGroupsIndex)
   {
     smpte2110ReceiverGroupsJsonList[smpte2110ReceiverGroupsIndex].AsObject(m_smpte2110ReceiverGroups[smpte2110ReceiverGroupsIndex].Jsonize());
   }
   payload.WithArray("smpte2110ReceiverGroups", std::move(smpte2110ReceiverGroupsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
