/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ReplacementTemplate.h>
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

ReplacementTemplate::ReplacementTemplate() : 
    m_replacementTemplateDataHasBeenSet(false)
{
}

ReplacementTemplate::ReplacementTemplate(JsonView jsonValue) : 
    m_replacementTemplateDataHasBeenSet(false)
{
  *this = jsonValue;
}

ReplacementTemplate& ReplacementTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReplacementTemplateData"))
  {
    m_replacementTemplateData = jsonValue.GetString("ReplacementTemplateData");

    m_replacementTemplateDataHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplacementTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_replacementTemplateDataHasBeenSet)
  {
   payload.WithString("ReplacementTemplateData", m_replacementTemplateData);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
