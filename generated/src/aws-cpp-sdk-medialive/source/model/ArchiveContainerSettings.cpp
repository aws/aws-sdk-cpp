/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ArchiveContainerSettings.h>
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

ArchiveContainerSettings::ArchiveContainerSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

ArchiveContainerSettings& ArchiveContainerSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("m2tsSettings"))
  {
    m_m2tsSettings = jsonValue.GetObject("m2tsSettings");
    m_m2tsSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rawSettings"))
  {
    m_rawSettings = jsonValue.GetObject("rawSettings");
    m_rawSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue ArchiveContainerSettings::Jsonize() const
{
  JsonValue payload;

  if(m_m2tsSettingsHasBeenSet)
  {
   payload.WithObject("m2tsSettings", m_m2tsSettings.Jsonize());

  }

  if(m_rawSettingsHasBeenSet)
  {
   payload.WithObject("rawSettings", m_rawSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
