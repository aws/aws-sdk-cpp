/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/taxsettings/model/MonacoAdditionalInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {

MonacoAdditionalInfo::MonacoAdditionalInfo(JsonView jsonValue) { *this = jsonValue; }

MonacoAdditionalInfo& MonacoAdditionalInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("businessNumber")) {
    m_businessNumber = jsonValue.GetString("businessNumber");
    m_businessNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue MonacoAdditionalInfo::Jsonize() const {
  JsonValue payload;

  if (m_businessNumberHasBeenSet) {
    payload.WithString("businessNumber", m_businessNumber);
  }

  return payload;
}

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
