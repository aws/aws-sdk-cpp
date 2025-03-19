/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ConversationSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

ConversationSource::ConversationSource(JsonView jsonValue)
{
  *this = jsonValue;
}

ConversationSource& ConversationSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("conversationId"))
  {
    m_conversationId = jsonValue.GetString("conversationId");
    m_conversationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attachmentId"))
  {
    m_attachmentId = jsonValue.GetString("attachmentId");
    m_attachmentIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ConversationSource::Jsonize() const
{
  JsonValue payload;

  if(m_conversationIdHasBeenSet)
  {
   payload.WithString("conversationId", m_conversationId);

  }

  if(m_attachmentIdHasBeenSet)
  {
   payload.WithString("attachmentId", m_attachmentId);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
