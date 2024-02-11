/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/ImportTr34KeyBlock.h>
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

ImportTr34KeyBlock::ImportTr34KeyBlock() : 
    m_certificateAuthorityPublicKeyIdentifierHasBeenSet(false),
    m_importTokenHasBeenSet(false),
    m_keyBlockFormat(Tr34KeyBlockFormat::NOT_SET),
    m_keyBlockFormatHasBeenSet(false),
    m_randomNonceHasBeenSet(false),
    m_signingKeyCertificateHasBeenSet(false),
    m_wrappedKeyBlockHasBeenSet(false)
{
}

ImportTr34KeyBlock::ImportTr34KeyBlock(JsonView jsonValue) : 
    m_certificateAuthorityPublicKeyIdentifierHasBeenSet(false),
    m_importTokenHasBeenSet(false),
    m_keyBlockFormat(Tr34KeyBlockFormat::NOT_SET),
    m_keyBlockFormatHasBeenSet(false),
    m_randomNonceHasBeenSet(false),
    m_signingKeyCertificateHasBeenSet(false),
    m_wrappedKeyBlockHasBeenSet(false)
{
  *this = jsonValue;
}

ImportTr34KeyBlock& ImportTr34KeyBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateAuthorityPublicKeyIdentifier"))
  {
    m_certificateAuthorityPublicKeyIdentifier = jsonValue.GetString("CertificateAuthorityPublicKeyIdentifier");

    m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportToken"))
  {
    m_importToken = jsonValue.GetString("ImportToken");

    m_importTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyBlockFormat"))
  {
    m_keyBlockFormat = Tr34KeyBlockFormatMapper::GetTr34KeyBlockFormatForName(jsonValue.GetString("KeyBlockFormat"));

    m_keyBlockFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RandomNonce"))
  {
    m_randomNonce = jsonValue.GetString("RandomNonce");

    m_randomNonceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SigningKeyCertificate"))
  {
    m_signingKeyCertificate = jsonValue.GetString("SigningKeyCertificate");

    m_signingKeyCertificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WrappedKeyBlock"))
  {
    m_wrappedKeyBlock = jsonValue.GetString("WrappedKeyBlock");

    m_wrappedKeyBlockHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportTr34KeyBlock::Jsonize() const
{
  JsonValue payload;

  if(m_certificateAuthorityPublicKeyIdentifierHasBeenSet)
  {
   payload.WithString("CertificateAuthorityPublicKeyIdentifier", m_certificateAuthorityPublicKeyIdentifier);

  }

  if(m_importTokenHasBeenSet)
  {
   payload.WithString("ImportToken", m_importToken);

  }

  if(m_keyBlockFormatHasBeenSet)
  {
   payload.WithString("KeyBlockFormat", Tr34KeyBlockFormatMapper::GetNameForTr34KeyBlockFormat(m_keyBlockFormat));
  }

  if(m_randomNonceHasBeenSet)
  {
   payload.WithString("RandomNonce", m_randomNonce);

  }

  if(m_signingKeyCertificateHasBeenSet)
  {
   payload.WithString("SigningKeyCertificate", m_signingKeyCertificate);

  }

  if(m_wrappedKeyBlockHasBeenSet)
  {
   payload.WithString("WrappedKeyBlock", m_wrappedKeyBlock);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
