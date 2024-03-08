/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/ResaleAuthorizationSummary.h>
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

ResaleAuthorizationSummary::ResaleAuthorizationSummary() : 
    m_nameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_manufacturerAccountIdHasBeenSet(false),
    m_manufacturerLegalNameHasBeenSet(false),
    m_resellerAccountIDHasBeenSet(false),
    m_resellerLegalNameHasBeenSet(false),
    m_status(ResaleAuthorizationStatusString::NOT_SET),
    m_statusHasBeenSet(false),
    m_offerExtendedStatusHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_availabilityEndDateHasBeenSet(false)
{
}

ResaleAuthorizationSummary::ResaleAuthorizationSummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_manufacturerAccountIdHasBeenSet(false),
    m_manufacturerLegalNameHasBeenSet(false),
    m_resellerAccountIDHasBeenSet(false),
    m_resellerLegalNameHasBeenSet(false),
    m_status(ResaleAuthorizationStatusString::NOT_SET),
    m_statusHasBeenSet(false),
    m_offerExtendedStatusHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_availabilityEndDateHasBeenSet(false)
{
  *this = jsonValue;
}

ResaleAuthorizationSummary& ResaleAuthorizationSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ProductName"))
  {
    m_productName = jsonValue.GetString("ProductName");

    m_productNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManufacturerAccountId"))
  {
    m_manufacturerAccountId = jsonValue.GetString("ManufacturerAccountId");

    m_manufacturerAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManufacturerLegalName"))
  {
    m_manufacturerLegalName = jsonValue.GetString("ManufacturerLegalName");

    m_manufacturerLegalNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResellerAccountID"))
  {
    m_resellerAccountID = jsonValue.GetString("ResellerAccountID");

    m_resellerAccountIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResellerLegalName"))
  {
    m_resellerLegalName = jsonValue.GetString("ResellerLegalName");

    m_resellerLegalNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ResaleAuthorizationStatusStringMapper::GetResaleAuthorizationStatusStringForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OfferExtendedStatus"))
  {
    m_offerExtendedStatus = jsonValue.GetString("OfferExtendedStatus");

    m_offerExtendedStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetString("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityEndDate"))
  {
    m_availabilityEndDate = jsonValue.GetString("AvailabilityEndDate");

    m_availabilityEndDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ResaleAuthorizationSummary::Jsonize() const
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

  if(m_productNameHasBeenSet)
  {
   payload.WithString("ProductName", m_productName);

  }

  if(m_manufacturerAccountIdHasBeenSet)
  {
   payload.WithString("ManufacturerAccountId", m_manufacturerAccountId);

  }

  if(m_manufacturerLegalNameHasBeenSet)
  {
   payload.WithString("ManufacturerLegalName", m_manufacturerLegalName);

  }

  if(m_resellerAccountIDHasBeenSet)
  {
   payload.WithString("ResellerAccountID", m_resellerAccountID);

  }

  if(m_resellerLegalNameHasBeenSet)
  {
   payload.WithString("ResellerLegalName", m_resellerLegalName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ResaleAuthorizationStatusStringMapper::GetNameForResaleAuthorizationStatusString(m_status));
  }

  if(m_offerExtendedStatusHasBeenSet)
  {
   payload.WithString("OfferExtendedStatus", m_offerExtendedStatus);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("CreatedDate", m_createdDate);

  }

  if(m_availabilityEndDateHasBeenSet)
  {
   payload.WithString("AvailabilityEndDate", m_availabilityEndDate);

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
