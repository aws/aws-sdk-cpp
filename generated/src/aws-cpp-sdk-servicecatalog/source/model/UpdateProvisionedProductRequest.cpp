/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/model/UpdateProvisionedProductRequest.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateProvisionedProductRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_acceptLanguageHasBeenSet) {
    mapSize++;
  }
  if (m_provisionedProductNameHasBeenSet) {
    mapSize++;
  }
  if (m_provisionedProductIdHasBeenSet) {
    mapSize++;
  }
  if (m_productIdHasBeenSet) {
    mapSize++;
  }
  if (m_productNameHasBeenSet) {
    mapSize++;
  }
  if (m_provisioningArtifactIdHasBeenSet) {
    mapSize++;
  }
  if (m_provisioningArtifactNameHasBeenSet) {
    mapSize++;
  }
  if (m_pathIdHasBeenSet) {
    mapSize++;
  }
  if (m_pathNameHasBeenSet) {
    mapSize++;
  }
  if (m_provisioningParametersHasBeenSet) {
    mapSize++;
  }
  if (m_provisioningPreferencesHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_updateTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_acceptLanguageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AcceptLanguage"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_acceptLanguage.c_str()));
  }

  if (m_provisionedProductNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProvisionedProductName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_provisionedProductName.c_str()));
  }

  if (m_provisionedProductIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProvisionedProductId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_provisionedProductId.c_str()));
  }

  if (m_productIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProductId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_productId.c_str()));
  }

  if (m_productNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProductName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_productName.c_str()));
  }

  if (m_provisioningArtifactIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProvisioningArtifactId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_provisioningArtifactId.c_str()));
  }

  if (m_provisioningArtifactNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProvisioningArtifactName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_provisioningArtifactName.c_str()));
  }

  if (m_pathIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PathId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_pathId.c_str()));
  }

  if (m_pathNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PathName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_pathName.c_str()));
  }

  if (m_provisioningParametersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProvisioningParameters"));
    encoder.WriteArrayStart(m_provisioningParameters.size());
    for (const auto& item_0 : m_provisioningParameters) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_provisioningPreferencesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProvisioningPreferences"));
    m_provisioningPreferences.CborEncode(encoder);
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_updateTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UpdateToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_updateToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateProvisionedProductRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
