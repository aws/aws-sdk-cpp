/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/UpdateCustomerAccountRequest.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateCustomerAccountRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_identifierHasBeenSet) {
    payload.WithString("Identifier", m_identifier);
  }

  if (m_accountHasBeenSet) {
    payload.WithObject("Account", m_account.Jsonize());
  }

  if (m_partnerAccountIdentifierHasBeenSet) {
    payload.WithString("PartnerAccountIdentifier", m_partnerAccountIdentifier);
  }

  if (m_lastModifiedDateHasBeenSet) {
    payload.WithString("LastModifiedDate", m_lastModifiedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCustomerAccountRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.UpdateCustomerAccount"));
  return headers;
}
