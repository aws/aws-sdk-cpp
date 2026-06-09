/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/QuoteSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {

QuoteSummary::QuoteSummary(JsonView jsonValue) { *this = jsonValue; }

QuoteSummary& QuoteSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("QuoteId")) {
    m_quoteId = jsonValue.GetString("QuoteId");
    m_quoteIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AccountId")) {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QuoteStatus")) {
    m_quoteStatus = QuoteStatusMapper::GetQuoteStatusForName(jsonValue.GetString("QuoteStatus"));
    m_quoteStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusMessage")) {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OutpostArn")) {
    m_outpostArn = jsonValue.GetString("OutpostArn");
    m_outpostArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CountryCode")) {
    m_countryCode = jsonValue.GetString("CountryCode");
    m_countryCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestedCapacities")) {
    Aws::Utils::Array<JsonView> requestedCapacitiesJsonList = jsonValue.GetArray("RequestedCapacities");
    for (unsigned requestedCapacitiesIndex = 0; requestedCapacitiesIndex < requestedCapacitiesJsonList.GetLength();
         ++requestedCapacitiesIndex) {
      m_requestedCapacities.push_back(requestedCapacitiesJsonList[requestedCapacitiesIndex].AsObject());
    }
    m_requestedCapacitiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestedConstraints")) {
    Aws::Utils::Array<JsonView> requestedConstraintsJsonList = jsonValue.GetArray("RequestedConstraints");
    for (unsigned requestedConstraintsIndex = 0; requestedConstraintsIndex < requestedConstraintsJsonList.GetLength();
         ++requestedConstraintsIndex) {
      m_requestedConstraints.push_back(requestedConstraintsJsonList[requestedConstraintsIndex].AsObject());
    }
    m_requestedConstraintsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestedPaymentOptions")) {
    Aws::Utils::Array<JsonView> requestedPaymentOptionsJsonList = jsonValue.GetArray("RequestedPaymentOptions");
    for (unsigned requestedPaymentOptionsIndex = 0; requestedPaymentOptionsIndex < requestedPaymentOptionsJsonList.GetLength();
         ++requestedPaymentOptionsIndex) {
      m_requestedPaymentOptions.push_back(
          PaymentOptionMapper::GetPaymentOptionForName(requestedPaymentOptionsJsonList[requestedPaymentOptionsIndex].AsString()));
    }
    m_requestedPaymentOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestedPaymentTerms")) {
    Aws::Utils::Array<JsonView> requestedPaymentTermsJsonList = jsonValue.GetArray("RequestedPaymentTerms");
    for (unsigned requestedPaymentTermsIndex = 0; requestedPaymentTermsIndex < requestedPaymentTermsJsonList.GetLength();
         ++requestedPaymentTermsIndex) {
      m_requestedPaymentTerms.push_back(
          PaymentTermMapper::GetPaymentTermForName(requestedPaymentTermsJsonList[requestedPaymentTermsIndex].AsString()));
    }
    m_requestedPaymentTermsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QuoteOptions")) {
    Aws::Utils::Array<JsonView> quoteOptionsJsonList = jsonValue.GetArray("QuoteOptions");
    for (unsigned quoteOptionsIndex = 0; quoteOptionsIndex < quoteOptionsJsonList.GetLength(); ++quoteOptionsIndex) {
      m_quoteOptions.push_back(quoteOptionsJsonList[quoteOptionsIndex].AsObject());
    }
    m_quoteOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubmittedOrderId")) {
    m_submittedOrderId = jsonValue.GetString("SubmittedOrderId");
    m_submittedOrderIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedDate")) {
    m_createdDate = jsonValue.GetDouble("CreatedDate");
    m_createdDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpirationDate")) {
    m_expirationDate = jsonValue.GetDouble("ExpirationDate");
    m_expirationDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue QuoteSummary::Jsonize() const {
  JsonValue payload;

  if (m_quoteIdHasBeenSet) {
    payload.WithString("QuoteId", m_quoteId);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("AccountId", m_accountId);
  }

  if (m_quoteStatusHasBeenSet) {
    payload.WithString("QuoteStatus", QuoteStatusMapper::GetNameForQuoteStatus(m_quoteStatus));
  }

  if (m_statusMessageHasBeenSet) {
    payload.WithString("StatusMessage", m_statusMessage);
  }

  if (m_outpostArnHasBeenSet) {
    payload.WithString("OutpostArn", m_outpostArn);
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

  if (m_quoteOptionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> quoteOptionsJsonList(m_quoteOptions.size());
    for (unsigned quoteOptionsIndex = 0; quoteOptionsIndex < quoteOptionsJsonList.GetLength(); ++quoteOptionsIndex) {
      quoteOptionsJsonList[quoteOptionsIndex].AsObject(m_quoteOptions[quoteOptionsIndex].Jsonize());
    }
    payload.WithArray("QuoteOptions", std::move(quoteOptionsJsonList));
  }

  if (m_submittedOrderIdHasBeenSet) {
    payload.WithString("SubmittedOrderId", m_submittedOrderId);
  }

  if (m_createdDateHasBeenSet) {
    payload.WithDouble("CreatedDate", m_createdDate.SecondsWithMSPrecision());
  }

  if (m_expirationDateHasBeenSet) {
    payload.WithDouble("ExpirationDate", m_expirationDate.SecondsWithMSPrecision());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
