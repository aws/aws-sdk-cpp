/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/CutoverRequestOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

CutoverRequestOptions::CutoverRequestOptions(JsonView jsonValue) { *this = jsonValue; }

CutoverRequestOptions& CutoverRequestOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Target")) {
    m_target = CutoverTargetMapper::GetCutoverTargetForName(jsonValue.GetString("Target"));
    m_targetHasBeenSet = true;
  }
  return *this;
}

JsonValue CutoverRequestOptions::Jsonize() const {
  JsonValue payload;

  if (m_targetHasBeenSet) {
    payload.WithString("Target", CutoverTargetMapper::GetNameForCutoverTarget(m_target));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
