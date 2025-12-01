/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/Amendment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

Amendment::Amendment(JsonView jsonValue) { *this = jsonValue; }

Amendment& Amendment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FieldPath")) {
    m_fieldPath = jsonValue.GetString("FieldPath");
    m_fieldPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NewValue")) {
    m_newValue = jsonValue.GetString("NewValue");
    m_newValueHasBeenSet = true;
  }
  return *this;
}

JsonValue Amendment::Jsonize() const {
  JsonValue payload;

  if (m_fieldPathHasBeenSet) {
    payload.WithString("FieldPath", m_fieldPath);
  }

  if (m_newValueHasBeenSet) {
    payload.WithString("NewValue", m_newValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
