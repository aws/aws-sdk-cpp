/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeTargetKinesisStreamParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

PipeTargetKinesisStreamParameters::PipeTargetKinesisStreamParameters() : 
    m_partitionKeyHasBeenSet(false)
{
}

PipeTargetKinesisStreamParameters::PipeTargetKinesisStreamParameters(JsonView jsonValue) : 
    m_partitionKeyHasBeenSet(false)
{
  *this = jsonValue;
}

PipeTargetKinesisStreamParameters& PipeTargetKinesisStreamParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PartitionKey"))
  {
    m_partitionKey = jsonValue.GetString("PartitionKey");

    m_partitionKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue PipeTargetKinesisStreamParameters::Jsonize() const
{
  JsonValue payload;

  if(m_partitionKeyHasBeenSet)
  {
   payload.WithString("PartitionKey", m_partitionKey);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
