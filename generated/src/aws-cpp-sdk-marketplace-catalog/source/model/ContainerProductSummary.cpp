/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/ContainerProductSummary.h>
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

ContainerProductSummary::ContainerProductSummary() : 
    m_productTitleHasBeenSet(false),
    m_visibility(ContainerProductVisibilityString::NOT_SET),
    m_visibilityHasBeenSet(false)
{
}

ContainerProductSummary::ContainerProductSummary(JsonView jsonValue) : 
    m_productTitleHasBeenSet(false),
    m_visibility(ContainerProductVisibilityString::NOT_SET),
    m_visibilityHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerProductSummary& ContainerProductSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProductTitle"))
  {
    m_productTitle = jsonValue.GetString("ProductTitle");

    m_productTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = ContainerProductVisibilityStringMapper::GetContainerProductVisibilityStringForName(jsonValue.GetString("Visibility"));

    m_visibilityHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerProductSummary::Jsonize() const
{
  JsonValue payload;

  if(m_productTitleHasBeenSet)
  {
   payload.WithString("ProductTitle", m_productTitle);

  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", ContainerProductVisibilityStringMapper::GetNameForContainerProductVisibilityString(m_visibility));
  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
