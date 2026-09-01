/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/RenewalSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

RenewalSummary::RenewalSummary(JsonView jsonValue) { *this = jsonValue; }

RenewalSummary& RenewalSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("offerId")) {
    m_offerId = jsonValue.GetString("offerId");
    m_offerIdHasBeenSet = true;
  }
  return *this;
}

JsonValue RenewalSummary::Jsonize() const {
  JsonValue payload;

  if (m_offerIdHasBeenSet) {
    payload.WithString("offerId", m_offerId);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
