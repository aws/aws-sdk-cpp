/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/KnowledgeBaseIngestionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

KnowledgeBaseIngestionSummary::KnowledgeBaseIngestionSummary(JsonView jsonValue) { *this = jsonValue; }

KnowledgeBaseIngestionSummary& KnowledgeBaseIngestionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IngestionId")) {
    m_ingestionId = jsonValue.GetString("IngestionId");
    m_ingestionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IngestionStatus")) {
    m_ingestionStatus = KbIngestionStatusMapper::GetKbIngestionStatusForName(jsonValue.GetString("IngestionStatus"));
    m_ingestionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue KnowledgeBaseIngestionSummary::Jsonize() const {
  JsonValue payload;

  if (m_ingestionIdHasBeenSet) {
    payload.WithString("IngestionId", m_ingestionId);
  }

  if (m_ingestionStatusHasBeenSet) {
    payload.WithString("IngestionStatus", KbIngestionStatusMapper::GetNameForKbIngestionStatus(m_ingestionStatus));
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
