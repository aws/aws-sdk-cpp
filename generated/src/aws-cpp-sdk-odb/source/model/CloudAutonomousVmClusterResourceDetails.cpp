/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/CloudAutonomousVmClusterResourceDetails.h>
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

CloudAutonomousVmClusterResourceDetails::CloudAutonomousVmClusterResourceDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

CloudAutonomousVmClusterResourceDetails& CloudAutonomousVmClusterResourceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudAutonomousVmClusterId"))
  {
    m_cloudAutonomousVmClusterId = jsonValue.GetString("cloudAutonomousVmClusterId");
    m_cloudAutonomousVmClusterIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unallocatedAdbStorageInTBs"))
  {
    m_unallocatedAdbStorageInTBs = jsonValue.GetDouble("unallocatedAdbStorageInTBs");
    m_unallocatedAdbStorageInTBsHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudAutonomousVmClusterResourceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cloudAutonomousVmClusterIdHasBeenSet)
  {
   payload.WithString("cloudAutonomousVmClusterId", m_cloudAutonomousVmClusterId);

  }

  if(m_unallocatedAdbStorageInTBsHasBeenSet)
  {
   payload.WithDouble("unallocatedAdbStorageInTBs", m_unallocatedAdbStorageInTBs);

  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
