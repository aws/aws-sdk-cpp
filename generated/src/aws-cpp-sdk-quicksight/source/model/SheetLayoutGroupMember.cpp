/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SheetLayoutGroupMember.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SheetLayoutGroupMember::SheetLayoutGroupMember(JsonView jsonValue) { *this = jsonValue; }

SheetLayoutGroupMember& SheetLayoutGroupMember::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = SheetLayoutGroupMemberTypeMapper::GetSheetLayoutGroupMemberTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue SheetLayoutGroupMember::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", SheetLayoutGroupMemberTypeMapper::GetNameForSheetLayoutGroupMemberType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
