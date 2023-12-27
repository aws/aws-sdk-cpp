/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/TransportStreamProgram.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

TransportStreamProgram::TransportStreamProgram() : 
    m_pcrPid(0),
    m_pcrPidHasBeenSet(false),
    m_programNameHasBeenSet(false),
    m_programNumber(0),
    m_programNumberHasBeenSet(false),
    m_programPid(0),
    m_programPidHasBeenSet(false),
    m_streamsHasBeenSet(false)
{
}

TransportStreamProgram::TransportStreamProgram(JsonView jsonValue) : 
    m_pcrPid(0),
    m_pcrPidHasBeenSet(false),
    m_programNameHasBeenSet(false),
    m_programNumber(0),
    m_programNumberHasBeenSet(false),
    m_programPid(0),
    m_programPidHasBeenSet(false),
    m_streamsHasBeenSet(false)
{
  *this = jsonValue;
}

TransportStreamProgram& TransportStreamProgram::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pcrPid"))
  {
    m_pcrPid = jsonValue.GetInteger("pcrPid");

    m_pcrPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programName"))
  {
    m_programName = jsonValue.GetString("programName");

    m_programNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programNumber"))
  {
    m_programNumber = jsonValue.GetInteger("programNumber");

    m_programNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programPid"))
  {
    m_programPid = jsonValue.GetInteger("programPid");

    m_programPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streams"))
  {
    Aws::Utils::Array<JsonView> streamsJsonList = jsonValue.GetArray("streams");
    for(unsigned streamsIndex = 0; streamsIndex < streamsJsonList.GetLength(); ++streamsIndex)
    {
      m_streams.push_back(streamsJsonList[streamsIndex].AsObject());
    }
    m_streamsHasBeenSet = true;
  }

  return *this;
}

JsonValue TransportStreamProgram::Jsonize() const
{
  JsonValue payload;

  if(m_pcrPidHasBeenSet)
  {
   payload.WithInteger("pcrPid", m_pcrPid);

  }

  if(m_programNameHasBeenSet)
  {
   payload.WithString("programName", m_programName);

  }

  if(m_programNumberHasBeenSet)
  {
   payload.WithInteger("programNumber", m_programNumber);

  }

  if(m_programPidHasBeenSet)
  {
   payload.WithInteger("programPid", m_programPid);

  }

  if(m_streamsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> streamsJsonList(m_streams.size());
   for(unsigned streamsIndex = 0; streamsIndex < streamsJsonList.GetLength(); ++streamsIndex)
   {
     streamsJsonList[streamsIndex].AsObject(m_streams[streamsIndex].Jsonize());
   }
   payload.WithArray("streams", std::move(streamsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
