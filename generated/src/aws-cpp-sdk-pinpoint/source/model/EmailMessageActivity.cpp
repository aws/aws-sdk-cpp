﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/EmailMessageActivity.h>
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

EmailMessageActivity::EmailMessageActivity(JsonView jsonValue)
{
  *this = jsonValue;
}

EmailMessageActivity& EmailMessageActivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MessageConfig"))
  {
    m_messageConfig = jsonValue.GetObject("MessageConfig");
    m_messageConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextActivity"))
  {
    m_nextActivity = jsonValue.GetString("NextActivity");
    m_nextActivityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TemplateName"))
  {
    m_templateName = jsonValue.GetString("TemplateName");
    m_templateNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TemplateVersion"))
  {
    m_templateVersion = jsonValue.GetString("TemplateVersion");
    m_templateVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue EmailMessageActivity::Jsonize() const
{
  JsonValue payload;

  if(m_messageConfigHasBeenSet)
  {
   payload.WithObject("MessageConfig", m_messageConfig.Jsonize());

  }

  if(m_nextActivityHasBeenSet)
  {
   payload.WithString("NextActivity", m_nextActivity);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("TemplateName", m_templateName);

  }

  if(m_templateVersionHasBeenSet)
  {
   payload.WithString("TemplateVersion", m_templateVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
