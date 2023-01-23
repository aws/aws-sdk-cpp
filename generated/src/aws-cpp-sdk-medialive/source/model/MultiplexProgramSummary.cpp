/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MultiplexProgramSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

MultiplexProgramSummary::MultiplexProgramSummary() : 
    m_channelIdHasBeenSet(false),
    m_programNameHasBeenSet(false)
{
}

MultiplexProgramSummary::MultiplexProgramSummary(JsonView jsonValue) : 
    m_channelIdHasBeenSet(false),
    m_programNameHasBeenSet(false)
{
  *this = jsonValue;
}

MultiplexProgramSummary& MultiplexProgramSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelId"))
  {
    m_channelId = jsonValue.GetString("channelId");

    m_channelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programName"))
  {
    m_programName = jsonValue.GetString("programName");

    m_programNameHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiplexProgramSummary::Jsonize() const
{
  JsonValue payload;

  if(m_channelIdHasBeenSet)
  {
   payload.WithString("channelId", m_channelId);

  }

  if(m_programNameHasBeenSet)
  {
   payload.WithString("programName", m_programName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
