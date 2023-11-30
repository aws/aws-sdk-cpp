/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/OfferBuyerAccountsFilter.h>
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

OfferBuyerAccountsFilter::OfferBuyerAccountsFilter() : 
    m_wildCardValueHasBeenSet(false)
{
}

OfferBuyerAccountsFilter::OfferBuyerAccountsFilter(JsonView jsonValue) : 
    m_wildCardValueHasBeenSet(false)
{
  *this = jsonValue;
}

OfferBuyerAccountsFilter& OfferBuyerAccountsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WildCardValue"))
  {
    m_wildCardValue = jsonValue.GetString("WildCardValue");

    m_wildCardValueHasBeenSet = true;
  }

  return *this;
}

JsonValue OfferBuyerAccountsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_wildCardValueHasBeenSet)
  {
   payload.WithString("WildCardValue", m_wildCardValue);

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
