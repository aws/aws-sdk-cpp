/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/UpdateQuoteRequest.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateQuoteRequest::SerializePayload() const {
  JsonValue payload;

  if (m_outpostIdentifierHasBeenSet) {
    payload.WithString("OutpostIdentifier", m_outpostIdentifier);
  }

  if (m_countryCodeHasBeenSet) {
    payload.WithString("CountryCode", m_countryCode);
  }

  if (m_requestedCapacitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> requestedCapacitiesJsonList(m_requestedCapacities.size());
    for (unsigned requestedCapacitiesIndex = 0; requestedCapacitiesIndex < requestedCapacitiesJsonList.GetLength();
         ++requestedCapacitiesIndex) {
      requestedCapacitiesJsonList[requestedCapacitiesIndex].AsObject(m_requestedCapacities[requestedCapacitiesIndex].Jsonize());
    }
    payload.WithArray("RequestedCapacities", std::move(requestedCapacitiesJsonList));
  }

  if (m_requestedConstraintsHasBeenSet) {
    Aws::Utils::Array<JsonValue> requestedConstraintsJsonList(m_requestedConstraints.size());
    for (unsigned requestedConstraintsIndex = 0; requestedConstraintsIndex < requestedConstraintsJsonList.GetLength();
         ++requestedConstraintsIndex) {
      requestedConstraintsJsonList[requestedConstraintsIndex].AsObject(m_requestedConstraints[requestedConstraintsIndex].Jsonize());
    }
    payload.WithArray("RequestedConstraints", std::move(requestedConstraintsJsonList));
  }

  if (m_requestedPaymentOptionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> requestedPaymentOptionsJsonList(m_requestedPaymentOptions.size());
    for (unsigned requestedPaymentOptionsIndex = 0; requestedPaymentOptionsIndex < requestedPaymentOptionsJsonList.GetLength();
         ++requestedPaymentOptionsIndex) {
      requestedPaymentOptionsJsonList[requestedPaymentOptionsIndex].AsString(
          PaymentOptionMapper::GetNameForPaymentOption(m_requestedPaymentOptions[requestedPaymentOptionsIndex]));
    }
    payload.WithArray("RequestedPaymentOptions", std::move(requestedPaymentOptionsJsonList));
  }

  if (m_requestedPaymentTermsHasBeenSet) {
    Aws::Utils::Array<JsonValue> requestedPaymentTermsJsonList(m_requestedPaymentTerms.size());
    for (unsigned requestedPaymentTermsIndex = 0; requestedPaymentTermsIndex < requestedPaymentTermsJsonList.GetLength();
         ++requestedPaymentTermsIndex) {
      requestedPaymentTermsJsonList[requestedPaymentTermsIndex].AsString(
          PaymentTermMapper::GetNameForPaymentTerm(m_requestedPaymentTerms[requestedPaymentTermsIndex]));
    }
    payload.WithArray("RequestedPaymentTerms", std::move(requestedPaymentTermsJsonList));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  return payload.View().WriteReadable();
}
