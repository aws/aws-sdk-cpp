/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/Message.h>
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

Message::Message() : 
    m_actionExecutionHasBeenSet(false),
    m_actionReviewHasBeenSet(false),
    m_attachmentsHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_sourceAttributionHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_type(MessageType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Message::Message(JsonView jsonValue) : 
    m_actionExecutionHasBeenSet(false),
    m_actionReviewHasBeenSet(false),
    m_attachmentsHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_sourceAttributionHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_type(MessageType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Message& Message::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionExecution"))
  {
    m_actionExecution = jsonValue.GetObject("actionExecution");

    m_actionExecutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionReview"))
  {
    m_actionReview = jsonValue.GetObject("actionReview");

    m_actionReviewHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attachments"))
  {
    Aws::Utils::Array<JsonView> attachmentsJsonList = jsonValue.GetArray("attachments");
    for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
    {
      m_attachments.push_back(attachmentsJsonList[attachmentsIndex].AsObject());
    }
    m_attachmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("body"))
  {
    m_body = jsonValue.GetString("body");

    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("messageId"))
  {
    m_messageId = jsonValue.GetString("messageId");

    m_messageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceAttribution"))
  {
    Aws::Utils::Array<JsonView> sourceAttributionJsonList = jsonValue.GetArray("sourceAttribution");
    for(unsigned sourceAttributionIndex = 0; sourceAttributionIndex < sourceAttributionJsonList.GetLength(); ++sourceAttributionIndex)
    {
      m_sourceAttribution.push_back(sourceAttributionJsonList[sourceAttributionIndex].AsObject());
    }
    m_sourceAttributionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("time"))
  {
    m_time = jsonValue.GetDouble("time");

    m_timeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = MessageTypeMapper::GetMessageTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Message::Jsonize() const
{
  JsonValue payload;

  if(m_actionExecutionHasBeenSet)
  {
   payload.WithObject("actionExecution", m_actionExecution.Jsonize());

  }

  if(m_actionReviewHasBeenSet)
  {
   payload.WithObject("actionReview", m_actionReview.Jsonize());

  }

  if(m_attachmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachmentsJsonList(m_attachments.size());
   for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
   {
     attachmentsJsonList[attachmentsIndex].AsObject(m_attachments[attachmentsIndex].Jsonize());
   }
   payload.WithArray("attachments", std::move(attachmentsJsonList));

  }

  if(m_bodyHasBeenSet)
  {
   payload.WithString("body", m_body);

  }

  if(m_messageIdHasBeenSet)
  {
   payload.WithString("messageId", m_messageId);

  }

  if(m_sourceAttributionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceAttributionJsonList(m_sourceAttribution.size());
   for(unsigned sourceAttributionIndex = 0; sourceAttributionIndex < sourceAttributionJsonList.GetLength(); ++sourceAttributionIndex)
   {
     sourceAttributionJsonList[sourceAttributionIndex].AsObject(m_sourceAttribution[sourceAttributionIndex].Jsonize());
   }
   payload.WithArray("sourceAttribution", std::move(sourceAttributionJsonList));

  }

  if(m_timeHasBeenSet)
  {
   payload.WithDouble("time", m_time.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", MessageTypeMapper::GetNameForMessageType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
