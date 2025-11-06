/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DataSetColumnIdMapping.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DataSetColumnIdMapping::DataSetColumnIdMapping(JsonView jsonValue) { *this = jsonValue; }

DataSetColumnIdMapping& DataSetColumnIdMapping::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SourceColumnId")) {
    m_sourceColumnId = jsonValue.GetString("SourceColumnId");
    m_sourceColumnIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetColumnId")) {
    m_targetColumnId = jsonValue.GetString("TargetColumnId");
    m_targetColumnIdHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSetColumnIdMapping::Jsonize() const {
  JsonValue payload;

  if (m_sourceColumnIdHasBeenSet) {
    payload.WithString("SourceColumnId", m_sourceColumnId);
  }

  if (m_targetColumnIdHasBeenSet) {
    payload.WithString("TargetColumnId", m_targetColumnId);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
