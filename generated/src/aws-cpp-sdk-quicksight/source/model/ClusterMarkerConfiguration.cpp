/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ClusterMarkerConfiguration.h>
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

ClusterMarkerConfiguration::ClusterMarkerConfiguration() : 
    m_clusterMarkerHasBeenSet(false)
{
}

ClusterMarkerConfiguration::ClusterMarkerConfiguration(JsonView jsonValue) : 
    m_clusterMarkerHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterMarkerConfiguration& ClusterMarkerConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterMarker"))
  {
    m_clusterMarker = jsonValue.GetObject("ClusterMarker");

    m_clusterMarkerHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterMarkerConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_clusterMarkerHasBeenSet)
  {
   payload.WithObject("ClusterMarker", m_clusterMarker.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
