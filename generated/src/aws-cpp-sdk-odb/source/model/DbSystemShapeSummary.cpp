/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/DbSystemShapeSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace odb
{
namespace Model
{

DbSystemShapeSummary::DbSystemShapeSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

DbSystemShapeSummary& DbSystemShapeSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("availableCoreCount"))
  {
    m_availableCoreCount = jsonValue.GetInteger("availableCoreCount");
    m_availableCoreCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availableCoreCountPerNode"))
  {
    m_availableCoreCountPerNode = jsonValue.GetInteger("availableCoreCountPerNode");
    m_availableCoreCountPerNodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availableDataStorageInTBs"))
  {
    m_availableDataStorageInTBs = jsonValue.GetInteger("availableDataStorageInTBs");
    m_availableDataStorageInTBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availableDataStoragePerServerInTBs"))
  {
    m_availableDataStoragePerServerInTBs = jsonValue.GetInteger("availableDataStoragePerServerInTBs");
    m_availableDataStoragePerServerInTBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availableDbNodePerNodeInGBs"))
  {
    m_availableDbNodePerNodeInGBs = jsonValue.GetInteger("availableDbNodePerNodeInGBs");
    m_availableDbNodePerNodeInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availableDbNodeStorageInGBs"))
  {
    m_availableDbNodeStorageInGBs = jsonValue.GetInteger("availableDbNodeStorageInGBs");
    m_availableDbNodeStorageInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availableMemoryInGBs"))
  {
    m_availableMemoryInGBs = jsonValue.GetInteger("availableMemoryInGBs");
    m_availableMemoryInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availableMemoryPerNodeInGBs"))
  {
    m_availableMemoryPerNodeInGBs = jsonValue.GetInteger("availableMemoryPerNodeInGBs");
    m_availableMemoryPerNodeInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("coreCountIncrement"))
  {
    m_coreCountIncrement = jsonValue.GetInteger("coreCountIncrement");
    m_coreCountIncrementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxStorageCount"))
  {
    m_maxStorageCount = jsonValue.GetInteger("maxStorageCount");
    m_maxStorageCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maximumNodeCount"))
  {
    m_maximumNodeCount = jsonValue.GetInteger("maximumNodeCount");
    m_maximumNodeCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minCoreCountPerNode"))
  {
    m_minCoreCountPerNode = jsonValue.GetInteger("minCoreCountPerNode");
    m_minCoreCountPerNodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minDataStorageInTBs"))
  {
    m_minDataStorageInTBs = jsonValue.GetInteger("minDataStorageInTBs");
    m_minDataStorageInTBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minDbNodeStoragePerNodeInGBs"))
  {
    m_minDbNodeStoragePerNodeInGBs = jsonValue.GetInteger("minDbNodeStoragePerNodeInGBs");
    m_minDbNodeStoragePerNodeInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minMemoryPerNodeInGBs"))
  {
    m_minMemoryPerNodeInGBs = jsonValue.GetInteger("minMemoryPerNodeInGBs");
    m_minMemoryPerNodeInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minStorageCount"))
  {
    m_minStorageCount = jsonValue.GetInteger("minStorageCount");
    m_minStorageCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minimumCoreCount"))
  {
    m_minimumCoreCount = jsonValue.GetInteger("minimumCoreCount");
    m_minimumCoreCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minimumNodeCount"))
  {
    m_minimumNodeCount = jsonValue.GetInteger("minimumNodeCount");
    m_minimumNodeCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runtimeMinimumCoreCount"))
  {
    m_runtimeMinimumCoreCount = jsonValue.GetInteger("runtimeMinimumCoreCount");
    m_runtimeMinimumCoreCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shapeFamily"))
  {
    m_shapeFamily = jsonValue.GetString("shapeFamily");
    m_shapeFamilyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shapeType"))
  {
    m_shapeType = ShapeTypeMapper::GetShapeTypeForName(jsonValue.GetString("shapeType"));
    m_shapeTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computeModel"))
  {
    m_computeModel = ComputeModelMapper::GetComputeModelForName(jsonValue.GetString("computeModel"));
    m_computeModelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("areServerTypesSupported"))
  {
    m_areServerTypesSupported = jsonValue.GetBool("areServerTypesSupported");
    m_areServerTypesSupportedHasBeenSet = true;
  }
  return *this;
}

JsonValue DbSystemShapeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_availableCoreCountHasBeenSet)
  {
   payload.WithInteger("availableCoreCount", m_availableCoreCount);

  }

  if(m_availableCoreCountPerNodeHasBeenSet)
  {
   payload.WithInteger("availableCoreCountPerNode", m_availableCoreCountPerNode);

  }

  if(m_availableDataStorageInTBsHasBeenSet)
  {
   payload.WithInteger("availableDataStorageInTBs", m_availableDataStorageInTBs);

  }

  if(m_availableDataStoragePerServerInTBsHasBeenSet)
  {
   payload.WithInteger("availableDataStoragePerServerInTBs", m_availableDataStoragePerServerInTBs);

  }

  if(m_availableDbNodePerNodeInGBsHasBeenSet)
  {
   payload.WithInteger("availableDbNodePerNodeInGBs", m_availableDbNodePerNodeInGBs);

  }

  if(m_availableDbNodeStorageInGBsHasBeenSet)
  {
   payload.WithInteger("availableDbNodeStorageInGBs", m_availableDbNodeStorageInGBs);

  }

  if(m_availableMemoryInGBsHasBeenSet)
  {
   payload.WithInteger("availableMemoryInGBs", m_availableMemoryInGBs);

  }

  if(m_availableMemoryPerNodeInGBsHasBeenSet)
  {
   payload.WithInteger("availableMemoryPerNodeInGBs", m_availableMemoryPerNodeInGBs);

  }

  if(m_coreCountIncrementHasBeenSet)
  {
   payload.WithInteger("coreCountIncrement", m_coreCountIncrement);

  }

  if(m_maxStorageCountHasBeenSet)
  {
   payload.WithInteger("maxStorageCount", m_maxStorageCount);

  }

  if(m_maximumNodeCountHasBeenSet)
  {
   payload.WithInteger("maximumNodeCount", m_maximumNodeCount);

  }

  if(m_minCoreCountPerNodeHasBeenSet)
  {
   payload.WithInteger("minCoreCountPerNode", m_minCoreCountPerNode);

  }

  if(m_minDataStorageInTBsHasBeenSet)
  {
   payload.WithInteger("minDataStorageInTBs", m_minDataStorageInTBs);

  }

  if(m_minDbNodeStoragePerNodeInGBsHasBeenSet)
  {
   payload.WithInteger("minDbNodeStoragePerNodeInGBs", m_minDbNodeStoragePerNodeInGBs);

  }

  if(m_minMemoryPerNodeInGBsHasBeenSet)
  {
   payload.WithInteger("minMemoryPerNodeInGBs", m_minMemoryPerNodeInGBs);

  }

  if(m_minStorageCountHasBeenSet)
  {
   payload.WithInteger("minStorageCount", m_minStorageCount);

  }

  if(m_minimumCoreCountHasBeenSet)
  {
   payload.WithInteger("minimumCoreCount", m_minimumCoreCount);

  }

  if(m_minimumNodeCountHasBeenSet)
  {
   payload.WithInteger("minimumNodeCount", m_minimumNodeCount);

  }

  if(m_runtimeMinimumCoreCountHasBeenSet)
  {
   payload.WithInteger("runtimeMinimumCoreCount", m_runtimeMinimumCoreCount);

  }

  if(m_shapeFamilyHasBeenSet)
  {
   payload.WithString("shapeFamily", m_shapeFamily);

  }

  if(m_shapeTypeHasBeenSet)
  {
   payload.WithString("shapeType", ShapeTypeMapper::GetNameForShapeType(m_shapeType));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_computeModelHasBeenSet)
  {
   payload.WithString("computeModel", ComputeModelMapper::GetNameForComputeModel(m_computeModel));
  }

  if(m_areServerTypesSupportedHasBeenSet)
  {
   payload.WithBool("areServerTypesSupported", m_areServerTypesSupported);

  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
