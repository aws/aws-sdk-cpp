/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/AmiProductSummary.h>
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

AmiProductSummary::AmiProductSummary() : 
    m_productTitleHasBeenSet(false),
    m_visibility(AmiProductVisibilityString::NOT_SET),
    m_visibilityHasBeenSet(false)
{
}

AmiProductSummary::AmiProductSummary(JsonView jsonValue) : 
    m_productTitleHasBeenSet(false),
    m_visibility(AmiProductVisibilityString::NOT_SET),
    m_visibilityHasBeenSet(false)
{
  *this = jsonValue;
}

AmiProductSummary& AmiProductSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProductTitle"))
  {
    m_productTitle = jsonValue.GetString("ProductTitle");

    m_productTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = AmiProductVisibilityStringMapper::GetAmiProductVisibilityStringForName(jsonValue.GetString("Visibility"));

    m_visibilityHasBeenSet = true;
  }

  return *this;
}

JsonValue AmiProductSummary::Jsonize() const
{
  JsonValue payload;

  if(m_productTitleHasBeenSet)
  {
   payload.WithString("ProductTitle", m_productTitle);

  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", AmiProductVisibilityStringMapper::GetNameForAmiProductVisibilityString(m_visibility));
  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
