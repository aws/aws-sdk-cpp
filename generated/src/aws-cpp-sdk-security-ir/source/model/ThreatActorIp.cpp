/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/ThreatActorIp.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

ThreatActorIp::ThreatActorIp(JsonView jsonValue)
{
  *this = jsonValue;
}

ThreatActorIp& ThreatActorIp::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ipAddress"))
  {
    m_ipAddress = jsonValue.GetString("ipAddress");
    m_ipAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userAgent"))
  {
    m_userAgent = jsonValue.GetString("userAgent");
    m_userAgentHasBeenSet = true;
  }
  return *this;
}

JsonValue ThreatActorIp::Jsonize() const
{
  JsonValue payload;

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("ipAddress", m_ipAddress);

  }

  if(m_userAgentHasBeenSet)
  {
   payload.WithString("userAgent", m_userAgent);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
