/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BatchExportFindingResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

BatchExportFindingResult::BatchExportFindingResult(JsonView jsonValue) { *this = jsonValue; }

BatchExportFindingResult& BatchExportFindingResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingId")) {
    m_findingId = jsonValue.GetString("findingId");
    m_findingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("linkedIssue")) {
    m_linkedIssue = jsonValue.GetObject("linkedIssue");
    m_linkedIssueHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchExportFindingResult::Jsonize() const {
  JsonValue payload;

  if (m_findingIdHasBeenSet) {
    payload.WithString("findingId", m_findingId);
  }

  if (m_linkedIssueHasBeenSet) {
    payload.WithObject("linkedIssue", m_linkedIssue.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
