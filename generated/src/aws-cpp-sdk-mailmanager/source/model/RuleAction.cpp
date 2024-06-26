﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

RuleAction::RuleAction() : 
    m_addHeaderHasBeenSet(false),
    m_archiveHasBeenSet(false),
    m_deliverToMailboxHasBeenSet(false),
    m_dropHasBeenSet(false),
    m_relayHasBeenSet(false),
    m_replaceRecipientHasBeenSet(false),
    m_sendHasBeenSet(false),
    m_writeToS3HasBeenSet(false)
{
}

RuleAction::RuleAction(JsonView jsonValue)
  : RuleAction()
{
  *this = jsonValue;
}

RuleAction& RuleAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AddHeader"))
  {
    m_addHeader = jsonValue.GetObject("AddHeader");

    m_addHeaderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Archive"))
  {
    m_archive = jsonValue.GetObject("Archive");

    m_archiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeliverToMailbox"))
  {
    m_deliverToMailbox = jsonValue.GetObject("DeliverToMailbox");

    m_deliverToMailboxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Drop"))
  {
    m_drop = jsonValue.GetObject("Drop");

    m_dropHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Relay"))
  {
    m_relay = jsonValue.GetObject("Relay");

    m_relayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplaceRecipient"))
  {
    m_replaceRecipient = jsonValue.GetObject("ReplaceRecipient");

    m_replaceRecipientHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Send"))
  {
    m_send = jsonValue.GetObject("Send");

    m_sendHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WriteToS3"))
  {
    m_writeToS3 = jsonValue.GetObject("WriteToS3");

    m_writeToS3HasBeenSet = true;
  }

  return *this;
}

JsonValue RuleAction::Jsonize() const
{
  JsonValue payload;

  if(m_addHeaderHasBeenSet)
  {
   payload.WithObject("AddHeader", m_addHeader.Jsonize());

  }

  if(m_archiveHasBeenSet)
  {
   payload.WithObject("Archive", m_archive.Jsonize());

  }

  if(m_deliverToMailboxHasBeenSet)
  {
   payload.WithObject("DeliverToMailbox", m_deliverToMailbox.Jsonize());

  }

  if(m_dropHasBeenSet)
  {
   payload.WithObject("Drop", m_drop.Jsonize());

  }

  if(m_relayHasBeenSet)
  {
   payload.WithObject("Relay", m_relay.Jsonize());

  }

  if(m_replaceRecipientHasBeenSet)
  {
   payload.WithObject("ReplaceRecipient", m_replaceRecipient.Jsonize());

  }

  if(m_sendHasBeenSet)
  {
   payload.WithObject("Send", m_send.Jsonize());

  }

  if(m_writeToS3HasBeenSet)
  {
   payload.WithObject("WriteToS3", m_writeToS3.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
