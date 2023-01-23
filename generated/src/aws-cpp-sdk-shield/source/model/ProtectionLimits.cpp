/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/ProtectionLimits.h>
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

ProtectionLimits::ProtectionLimits() : 
    m_protectedResourceTypeLimitsHasBeenSet(false)
{
}

ProtectionLimits::ProtectionLimits(JsonView jsonValue) : 
    m_protectedResourceTypeLimitsHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectionLimits& ProtectionLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProtectedResourceTypeLimits"))
  {
    Aws::Utils::Array<JsonView> protectedResourceTypeLimitsJsonList = jsonValue.GetArray("ProtectedResourceTypeLimits");
    for(unsigned protectedResourceTypeLimitsIndex = 0; protectedResourceTypeLimitsIndex < protectedResourceTypeLimitsJsonList.GetLength(); ++protectedResourceTypeLimitsIndex)
    {
      m_protectedResourceTypeLimits.push_back(protectedResourceTypeLimitsJsonList[protectedResourceTypeLimitsIndex].AsObject());
    }
    m_protectedResourceTypeLimitsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectionLimits::Jsonize() const
{
  JsonValue payload;

  if(m_protectedResourceTypeLimitsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protectedResourceTypeLimitsJsonList(m_protectedResourceTypeLimits.size());
   for(unsigned protectedResourceTypeLimitsIndex = 0; protectedResourceTypeLimitsIndex < protectedResourceTypeLimitsJsonList.GetLength(); ++protectedResourceTypeLimitsIndex)
   {
     protectedResourceTypeLimitsJsonList[protectedResourceTypeLimitsIndex].AsObject(m_protectedResourceTypeLimits[protectedResourceTypeLimitsIndex].Jsonize());
   }
   payload.WithArray("ProtectedResourceTypeLimits", std::move(protectedResourceTypeLimitsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
