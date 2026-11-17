/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/SegmentOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

SegmentOperation::SegmentOperation(JsonView jsonValue) { *this = jsonValue; }

SegmentOperation& SegmentOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("create")) {
    m_create = jsonValue.GetObject("create");
    m_createHasBeenSet = true;
  }
  if (jsonValue.ValueExists("update")) {
    m_update = jsonValue.GetObject("update");
    m_updateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("delete")) {
    m_delete = jsonValue.GetObject("delete");
    m_deleteHasBeenSet = true;
  }
  return *this;
}

JsonValue SegmentOperation::Jsonize() const {
  JsonValue payload;

  if (m_createHasBeenSet) {
    payload.WithObject("create", m_create.Jsonize());
  }

  if (m_updateHasBeenSet) {
    payload.WithObject("update", m_update.Jsonize());
  }

  if (m_deleteHasBeenSet) {
    payload.WithObject("delete", m_delete.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
