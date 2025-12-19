/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/ErrorDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

ErrorDetail::ErrorDetail(JsonView jsonValue) { *this = jsonValue; }

ErrorDetail& ErrorDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("field")) {
    m_field = jsonValue.GetString("field");
    m_fieldHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reason")) {
    m_reason = jsonValue.GetString("reason");
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ErrorDetail::Jsonize() const {
  JsonValue payload;

  if (m_fieldHasBeenSet) {
    payload.WithString("field", m_field);
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", m_reason);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
