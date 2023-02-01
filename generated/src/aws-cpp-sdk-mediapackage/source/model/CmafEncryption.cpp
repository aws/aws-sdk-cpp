/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/CmafEncryption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

CmafEncryption::CmafEncryption() : 
    m_constantInitializationVectorHasBeenSet(false),
    m_encryptionMethod(CmafEncryptionMethod::NOT_SET),
    m_encryptionMethodHasBeenSet(false),
    m_keyRotationIntervalSeconds(0),
    m_keyRotationIntervalSecondsHasBeenSet(false),
    m_spekeKeyProviderHasBeenSet(false)
{
}

CmafEncryption::CmafEncryption(JsonView jsonValue) : 
    m_constantInitializationVectorHasBeenSet(false),
    m_encryptionMethod(CmafEncryptionMethod::NOT_SET),
    m_encryptionMethodHasBeenSet(false),
    m_keyRotationIntervalSeconds(0),
    m_keyRotationIntervalSecondsHasBeenSet(false),
    m_spekeKeyProviderHasBeenSet(false)
{
  *this = jsonValue;
}

CmafEncryption& CmafEncryption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("constantInitializationVector"))
  {
    m_constantInitializationVector = jsonValue.GetString("constantInitializationVector");

    m_constantInitializationVectorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionMethod"))
  {
    m_encryptionMethod = CmafEncryptionMethodMapper::GetCmafEncryptionMethodForName(jsonValue.GetString("encryptionMethod"));

    m_encryptionMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyRotationIntervalSeconds"))
  {
    m_keyRotationIntervalSeconds = jsonValue.GetInteger("keyRotationIntervalSeconds");

    m_keyRotationIntervalSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spekeKeyProvider"))
  {
    m_spekeKeyProvider = jsonValue.GetObject("spekeKeyProvider");

    m_spekeKeyProviderHasBeenSet = true;
  }

  return *this;
}

JsonValue CmafEncryption::Jsonize() const
{
  JsonValue payload;

  if(m_constantInitializationVectorHasBeenSet)
  {
   payload.WithString("constantInitializationVector", m_constantInitializationVector);

  }

  if(m_encryptionMethodHasBeenSet)
  {
   payload.WithString("encryptionMethod", CmafEncryptionMethodMapper::GetNameForCmafEncryptionMethod(m_encryptionMethod));
  }

  if(m_keyRotationIntervalSecondsHasBeenSet)
  {
   payload.WithInteger("keyRotationIntervalSeconds", m_keyRotationIntervalSeconds);

  }

  if(m_spekeKeyProviderHasBeenSet)
  {
   payload.WithObject("spekeKeyProvider", m_spekeKeyProvider.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
