/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialDataSourceItem.h>
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

GeospatialDataSourceItem::GeospatialDataSourceItem(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialDataSourceItem& GeospatialDataSourceItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StaticFileDataSource"))
  {
    m_staticFileDataSource = jsonValue.GetObject("StaticFileDataSource");
    m_staticFileDataSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialDataSourceItem::Jsonize() const
{
  JsonValue payload;

  if(m_staticFileDataSourceHasBeenSet)
  {
   payload.WithObject("StaticFileDataSource", m_staticFileDataSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
