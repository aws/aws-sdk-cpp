/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/RemediationCompositeFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

RemediationCompositeFilter::RemediationCompositeFilter(JsonView jsonValue) { *this = jsonValue; }

RemediationCompositeFilter& RemediationCompositeFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StringFilters")) {
    Aws::Utils::Array<JsonView> stringFiltersJsonList = jsonValue.GetArray("StringFilters");
    for (unsigned stringFiltersIndex = 0; stringFiltersIndex < stringFiltersJsonList.GetLength(); ++stringFiltersIndex) {
      m_stringFilters.push_back(stringFiltersJsonList[stringFiltersIndex].AsObject());
    }
    m_stringFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationCompositeFilter::Jsonize() const {
  JsonValue payload;

  if (m_stringFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> stringFiltersJsonList(m_stringFilters.size());
    for (unsigned stringFiltersIndex = 0; stringFiltersIndex < stringFiltersJsonList.GetLength(); ++stringFiltersIndex) {
      stringFiltersJsonList[stringFiltersIndex].AsObject(m_stringFilters[stringFiltersIndex].Jsonize());
    }
    payload.WithArray("StringFilters", std::move(stringFiltersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
