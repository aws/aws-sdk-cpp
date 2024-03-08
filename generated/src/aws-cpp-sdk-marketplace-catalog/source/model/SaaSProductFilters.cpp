/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/SaaSProductFilters.h>
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

SaaSProductFilters::SaaSProductFilters() : 
    m_entityIdHasBeenSet(false),
    m_productTitleHasBeenSet(false),
    m_visibilityHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
}

SaaSProductFilters::SaaSProductFilters(JsonView jsonValue) : 
    m_entityIdHasBeenSet(false),
    m_productTitleHasBeenSet(false),
    m_visibilityHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
  *this = jsonValue;
}

SaaSProductFilters& SaaSProductFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EntityId"))
  {
    m_entityId = jsonValue.GetObject("EntityId");

    m_entityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductTitle"))
  {
    m_productTitle = jsonValue.GetObject("ProductTitle");

    m_productTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = jsonValue.GetObject("Visibility");

    m_visibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetObject("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  return *this;
}

JsonValue SaaSProductFilters::Jsonize() const
{
  JsonValue payload;

  if(m_entityIdHasBeenSet)
  {
   payload.WithObject("EntityId", m_entityId.Jsonize());

  }

  if(m_productTitleHasBeenSet)
  {
   payload.WithObject("ProductTitle", m_productTitle.Jsonize());

  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithObject("Visibility", m_visibility.Jsonize());

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
