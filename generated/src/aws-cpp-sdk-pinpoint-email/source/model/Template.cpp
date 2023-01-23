/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/Template.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

Template::Template() : 
    m_templateArnHasBeenSet(false),
    m_templateDataHasBeenSet(false)
{
}

Template::Template(JsonView jsonValue) : 
    m_templateArnHasBeenSet(false),
    m_templateDataHasBeenSet(false)
{
  *this = jsonValue;
}

Template& Template::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue Template::Jsonize() const
{
  JsonValue payload;

  if(m_templateArnHasBeenSet)
  {
   payload.WithString("TemplateArn", m_templateArn);

  }

  if(m_templateDataHasBeenSet)
  {
   payload.WithString("TemplateData", m_templateData);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
