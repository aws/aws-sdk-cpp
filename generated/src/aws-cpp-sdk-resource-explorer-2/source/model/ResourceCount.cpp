/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resource-explorer-2/model/ResourceCount.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ResourceExplorer2 {
namespace Model {

ResourceCount::ResourceCount(JsonView jsonValue) { *this = jsonValue; }

ResourceCount& ResourceCount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TotalResources")) {
    m_totalResources = jsonValue.GetInt64("TotalResources");
    m_totalResourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Complete")) {
    m_complete = jsonValue.GetBool("Complete");
    m_completeHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceCount::Jsonize() const {
  JsonValue payload;

  if (m_totalResourcesHasBeenSet) {
    payload.WithInt64("TotalResources", m_totalResources);
  }

  if (m_completeHasBeenSet) {
    payload.WithBool("Complete", m_complete);
  }

  return payload;
}

}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
