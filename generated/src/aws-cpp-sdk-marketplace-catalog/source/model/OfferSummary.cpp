/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/OfferSummary.h>
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

OfferSummary::OfferSummary() : 
    m_nameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_releaseDateHasBeenSet(false),
    m_availabilityEndDateHasBeenSet(false),
    m_buyerAccountsHasBeenSet(false),
    m_state(OfferStateString::NOT_SET),
    m_stateHasBeenSet(false),
    m_targetingHasBeenSet(false)
{
}

OfferSummary::OfferSummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_releaseDateHasBeenSet(false),
    m_availabilityEndDateHasBeenSet(false),
    m_buyerAccountsHasBeenSet(false),
    m_state(OfferStateString::NOT_SET),
    m_stateHasBeenSet(false),
    m_targetingHasBeenSet(false)
{
  *this = jsonValue;
}

OfferSummary& OfferSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductId"))
  {
    m_productId = jsonValue.GetString("ProductId");

    m_productIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReleaseDate"))
  {
    m_releaseDate = jsonValue.GetString("ReleaseDate");

    m_releaseDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityEndDate"))
  {
    m_availabilityEndDate = jsonValue.GetString("AvailabilityEndDate");

    m_availabilityEndDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BuyerAccounts"))
  {
    Aws::Utils::Array<JsonView> buyerAccountsJsonList = jsonValue.GetArray("BuyerAccounts");
    for(unsigned buyerAccountsIndex = 0; buyerAccountsIndex < buyerAccountsJsonList.GetLength(); ++buyerAccountsIndex)
    {
      m_buyerAccounts.push_back(buyerAccountsJsonList[buyerAccountsIndex].AsString());
    }
    m_buyerAccountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = OfferStateStringMapper::GetOfferStateStringForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Targeting"))
  {
    Aws::Utils::Array<JsonView> targetingJsonList = jsonValue.GetArray("Targeting");
    for(unsigned targetingIndex = 0; targetingIndex < targetingJsonList.GetLength(); ++targetingIndex)
    {
      m_targeting.push_back(OfferTargetingStringMapper::GetOfferTargetingStringForName(targetingJsonList[targetingIndex].AsString()));
    }
    m_targetingHasBeenSet = true;
  }

  return *this;
}

JsonValue OfferSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  if(m_releaseDateHasBeenSet)
  {
   payload.WithString("ReleaseDate", m_releaseDate);

  }

  if(m_availabilityEndDateHasBeenSet)
  {
   payload.WithString("AvailabilityEndDate", m_availabilityEndDate);

  }

  if(m_buyerAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> buyerAccountsJsonList(m_buyerAccounts.size());
   for(unsigned buyerAccountsIndex = 0; buyerAccountsIndex < buyerAccountsJsonList.GetLength(); ++buyerAccountsIndex)
   {
     buyerAccountsJsonList[buyerAccountsIndex].AsString(m_buyerAccounts[buyerAccountsIndex]);
   }
   payload.WithArray("BuyerAccounts", std::move(buyerAccountsJsonList));

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", OfferStateStringMapper::GetNameForOfferStateString(m_state));
  }

  if(m_targetingHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetingJsonList(m_targeting.size());
   for(unsigned targetingIndex = 0; targetingIndex < targetingJsonList.GetLength(); ++targetingIndex)
   {
     targetingJsonList[targetingIndex].AsString(OfferTargetingStringMapper::GetNameForOfferTargetingString(m_targeting[targetingIndex]));
   }
   payload.WithArray("Targeting", std::move(targetingJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
