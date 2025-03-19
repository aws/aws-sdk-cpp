/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FailedKeyRegistrationEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

FailedKeyRegistrationEntry::FailedKeyRegistrationEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

FailedKeyRegistrationEntry& FailedKeyRegistrationEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyArn"))
  {
    m_keyArn = jsonValue.GetString("KeyArn");
    m_keyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = jsonValue.GetInteger("StatusCode");
    m_statusCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SenderFault"))
  {
    m_senderFault = jsonValue.GetBool("SenderFault");
    m_senderFaultHasBeenSet = true;
  }
  return *this;
}

JsonValue FailedKeyRegistrationEntry::Jsonize() const
{
  JsonValue payload;

  if(m_keyArnHasBeenSet)
  {
   payload.WithString("KeyArn", m_keyArn);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithInteger("StatusCode", m_statusCode);

  }

  if(m_senderFaultHasBeenSet)
  {
   payload.WithBool("SenderFault", m_senderFault);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
