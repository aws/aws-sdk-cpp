/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/taxsettings/model/TaxInheritanceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {

TaxInheritanceDetails::TaxInheritanceDetails(JsonView jsonValue) { *this = jsonValue; }

TaxInheritanceDetails& TaxInheritanceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("parentEntityId")) {
    m_parentEntityId = jsonValue.GetString("parentEntityId");
    m_parentEntityIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inheritanceObtainedReason")) {
    m_inheritanceObtainedReason = jsonValue.GetString("inheritanceObtainedReason");
    m_inheritanceObtainedReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue TaxInheritanceDetails::Jsonize() const {
  JsonValue payload;

  if (m_parentEntityIdHasBeenSet) {
    payload.WithString("parentEntityId", m_parentEntityId);
  }

  if (m_inheritanceObtainedReasonHasBeenSet) {
    payload.WithString("inheritanceObtainedReason", m_inheritanceObtainedReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
