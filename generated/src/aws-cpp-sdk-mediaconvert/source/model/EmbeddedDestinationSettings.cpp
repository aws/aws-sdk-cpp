/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/EmbeddedDestinationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

EmbeddedDestinationSettings::EmbeddedDestinationSettings() : 
    m_destination608ChannelNumber(0),
    m_destination608ChannelNumberHasBeenSet(false),
    m_destination708ServiceNumber(0),
    m_destination708ServiceNumberHasBeenSet(false)
{
}

EmbeddedDestinationSettings::EmbeddedDestinationSettings(JsonView jsonValue) : 
    m_destination608ChannelNumber(0),
    m_destination608ChannelNumberHasBeenSet(false),
    m_destination708ServiceNumber(0),
    m_destination708ServiceNumberHasBeenSet(false)
{
  *this = jsonValue;
}

EmbeddedDestinationSettings& EmbeddedDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destination608ChannelNumber"))
  {
    m_destination608ChannelNumber = jsonValue.GetInteger("destination608ChannelNumber");

    m_destination608ChannelNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination708ServiceNumber"))
  {
    m_destination708ServiceNumber = jsonValue.GetInteger("destination708ServiceNumber");

    m_destination708ServiceNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue EmbeddedDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_destination608ChannelNumberHasBeenSet)
  {
   payload.WithInteger("destination608ChannelNumber", m_destination608ChannelNumber);

  }

  if(m_destination708ServiceNumberHasBeenSet)
  {
   payload.WithInteger("destination708ServiceNumber", m_destination708ServiceNumber);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
