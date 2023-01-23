/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialPointStyleOptions.h>
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

GeospatialPointStyleOptions::GeospatialPointStyleOptions() : 
    m_selectedPointStyle(GeospatialSelectedPointStyle::NOT_SET),
    m_selectedPointStyleHasBeenSet(false),
    m_clusterMarkerConfigurationHasBeenSet(false)
{
}

GeospatialPointStyleOptions::GeospatialPointStyleOptions(JsonView jsonValue) : 
    m_selectedPointStyle(GeospatialSelectedPointStyle::NOT_SET),
    m_selectedPointStyleHasBeenSet(false),
    m_clusterMarkerConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

GeospatialPointStyleOptions& GeospatialPointStyleOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SelectedPointStyle"))
  {
    m_selectedPointStyle = GeospatialSelectedPointStyleMapper::GetGeospatialSelectedPointStyleForName(jsonValue.GetString("SelectedPointStyle"));

    m_selectedPointStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterMarkerConfiguration"))
  {
    m_clusterMarkerConfiguration = jsonValue.GetObject("ClusterMarkerConfiguration");

    m_clusterMarkerConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue GeospatialPointStyleOptions::Jsonize() const
{
  JsonValue payload;

  if(m_selectedPointStyleHasBeenSet)
  {
   payload.WithString("SelectedPointStyle", GeospatialSelectedPointStyleMapper::GetNameForGeospatialSelectedPointStyle(m_selectedPointStyle));
  }

  if(m_clusterMarkerConfigurationHasBeenSet)
  {
   payload.WithObject("ClusterMarkerConfiguration", m_clusterMarkerConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
