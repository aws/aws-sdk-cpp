/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputChannelLevel.h>
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

InputChannelLevel::InputChannelLevel() : 
    m_gain(0),
    m_gainHasBeenSet(false),
    m_inputChannel(0),
    m_inputChannelHasBeenSet(false)
{
}

InputChannelLevel::InputChannelLevel(JsonView jsonValue) : 
    m_gain(0),
    m_gainHasBeenSet(false),
    m_inputChannel(0),
    m_inputChannelHasBeenSet(false)
{
  *this = jsonValue;
}

InputChannelLevel& InputChannelLevel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("gain"))
  {
    m_gain = jsonValue.GetInteger("gain");

    m_gainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputChannel"))
  {
    m_inputChannel = jsonValue.GetInteger("inputChannel");

    m_inputChannelHasBeenSet = true;
  }

  return *this;
}

JsonValue InputChannelLevel::Jsonize() const
{
  JsonValue payload;

  if(m_gainHasBeenSet)
  {
   payload.WithInteger("gain", m_gain);

  }

  if(m_inputChannelHasBeenSet)
  {
   payload.WithInteger("inputChannel", m_inputChannel);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
