/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/GetParametersForImportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptography::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetParametersForImportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyMaterialTypeHasBeenSet)
  {
   payload.WithString("KeyMaterialType", KeyMaterialTypeMapper::GetNameForKeyMaterialType(m_keyMaterialType));
  }

  if(m_wrappingKeyAlgorithmHasBeenSet)
  {
   payload.WithString("WrappingKeyAlgorithm", KeyAlgorithmMapper::GetNameForKeyAlgorithm(m_wrappingKeyAlgorithm));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetParametersForImportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PaymentCryptographyControlPlane.GetParametersForImport"));
  return headers;

}




