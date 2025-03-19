/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/MulticastSourceSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

MulticastSourceSettings::MulticastSourceSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

MulticastSourceSettings& MulticastSourceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("multicastSourceIp"))
  {
    m_multicastSourceIp = jsonValue.GetString("multicastSourceIp");
    m_multicastSourceIpHasBeenSet = true;
  }
  return *this;
}

JsonValue MulticastSourceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_multicastSourceIpHasBeenSet)
  {
   payload.WithString("multicastSourceIp", m_multicastSourceIp);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
