/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/TemplateSummary.h>
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

TemplateSummary::TemplateSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

TemplateSummary& TemplateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("templateName"))
  {
    m_templateName = jsonValue.GetString("templateName");
    m_templateNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metaTemplateId"))
  {
    m_metaTemplateId = jsonValue.GetString("metaTemplateId");
    m_metaTemplateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateStatus"))
  {
    m_templateStatus = jsonValue.GetString("templateStatus");
    m_templateStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateQualityScore"))
  {
    m_templateQualityScore = jsonValue.GetString("templateQualityScore");
    m_templateQualityScoreHasBeenSet = true;
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
  return *this;
}

JsonValue TemplateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  if(m_metaTemplateIdHasBeenSet)
  {
   payload.WithString("metaTemplateId", m_metaTemplateId);

  }

  if(m_templateStatusHasBeenSet)
  {
   payload.WithString("templateStatus", m_templateStatus);

  }

  if(m_templateQualityScoreHasBeenSet)
  {
   payload.WithString("templateQualityScore", m_templateQualityScore);

  }

  if(m_templateLanguageHasBeenSet)
  {
   payload.WithString("templateLanguage", m_templateLanguage);

  }

  if(m_templateCategoryHasBeenSet)
  {
   payload.WithString("templateCategory", m_templateCategory);

  }

  return payload;
}

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
