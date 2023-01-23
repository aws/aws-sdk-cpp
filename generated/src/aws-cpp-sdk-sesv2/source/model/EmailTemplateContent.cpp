/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/EmailTemplateContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

EmailTemplateContent::EmailTemplateContent() : 
    m_subjectHasBeenSet(false),
    m_textHasBeenSet(false),
    m_htmlHasBeenSet(false)
{
}

EmailTemplateContent::EmailTemplateContent(JsonView jsonValue) : 
    m_subjectHasBeenSet(false),
    m_textHasBeenSet(false),
    m_htmlHasBeenSet(false)
{
  *this = jsonValue;
}

EmailTemplateContent& EmailTemplateContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetString("Subject");

    m_subjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Html"))
  {
    m_html = jsonValue.GetString("Html");

    m_htmlHasBeenSet = true;
  }

  return *this;
}

JsonValue EmailTemplateContent::Jsonize() const
{
  JsonValue payload;

  if(m_subjectHasBeenSet)
  {
   payload.WithString("Subject", m_subject);

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_htmlHasBeenSet)
  {
   payload.WithString("Html", m_html);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
