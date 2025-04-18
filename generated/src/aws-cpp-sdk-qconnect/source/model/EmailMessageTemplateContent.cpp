/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/EmailMessageTemplateContent.h>
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

EmailMessageTemplateContent::EmailMessageTemplateContent(JsonView jsonValue)
{
  *this = jsonValue;
}

EmailMessageTemplateContent& EmailMessageTemplateContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("subject"))
  {
    m_subject = jsonValue.GetString("subject");
    m_subjectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("body"))
  {
    m_body = jsonValue.GetObject("body");
    m_bodyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("headers"))
  {
    Aws::Utils::Array<JsonView> headersJsonList = jsonValue.GetArray("headers");
    for(unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex)
    {
      m_headers.push_back(headersJsonList[headersIndex].AsObject());
    }
    m_headersHasBeenSet = true;
  }
  return *this;
}

JsonValue EmailMessageTemplateContent::Jsonize() const
{
  JsonValue payload;

  if(m_subjectHasBeenSet)
  {
   payload.WithString("subject", m_subject);

  }

  if(m_bodyHasBeenSet)
  {
   payload.WithObject("body", m_body.Jsonize());

  }

  if(m_headersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> headersJsonList(m_headers.size());
   for(unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex)
   {
     headersJsonList[headersIndex].AsObject(m_headers[headersIndex].Jsonize());
   }
   payload.WithArray("headers", std::move(headersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
