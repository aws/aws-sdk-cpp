/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/GetParametersForExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptography::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetParametersForExportRequest::GetParametersForExportRequest() : 
    m_keyMaterialType(KeyMaterialType::NOT_SET),
    m_keyMaterialTypeHasBeenSet(false),
    m_signingKeyAlgorithm(KeyAlgorithm::NOT_SET),
    m_signingKeyAlgorithmHasBeenSet(false)
{
}

Aws::String GetParametersForExportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyMaterialTypeHasBeenSet)
  {
   payload.WithString("KeyMaterialType", KeyMaterialTypeMapper::GetNameForKeyMaterialType(m_keyMaterialType));
  }

  if(m_signingKeyAlgorithmHasBeenSet)
  {
   payload.WithString("SigningKeyAlgorithm", KeyAlgorithmMapper::GetNameForKeyAlgorithm(m_signingKeyAlgorithm));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetParametersForExportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PaymentCryptographyControlPlane.GetParametersForExport"));
  return headers;

}




