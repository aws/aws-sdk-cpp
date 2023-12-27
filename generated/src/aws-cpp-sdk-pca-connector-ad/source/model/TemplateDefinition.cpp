/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/TemplateDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

TemplateDefinition::TemplateDefinition() : 
    m_templateV2HasBeenSet(false),
    m_templateV3HasBeenSet(false),
    m_templateV4HasBeenSet(false)
{
}

TemplateDefinition::TemplateDefinition(JsonView jsonValue) : 
    m_templateV2HasBeenSet(false),
    m_templateV3HasBeenSet(false),
    m_templateV4HasBeenSet(false)
{
  *this = jsonValue;
}

TemplateDefinition& TemplateDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TemplateV2"))
  {
    m_templateV2 = jsonValue.GetObject("TemplateV2");

    m_templateV2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateV3"))
  {
    m_templateV3 = jsonValue.GetObject("TemplateV3");

    m_templateV3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateV4"))
  {
    m_templateV4 = jsonValue.GetObject("TemplateV4");

    m_templateV4HasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_templateV2HasBeenSet)
  {
   payload.WithObject("TemplateV2", m_templateV2.Jsonize());

  }

  if(m_templateV3HasBeenSet)
  {
   payload.WithObject("TemplateV3", m_templateV3.Jsonize());

  }

  if(m_templateV4HasBeenSet)
  {
   payload.WithObject("TemplateV4", m_templateV4.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
