/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/EncryptionContractConfiguration.h>
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

EncryptionContractConfiguration::EncryptionContractConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

EncryptionContractConfiguration& EncryptionContractConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("spekeAudioPreset"))
  {
    m_spekeAudioPreset = PresetSpeke20AudioMapper::GetPresetSpeke20AudioForName(jsonValue.GetString("spekeAudioPreset"));
    m_spekeAudioPresetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("spekeVideoPreset"))
  {
    m_spekeVideoPreset = PresetSpeke20VideoMapper::GetPresetSpeke20VideoForName(jsonValue.GetString("spekeVideoPreset"));
    m_spekeVideoPresetHasBeenSet = true;
  }
  return *this;
}

JsonValue EncryptionContractConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_spekeAudioPresetHasBeenSet)
  {
   payload.WithString("spekeAudioPreset", PresetSpeke20AudioMapper::GetNameForPresetSpeke20Audio(m_spekeAudioPreset));
  }

  if(m_spekeVideoPresetHasBeenSet)
  {
   payload.WithString("spekeVideoPreset", PresetSpeke20VideoMapper::GetNameForPresetSpeke20Video(m_spekeVideoPreset));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
