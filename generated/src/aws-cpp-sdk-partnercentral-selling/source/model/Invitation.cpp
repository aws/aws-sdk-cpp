﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/Invitation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

Invitation::Invitation() : 
    m_messageHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_receiverHasBeenSet(false)
{
}

Invitation::Invitation(JsonView jsonValue)
  : Invitation()
{
  *this = jsonValue;
}

Invitation& Invitation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Payload"))
  {
    m_payload = jsonValue.GetObject("Payload");

    m_payloadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Receiver"))
  {
    m_receiver = jsonValue.GetObject("Receiver");

    m_receiverHasBeenSet = true;
  }

  return *this;
}

JsonValue Invitation::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_payloadHasBeenSet)
  {
   payload.WithObject("Payload", m_payload.Jsonize());

  }

  if(m_receiverHasBeenSet)
  {
   payload.WithObject("Receiver", m_receiver.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
