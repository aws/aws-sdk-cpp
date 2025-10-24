﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qbusiness/model/DocumentAclUser.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QBusiness {
namespace Model {

DocumentAclUser::DocumentAclUser(JsonView jsonValue) { *this = jsonValue; }

DocumentAclUser& DocumentAclUser::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = MembershipTypeMapper::GetMembershipTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentAclUser::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", MembershipTypeMapper::GetNameForMembershipType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
