/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TemplateSourceEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TemplateSourceEntity::TemplateSourceEntity() : 
    m_sourceAnalysisHasBeenSet(false),
    m_sourceTemplateHasBeenSet(false)
{
}

TemplateSourceEntity::TemplateSourceEntity(JsonView jsonValue) : 
    m_sourceAnalysisHasBeenSet(false),
    m_sourceTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateSourceEntity& TemplateSourceEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceAnalysis"))
  {
    m_sourceAnalysis = jsonValue.GetObject("SourceAnalysis");

    m_sourceAnalysisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceTemplate"))
  {
    m_sourceTemplate = jsonValue.GetObject("SourceTemplate");

    m_sourceTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateSourceEntity::Jsonize() const
{
  JsonValue payload;

  if(m_sourceAnalysisHasBeenSet)
  {
   payload.WithObject("SourceAnalysis", m_sourceAnalysis.Jsonize());

  }

  if(m_sourceTemplateHasBeenSet)
  {
   payload.WithObject("SourceTemplate", m_sourceTemplate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
