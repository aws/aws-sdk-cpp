/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/DimensionGroupDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PI
{
namespace Model
{

DimensionGroupDetail::DimensionGroupDetail() : 
    m_groupHasBeenSet(false),
    m_dimensionsHasBeenSet(false)
{
}

DimensionGroupDetail::DimensionGroupDetail(JsonView jsonValue) : 
    m_groupHasBeenSet(false),
    m_dimensionsHasBeenSet(false)
{
  *this = jsonValue;
}

DimensionGroupDetail& DimensionGroupDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Group"))
  {
    m_group = jsonValue.GetString("Group");

    m_groupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dimensions"))
  {
    Aws::Utils::Array<JsonView> dimensionsJsonList = jsonValue.GetArray("Dimensions");
    for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
    {
      m_dimensions.push_back(dimensionsJsonList[dimensionsIndex].AsObject());
    }
    m_dimensionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DimensionGroupDetail::Jsonize() const
{
  JsonValue payload;

  if(m_groupHasBeenSet)
  {
   payload.WithString("Group", m_group);

  }

  if(m_dimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionsJsonList(m_dimensions.size());
   for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
   {
     dimensionsJsonList[dimensionsIndex].AsObject(m_dimensions[dimensionsIndex].Jsonize());
   }
   payload.WithArray("Dimensions", std::move(dimensionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PI
} // namespace Aws
