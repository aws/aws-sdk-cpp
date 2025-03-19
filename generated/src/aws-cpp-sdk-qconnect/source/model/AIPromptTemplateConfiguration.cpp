/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AIPromptTemplateConfiguration.h>
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

AIPromptTemplateConfiguration::AIPromptTemplateConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AIPromptTemplateConfiguration& AIPromptTemplateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("textFullAIPromptEditTemplateConfiguration"))
  {
    m_textFullAIPromptEditTemplateConfiguration = jsonValue.GetObject("textFullAIPromptEditTemplateConfiguration");
    m_textFullAIPromptEditTemplateConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AIPromptTemplateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_textFullAIPromptEditTemplateConfigurationHasBeenSet)
  {
   payload.WithObject("textFullAIPromptEditTemplateConfiguration", m_textFullAIPromptEditTemplateConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
