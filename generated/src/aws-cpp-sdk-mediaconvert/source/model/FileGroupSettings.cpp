/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/FileGroupSettings.h>
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

FileGroupSettings::FileGroupSettings() : 
    m_destinationHasBeenSet(false),
    m_destinationSettingsHasBeenSet(false)
{
}

FileGroupSettings::FileGroupSettings(JsonView jsonValue) : 
    m_destinationHasBeenSet(false),
    m_destinationSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

FileGroupSettings& FileGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationSettings"))
  {
    m_destinationSettings = jsonValue.GetObject("destinationSettings");

    m_destinationSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue FileGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  if(m_destinationSettingsHasBeenSet)
  {
   payload.WithObject("destinationSettings", m_destinationSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
