/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/Message.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

Message::Message() : 
    m_messageTextHasBeenSet(false)
{
}

Message::Message(JsonView jsonValue) : 
    m_messageTextHasBeenSet(false)
{
  *this = jsonValue;
}

Message& Message::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("messageText"))
  {
    m_messageText = jsonValue.GetString("messageText");

    m_messageTextHasBeenSet = true;
  }

  return *this;
}

JsonValue Message::Jsonize() const
{
  JsonValue payload;

  if(m_messageTextHasBeenSet)
  {
   payload.WithString("messageText", m_messageText);

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
