/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/EntityTypeFilters.h>
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

EntityTypeFilters::EntityTypeFilters(JsonView jsonValue)
{
  *this = jsonValue;
}

EntityTypeFilters& EntityTypeFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataProductFilters"))
  {
    m_dataProductFilters = jsonValue.GetObject("DataProductFilters");
    m_dataProductFiltersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SaaSProductFilters"))
  {
    m_saaSProductFilters = jsonValue.GetObject("SaaSProductFilters");
    m_saaSProductFiltersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AmiProductFilters"))
  {
    m_amiProductFilters = jsonValue.GetObject("AmiProductFilters");
    m_amiProductFiltersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OfferFilters"))
  {
    m_offerFilters = jsonValue.GetObject("OfferFilters");
    m_offerFiltersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContainerProductFilters"))
  {
    m_containerProductFilters = jsonValue.GetObject("ContainerProductFilters");
    m_containerProductFiltersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResaleAuthorizationFilters"))
  {
    m_resaleAuthorizationFilters = jsonValue.GetObject("ResaleAuthorizationFilters");
    m_resaleAuthorizationFiltersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MachineLearningProductFilters"))
  {
    m_machineLearningProductFilters = jsonValue.GetObject("MachineLearningProductFilters");
    m_machineLearningProductFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue EntityTypeFilters::Jsonize() const
{
  JsonValue payload;

  if(m_dataProductFiltersHasBeenSet)
  {
   payload.WithObject("DataProductFilters", m_dataProductFilters.Jsonize());

  }

  if(m_saaSProductFiltersHasBeenSet)
  {
   payload.WithObject("SaaSProductFilters", m_saaSProductFilters.Jsonize());

  }

  if(m_amiProductFiltersHasBeenSet)
  {
   payload.WithObject("AmiProductFilters", m_amiProductFilters.Jsonize());

  }

  if(m_offerFiltersHasBeenSet)
  {
   payload.WithObject("OfferFilters", m_offerFilters.Jsonize());

  }

  if(m_containerProductFiltersHasBeenSet)
  {
   payload.WithObject("ContainerProductFilters", m_containerProductFilters.Jsonize());

  }

  if(m_resaleAuthorizationFiltersHasBeenSet)
  {
   payload.WithObject("ResaleAuthorizationFilters", m_resaleAuthorizationFilters.Jsonize());

  }

  if(m_machineLearningProductFiltersHasBeenSet)
  {
   payload.WithObject("MachineLearningProductFilters", m_machineLearningProductFilters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
