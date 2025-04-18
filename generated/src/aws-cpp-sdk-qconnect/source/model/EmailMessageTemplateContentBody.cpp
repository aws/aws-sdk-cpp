/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/EmailMessageTemplateContentBody.h>
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

EmailMessageTemplateContentBody::EmailMessageTemplateContentBody(JsonView jsonValue)
{
  *this = jsonValue;
}

EmailMessageTemplateContentBody& EmailMessageTemplateContentBody::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("plainText"))
  {
    m_plainText = jsonValue.GetObject("plainText");
    m_plainTextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("html"))
  {
    m_html = jsonValue.GetObject("html");
    m_htmlHasBeenSet = true;
  }
  return *this;
}

JsonValue EmailMessageTemplateContentBody::Jsonize() const
{
  JsonValue payload;

  if(m_plainTextHasBeenSet)
  {
   payload.WithObject("plainText", m_plainText.Jsonize());

  }

  if(m_htmlHasBeenSet)
  {
   payload.WithObject("html", m_html.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
