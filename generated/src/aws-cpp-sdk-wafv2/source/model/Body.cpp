/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/Body.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

Body::Body(JsonView jsonValue)
{
  *this = jsonValue;
}

Body& Body::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OversizeHandling"))
  {
    m_oversizeHandling = OversizeHandlingMapper::GetOversizeHandlingForName(jsonValue.GetString("OversizeHandling"));
    m_oversizeHandlingHasBeenSet = true;
  }
  return *this;
}

JsonValue Body::Jsonize() const
{
  JsonValue payload;

  if(m_oversizeHandlingHasBeenSet)
  {
   payload.WithString("OversizeHandling", OversizeHandlingMapper::GetNameForOversizeHandling(m_oversizeHandling));
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
