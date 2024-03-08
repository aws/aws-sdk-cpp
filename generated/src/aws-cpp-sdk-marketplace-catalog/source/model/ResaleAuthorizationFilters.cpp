/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/ResaleAuthorizationFilters.h>
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

ResaleAuthorizationFilters::ResaleAuthorizationFilters() : 
    m_entityIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_availabilityEndDateHasBeenSet(false),
    m_manufacturerAccountIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_manufacturerLegalNameHasBeenSet(false),
    m_resellerAccountIDHasBeenSet(false),
    m_resellerLegalNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_offerExtendedStatusHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
}

ResaleAuthorizationFilters::ResaleAuthorizationFilters(JsonView jsonValue) : 
    m_entityIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_availabilityEndDateHasBeenSet(false),
    m_manufacturerAccountIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_manufacturerLegalNameHasBeenSet(false),
    m_resellerAccountIDHasBeenSet(false),
    m_resellerLegalNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_offerExtendedStatusHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
  *this = jsonValue;
}

ResaleAuthorizationFilters& ResaleAuthorizationFilters::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetObject("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityEndDate"))
  {
    m_availabilityEndDate = jsonValue.GetObject("AvailabilityEndDate");

    m_availabilityEndDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManufacturerAccountId"))
  {
    m_manufacturerAccountId = jsonValue.GetObject("ManufacturerAccountId");

    m_manufacturerAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductName"))
  {
    m_productName = jsonValue.GetObject("ProductName");

    m_productNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManufacturerLegalName"))
  {
    m_manufacturerLegalName = jsonValue.GetObject("ManufacturerLegalName");

    m_manufacturerLegalNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResellerAccountID"))
  {
    m_resellerAccountID = jsonValue.GetObject("ResellerAccountID");

    m_resellerAccountIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResellerLegalName"))
  {
    m_resellerLegalName = jsonValue.GetObject("ResellerLegalName");

    m_resellerLegalNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OfferExtendedStatus"))
  {
    m_offerExtendedStatus = jsonValue.GetObject("OfferExtendedStatus");

    m_offerExtendedStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetObject("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ResaleAuthorizationFilters::Jsonize() const
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

  if(m_createdDateHasBeenSet)
  {
   payload.WithObject("CreatedDate", m_createdDate.Jsonize());

  }

  if(m_availabilityEndDateHasBeenSet)
  {
   payload.WithObject("AvailabilityEndDate", m_availabilityEndDate.Jsonize());

  }

  if(m_manufacturerAccountIdHasBeenSet)
  {
   payload.WithObject("ManufacturerAccountId", m_manufacturerAccountId.Jsonize());

  }

  if(m_productNameHasBeenSet)
  {
   payload.WithObject("ProductName", m_productName.Jsonize());

  }

  if(m_manufacturerLegalNameHasBeenSet)
  {
   payload.WithObject("ManufacturerLegalName", m_manufacturerLegalName.Jsonize());

  }

  if(m_resellerAccountIDHasBeenSet)
  {
   payload.WithObject("ResellerAccountID", m_resellerAccountID.Jsonize());

  }

  if(m_resellerLegalNameHasBeenSet)
  {
   payload.WithObject("ResellerLegalName", m_resellerLegalName.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_offerExtendedStatusHasBeenSet)
  {
   payload.WithObject("OfferExtendedStatus", m_offerExtendedStatus.Jsonize());

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
