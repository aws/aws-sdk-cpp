/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GuardianAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

GuardianAttributes::GuardianAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardianAttributes& GuardianAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OptimizedSharedDelivery"))
  {
    m_optimizedSharedDelivery = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("OptimizedSharedDelivery"));
    m_optimizedSharedDeliveryHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardianAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_optimizedSharedDeliveryHasBeenSet)
  {
   payload.WithString("OptimizedSharedDelivery", FeatureStatusMapper::GetNameForFeatureStatus(m_optimizedSharedDelivery));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
