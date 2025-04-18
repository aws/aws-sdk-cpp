/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ConversationState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

ConversationState::ConversationState(JsonView jsonValue)
{
  *this = jsonValue;
}

ConversationState& ConversationState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = ConversationStatusMapper::GetConversationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reason"))
  {
    m_reason = ConversationStatusReasonMapper::GetConversationStatusReasonForName(jsonValue.GetString("reason"));
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ConversationState::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ConversationStatusMapper::GetNameForConversationStatus(m_status));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", ConversationStatusReasonMapper::GetNameForConversationStatusReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
