/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/OutputColumnNameOverride.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

OutputColumnNameOverride::OutputColumnNameOverride(JsonView jsonValue) { *this = jsonValue; }

OutputColumnNameOverride& OutputColumnNameOverride::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SourceColumnName")) {
    m_sourceColumnName = jsonValue.GetString("SourceColumnName");
    m_sourceColumnNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OutputColumnName")) {
    m_outputColumnName = jsonValue.GetString("OutputColumnName");
    m_outputColumnNameHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputColumnNameOverride::Jsonize() const {
  JsonValue payload;

  if (m_sourceColumnNameHasBeenSet) {
    payload.WithString("SourceColumnName", m_sourceColumnName);
  }

  if (m_outputColumnNameHasBeenSet) {
    payload.WithString("OutputColumnName", m_outputColumnName);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
