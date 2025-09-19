/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/GetCertificateSigningRequestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptography::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetCertificateSigningRequestRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdentifierHasBeenSet)
  {
   payload.WithString("KeyIdentifier", m_keyIdentifier);

  }

  if(m_signingAlgorithmHasBeenSet)
  {
   payload.WithString("SigningAlgorithm", SigningAlgorithmTypeMapper::GetNameForSigningAlgorithmType(m_signingAlgorithm));
  }

  if(m_certificateSubjectHasBeenSet)
  {
   payload.WithObject("CertificateSubject", m_certificateSubject.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCertificateSigningRequestRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PaymentCryptographyControlPlane.GetCertificateSigningRequest"));
  return headers;

}




