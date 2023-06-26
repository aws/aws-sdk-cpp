/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ProfileTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

ProfileTemplate::ProfileTemplate() : 
    m_templateNameHasBeenSet(false),
    m_templateQuestionsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

ProfileTemplate::ProfileTemplate(JsonView jsonValue) : 
    m_templateNameHasBeenSet(false),
    m_templateQuestionsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

ProfileTemplate& ProfileTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TemplateName"))
  {
    m_templateName = jsonValue.GetString("TemplateName");

    m_templateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateQuestions"))
  {
    Aws::Utils::Array<JsonView> templateQuestionsJsonList = jsonValue.GetArray("TemplateQuestions");
    for(unsigned templateQuestionsIndex = 0; templateQuestionsIndex < templateQuestionsJsonList.GetLength(); ++templateQuestionsIndex)
    {
      m_templateQuestions.push_back(templateQuestionsJsonList[templateQuestionsIndex].AsObject());
    }
    m_templateQuestionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue ProfileTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("TemplateName", m_templateName);

  }

  if(m_templateQuestionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> templateQuestionsJsonList(m_templateQuestions.size());
   for(unsigned templateQuestionsIndex = 0; templateQuestionsIndex < templateQuestionsJsonList.GetLength(); ++templateQuestionsIndex)
   {
     templateQuestionsJsonList[templateQuestionsIndex].AsObject(m_templateQuestions[templateQuestionsIndex].Jsonize());
   }
   payload.WithArray("TemplateQuestions", std::move(templateQuestionsJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
