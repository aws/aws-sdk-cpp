/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/Template.h>
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

Template::Template() : 
    m_templateNameHasBeenSet(false),
    m_templateArnHasBeenSet(false),
    m_templateDataHasBeenSet(false),
    m_headersHasBeenSet(false)
{
}

Template::Template(JsonView jsonValue) : 
    m_templateNameHasBeenSet(false),
    m_templateArnHasBeenSet(false),
    m_templateDataHasBeenSet(false),
    m_headersHasBeenSet(false)
{
  *this = jsonValue;
}

Template& Template::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TemplateName"))
  {
    m_templateName = jsonValue.GetString("TemplateName");

    m_templateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateArn"))
  {
    m_templateArn = jsonValue.GetString("TemplateArn");

    m_templateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateData"))
  {
    m_templateData = jsonValue.GetString("TemplateData");

    m_templateDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Headers"))
  {
    Aws::Utils::Array<JsonView> headersJsonList = jsonValue.GetArray("Headers");
    for(unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex)
    {
      m_headers.push_back(headersJsonList[headersIndex].AsObject());
    }
    m_headersHasBeenSet = true;
  }

  return *this;
}

JsonValue Template::Jsonize() const
{
  JsonValue payload;

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("TemplateName", m_templateName);

  }

  if(m_templateArnHasBeenSet)
  {
   payload.WithString("TemplateArn", m_templateArn);

  }

  if(m_templateDataHasBeenSet)
  {
   payload.WithString("TemplateData", m_templateData);

  }

  if(m_headersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> headersJsonList(m_headers.size());
   for(unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex)
   {
     headersJsonList[headersIndex].AsObject(m_headers[headersIndex].Jsonize());
   }
   payload.WithArray("Headers", std::move(headersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
