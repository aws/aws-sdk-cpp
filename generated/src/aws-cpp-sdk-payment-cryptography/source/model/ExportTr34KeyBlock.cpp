/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/ExportTr34KeyBlock.h>
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

ExportTr34KeyBlock::ExportTr34KeyBlock() : 
    m_certificateAuthorityPublicKeyIdentifierHasBeenSet(false),
    m_exportTokenHasBeenSet(false),
    m_keyBlockFormat(Tr34KeyBlockFormat::NOT_SET),
    m_keyBlockFormatHasBeenSet(false),
    m_randomNonceHasBeenSet(false),
    m_wrappingKeyCertificateHasBeenSet(false)
{
}

ExportTr34KeyBlock::ExportTr34KeyBlock(JsonView jsonValue) : 
    m_certificateAuthorityPublicKeyIdentifierHasBeenSet(false),
    m_exportTokenHasBeenSet(false),
    m_keyBlockFormat(Tr34KeyBlockFormat::NOT_SET),
    m_keyBlockFormatHasBeenSet(false),
    m_randomNonceHasBeenSet(false),
    m_wrappingKeyCertificateHasBeenSet(false)
{
  *this = jsonValue;
}

ExportTr34KeyBlock& ExportTr34KeyBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateAuthorityPublicKeyIdentifier"))
  {
    m_certificateAuthorityPublicKeyIdentifier = jsonValue.GetString("CertificateAuthorityPublicKeyIdentifier");

    m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportToken"))
  {
    m_exportToken = jsonValue.GetString("ExportToken");

    m_exportTokenHasBeenSet = true;
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

  if(jsonValue.ValueExists("WrappingKeyCertificate"))
  {
    m_wrappingKeyCertificate = jsonValue.GetString("WrappingKeyCertificate");

    m_wrappingKeyCertificateHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportTr34KeyBlock::Jsonize() const
{
  JsonValue payload;

  if(m_certificateAuthorityPublicKeyIdentifierHasBeenSet)
  {
   payload.WithString("CertificateAuthorityPublicKeyIdentifier", m_certificateAuthorityPublicKeyIdentifier);

  }

  if(m_exportTokenHasBeenSet)
  {
   payload.WithString("ExportToken", m_exportToken);

  }

  if(m_keyBlockFormatHasBeenSet)
  {
   payload.WithString("KeyBlockFormat", Tr34KeyBlockFormatMapper::GetNameForTr34KeyBlockFormat(m_keyBlockFormat));
  }

  if(m_randomNonceHasBeenSet)
  {
   payload.WithString("RandomNonce", m_randomNonce);

  }

  if(m_wrappingKeyCertificateHasBeenSet)
  {
   payload.WithString("WrappingKeyCertificate", m_wrappingKeyCertificate);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
