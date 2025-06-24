/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/Ipv6PrefixSpecificationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

Ipv6PrefixSpecificationRequest::Ipv6PrefixSpecificationRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

Ipv6PrefixSpecificationRequest& Ipv6PrefixSpecificationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ipv6Prefix"))
  {
    m_ipv6Prefix = jsonValue.GetString("Ipv6Prefix");
    m_ipv6PrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue Ipv6PrefixSpecificationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_ipv6PrefixHasBeenSet)
  {
   payload.WithString("Ipv6Prefix", m_ipv6Prefix);

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
