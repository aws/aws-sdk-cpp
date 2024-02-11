/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/DataReplicationMetadataOutput.h>
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

DataReplicationMetadataOutput::DataReplicationMetadataOutput() : 
    m_dataReplicationCounterpartHasBeenSet(false),
    m_dataReplicationRoleHasBeenSet(false)
{
}

DataReplicationMetadataOutput::DataReplicationMetadataOutput(JsonView jsonValue) : 
    m_dataReplicationCounterpartHasBeenSet(false),
    m_dataReplicationRoleHasBeenSet(false)
{
  *this = jsonValue;
}

DataReplicationMetadataOutput& DataReplicationMetadataOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataReplicationCounterpart"))
  {
    m_dataReplicationCounterpart = jsonValue.GetObject("dataReplicationCounterpart");

    m_dataReplicationCounterpartHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataReplicationRole"))
  {
    m_dataReplicationRole = jsonValue.GetString("dataReplicationRole");

    m_dataReplicationRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue DataReplicationMetadataOutput::Jsonize() const
{
  JsonValue payload;

  if(m_dataReplicationCounterpartHasBeenSet)
  {
   payload.WithObject("dataReplicationCounterpart", m_dataReplicationCounterpart.Jsonize());

  }

  if(m_dataReplicationRoleHasBeenSet)
  {
   payload.WithString("dataReplicationRole", m_dataReplicationRole);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
