/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicCategoryFilter.h>
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

TopicCategoryFilter::TopicCategoryFilter() : 
    m_categoryFilterFunction(CategoryFilterFunction::NOT_SET),
    m_categoryFilterFunctionHasBeenSet(false),
    m_categoryFilterType(CategoryFilterType::NOT_SET),
    m_categoryFilterTypeHasBeenSet(false),
    m_constantHasBeenSet(false),
    m_inverse(false),
    m_inverseHasBeenSet(false)
{
}

TopicCategoryFilter::TopicCategoryFilter(JsonView jsonValue) : 
    m_categoryFilterFunction(CategoryFilterFunction::NOT_SET),
    m_categoryFilterFunctionHasBeenSet(false),
    m_categoryFilterType(CategoryFilterType::NOT_SET),
    m_categoryFilterTypeHasBeenSet(false),
    m_constantHasBeenSet(false),
    m_inverse(false),
    m_inverseHasBeenSet(false)
{
  *this = jsonValue;
}

TopicCategoryFilter& TopicCategoryFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CategoryFilterFunction"))
  {
    m_categoryFilterFunction = CategoryFilterFunctionMapper::GetCategoryFilterFunctionForName(jsonValue.GetString("CategoryFilterFunction"));

    m_categoryFilterFunctionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoryFilterType"))
  {
    m_categoryFilterType = CategoryFilterTypeMapper::GetCategoryFilterTypeForName(jsonValue.GetString("CategoryFilterType"));

    m_categoryFilterTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Constant"))
  {
    m_constant = jsonValue.GetObject("Constant");

    m_constantHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Inverse"))
  {
    m_inverse = jsonValue.GetBool("Inverse");

    m_inverseHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicCategoryFilter::Jsonize() const
{
  JsonValue payload;

  if(m_categoryFilterFunctionHasBeenSet)
  {
   payload.WithString("CategoryFilterFunction", CategoryFilterFunctionMapper::GetNameForCategoryFilterFunction(m_categoryFilterFunction));
  }

  if(m_categoryFilterTypeHasBeenSet)
  {
   payload.WithString("CategoryFilterType", CategoryFilterTypeMapper::GetNameForCategoryFilterType(m_categoryFilterType));
  }

  if(m_constantHasBeenSet)
  {
   payload.WithObject("Constant", m_constant.Jsonize());

  }

  if(m_inverseHasBeenSet)
  {
   payload.WithBool("Inverse", m_inverse);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
