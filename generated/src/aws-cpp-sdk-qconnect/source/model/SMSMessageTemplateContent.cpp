/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/SMSMessageTemplateContent.h>
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

SMSMessageTemplateContent::SMSMessageTemplateContent(JsonView jsonValue)
{
  *this = jsonValue;
}

SMSMessageTemplateContent& SMSMessageTemplateContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("body"))
  {
    m_body = jsonValue.GetObject("body");
    m_bodyHasBeenSet = true;
  }
  return *this;
}

JsonValue SMSMessageTemplateContent::Jsonize() const
{
  JsonValue payload;

  if(m_bodyHasBeenSet)
  {
   payload.WithObject("body", m_body.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
