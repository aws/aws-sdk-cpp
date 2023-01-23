/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ItemsLimitConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ItemsLimitConfiguration::ItemsLimitConfiguration() : 
    m_itemsLimit(0),
    m_itemsLimitHasBeenSet(false),
    m_otherCategories(OtherCategories::NOT_SET),
    m_otherCategoriesHasBeenSet(false)
{
}

ItemsLimitConfiguration::ItemsLimitConfiguration(JsonView jsonValue) : 
    m_itemsLimit(0),
    m_itemsLimitHasBeenSet(false),
    m_otherCategories(OtherCategories::NOT_SET),
    m_otherCategoriesHasBeenSet(false)
{
  *this = jsonValue;
}

ItemsLimitConfiguration& ItemsLimitConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ItemsLimit"))
  {
    m_itemsLimit = jsonValue.GetInt64("ItemsLimit");

    m_itemsLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OtherCategories"))
  {
    m_otherCategories = OtherCategoriesMapper::GetOtherCategoriesForName(jsonValue.GetString("OtherCategories"));

    m_otherCategoriesHasBeenSet = true;
  }

  return *this;
}

JsonValue ItemsLimitConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_itemsLimitHasBeenSet)
  {
   payload.WithInt64("ItemsLimit", m_itemsLimit);

  }

  if(m_otherCategoriesHasBeenSet)
  {
   payload.WithString("OtherCategories", OtherCategoriesMapper::GetNameForOtherCategories(m_otherCategories));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
