/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/AdBreak.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

AdBreak::AdBreak() : 
    m_adBreakMetadataHasBeenSet(false),
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_offsetMillis(0),
    m_offsetMillisHasBeenSet(false),
    m_slateHasBeenSet(false),
    m_spliceInsertMessageHasBeenSet(false),
    m_timeSignalMessageHasBeenSet(false)
{
}

AdBreak::AdBreak(JsonView jsonValue) : 
    m_adBreakMetadataHasBeenSet(false),
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_offsetMillis(0),
    m_offsetMillisHasBeenSet(false),
    m_slateHasBeenSet(false),
    m_spliceInsertMessageHasBeenSet(false),
    m_timeSignalMessageHasBeenSet(false)
{
  *this = jsonValue;
}

AdBreak& AdBreak::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdBreakMetadata"))
  {
    Aws::Utils::Array<JsonView> adBreakMetadataJsonList = jsonValue.GetArray("AdBreakMetadata");
    for(unsigned adBreakMetadataIndex = 0; adBreakMetadataIndex < adBreakMetadataJsonList.GetLength(); ++adBreakMetadataIndex)
    {
      m_adBreakMetadata.push_back(adBreakMetadataJsonList[adBreakMetadataIndex].AsObject());
    }
    m_adBreakMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageType"))
  {
    m_messageType = MessageTypeMapper::GetMessageTypeForName(jsonValue.GetString("MessageType"));

    m_messageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OffsetMillis"))
  {
    m_offsetMillis = jsonValue.GetInt64("OffsetMillis");

    m_offsetMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Slate"))
  {
    m_slate = jsonValue.GetObject("Slate");

    m_slateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpliceInsertMessage"))
  {
    m_spliceInsertMessage = jsonValue.GetObject("SpliceInsertMessage");

    m_spliceInsertMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeSignalMessage"))
  {
    m_timeSignalMessage = jsonValue.GetObject("TimeSignalMessage");

    m_timeSignalMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue AdBreak::Jsonize() const
{
  JsonValue payload;

  if(m_adBreakMetadataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> adBreakMetadataJsonList(m_adBreakMetadata.size());
   for(unsigned adBreakMetadataIndex = 0; adBreakMetadataIndex < adBreakMetadataJsonList.GetLength(); ++adBreakMetadataIndex)
   {
     adBreakMetadataJsonList[adBreakMetadataIndex].AsObject(m_adBreakMetadata[adBreakMetadataIndex].Jsonize());
   }
   payload.WithArray("AdBreakMetadata", std::move(adBreakMetadataJsonList));

  }

  if(m_messageTypeHasBeenSet)
  {
   payload.WithString("MessageType", MessageTypeMapper::GetNameForMessageType(m_messageType));
  }

  if(m_offsetMillisHasBeenSet)
  {
   payload.WithInt64("OffsetMillis", m_offsetMillis);

  }

  if(m_slateHasBeenSet)
  {
   payload.WithObject("Slate", m_slate.Jsonize());

  }

  if(m_spliceInsertMessageHasBeenSet)
  {
   payload.WithObject("SpliceInsertMessage", m_spliceInsertMessage.Jsonize());

  }

  if(m_timeSignalMessageHasBeenSet)
  {
   payload.WithObject("TimeSignalMessage", m_timeSignalMessage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
