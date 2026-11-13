/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/model/CreateProvisionedProductPlanRequest.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateProvisionedProductPlanRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_acceptLanguageHasBeenSet) {
    mapSize++;
  }
  if (m_planNameHasBeenSet) {
    mapSize++;
  }
  if (m_planTypeHasBeenSet) {
    mapSize++;
  }
  if (m_notificationArnsHasBeenSet) {
    mapSize++;
  }
  if (m_pathIdHasBeenSet) {
    mapSize++;
  }
  if (m_productIdHasBeenSet) {
    mapSize++;
  }
  if (m_provisionedProductNameHasBeenSet) {
    mapSize++;
  }
  if (m_provisioningArtifactIdHasBeenSet) {
    mapSize++;
  }
  if (m_provisioningParametersHasBeenSet) {
    mapSize++;
  }
  if (m_idempotencyTokenHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_acceptLanguageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AcceptLanguage"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_acceptLanguage.c_str()));
  }

  if (m_planNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PlanName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_planName.c_str()));
  }

  if (m_planTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PlanType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ProvisionedProductPlanTypeMapper::GetNameForProvisionedProductPlanType(m_planType).c_str()));
  }

  if (m_notificationArnsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NotificationArns"));
    encoder.WriteArrayStart(m_notificationArns.size());
    for (const auto& item_0 : m_notificationArns) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_pathIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PathId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_pathId.c_str()));
  }

  if (m_productIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProductId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_productId.c_str()));
  }

  if (m_provisionedProductNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProvisionedProductName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_provisionedProductName.c_str()));
  }

  if (m_provisioningArtifactIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProvisioningArtifactId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_provisioningArtifactId.c_str()));
  }

  if (m_provisioningParametersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProvisioningParameters"));
    encoder.WriteArrayStart(m_provisioningParameters.size());
    for (const auto& item_0 : m_provisioningParameters) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_idempotencyTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdempotencyToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_idempotencyToken.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateProvisionedProductPlanRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
