/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/Participant.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

Participant::Participant(JsonView jsonValue) { *this = jsonValue; }

Participant& Participant::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PartnerProfile")) {
    m_partnerProfile = jsonValue.GetObject("PartnerProfile");
    m_partnerProfileHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SellerProfile")) {
    m_sellerProfile = jsonValue.GetObject("SellerProfile");
    m_sellerProfileHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Account")) {
    m_account = jsonValue.GetObject("Account");
    m_accountHasBeenSet = true;
  }
  return *this;
}

JsonValue Participant::Jsonize() const {
  JsonValue payload;

  if (m_partnerProfileHasBeenSet) {
    payload.WithObject("PartnerProfile", m_partnerProfile.Jsonize());
  }

  if (m_sellerProfileHasBeenSet) {
    payload.WithObject("SellerProfile", m_sellerProfile.Jsonize());
  }

  if (m_accountHasBeenSet) {
    payload.WithObject("Account", m_account.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
