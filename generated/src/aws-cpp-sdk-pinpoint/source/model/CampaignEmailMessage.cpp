﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CampaignEmailMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

CampaignEmailMessage::CampaignEmailMessage(JsonView jsonValue)
{
  *this = jsonValue;
}

CampaignEmailMessage& CampaignEmailMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetString("Body");
    m_bodyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FromAddress"))
  {
    m_fromAddress = jsonValue.GetString("FromAddress");
    m_fromAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Headers"))
  {
    Aws::Utils::Array<JsonView> headersJsonList = jsonValue.GetArray("Headers");
    for(unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex)
    {
      m_headers.push_back(headersJsonList[headersIndex].AsObject());
    }
    m_headersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HtmlBody"))
  {
    m_htmlBody = jsonValue.GetString("HtmlBody");
    m_htmlBodyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  return *this;
}

JsonValue CampaignEmailMessage::Jsonize() const
{
  JsonValue payload;

  if(m_bodyHasBeenSet)
  {
   payload.WithString("Body", m_body);

  }

  if(m_fromAddressHasBeenSet)
  {
   payload.WithString("FromAddress", m_fromAddress);

  }

  if(m_headersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> headersJsonList(m_headers.size());
   for(unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex)
   {
     headersJsonList[headersIndex].AsObject(m_headers[headersIndex].Jsonize());
   }
   payload.WithArray("Headers", std::move(headersJsonList));

  }

  if(m_htmlBodyHasBeenSet)
  {
   payload.WithString("HtmlBody", m_htmlBody);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
