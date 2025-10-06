/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/RegionStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

RegionStatus::RegionStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

RegionStatus& RegionStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Index"))
  {
    m_index = jsonValue.GetObject("Index");
    m_indexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("View"))
  {
    m_view = jsonValue.GetObject("View");
    m_viewHasBeenSet = true;
  }
  return *this;
}

JsonValue RegionStatus::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_indexHasBeenSet)
  {
   payload.WithObject("Index", m_index.Jsonize());

  }

  if(m_viewHasBeenSet)
  {
   payload.WithObject("View", m_view.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
