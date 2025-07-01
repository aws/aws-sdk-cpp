/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/CloudExadataInfrastructureUnallocatedResources.h>
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

CloudExadataInfrastructureUnallocatedResources::CloudExadataInfrastructureUnallocatedResources(JsonView jsonValue)
{
  *this = jsonValue;
}

CloudExadataInfrastructureUnallocatedResources& CloudExadataInfrastructureUnallocatedResources::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudAutonomousVmClusters"))
  {
    Aws::Utils::Array<JsonView> cloudAutonomousVmClustersJsonList = jsonValue.GetArray("cloudAutonomousVmClusters");
    for(unsigned cloudAutonomousVmClustersIndex = 0; cloudAutonomousVmClustersIndex < cloudAutonomousVmClustersJsonList.GetLength(); ++cloudAutonomousVmClustersIndex)
    {
      m_cloudAutonomousVmClusters.push_back(cloudAutonomousVmClustersJsonList[cloudAutonomousVmClustersIndex].AsObject());
    }
    m_cloudAutonomousVmClustersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cloudExadataInfrastructureDisplayName"))
  {
    m_cloudExadataInfrastructureDisplayName = jsonValue.GetString("cloudExadataInfrastructureDisplayName");
    m_cloudExadataInfrastructureDisplayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exadataStorageInTBs"))
  {
    m_exadataStorageInTBs = jsonValue.GetDouble("exadataStorageInTBs");
    m_exadataStorageInTBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cloudExadataInfrastructureId"))
  {
    m_cloudExadataInfrastructureId = jsonValue.GetString("cloudExadataInfrastructureId");
    m_cloudExadataInfrastructureIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localStorageInGBs"))
  {
    m_localStorageInGBs = jsonValue.GetInteger("localStorageInGBs");
    m_localStorageInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memoryInGBs"))
  {
    m_memoryInGBs = jsonValue.GetInteger("memoryInGBs");
    m_memoryInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ocpus"))
  {
    m_ocpus = jsonValue.GetInteger("ocpus");
    m_ocpusHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudExadataInfrastructureUnallocatedResources::Jsonize() const
{
  JsonValue payload;

  if(m_cloudAutonomousVmClustersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cloudAutonomousVmClustersJsonList(m_cloudAutonomousVmClusters.size());
   for(unsigned cloudAutonomousVmClustersIndex = 0; cloudAutonomousVmClustersIndex < cloudAutonomousVmClustersJsonList.GetLength(); ++cloudAutonomousVmClustersIndex)
   {
     cloudAutonomousVmClustersJsonList[cloudAutonomousVmClustersIndex].AsObject(m_cloudAutonomousVmClusters[cloudAutonomousVmClustersIndex].Jsonize());
   }
   payload.WithArray("cloudAutonomousVmClusters", std::move(cloudAutonomousVmClustersJsonList));

  }

  if(m_cloudExadataInfrastructureDisplayNameHasBeenSet)
  {
   payload.WithString("cloudExadataInfrastructureDisplayName", m_cloudExadataInfrastructureDisplayName);

  }

  if(m_exadataStorageInTBsHasBeenSet)
  {
   payload.WithDouble("exadataStorageInTBs", m_exadataStorageInTBs);

  }

  if(m_cloudExadataInfrastructureIdHasBeenSet)
  {
   payload.WithString("cloudExadataInfrastructureId", m_cloudExadataInfrastructureId);

  }

  if(m_localStorageInGBsHasBeenSet)
  {
   payload.WithInteger("localStorageInGBs", m_localStorageInGBs);

  }

  if(m_memoryInGBsHasBeenSet)
  {
   payload.WithInteger("memoryInGBs", m_memoryInGBs);

  }

  if(m_ocpusHasBeenSet)
  {
   payload.WithInteger("ocpus", m_ocpus);

  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
