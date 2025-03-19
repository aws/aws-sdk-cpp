/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/MultiRegionCluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

MultiRegionCluster::MultiRegionCluster(JsonView jsonValue)
{
  *this = jsonValue;
}

MultiRegionCluster& MultiRegionCluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MultiRegionClusterName"))
  {
    m_multiRegionClusterName = jsonValue.GetString("MultiRegionClusterName");
    m_multiRegionClusterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NodeType"))
  {
    m_nodeType = jsonValue.GetString("NodeType");
    m_nodeTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Engine"))
  {
    m_engine = jsonValue.GetString("Engine");
    m_engineHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");
    m_engineVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfShards"))
  {
    m_numberOfShards = jsonValue.GetInteger("NumberOfShards");
    m_numberOfShardsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Clusters"))
  {
    Aws::Utils::Array<JsonView> clustersJsonList = jsonValue.GetArray("Clusters");
    for(unsigned clustersIndex = 0; clustersIndex < clustersJsonList.GetLength(); ++clustersIndex)
    {
      m_clusters.push_back(clustersJsonList[clustersIndex].AsObject());
    }
    m_clustersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MultiRegionParameterGroupName"))
  {
    m_multiRegionParameterGroupName = jsonValue.GetString("MultiRegionParameterGroupName");
    m_multiRegionParameterGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TLSEnabled"))
  {
    m_tLSEnabled = jsonValue.GetBool("TLSEnabled");
    m_tLSEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");
    m_aRNHasBeenSet = true;
  }
  return *this;
}

JsonValue MultiRegionCluster::Jsonize() const
{
  JsonValue payload;

  if(m_multiRegionClusterNameHasBeenSet)
  {
   payload.WithString("MultiRegionClusterName", m_multiRegionClusterName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("NodeType", m_nodeType);

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("Engine", m_engine);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_numberOfShardsHasBeenSet)
  {
   payload.WithInteger("NumberOfShards", m_numberOfShards);

  }

  if(m_clustersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clustersJsonList(m_clusters.size());
   for(unsigned clustersIndex = 0; clustersIndex < clustersJsonList.GetLength(); ++clustersIndex)
   {
     clustersJsonList[clustersIndex].AsObject(m_clusters[clustersIndex].Jsonize());
   }
   payload.WithArray("Clusters", std::move(clustersJsonList));

  }

  if(m_multiRegionParameterGroupNameHasBeenSet)
  {
   payload.WithString("MultiRegionParameterGroupName", m_multiRegionParameterGroupName);

  }

  if(m_tLSEnabledHasBeenSet)
  {
   payload.WithBool("TLSEnabled", m_tLSEnabled);

  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
