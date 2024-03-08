/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/ExportKeyCryptogram.h>
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

ExportKeyCryptogram::ExportKeyCryptogram() : 
    m_certificateAuthorityPublicKeyIdentifierHasBeenSet(false),
    m_wrappingKeyCertificateHasBeenSet(false),
    m_wrappingSpec(WrappingKeySpec::NOT_SET),
    m_wrappingSpecHasBeenSet(false)
{
}

ExportKeyCryptogram::ExportKeyCryptogram(JsonView jsonValue) : 
    m_certificateAuthorityPublicKeyIdentifierHasBeenSet(false),
    m_wrappingKeyCertificateHasBeenSet(false),
    m_wrappingSpec(WrappingKeySpec::NOT_SET),
    m_wrappingSpecHasBeenSet(false)
{
  *this = jsonValue;
}

ExportKeyCryptogram& ExportKeyCryptogram::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateAuthorityPublicKeyIdentifier"))
  {
    m_certificateAuthorityPublicKeyIdentifier = jsonValue.GetString("CertificateAuthorityPublicKeyIdentifier");

    m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WrappingKeyCertificate"))
  {
    m_wrappingKeyCertificate = jsonValue.GetString("WrappingKeyCertificate");

    m_wrappingKeyCertificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WrappingSpec"))
  {
    m_wrappingSpec = WrappingKeySpecMapper::GetWrappingKeySpecForName(jsonValue.GetString("WrappingSpec"));

    m_wrappingSpecHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportKeyCryptogram::Jsonize() const
{
  JsonValue payload;

  if(m_certificateAuthorityPublicKeyIdentifierHasBeenSet)
  {
   payload.WithString("CertificateAuthorityPublicKeyIdentifier", m_certificateAuthorityPublicKeyIdentifier);

  }

  if(m_wrappingKeyCertificateHasBeenSet)
  {
   payload.WithString("WrappingKeyCertificate", m_wrappingKeyCertificate);

  }

  if(m_wrappingSpecHasBeenSet)
  {
   payload.WithString("WrappingSpec", WrappingKeySpecMapper::GetNameForWrappingKeySpec(m_wrappingSpec));
  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
