/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/AccountPlanningInvitationPayload.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

AccountPlanningInvitationPayload::AccountPlanningInvitationPayload(JsonView jsonValue) { *this = jsonValue; }

AccountPlanningInvitationPayload& AccountPlanningInvitationPayload::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AccountIdentifier")) {
    m_accountIdentifier = jsonValue.GetString("AccountIdentifier");
    m_accountIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Customer")) {
    m_customer = jsonValue.GetObject("Customer");
    m_customerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SenderContacts")) {
    Aws::Utils::Array<JsonView> senderContactsJsonList = jsonValue.GetArray("SenderContacts");
    for (unsigned senderContactsIndex = 0; senderContactsIndex < senderContactsJsonList.GetLength(); ++senderContactsIndex) {
      m_senderContacts.push_back(senderContactsJsonList[senderContactsIndex].AsObject());
    }
    m_senderContactsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PreferredContact")) {
    m_preferredContact = jsonValue.GetObject("PreferredContact");
    m_preferredContactHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountPlanningInvitationPayload::Jsonize() const {
  JsonValue payload;

  if (m_accountIdentifierHasBeenSet) {
    payload.WithString("AccountIdentifier", m_accountIdentifier);
  }

  if (m_customerHasBeenSet) {
    payload.WithObject("Customer", m_customer.Jsonize());
  }

  if (m_senderContactsHasBeenSet) {
    Aws::Utils::Array<JsonValue> senderContactsJsonList(m_senderContacts.size());
    for (unsigned senderContactsIndex = 0; senderContactsIndex < senderContactsJsonList.GetLength(); ++senderContactsIndex) {
      senderContactsJsonList[senderContactsIndex].AsObject(m_senderContacts[senderContactsIndex].Jsonize());
    }
    payload.WithArray("SenderContacts", std::move(senderContactsJsonList));
  }

  if (m_preferredContactHasBeenSet) {
    payload.WithObject("PreferredContact", m_preferredContact.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
