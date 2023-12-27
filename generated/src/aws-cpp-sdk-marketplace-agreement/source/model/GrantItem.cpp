/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/GrantItem.h>
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

GrantItem::GrantItem() : 
    m_dimensionKeyHasBeenSet(false),
    m_maxQuantity(0),
    m_maxQuantityHasBeenSet(false)
{
}

GrantItem::GrantItem(JsonView jsonValue) : 
    m_dimensionKeyHasBeenSet(false),
    m_maxQuantity(0),
    m_maxQuantityHasBeenSet(false)
{
  *this = jsonValue;
}

GrantItem& GrantItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dimensionKey"))
  {
    m_dimensionKey = jsonValue.GetString("dimensionKey");

    m_dimensionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxQuantity"))
  {
    m_maxQuantity = jsonValue.GetInteger("maxQuantity");

    m_maxQuantityHasBeenSet = true;
  }

  return *this;
}

JsonValue GrantItem::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionKeyHasBeenSet)
  {
   payload.WithString("dimensionKey", m_dimensionKey);

  }

  if(m_maxQuantityHasBeenSet)
  {
   payload.WithInteger("maxQuantity", m_maxQuantity);

  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
