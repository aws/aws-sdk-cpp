/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-entitlement/model/EntitlementValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceEntitlementService
{
namespace Model
{

EntitlementValue::EntitlementValue(JsonView jsonValue)
{
  *this = jsonValue;
}

EntitlementValue& EntitlementValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IntegerValue"))
  {
    m_integerValue = jsonValue.GetInteger("IntegerValue");
    m_integerValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DoubleValue"))
  {
    m_doubleValue = jsonValue.GetDouble("DoubleValue");
    m_doubleValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BooleanValue"))
  {
    m_booleanValue = jsonValue.GetBool("BooleanValue");
    m_booleanValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StringValue"))
  {
    m_stringValue = jsonValue.GetString("StringValue");
    m_stringValueHasBeenSet = true;
  }
  return *this;
}

JsonValue EntitlementValue::Jsonize() const
{
  JsonValue payload;

  if(m_integerValueHasBeenSet)
  {
   payload.WithInteger("IntegerValue", m_integerValue);

  }

  if(m_doubleValueHasBeenSet)
  {
   payload.WithDouble("DoubleValue", m_doubleValue);

  }

  if(m_booleanValueHasBeenSet)
  {
   payload.WithBool("BooleanValue", m_booleanValue);

  }

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("StringValue", m_stringValue);

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceEntitlementService
} // namespace Aws
