/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resource-explorer-2/model/ViewStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ResourceExplorer2 {
namespace Model {

ViewStatus::ViewStatus(JsonView jsonValue) { *this = jsonValue; }

ViewStatus& ViewStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = OperationStatusMapper::GetOperationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("View")) {
    m_view = jsonValue.GetObject("View");
    m_viewHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorDetails")) {
    m_errorDetails = jsonValue.GetObject("ErrorDetails");
    m_errorDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ViewStatus::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", OperationStatusMapper::GetNameForOperationStatus(m_status));
  }

  if (m_viewHasBeenSet) {
    payload.WithObject("View", m_view.Jsonize());
  }

  if (m_errorDetailsHasBeenSet) {
    payload.WithObject("ErrorDetails", m_errorDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
