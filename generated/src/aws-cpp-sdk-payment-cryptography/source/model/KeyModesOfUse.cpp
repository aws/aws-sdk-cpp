/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/KeyModesOfUse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

KeyModesOfUse::KeyModesOfUse(JsonView jsonValue)
{
  *this = jsonValue;
}

KeyModesOfUse& KeyModesOfUse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Encrypt"))
  {
    m_encrypt = jsonValue.GetBool("Encrypt");
    m_encryptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Decrypt"))
  {
    m_decrypt = jsonValue.GetBool("Decrypt");
    m_decryptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Wrap"))
  {
    m_wrap = jsonValue.GetBool("Wrap");
    m_wrapHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Unwrap"))
  {
    m_unwrap = jsonValue.GetBool("Unwrap");
    m_unwrapHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Generate"))
  {
    m_generate = jsonValue.GetBool("Generate");
    m_generateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sign"))
  {
    m_sign = jsonValue.GetBool("Sign");
    m_signHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Verify"))
  {
    m_verify = jsonValue.GetBool("Verify");
    m_verifyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeriveKey"))
  {
    m_deriveKey = jsonValue.GetBool("DeriveKey");
    m_deriveKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NoRestrictions"))
  {
    m_noRestrictions = jsonValue.GetBool("NoRestrictions");
    m_noRestrictionsHasBeenSet = true;
  }
  return *this;
}

JsonValue KeyModesOfUse::Jsonize() const
{
  JsonValue payload;

  if(m_encryptHasBeenSet)
  {
   payload.WithBool("Encrypt", m_encrypt);

  }

  if(m_decryptHasBeenSet)
  {
   payload.WithBool("Decrypt", m_decrypt);

  }

  if(m_wrapHasBeenSet)
  {
   payload.WithBool("Wrap", m_wrap);

  }

  if(m_unwrapHasBeenSet)
  {
   payload.WithBool("Unwrap", m_unwrap);

  }

  if(m_generateHasBeenSet)
  {
   payload.WithBool("Generate", m_generate);

  }

  if(m_signHasBeenSet)
  {
   payload.WithBool("Sign", m_sign);

  }

  if(m_verifyHasBeenSet)
  {
   payload.WithBool("Verify", m_verify);

  }

  if(m_deriveKeyHasBeenSet)
  {
   payload.WithBool("DeriveKey", m_deriveKey);

  }

  if(m_noRestrictionsHasBeenSet)
  {
   payload.WithBool("NoRestrictions", m_noRestrictions);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
