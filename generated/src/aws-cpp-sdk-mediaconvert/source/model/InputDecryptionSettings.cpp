/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/InputDecryptionSettings.h>
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

InputDecryptionSettings::InputDecryptionSettings() : 
    m_decryptionMode(DecryptionMode::NOT_SET),
    m_decryptionModeHasBeenSet(false),
    m_encryptedDecryptionKeyHasBeenSet(false),
    m_initializationVectorHasBeenSet(false),
    m_kmsKeyRegionHasBeenSet(false)
{
}

InputDecryptionSettings::InputDecryptionSettings(JsonView jsonValue) : 
    m_decryptionMode(DecryptionMode::NOT_SET),
    m_decryptionModeHasBeenSet(false),
    m_encryptedDecryptionKeyHasBeenSet(false),
    m_initializationVectorHasBeenSet(false),
    m_kmsKeyRegionHasBeenSet(false)
{
  *this = jsonValue;
}

InputDecryptionSettings& InputDecryptionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("decryptionMode"))
  {
    m_decryptionMode = DecryptionModeMapper::GetDecryptionModeForName(jsonValue.GetString("decryptionMode"));

    m_decryptionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptedDecryptionKey"))
  {
    m_encryptedDecryptionKey = jsonValue.GetString("encryptedDecryptionKey");

    m_encryptedDecryptionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initializationVector"))
  {
    m_initializationVector = jsonValue.GetString("initializationVector");

    m_initializationVectorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyRegion"))
  {
    m_kmsKeyRegion = jsonValue.GetString("kmsKeyRegion");

    m_kmsKeyRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue InputDecryptionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_decryptionModeHasBeenSet)
  {
   payload.WithString("decryptionMode", DecryptionModeMapper::GetNameForDecryptionMode(m_decryptionMode));
  }

  if(m_encryptedDecryptionKeyHasBeenSet)
  {
   payload.WithString("encryptedDecryptionKey", m_encryptedDecryptionKey);

  }

  if(m_initializationVectorHasBeenSet)
  {
   payload.WithString("initializationVector", m_initializationVector);

  }

  if(m_kmsKeyRegionHasBeenSet)
  {
   payload.WithString("kmsKeyRegion", m_kmsKeyRegion);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
