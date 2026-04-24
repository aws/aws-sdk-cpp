/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/omics/model/BatchListItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {

BatchListItem::BatchListItem(JsonView jsonValue) { *this = jsonValue; }

BatchListItem& BatchListItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = BatchStatusMapper::GetBatchStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalRuns")) {
    m_totalRuns = jsonValue.GetInteger("totalRuns");
    m_totalRunsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workflowId")) {
    m_workflowId = jsonValue.GetString("workflowId");
    m_workflowIdHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchListItem::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", BatchStatusMapper::GetNameForBatchStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_totalRunsHasBeenSet) {
    payload.WithInteger("totalRuns", m_totalRuns);
  }

  if (m_workflowIdHasBeenSet) {
    payload.WithString("workflowId", m_workflowId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
