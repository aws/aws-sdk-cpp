/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/NtpPayload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

NtpPayload::NtpPayload() : 
    m_ntpServersHasBeenSet(false)
{
}

NtpPayload::NtpPayload(JsonView jsonValue) : 
    m_ntpServersHasBeenSet(false)
{
  *this = jsonValue;
}

NtpPayload& NtpPayload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NtpServers"))
  {
    Aws::Utils::Array<JsonView> ntpServersJsonList = jsonValue.GetArray("NtpServers");
    for(unsigned ntpServersIndex = 0; ntpServersIndex < ntpServersJsonList.GetLength(); ++ntpServersIndex)
    {
      m_ntpServers.push_back(ntpServersJsonList[ntpServersIndex].AsString());
    }
    m_ntpServersHasBeenSet = true;
  }

  return *this;
}

JsonValue NtpPayload::Jsonize() const
{
  JsonValue payload;

  if(m_ntpServersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ntpServersJsonList(m_ntpServers.size());
   for(unsigned ntpServersIndex = 0; ntpServersIndex < ntpServersJsonList.GetLength(); ++ntpServersIndex)
   {
     ntpServersJsonList[ntpServersIndex].AsString(m_ntpServers[ntpServersIndex]);
   }
   payload.WithArray("NtpServers", std::move(ntpServersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
