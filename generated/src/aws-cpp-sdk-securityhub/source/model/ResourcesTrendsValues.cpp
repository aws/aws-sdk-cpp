/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/ResourcesTrendsValues.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

ResourcesTrendsValues::ResourcesTrendsValues(JsonView jsonValue) { *this = jsonValue; }

ResourcesTrendsValues& ResourcesTrendsValues::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourcesCount")) {
    m_resourcesCount = jsonValue.GetObject("ResourcesCount");
    m_resourcesCountHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourcesTrendsValues::Jsonize() const {
  JsonValue payload;

  if (m_resourcesCountHasBeenSet) {
    payload.WithObject("ResourcesCount", m_resourcesCount.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
