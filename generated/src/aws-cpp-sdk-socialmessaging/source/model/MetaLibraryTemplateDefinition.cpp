/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/MetaLibraryTemplateDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SocialMessaging
{
namespace Model
{

MetaLibraryTemplateDefinition::MetaLibraryTemplateDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

MetaLibraryTemplateDefinition& MetaLibraryTemplateDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("templateName"))
  {
    m_templateName = jsonValue.GetString("templateName");
    m_templateNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateLanguage"))
  {
    m_templateLanguage = jsonValue.GetString("templateLanguage");
    m_templateLanguageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateCategory"))
  {
    m_templateCategory = jsonValue.GetString("templateCategory");
    m_templateCategoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateTopic"))
  {
    m_templateTopic = jsonValue.GetString("templateTopic");
    m_templateTopicHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateUseCase"))
  {
    m_templateUseCase = jsonValue.GetString("templateUseCase");
    m_templateUseCaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateIndustry"))
  {
    Aws::Utils::Array<JsonView> templateIndustryJsonList = jsonValue.GetArray("templateIndustry");
    for(unsigned templateIndustryIndex = 0; templateIndustryIndex < templateIndustryJsonList.GetLength(); ++templateIndustryIndex)
    {
      m_templateIndustry.push_back(templateIndustryJsonList[templateIndustryIndex].AsString());
    }
    m_templateIndustryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateHeader"))
  {
    m_templateHeader = jsonValue.GetString("templateHeader");
    m_templateHeaderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateBody"))
  {
    m_templateBody = jsonValue.GetString("templateBody");
    m_templateBodyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateButtons"))
  {
    Aws::Utils::Array<JsonView> templateButtonsJsonList = jsonValue.GetArray("templateButtons");
    for(unsigned templateButtonsIndex = 0; templateButtonsIndex < templateButtonsJsonList.GetLength(); ++templateButtonsIndex)
    {
      m_templateButtons.push_back(templateButtonsJsonList[templateButtonsIndex].AsObject());
    }
    m_templateButtonsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateId"))
  {
    m_templateId = jsonValue.GetString("templateId");
    m_templateIdHasBeenSet = true;
  }
  return *this;
}

JsonValue MetaLibraryTemplateDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  if(m_templateLanguageHasBeenSet)
  {
   payload.WithString("templateLanguage", m_templateLanguage);

  }

  if(m_templateCategoryHasBeenSet)
  {
   payload.WithString("templateCategory", m_templateCategory);

  }

  if(m_templateTopicHasBeenSet)
  {
   payload.WithString("templateTopic", m_templateTopic);

  }

  if(m_templateUseCaseHasBeenSet)
  {
   payload.WithString("templateUseCase", m_templateUseCase);

  }

  if(m_templateIndustryHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> templateIndustryJsonList(m_templateIndustry.size());
   for(unsigned templateIndustryIndex = 0; templateIndustryIndex < templateIndustryJsonList.GetLength(); ++templateIndustryIndex)
   {
     templateIndustryJsonList[templateIndustryIndex].AsString(m_templateIndustry[templateIndustryIndex]);
   }
   payload.WithArray("templateIndustry", std::move(templateIndustryJsonList));

  }

  if(m_templateHeaderHasBeenSet)
  {
   payload.WithString("templateHeader", m_templateHeader);

  }

  if(m_templateBodyHasBeenSet)
  {
   payload.WithString("templateBody", m_templateBody);

  }

  if(m_templateButtonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> templateButtonsJsonList(m_templateButtons.size());
   for(unsigned templateButtonsIndex = 0; templateButtonsIndex < templateButtonsJsonList.GetLength(); ++templateButtonsIndex)
   {
     templateButtonsJsonList[templateButtonsIndex].AsObject(m_templateButtons[templateButtonsIndex].Jsonize());
   }
   payload.WithArray("templateButtons", std::move(templateButtonsJsonList));

  }

  if(m_templateIdHasBeenSet)
  {
   payload.WithString("templateId", m_templateId);

  }

  return payload;
}

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
