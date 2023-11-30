/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/EntityTypeSort.h>
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

EntityTypeSort::EntityTypeSort() : 
    m_dataProductSortHasBeenSet(false),
    m_saaSProductSortHasBeenSet(false),
    m_amiProductSortHasBeenSet(false),
    m_offerSortHasBeenSet(false),
    m_containerProductSortHasBeenSet(false),
    m_resaleAuthorizationSortHasBeenSet(false)
{
}

EntityTypeSort::EntityTypeSort(JsonView jsonValue) : 
    m_dataProductSortHasBeenSet(false),
    m_saaSProductSortHasBeenSet(false),
    m_amiProductSortHasBeenSet(false),
    m_offerSortHasBeenSet(false),
    m_containerProductSortHasBeenSet(false),
    m_resaleAuthorizationSortHasBeenSet(false)
{
  *this = jsonValue;
}

EntityTypeSort& EntityTypeSort::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataProductSort"))
  {
    m_dataProductSort = jsonValue.GetObject("DataProductSort");

    m_dataProductSortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SaaSProductSort"))
  {
    m_saaSProductSort = jsonValue.GetObject("SaaSProductSort");

    m_saaSProductSortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmiProductSort"))
  {
    m_amiProductSort = jsonValue.GetObject("AmiProductSort");

    m_amiProductSortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OfferSort"))
  {
    m_offerSort = jsonValue.GetObject("OfferSort");

    m_offerSortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerProductSort"))
  {
    m_containerProductSort = jsonValue.GetObject("ContainerProductSort");

    m_containerProductSortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResaleAuthorizationSort"))
  {
    m_resaleAuthorizationSort = jsonValue.GetObject("ResaleAuthorizationSort");

    m_resaleAuthorizationSortHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityTypeSort::Jsonize() const
{
  JsonValue payload;

  if(m_dataProductSortHasBeenSet)
  {
   payload.WithObject("DataProductSort", m_dataProductSort.Jsonize());

  }

  if(m_saaSProductSortHasBeenSet)
  {
   payload.WithObject("SaaSProductSort", m_saaSProductSort.Jsonize());

  }

  if(m_amiProductSortHasBeenSet)
  {
   payload.WithObject("AmiProductSort", m_amiProductSort.Jsonize());

  }

  if(m_offerSortHasBeenSet)
  {
   payload.WithObject("OfferSort", m_offerSort.Jsonize());

  }

  if(m_containerProductSortHasBeenSet)
  {
   payload.WithObject("ContainerProductSort", m_containerProductSort.Jsonize());

  }

  if(m_resaleAuthorizationSortHasBeenSet)
  {
   payload.WithObject("ResaleAuthorizationSort", m_resaleAuthorizationSort.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
