/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MulticastInputSettings.h>
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

MulticastInputSettings::MulticastInputSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

MulticastInputSettings& MulticastInputSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceIpAddress"))
  {
    m_sourceIpAddress = jsonValue.GetString("sourceIpAddress");
    m_sourceIpAddressHasBeenSet = true;
  }
  return *this;
}

JsonValue MulticastInputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_sourceIpAddressHasBeenSet)
  {
   payload.WithString("sourceIpAddress", m_sourceIpAddress);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
