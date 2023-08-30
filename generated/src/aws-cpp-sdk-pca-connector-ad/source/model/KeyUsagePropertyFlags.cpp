/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/KeyUsagePropertyFlags.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

KeyUsagePropertyFlags::KeyUsagePropertyFlags() : 
    m_decrypt(false),
    m_decryptHasBeenSet(false),
    m_keyAgreement(false),
    m_keyAgreementHasBeenSet(false),
    m_sign(false),
    m_signHasBeenSet(false)
{
}

KeyUsagePropertyFlags::KeyUsagePropertyFlags(JsonView jsonValue) : 
    m_decrypt(false),
    m_decryptHasBeenSet(false),
    m_keyAgreement(false),
    m_keyAgreementHasBeenSet(false),
    m_sign(false),
    m_signHasBeenSet(false)
{
  *this = jsonValue;
}

KeyUsagePropertyFlags& KeyUsagePropertyFlags::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Decrypt"))
  {
    m_decrypt = jsonValue.GetBool("Decrypt");

    m_decryptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyAgreement"))
  {
    m_keyAgreement = jsonValue.GetBool("KeyAgreement");

    m_keyAgreementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sign"))
  {
    m_sign = jsonValue.GetBool("Sign");

    m_signHasBeenSet = true;
  }

  return *this;
}

JsonValue KeyUsagePropertyFlags::Jsonize() const
{
  JsonValue payload;

  if(m_decryptHasBeenSet)
  {
   payload.WithBool("Decrypt", m_decrypt);

  }

  if(m_keyAgreementHasBeenSet)
  {
   payload.WithBool("KeyAgreement", m_keyAgreement);

  }

  if(m_signHasBeenSet)
  {
   payload.WithBool("Sign", m_sign);

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
