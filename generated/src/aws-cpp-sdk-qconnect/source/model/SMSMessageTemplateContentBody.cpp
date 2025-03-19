/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/SMSMessageTemplateContentBody.h>
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

SMSMessageTemplateContentBody::SMSMessageTemplateContentBody(JsonView jsonValue)
{
  *this = jsonValue;
}

SMSMessageTemplateContentBody& SMSMessageTemplateContentBody::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("plainText"))
  {
    m_plainText = jsonValue.GetObject("plainText");
    m_plainTextHasBeenSet = true;
  }
  return *this;
}

JsonValue SMSMessageTemplateContentBody::Jsonize() const
{
  JsonValue payload;

  if(m_plainTextHasBeenSet)
  {
   payload.WithObject("plainText", m_plainText.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
