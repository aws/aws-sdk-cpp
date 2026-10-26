/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/taxsettings/model/MexicoAdditionalInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {

MexicoAdditionalInfo::MexicoAdditionalInfo(JsonView jsonValue) { *this = jsonValue; }

MexicoAdditionalInfo& MexicoAdditionalInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("taxRegime")) {
    m_taxRegime = jsonValue.GetString("taxRegime");
    m_taxRegimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taxRegimeFullName")) {
    m_taxRegimeFullName = jsonValue.GetString("taxRegimeFullName");
    m_taxRegimeFullNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cfdiUsageCode")) {
    m_cfdiUsageCode = jsonValue.GetString("cfdiUsageCode");
    m_cfdiUsageCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue MexicoAdditionalInfo::Jsonize() const {
  JsonValue payload;

  if (m_taxRegimeHasBeenSet) {
    payload.WithString("taxRegime", m_taxRegime);
  }

  if (m_taxRegimeFullNameHasBeenSet) {
    payload.WithString("taxRegimeFullName", m_taxRegimeFullName);
  }

  if (m_cfdiUsageCodeHasBeenSet) {
    payload.WithString("cfdiUsageCode", m_cfdiUsageCode);
  }

  return payload;
}

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
