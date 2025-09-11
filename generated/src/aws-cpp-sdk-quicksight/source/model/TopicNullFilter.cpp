/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicNullFilter.h>
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

TopicNullFilter::TopicNullFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

TopicNullFilter& TopicNullFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NullFilterType"))
  {
    m_nullFilterType = NullFilterTypeMapper::GetNullFilterTypeForName(jsonValue.GetString("NullFilterType"));
    m_nullFilterTypeHasBeenSet = true;
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

JsonValue TopicNullFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nullFilterTypeHasBeenSet)
  {
   payload.WithString("NullFilterType", NullFilterTypeMapper::GetNameForNullFilterType(m_nullFilterType));
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
