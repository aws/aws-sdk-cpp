/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/taxsettings/model/NewZealandAdditionalInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {

NewZealandAdditionalInfo::NewZealandAdditionalInfo(JsonView jsonValue) { *this = jsonValue; }

NewZealandAdditionalInfo& NewZealandAdditionalInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("peppolId")) {
    m_peppolId = jsonValue.GetString("peppolId");
    m_peppolIdHasBeenSet = true;
  }
  return *this;
}

JsonValue NewZealandAdditionalInfo::Jsonize() const {
  JsonValue payload;

  if (m_peppolIdHasBeenSet) {
    payload.WithString("peppolId", m_peppolId);
  }

  return payload;
}

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
