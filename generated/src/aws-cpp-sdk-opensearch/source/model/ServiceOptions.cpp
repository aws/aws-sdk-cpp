/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/ServiceOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

ServiceOptions::ServiceOptions(JsonView jsonValue) { *this = jsonValue; }

ServiceOptions& ServiceOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SupportedRegions")) {
    Aws::Utils::Array<JsonView> supportedRegionsJsonList = jsonValue.GetArray("SupportedRegions");
    for (unsigned supportedRegionsIndex = 0; supportedRegionsIndex < supportedRegionsJsonList.GetLength(); ++supportedRegionsIndex) {
      m_supportedRegions.push_back(supportedRegionsJsonList[supportedRegionsIndex].AsString());
    }
    m_supportedRegionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceOptions::Jsonize() const {
  JsonValue payload;

  if (m_supportedRegionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> supportedRegionsJsonList(m_supportedRegions.size());
    for (unsigned supportedRegionsIndex = 0; supportedRegionsIndex < supportedRegionsJsonList.GetLength(); ++supportedRegionsIndex) {
      supportedRegionsJsonList[supportedRegionsIndex].AsString(m_supportedRegions[supportedRegionsIndex]);
    }
    payload.WithArray("SupportedRegions", std::move(supportedRegionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
