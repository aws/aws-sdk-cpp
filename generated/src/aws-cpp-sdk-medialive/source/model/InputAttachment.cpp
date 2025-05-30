﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputAttachment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputAttachment::InputAttachment(JsonView jsonValue)
{
  *this = jsonValue;
}

InputAttachment& InputAttachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("automaticInputFailoverSettings"))
  {
    m_automaticInputFailoverSettings = jsonValue.GetObject("automaticInputFailoverSettings");
    m_automaticInputFailoverSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputAttachmentName"))
  {
    m_inputAttachmentName = jsonValue.GetString("inputAttachmentName");
    m_inputAttachmentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputId"))
  {
    m_inputId = jsonValue.GetString("inputId");
    m_inputIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputSettings"))
  {
    m_inputSettings = jsonValue.GetObject("inputSettings");
    m_inputSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logicalInterfaceNames"))
  {
    Aws::Utils::Array<JsonView> logicalInterfaceNamesJsonList = jsonValue.GetArray("logicalInterfaceNames");
    for(unsigned logicalInterfaceNamesIndex = 0; logicalInterfaceNamesIndex < logicalInterfaceNamesJsonList.GetLength(); ++logicalInterfaceNamesIndex)
    {
      m_logicalInterfaceNames.push_back(logicalInterfaceNamesJsonList[logicalInterfaceNamesIndex].AsString());
    }
    m_logicalInterfaceNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue InputAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_automaticInputFailoverSettingsHasBeenSet)
  {
   payload.WithObject("automaticInputFailoverSettings", m_automaticInputFailoverSettings.Jsonize());

  }

  if(m_inputAttachmentNameHasBeenSet)
  {
   payload.WithString("inputAttachmentName", m_inputAttachmentName);

  }

  if(m_inputIdHasBeenSet)
  {
   payload.WithString("inputId", m_inputId);

  }

  if(m_inputSettingsHasBeenSet)
  {
   payload.WithObject("inputSettings", m_inputSettings.Jsonize());

  }

  if(m_logicalInterfaceNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logicalInterfaceNamesJsonList(m_logicalInterfaceNames.size());
   for(unsigned logicalInterfaceNamesIndex = 0; logicalInterfaceNamesIndex < logicalInterfaceNamesJsonList.GetLength(); ++logicalInterfaceNamesIndex)
   {
     logicalInterfaceNamesJsonList[logicalInterfaceNamesIndex].AsString(m_logicalInterfaceNames[logicalInterfaceNamesIndex]);
   }
   payload.WithArray("logicalInterfaceNames", std::move(logicalInterfaceNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
