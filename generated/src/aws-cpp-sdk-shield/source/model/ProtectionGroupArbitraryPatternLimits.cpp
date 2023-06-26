/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/ProtectionGroupArbitraryPatternLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

ProtectionGroupArbitraryPatternLimits::ProtectionGroupArbitraryPatternLimits() : 
    m_maxMembers(0),
    m_maxMembersHasBeenSet(false)
{
}

ProtectionGroupArbitraryPatternLimits::ProtectionGroupArbitraryPatternLimits(JsonView jsonValue) : 
    m_maxMembers(0),
    m_maxMembersHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectionGroupArbitraryPatternLimits& ProtectionGroupArbitraryPatternLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxMembers"))
  {
    m_maxMembers = jsonValue.GetInt64("MaxMembers");

    m_maxMembersHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectionGroupArbitraryPatternLimits::Jsonize() const
{
  JsonValue payload;

  if(m_maxMembersHasBeenSet)
  {
   payload.WithInt64("MaxMembers", m_maxMembers);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
