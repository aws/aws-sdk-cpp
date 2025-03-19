/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/MessageTemplateContentProvider.h>
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

MessageTemplateContentProvider::MessageTemplateContentProvider(JsonView jsonValue)
{
  *this = jsonValue;
}

MessageTemplateContentProvider& MessageTemplateContentProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetObject("email");
    m_emailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sms"))
  {
    m_sms = jsonValue.GetObject("sms");
    m_smsHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageTemplateContentProvider::Jsonize() const
{
  JsonValue payload;

  if(m_emailHasBeenSet)
  {
   payload.WithObject("email", m_email.Jsonize());

  }

  if(m_smsHasBeenSet)
  {
   payload.WithObject("sms", m_sms.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
