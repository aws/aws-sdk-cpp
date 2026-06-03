/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/MetaFlowHealthEntity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SocialMessaging {
namespace Model {

MetaFlowHealthEntity::MetaFlowHealthEntity(JsonView jsonValue) { *this = jsonValue; }

MetaFlowHealthEntity& MetaFlowHealthEntity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("entityType")) {
    m_entityType = jsonValue.GetString("entityType");
    m_entityTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("canSendMessage")) {
    m_canSendMessage = jsonValue.GetString("canSendMessage");
    m_canSendMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue MetaFlowHealthEntity::Jsonize() const {
  JsonValue payload;

  if (m_entityTypeHasBeenSet) {
    payload.WithString("entityType", m_entityType);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_canSendMessageHasBeenSet) {
    payload.WithString("canSendMessage", m_canSendMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
