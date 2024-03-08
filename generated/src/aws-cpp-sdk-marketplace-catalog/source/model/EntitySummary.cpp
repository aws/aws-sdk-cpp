/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/EntitySummary.h>
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

EntitySummary::EntitySummary() : 
    m_nameHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_entityArnHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_visibilityHasBeenSet(false),
    m_amiProductSummaryHasBeenSet(false),
    m_containerProductSummaryHasBeenSet(false),
    m_dataProductSummaryHasBeenSet(false),
    m_saaSProductSummaryHasBeenSet(false),
    m_offerSummaryHasBeenSet(false),
    m_resaleAuthorizationSummaryHasBeenSet(false)
{
}

EntitySummary::EntitySummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_entityArnHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_visibilityHasBeenSet(false),
    m_amiProductSummaryHasBeenSet(false),
    m_containerProductSummaryHasBeenSet(false),
    m_dataProductSummaryHasBeenSet(false),
    m_saaSProductSummaryHasBeenSet(false),
    m_offerSummaryHasBeenSet(false),
    m_resaleAuthorizationSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

EntitySummary& EntitySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityType"))
  {
    m_entityType = jsonValue.GetString("EntityType");

    m_entityTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityId"))
  {
    m_entityId = jsonValue.GetString("EntityId");

    m_entityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityArn"))
  {
    m_entityArn = jsonValue.GetString("EntityArn");

    m_entityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = jsonValue.GetString("Visibility");

    m_visibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmiProductSummary"))
  {
    m_amiProductSummary = jsonValue.GetObject("AmiProductSummary");

    m_amiProductSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerProductSummary"))
  {
    m_containerProductSummary = jsonValue.GetObject("ContainerProductSummary");

    m_containerProductSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataProductSummary"))
  {
    m_dataProductSummary = jsonValue.GetObject("DataProductSummary");

    m_dataProductSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SaaSProductSummary"))
  {
    m_saaSProductSummary = jsonValue.GetObject("SaaSProductSummary");

    m_saaSProductSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OfferSummary"))
  {
    m_offerSummary = jsonValue.GetObject("OfferSummary");

    m_offerSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResaleAuthorizationSummary"))
  {
    m_resaleAuthorizationSummary = jsonValue.GetObject("ResaleAuthorizationSummary");

    m_resaleAuthorizationSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue EntitySummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_entityTypeHasBeenSet)
  {
   payload.WithString("EntityType", m_entityType);

  }

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("EntityId", m_entityId);

  }

  if(m_entityArnHasBeenSet)
  {
   payload.WithString("EntityArn", m_entityArn);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithString("LastModifiedDate", m_lastModifiedDate);

  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", m_visibility);

  }

  if(m_amiProductSummaryHasBeenSet)
  {
   payload.WithObject("AmiProductSummary", m_amiProductSummary.Jsonize());

  }

  if(m_containerProductSummaryHasBeenSet)
  {
   payload.WithObject("ContainerProductSummary", m_containerProductSummary.Jsonize());

  }

  if(m_dataProductSummaryHasBeenSet)
  {
   payload.WithObject("DataProductSummary", m_dataProductSummary.Jsonize());

  }

  if(m_saaSProductSummaryHasBeenSet)
  {
   payload.WithObject("SaaSProductSummary", m_saaSProductSummary.Jsonize());

  }

  if(m_offerSummaryHasBeenSet)
  {
   payload.WithObject("OfferSummary", m_offerSummary.Jsonize());

  }

  if(m_resaleAuthorizationSummaryHasBeenSet)
  {
   payload.WithObject("ResaleAuthorizationSummary", m_resaleAuthorizationSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
