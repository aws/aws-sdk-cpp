/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/RateCardItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AgreementService
{
namespace Model
{

RateCardItem::RateCardItem() : 
    m_dimensionKeyHasBeenSet(false),
    m_priceHasBeenSet(false)
{
}

RateCardItem::RateCardItem(JsonView jsonValue) : 
    m_dimensionKeyHasBeenSet(false),
    m_priceHasBeenSet(false)
{
  *this = jsonValue;
}

RateCardItem& RateCardItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dimensionKey"))
  {
    m_dimensionKey = jsonValue.GetString("dimensionKey");

    m_dimensionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("price"))
  {
    m_price = jsonValue.GetString("price");

    m_priceHasBeenSet = true;
  }

  return *this;
}

JsonValue RateCardItem::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionKeyHasBeenSet)
  {
   payload.WithString("dimensionKey", m_dimensionKey);

  }

  if(m_priceHasBeenSet)
  {
   payload.WithString("price", m_price);

  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
