/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/KinesisParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Scheduler
{
namespace Model
{

KinesisParameters::KinesisParameters() : 
    m_partitionKeyHasBeenSet(false)
{
}

KinesisParameters::KinesisParameters(JsonView jsonValue) : 
    m_partitionKeyHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisParameters& KinesisParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PartitionKey"))
  {
    m_partitionKey = jsonValue.GetString("PartitionKey");

    m_partitionKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisParameters::Jsonize() const
{
  JsonValue payload;

  if(m_partitionKeyHasBeenSet)
  {
   payload.WithString("PartitionKey", m_partitionKey);

  }

  return payload;
}

} // namespace Model
} // namespace Scheduler
} // namespace Aws
