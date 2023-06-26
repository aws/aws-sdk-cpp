/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/EncryptionContractConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

EncryptionContractConfiguration::EncryptionContractConfiguration() : 
    m_presetSpeke20Audio(PresetSpeke20Audio::NOT_SET),
    m_presetSpeke20AudioHasBeenSet(false),
    m_presetSpeke20Video(PresetSpeke20Video::NOT_SET),
    m_presetSpeke20VideoHasBeenSet(false)
{
}

EncryptionContractConfiguration::EncryptionContractConfiguration(JsonView jsonValue) : 
    m_presetSpeke20Audio(PresetSpeke20Audio::NOT_SET),
    m_presetSpeke20AudioHasBeenSet(false),
    m_presetSpeke20Video(PresetSpeke20Video::NOT_SET),
    m_presetSpeke20VideoHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionContractConfiguration& EncryptionContractConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PresetSpeke20Audio"))
  {
    m_presetSpeke20Audio = PresetSpeke20AudioMapper::GetPresetSpeke20AudioForName(jsonValue.GetString("PresetSpeke20Audio"));

    m_presetSpeke20AudioHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PresetSpeke20Video"))
  {
    m_presetSpeke20Video = PresetSpeke20VideoMapper::GetPresetSpeke20VideoForName(jsonValue.GetString("PresetSpeke20Video"));

    m_presetSpeke20VideoHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionContractConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_presetSpeke20AudioHasBeenSet)
  {
   payload.WithString("PresetSpeke20Audio", PresetSpeke20AudioMapper::GetNameForPresetSpeke20Audio(m_presetSpeke20Audio));
  }

  if(m_presetSpeke20VideoHasBeenSet)
  {
   payload.WithString("PresetSpeke20Video", PresetSpeke20VideoMapper::GetNameForPresetSpeke20Video(m_presetSpeke20Video));
  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
