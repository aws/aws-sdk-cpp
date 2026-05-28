/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/EventActor.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

EventActor::EventActor(JsonView jsonValue) { *this = jsonValue; }

EventActor& EventActor::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = ActorTypeMapper::GetActorTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("principalId")) {
    m_principalId = jsonValue.GetString("principalId");
    m_principalIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userName")) {
    m_userName = jsonValue.GetString("userName");
    m_userNameHasBeenSet = true;
  }
  return *this;
}

JsonValue EventActor::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", ActorTypeMapper::GetNameForActorType(m_type));
  }

  if (m_principalIdHasBeenSet) {
    payload.WithString("principalId", m_principalId);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_userNameHasBeenSet) {
    payload.WithString("userName", m_userName);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
