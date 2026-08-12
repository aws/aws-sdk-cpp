/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/Roi.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

Roi::Roi(JsonView jsonValue) { *this = jsonValue; }

Roi& Roi::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("estimate")) {
    m_estimate = jsonValue.GetString("estimate");
    m_estimateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("detail")) {
    m_detail = jsonValue.GetString("detail");
    m_detailHasBeenSet = true;
  }
  return *this;
}

JsonValue Roi::Jsonize() const {
  JsonValue payload;

  if (m_estimateHasBeenSet) {
    payload.WithString("estimate", m_estimate);
  }

  if (m_detailHasBeenSet) {
    payload.WithString("detail", m_detail);
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
