/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/ResourcesCount.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

ResourcesCount::ResourcesCount(JsonView jsonValue) { *this = jsonValue; }

ResourcesCount& ResourcesCount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AllResources")) {
    m_allResources = jsonValue.GetInt64("AllResources");
    m_allResourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourcesCount::Jsonize() const {
  JsonValue payload;

  if (m_allResourcesHasBeenSet) {
    payload.WithInt64("AllResources", m_allResources);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
