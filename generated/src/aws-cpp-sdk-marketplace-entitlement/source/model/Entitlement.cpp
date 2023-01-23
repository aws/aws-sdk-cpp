/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-entitlement/model/Entitlement.h>
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

Entitlement::Entitlement() : 
    m_productCodeHasBeenSet(false),
    m_dimensionHasBeenSet(false),
    m_customerIdentifierHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_expirationDateHasBeenSet(false)
{
}

Entitlement::Entitlement(JsonView jsonValue) : 
    m_productCodeHasBeenSet(false),
    m_dimensionHasBeenSet(false),
    m_customerIdentifierHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_expirationDateHasBeenSet(false)
{
  *this = jsonValue;
}

Entitlement& Entitlement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProductCode"))
  {
    m_productCode = jsonValue.GetString("ProductCode");

    m_productCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dimension"))
  {
    m_dimension = jsonValue.GetString("Dimension");

    m_dimensionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomerIdentifier"))
  {
    m_customerIdentifier = jsonValue.GetString("CustomerIdentifier");

    m_customerIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetObject("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationDate"))
  {
    m_expirationDate = jsonValue.GetDouble("ExpirationDate");

    m_expirationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue Entitlement::Jsonize() const
{
  JsonValue payload;

  if(m_productCodeHasBeenSet)
  {
   payload.WithString("ProductCode", m_productCode);

  }

  if(m_dimensionHasBeenSet)
  {
   payload.WithString("Dimension", m_dimension);

  }

  if(m_customerIdentifierHasBeenSet)
  {
   payload.WithString("CustomerIdentifier", m_customerIdentifier);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value.Jsonize());

  }

  if(m_expirationDateHasBeenSet)
  {
   payload.WithDouble("ExpirationDate", m_expirationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceEntitlementService
} // namespace Aws
