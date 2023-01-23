/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/SecurityGroupMembership.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

SecurityGroupMembership::SecurityGroupMembership() : 
    m_securityGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

SecurityGroupMembership::SecurityGroupMembership(JsonView jsonValue) : 
    m_securityGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityGroupMembership& SecurityGroupMembership::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecurityGroupId"))
  {
    m_securityGroupId = jsonValue.GetString("SecurityGroupId");

    m_securityGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityGroupMembership::Jsonize() const
{
  JsonValue payload;

  if(m_securityGroupIdHasBeenSet)
  {
   payload.WithString("SecurityGroupId", m_securityGroupId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
