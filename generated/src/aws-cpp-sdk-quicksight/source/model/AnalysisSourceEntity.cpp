/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnalysisSourceEntity.h>
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

AnalysisSourceEntity::AnalysisSourceEntity() : 
    m_sourceTemplateHasBeenSet(false)
{
}

AnalysisSourceEntity::AnalysisSourceEntity(JsonView jsonValue) : 
    m_sourceTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

AnalysisSourceEntity& AnalysisSourceEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceTemplate"))
  {
    m_sourceTemplate = jsonValue.GetObject("SourceTemplate");

    m_sourceTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalysisSourceEntity::Jsonize() const
{
  JsonValue payload;

  if(m_sourceTemplateHasBeenSet)
  {
   payload.WithObject("SourceTemplate", m_sourceTemplate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
