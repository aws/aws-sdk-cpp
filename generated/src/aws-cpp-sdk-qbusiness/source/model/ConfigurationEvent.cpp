/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ConfigurationEvent.h>
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

ConfigurationEvent::ConfigurationEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigurationEvent& ConfigurationEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("chatMode"))
  {
    m_chatMode = ChatModeMapper::GetChatModeForName(jsonValue.GetString("chatMode"));
    m_chatModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("chatModeConfiguration"))
  {
    m_chatModeConfiguration = jsonValue.GetObject("chatModeConfiguration");
    m_chatModeConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attributeFilter"))
  {
    m_attributeFilter = jsonValue.GetObject("attributeFilter");
    m_attributeFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationEvent::Jsonize() const
{
  JsonValue payload;

  if(m_chatModeHasBeenSet)
  {
   payload.WithString("chatMode", ChatModeMapper::GetNameForChatMode(m_chatMode));
  }

  if(m_chatModeConfigurationHasBeenSet)
  {
   payload.WithObject("chatModeConfiguration", m_chatModeConfiguration.Jsonize());

  }

  if(m_attributeFilterHasBeenSet)
  {
   payload.WithObject("attributeFilter", m_attributeFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
