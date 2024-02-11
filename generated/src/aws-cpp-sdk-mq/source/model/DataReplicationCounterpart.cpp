/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/DataReplicationCounterpart.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

DataReplicationCounterpart::DataReplicationCounterpart() : 
    m_brokerIdHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

DataReplicationCounterpart::DataReplicationCounterpart(JsonView jsonValue) : 
    m_brokerIdHasBeenSet(false),
    m_regionHasBeenSet(false)
{
  *this = jsonValue;
}

DataReplicationCounterpart& DataReplicationCounterpart::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("brokerId"))
  {
    m_brokerId = jsonValue.GetString("brokerId");

    m_brokerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  return *this;
}

JsonValue DataReplicationCounterpart::Jsonize() const
{
  JsonValue payload;

  if(m_brokerIdHasBeenSet)
  {
   payload.WithString("brokerId", m_brokerId);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
