/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/Encryption.h>
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

Encryption::Encryption() : 
    m_constantInitializationVectorHasBeenSet(false),
    m_encryptionMethodHasBeenSet(false),
    m_keyRotationIntervalSeconds(0),
    m_keyRotationIntervalSecondsHasBeenSet(false),
    m_spekeKeyProviderHasBeenSet(false)
{
}

Encryption::Encryption(JsonView jsonValue) : 
    m_constantInitializationVectorHasBeenSet(false),
    m_encryptionMethodHasBeenSet(false),
    m_keyRotationIntervalSeconds(0),
    m_keyRotationIntervalSecondsHasBeenSet(false),
    m_spekeKeyProviderHasBeenSet(false)
{
  *this = jsonValue;
}

Encryption& Encryption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConstantInitializationVector"))
  {
    m_constantInitializationVector = jsonValue.GetString("ConstantInitializationVector");

    m_constantInitializationVectorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionMethod"))
  {
    m_encryptionMethod = jsonValue.GetObject("EncryptionMethod");

    m_encryptionMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyRotationIntervalSeconds"))
  {
    m_keyRotationIntervalSeconds = jsonValue.GetInteger("KeyRotationIntervalSeconds");

    m_keyRotationIntervalSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpekeKeyProvider"))
  {
    m_spekeKeyProvider = jsonValue.GetObject("SpekeKeyProvider");

    m_spekeKeyProviderHasBeenSet = true;
  }

  return *this;
}

JsonValue Encryption::Jsonize() const
{
  JsonValue payload;

  if(m_constantInitializationVectorHasBeenSet)
  {
   payload.WithString("ConstantInitializationVector", m_constantInitializationVector);

  }

  if(m_encryptionMethodHasBeenSet)
  {
   payload.WithObject("EncryptionMethod", m_encryptionMethod.Jsonize());

  }

  if(m_keyRotationIntervalSecondsHasBeenSet)
  {
   payload.WithInteger("KeyRotationIntervalSeconds", m_keyRotationIntervalSeconds);

  }

  if(m_spekeKeyProviderHasBeenSet)
  {
   payload.WithObject("SpekeKeyProvider", m_spekeKeyProvider.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
