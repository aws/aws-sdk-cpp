/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/TemplateVersionResponse.h>
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

TemplateVersionResponse::TemplateVersionResponse() : 
    m_creationDateHasBeenSet(false),
    m_defaultSubstitutionsHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateTypeHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

TemplateVersionResponse::TemplateVersionResponse(JsonView jsonValue) : 
    m_creationDateHasBeenSet(false),
    m_defaultSubstitutionsHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateTypeHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateVersionResponse& TemplateVersionResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultSubstitutions"))
  {
    m_defaultSubstitutions = jsonValue.GetString("DefaultSubstitutions");

    m_defaultSubstitutionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateDescription"))
  {
    m_templateDescription = jsonValue.GetString("TemplateDescription");

    m_templateDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateName"))
  {
    m_templateName = jsonValue.GetString("TemplateName");

    m_templateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateType"))
  {
    m_templateType = jsonValue.GetString("TemplateType");

    m_templateTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateVersionResponse::Jsonize() const
{
  JsonValue payload;

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate);

  }

  if(m_defaultSubstitutionsHasBeenSet)
  {
   payload.WithString("DefaultSubstitutions", m_defaultSubstitutions);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithString("LastModifiedDate", m_lastModifiedDate);

  }

  if(m_templateDescriptionHasBeenSet)
  {
   payload.WithString("TemplateDescription", m_templateDescription);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("TemplateName", m_templateName);

  }

  if(m_templateTypeHasBeenSet)
  {
   payload.WithString("TemplateType", m_templateType);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
