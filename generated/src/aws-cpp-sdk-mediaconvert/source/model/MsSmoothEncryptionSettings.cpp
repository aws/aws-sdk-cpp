/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MsSmoothEncryptionSettings.h>
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

MsSmoothEncryptionSettings::MsSmoothEncryptionSettings() : 
    m_spekeKeyProviderHasBeenSet(false)
{
}

MsSmoothEncryptionSettings::MsSmoothEncryptionSettings(JsonView jsonValue) : 
    m_spekeKeyProviderHasBeenSet(false)
{
  *this = jsonValue;
}

MsSmoothEncryptionSettings& MsSmoothEncryptionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("spekeKeyProvider"))
  {
    m_spekeKeyProvider = jsonValue.GetObject("spekeKeyProvider");

    m_spekeKeyProviderHasBeenSet = true;
  }

  return *this;
}

JsonValue MsSmoothEncryptionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_spekeKeyProviderHasBeenSet)
  {
   payload.WithObject("spekeKeyProvider", m_spekeKeyProvider.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
