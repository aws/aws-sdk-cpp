/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ColumnGroup.h>
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

ColumnGroup::ColumnGroup() : 
    m_geoSpatialColumnGroupHasBeenSet(false)
{
}

ColumnGroup::ColumnGroup(JsonView jsonValue) : 
    m_geoSpatialColumnGroupHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnGroup& ColumnGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GeoSpatialColumnGroup"))
  {
    m_geoSpatialColumnGroup = jsonValue.GetObject("GeoSpatialColumnGroup");

    m_geoSpatialColumnGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnGroup::Jsonize() const
{
  JsonValue payload;

  if(m_geoSpatialColumnGroupHasBeenSet)
  {
   payload.WithObject("GeoSpatialColumnGroup", m_geoSpatialColumnGroup.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
