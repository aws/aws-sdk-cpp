/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/meteringmarketplace/model/Metadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceMetering {
namespace Model {

Metadata::Metadata(JsonView jsonValue) { *this = jsonValue; }

Metadata& Metadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AgreementId")) {
    m_agreementId = jsonValue.GetString("AgreementId");
    m_agreementIdHasBeenSet = true;
  }
  return *this;
}

JsonValue Metadata::Jsonize() const {
  JsonValue payload;

  if (m_agreementIdHasBeenSet) {
    payload.WithString("AgreementId", m_agreementId);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceMetering
}  // namespace Aws
