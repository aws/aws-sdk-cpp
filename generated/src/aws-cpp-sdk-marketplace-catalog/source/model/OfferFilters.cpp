/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/OfferFilters.h>
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

OfferFilters::OfferFilters() : 
    m_entityIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_releaseDateHasBeenSet(false),
    m_availabilityEndDateHasBeenSet(false),
    m_buyerAccountsHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_targetingHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
}

OfferFilters::OfferFilters(JsonView jsonValue) : 
    m_entityIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_releaseDateHasBeenSet(false),
    m_availabilityEndDateHasBeenSet(false),
    m_buyerAccountsHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_targetingHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
  *this = jsonValue;
}

OfferFilters& OfferFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EntityId"))
  {
    m_entityId = jsonValue.GetObject("EntityId");

    m_entityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetObject("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductId"))
  {
    m_productId = jsonValue.GetObject("ProductId");

    m_productIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReleaseDate"))
  {
    m_releaseDate = jsonValue.GetObject("ReleaseDate");

    m_releaseDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityEndDate"))
  {
    m_availabilityEndDate = jsonValue.GetObject("AvailabilityEndDate");

    m_availabilityEndDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BuyerAccounts"))
  {
    m_buyerAccounts = jsonValue.GetObject("BuyerAccounts");

    m_buyerAccountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetObject("State");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Targeting"))
  {
    m_targeting = jsonValue.GetObject("Targeting");

    m_targetingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetObject("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  return *this;
}

JsonValue OfferFilters::Jsonize() const
{
  JsonValue payload;

  if(m_entityIdHasBeenSet)
  {
   payload.WithObject("EntityId", m_entityId.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithObject("Name", m_name.Jsonize());

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithObject("ProductId", m_productId.Jsonize());

  }

  if(m_releaseDateHasBeenSet)
  {
   payload.WithObject("ReleaseDate", m_releaseDate.Jsonize());

  }

  if(m_availabilityEndDateHasBeenSet)
  {
   payload.WithObject("AvailabilityEndDate", m_availabilityEndDate.Jsonize());

  }

  if(m_buyerAccountsHasBeenSet)
  {
   payload.WithObject("BuyerAccounts", m_buyerAccounts.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("State", m_state.Jsonize());

  }

  if(m_targetingHasBeenSet)
  {
   payload.WithObject("Targeting", m_targeting.Jsonize());

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithObject("LastModifiedDate", m_lastModifiedDate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
