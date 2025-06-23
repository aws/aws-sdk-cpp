/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/PrivateIpAddressSpecification.h>
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

PrivateIpAddressSpecification::PrivateIpAddressSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

PrivateIpAddressSpecification& PrivateIpAddressSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Primary"))
  {
    m_primary = jsonValue.GetBool("Primary");
    m_primaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrivateIpAddress"))
  {
    m_privateIpAddress = jsonValue.GetString("PrivateIpAddress");
    m_privateIpAddressHasBeenSet = true;
  }
  return *this;
}

JsonValue PrivateIpAddressSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_primaryHasBeenSet)
  {
   payload.WithBool("Primary", m_primary);

  }

  if(m_privateIpAddressHasBeenSet)
  {
   payload.WithString("PrivateIpAddress", m_privateIpAddress);

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
