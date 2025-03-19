/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/InnerFilter.h>
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

InnerFilter::InnerFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

InnerFilter& InnerFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CategoryInnerFilter"))
  {
    m_categoryInnerFilter = jsonValue.GetObject("CategoryInnerFilter");
    m_categoryInnerFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue InnerFilter::Jsonize() const
{
  JsonValue payload;

  if(m_categoryInnerFilterHasBeenSet)
  {
   payload.WithObject("CategoryInnerFilter", m_categoryInnerFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
