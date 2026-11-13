/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/model/CopyProductRequest.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CopyProductRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_acceptLanguageHasBeenSet) {
    mapSize++;
  }
  if (m_sourceProductArnHasBeenSet) {
    mapSize++;
  }
  if (m_targetProductIdHasBeenSet) {
    mapSize++;
  }
  if (m_targetProductNameHasBeenSet) {
    mapSize++;
  }
  if (m_sourceProvisioningArtifactIdentifiersHasBeenSet) {
    mapSize++;
  }
  if (m_copyOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_idempotencyTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_acceptLanguageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AcceptLanguage"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_acceptLanguage.c_str()));
  }

  if (m_sourceProductArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceProductArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceProductArn.c_str()));
  }

  if (m_targetProductIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TargetProductId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_targetProductId.c_str()));
  }

  if (m_targetProductNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TargetProductName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_targetProductName.c_str()));
  }

  if (m_sourceProvisioningArtifactIdentifiersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceProvisioningArtifactIdentifiers"));
    encoder.WriteArrayStart(m_sourceProvisioningArtifactIdentifiers.size());
    for (const auto& item_0 : m_sourceProvisioningArtifactIdentifiers) {
      encoder.WriteMapStart(item_0.size());
      for (const auto& item_1 : item_0) {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(
            ProvisioningArtifactPropertyNameMapper::GetNameForProvisioningArtifactPropertyName(item_1.first).c_str()));
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_1.second.c_str()));
      }
    }
  }

  if (m_copyOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CopyOptions"));
    encoder.WriteArrayStart(m_copyOptions.size());
    for (const auto& item_0 : m_copyOptions) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(CopyOptionMapper::GetNameForCopyOption(item_0).c_str()));
    }
  }

  if (m_idempotencyTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdempotencyToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_idempotencyToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CopyProductRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
