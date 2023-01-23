/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/DnsRequestAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

DnsRequestAction::DnsRequestAction() : 
    m_domainHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_blocked(false),
    m_blockedHasBeenSet(false)
{
}

DnsRequestAction::DnsRequestAction(JsonView jsonValue) : 
    m_domainHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_blocked(false),
    m_blockedHasBeenSet(false)
{
  *this = jsonValue;
}

DnsRequestAction& DnsRequestAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = jsonValue.GetString("Protocol");

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Blocked"))
  {
    m_blocked = jsonValue.GetBool("Blocked");

    m_blockedHasBeenSet = true;
  }

  return *this;
}

JsonValue DnsRequestAction::Jsonize() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", m_protocol);

  }

  if(m_blockedHasBeenSet)
  {
   payload.WithBool("Blocked", m_blocked);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
