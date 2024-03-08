/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/OfferReleaseDateFilterDateRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{

OfferReleaseDateFilterDateRange::OfferReleaseDateFilterDateRange() : 
    m_afterValueHasBeenSet(false),
    m_beforeValueHasBeenSet(false)
{
}

OfferReleaseDateFilterDateRange::OfferReleaseDateFilterDateRange(JsonView jsonValue) : 
    m_afterValueHasBeenSet(false),
    m_beforeValueHasBeenSet(false)
{
  *this = jsonValue;
}

OfferReleaseDateFilterDateRange& OfferReleaseDateFilterDateRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AfterValue"))
  {
    m_afterValue = jsonValue.GetString("AfterValue");

    m_afterValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BeforeValue"))
  {
    m_beforeValue = jsonValue.GetString("BeforeValue");

    m_beforeValueHasBeenSet = true;
  }

  return *this;
}

JsonValue OfferReleaseDateFilterDateRange::Jsonize() const
{
  JsonValue payload;

  if(m_afterValueHasBeenSet)
  {
   payload.WithString("AfterValue", m_afterValue);

  }

  if(m_beforeValueHasBeenSet)
  {
   payload.WithString("BeforeValue", m_beforeValue);

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
