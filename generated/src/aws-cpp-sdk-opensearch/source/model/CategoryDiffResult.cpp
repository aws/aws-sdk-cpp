/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/CategoryDiffResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

CategoryDiffResult::CategoryDiffResult(JsonView jsonValue) { *this = jsonValue; }

CategoryDiffResult& CategoryDiffResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = DiffStatusMapper::GetDiffStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InSync")) {
    m_inSync = jsonValue.GetInteger("InSync");
    m_inSyncHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceOnly")) {
    m_sourceOnly = jsonValue.GetInteger("SourceOnly");
    m_sourceOnlyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetOnly")) {
    m_targetOnly = jsonValue.GetInteger("TargetOnly");
    m_targetOnlyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Diverged")) {
    m_diverged = jsonValue.GetInteger("Diverged");
    m_divergedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Items")) {
    m_items = jsonValue.GetObject("Items");
    m_itemsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Truncated")) {
    m_truncated = jsonValue.GetBool("Truncated");
    m_truncatedHasBeenSet = true;
  }
  return *this;
}

JsonValue CategoryDiffResult::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", DiffStatusMapper::GetNameForDiffStatus(m_status));
  }

  if (m_inSyncHasBeenSet) {
    payload.WithInteger("InSync", m_inSync);
  }

  if (m_sourceOnlyHasBeenSet) {
    payload.WithInteger("SourceOnly", m_sourceOnly);
  }

  if (m_targetOnlyHasBeenSet) {
    payload.WithInteger("TargetOnly", m_targetOnly);
  }

  if (m_divergedHasBeenSet) {
    payload.WithInteger("Diverged", m_diverged);
  }

  if (m_itemsHasBeenSet) {
    payload.WithObject("Items", m_items.Jsonize());
  }

  if (m_truncatedHasBeenSet) {
    payload.WithBool("Truncated", m_truncated);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
