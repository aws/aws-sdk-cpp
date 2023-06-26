/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicCategoryFilterConstant.h>
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

TopicCategoryFilterConstant::TopicCategoryFilterConstant() : 
    m_constantType(ConstantType::NOT_SET),
    m_constantTypeHasBeenSet(false),
    m_singularConstantHasBeenSet(false),
    m_collectiveConstantHasBeenSet(false)
{
}

TopicCategoryFilterConstant::TopicCategoryFilterConstant(JsonView jsonValue) : 
    m_constantType(ConstantType::NOT_SET),
    m_constantTypeHasBeenSet(false),
    m_singularConstantHasBeenSet(false),
    m_collectiveConstantHasBeenSet(false)
{
  *this = jsonValue;
}

TopicCategoryFilterConstant& TopicCategoryFilterConstant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConstantType"))
  {
    m_constantType = ConstantTypeMapper::GetConstantTypeForName(jsonValue.GetString("ConstantType"));

    m_constantTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SingularConstant"))
  {
    m_singularConstant = jsonValue.GetString("SingularConstant");

    m_singularConstantHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CollectiveConstant"))
  {
    m_collectiveConstant = jsonValue.GetObject("CollectiveConstant");

    m_collectiveConstantHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicCategoryFilterConstant::Jsonize() const
{
  JsonValue payload;

  if(m_constantTypeHasBeenSet)
  {
   payload.WithString("ConstantType", ConstantTypeMapper::GetNameForConstantType(m_constantType));
  }

  if(m_singularConstantHasBeenSet)
  {
   payload.WithString("SingularConstant", m_singularConstant);

  }

  if(m_collectiveConstantHasBeenSet)
  {
   payload.WithObject("CollectiveConstant", m_collectiveConstant.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
