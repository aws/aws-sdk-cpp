/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/taxsettings/model/PhilippinesAdditionalInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {

PhilippinesAdditionalInfo::PhilippinesAdditionalInfo(JsonView jsonValue) { *this = jsonValue; }

PhilippinesAdditionalInfo& PhilippinesAdditionalInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("isVatRegistered")) {
    m_isVatRegistered = jsonValue.GetBool("isVatRegistered");
    m_isVatRegisteredHasBeenSet = true;
  }
  return *this;
}

JsonValue PhilippinesAdditionalInfo::Jsonize() const {
  JsonValue payload;

  if (m_isVatRegisteredHasBeenSet) {
    payload.WithBool("isVatRegistered", m_isVatRegistered);
  }

  return payload;
}

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
