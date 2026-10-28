/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/neptunedata/model/UndoLogsMetrics.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace neptunedata {
namespace Model {

UndoLogsMetrics::UndoLogsMetrics(JsonView jsonValue) { *this = jsonValue; }

UndoLogsMetrics& UndoLogsMetrics::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sizeInBytes")) {
    m_sizeInBytes = jsonValue.GetInt64("sizeInBytes");
    m_sizeInBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listSize")) {
    m_listSize = jsonValue.GetInt64("listSize");
    m_listSizeHasBeenSet = true;
  }
  return *this;
}

JsonValue UndoLogsMetrics::Jsonize() const {
  JsonValue payload;

  if (m_sizeInBytesHasBeenSet) {
    payload.WithInt64("sizeInBytes", m_sizeInBytes);
  }

  if (m_listSizeHasBeenSet) {
    payload.WithInt64("listSize", m_listSize);
  }

  return payload;
}

}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
