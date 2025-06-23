/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/Ipv4PrefixSpecificationRequest.h>
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

Ipv4PrefixSpecificationRequest::Ipv4PrefixSpecificationRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

Ipv4PrefixSpecificationRequest& Ipv4PrefixSpecificationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ipv4Prefix"))
  {
    m_ipv4Prefix = jsonValue.GetString("Ipv4Prefix");
    m_ipv4PrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue Ipv4PrefixSpecificationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_ipv4PrefixHasBeenSet)
  {
   payload.WithString("Ipv4Prefix", m_ipv4Prefix);

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
