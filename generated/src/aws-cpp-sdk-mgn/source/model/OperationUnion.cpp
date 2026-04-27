/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/OperationUnion.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

OperationUnion::OperationUnion(JsonView jsonValue) { *this = jsonValue; }

OperationUnion& OperationUnion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("merge")) {
    m_merge = jsonValue.GetObject("merge");
    m_mergeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("split")) {
    m_split = jsonValue.GetObject("split");
    m_splitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("delete")) {
    m_delete = jsonValue.GetObject("delete");
    m_deleteHasBeenSet = true;
  }
  if (jsonValue.ValueExists("update")) {
    m_update = jsonValue.GetObject("update");
    m_updateHasBeenSet = true;
  }
  return *this;
}

JsonValue OperationUnion::Jsonize() const {
  JsonValue payload;

  if (m_mergeHasBeenSet) {
    payload.WithObject("merge", m_merge.Jsonize());
  }

  if (m_splitHasBeenSet) {
    payload.WithObject("split", m_split.Jsonize());
  }

  if (m_deleteHasBeenSet) {
    payload.WithObject("delete", m_delete.Jsonize());
  }

  if (m_updateHasBeenSet) {
    payload.WithObject("update", m_update.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
