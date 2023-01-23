/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/IPSetMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

IPSetMetadata::IPSetMetadata() : 
    m_resolvedCIDRCount(0),
    m_resolvedCIDRCountHasBeenSet(false)
{
}

IPSetMetadata::IPSetMetadata(JsonView jsonValue) : 
    m_resolvedCIDRCount(0),
    m_resolvedCIDRCountHasBeenSet(false)
{
  *this = jsonValue;
}

IPSetMetadata& IPSetMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResolvedCIDRCount"))
  {
    m_resolvedCIDRCount = jsonValue.GetInteger("ResolvedCIDRCount");

    m_resolvedCIDRCountHasBeenSet = true;
  }

  return *this;
}

JsonValue IPSetMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_resolvedCIDRCountHasBeenSet)
  {
   payload.WithInteger("ResolvedCIDRCount", m_resolvedCIDRCount);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
