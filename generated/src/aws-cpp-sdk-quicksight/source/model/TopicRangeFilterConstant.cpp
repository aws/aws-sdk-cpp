/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicRangeFilterConstant.h>
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

TopicRangeFilterConstant::TopicRangeFilterConstant() : 
    m_constantType(ConstantType::NOT_SET),
    m_constantTypeHasBeenSet(false),
    m_rangeConstantHasBeenSet(false)
{
}

TopicRangeFilterConstant::TopicRangeFilterConstant(JsonView jsonValue) : 
    m_constantType(ConstantType::NOT_SET),
    m_constantTypeHasBeenSet(false),
    m_rangeConstantHasBeenSet(false)
{
  *this = jsonValue;
}

TopicRangeFilterConstant& TopicRangeFilterConstant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConstantType"))
  {
    m_constantType = ConstantTypeMapper::GetConstantTypeForName(jsonValue.GetString("ConstantType"));

    m_constantTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RangeConstant"))
  {
    m_rangeConstant = jsonValue.GetObject("RangeConstant");

    m_rangeConstantHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicRangeFilterConstant::Jsonize() const
{
  JsonValue payload;

  if(m_constantTypeHasBeenSet)
  {
   payload.WithString("ConstantType", ConstantTypeMapper::GetNameForConstantType(m_constantType));
  }

  if(m_rangeConstantHasBeenSet)
  {
   payload.WithObject("RangeConstant", m_rangeConstant.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
