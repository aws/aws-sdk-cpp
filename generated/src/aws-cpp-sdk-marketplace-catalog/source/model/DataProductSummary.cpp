/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/DataProductSummary.h>
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

DataProductSummary::DataProductSummary() : 
    m_productTitleHasBeenSet(false),
    m_visibility(DataProductVisibilityString::NOT_SET),
    m_visibilityHasBeenSet(false)
{
}

DataProductSummary::DataProductSummary(JsonView jsonValue) : 
    m_productTitleHasBeenSet(false),
    m_visibility(DataProductVisibilityString::NOT_SET),
    m_visibilityHasBeenSet(false)
{
  *this = jsonValue;
}

DataProductSummary& DataProductSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProductTitle"))
  {
    m_productTitle = jsonValue.GetString("ProductTitle");

    m_productTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = DataProductVisibilityStringMapper::GetDataProductVisibilityStringForName(jsonValue.GetString("Visibility"));

    m_visibilityHasBeenSet = true;
  }

  return *this;
}

JsonValue DataProductSummary::Jsonize() const
{
  JsonValue payload;

  if(m_productTitleHasBeenSet)
  {
   payload.WithString("ProductTitle", m_productTitle);

  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", DataProductVisibilityStringMapper::GetNameForDataProductVisibilityString(m_visibility));
  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
