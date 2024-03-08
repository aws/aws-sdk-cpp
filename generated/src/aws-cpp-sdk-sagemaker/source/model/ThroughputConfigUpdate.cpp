/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ThroughputConfigUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ThroughputConfigUpdate::ThroughputConfigUpdate() : 
    m_throughputMode(ThroughputMode::NOT_SET),
    m_throughputModeHasBeenSet(false),
    m_provisionedReadCapacityUnits(0),
    m_provisionedReadCapacityUnitsHasBeenSet(false),
    m_provisionedWriteCapacityUnits(0),
    m_provisionedWriteCapacityUnitsHasBeenSet(false)
{
}

ThroughputConfigUpdate::ThroughputConfigUpdate(JsonView jsonValue) : 
    m_throughputMode(ThroughputMode::NOT_SET),
    m_throughputModeHasBeenSet(false),
    m_provisionedReadCapacityUnits(0),
    m_provisionedReadCapacityUnitsHasBeenSet(false),
    m_provisionedWriteCapacityUnits(0),
    m_provisionedWriteCapacityUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

ThroughputConfigUpdate& ThroughputConfigUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ThroughputMode"))
  {
    m_throughputMode = ThroughputModeMapper::GetThroughputModeForName(jsonValue.GetString("ThroughputMode"));

    m_throughputModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedReadCapacityUnits"))
  {
    m_provisionedReadCapacityUnits = jsonValue.GetInteger("ProvisionedReadCapacityUnits");

    m_provisionedReadCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedWriteCapacityUnits"))
  {
    m_provisionedWriteCapacityUnits = jsonValue.GetInteger("ProvisionedWriteCapacityUnits");

    m_provisionedWriteCapacityUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue ThroughputConfigUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_throughputModeHasBeenSet)
  {
   payload.WithString("ThroughputMode", ThroughputModeMapper::GetNameForThroughputMode(m_throughputMode));
  }

  if(m_provisionedReadCapacityUnitsHasBeenSet)
  {
   payload.WithInteger("ProvisionedReadCapacityUnits", m_provisionedReadCapacityUnits);

  }

  if(m_provisionedWriteCapacityUnitsHasBeenSet)
  {
   payload.WithInteger("ProvisionedWriteCapacityUnits", m_provisionedWriteCapacityUnits);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
