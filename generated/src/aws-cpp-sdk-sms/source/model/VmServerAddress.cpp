/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/VmServerAddress.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

VmServerAddress::VmServerAddress() : 
    m_vmManagerIdHasBeenSet(false),
    m_vmIdHasBeenSet(false)
{
}

VmServerAddress::VmServerAddress(JsonView jsonValue) : 
    m_vmManagerIdHasBeenSet(false),
    m_vmIdHasBeenSet(false)
{
  *this = jsonValue;
}

VmServerAddress& VmServerAddress::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vmManagerId"))
  {
    m_vmManagerId = jsonValue.GetString("vmManagerId");

    m_vmManagerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vmId"))
  {
    m_vmId = jsonValue.GetString("vmId");

    m_vmIdHasBeenSet = true;
  }

  return *this;
}

JsonValue VmServerAddress::Jsonize() const
{
  JsonValue payload;

  if(m_vmManagerIdHasBeenSet)
  {
   payload.WithString("vmManagerId", m_vmManagerId);

  }

  if(m_vmIdHasBeenSet)
  {
   payload.WithString("vmId", m_vmId);

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
