/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/MetaLibraryTemplate.h>
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

MetaLibraryTemplate::MetaLibraryTemplate(JsonView jsonValue)
{
  *this = jsonValue;
}

MetaLibraryTemplate& MetaLibraryTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("templateName"))
  {
    m_templateName = jsonValue.GetString("templateName");
    m_templateNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("libraryTemplateName"))
  {
    m_libraryTemplateName = jsonValue.GetString("libraryTemplateName");
    m_libraryTemplateNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateCategory"))
  {
    m_templateCategory = jsonValue.GetString("templateCategory");
    m_templateCategoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateLanguage"))
  {
    m_templateLanguage = jsonValue.GetString("templateLanguage");
    m_templateLanguageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("libraryTemplateButtonInputs"))
  {
    Aws::Utils::Array<JsonView> libraryTemplateButtonInputsJsonList = jsonValue.GetArray("libraryTemplateButtonInputs");
    for(unsigned libraryTemplateButtonInputsIndex = 0; libraryTemplateButtonInputsIndex < libraryTemplateButtonInputsJsonList.GetLength(); ++libraryTemplateButtonInputsIndex)
    {
      m_libraryTemplateButtonInputs.push_back(libraryTemplateButtonInputsJsonList[libraryTemplateButtonInputsIndex].AsObject());
    }
    m_libraryTemplateButtonInputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("libraryTemplateBodyInputs"))
  {
    m_libraryTemplateBodyInputs = jsonValue.GetObject("libraryTemplateBodyInputs");
    m_libraryTemplateBodyInputsHasBeenSet = true;
  }
  return *this;
}

JsonValue MetaLibraryTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  if(m_libraryTemplateNameHasBeenSet)
  {
   payload.WithString("libraryTemplateName", m_libraryTemplateName);

  }

  if(m_templateCategoryHasBeenSet)
  {
   payload.WithString("templateCategory", m_templateCategory);

  }

  if(m_templateLanguageHasBeenSet)
  {
   payload.WithString("templateLanguage", m_templateLanguage);

  }

  if(m_libraryTemplateButtonInputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> libraryTemplateButtonInputsJsonList(m_libraryTemplateButtonInputs.size());
   for(unsigned libraryTemplateButtonInputsIndex = 0; libraryTemplateButtonInputsIndex < libraryTemplateButtonInputsJsonList.GetLength(); ++libraryTemplateButtonInputsIndex)
   {
     libraryTemplateButtonInputsJsonList[libraryTemplateButtonInputsIndex].AsObject(m_libraryTemplateButtonInputs[libraryTemplateButtonInputsIndex].Jsonize());
   }
   payload.WithArray("libraryTemplateButtonInputs", std::move(libraryTemplateButtonInputsJsonList));

  }

  if(m_libraryTemplateBodyInputsHasBeenSet)
  {
   payload.WithObject("libraryTemplateBodyInputs", m_libraryTemplateBodyInputs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
