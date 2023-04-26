/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/PipelineBlueprintSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OSIS
{
namespace Model
{

PipelineBlueprintSummary::PipelineBlueprintSummary() : 
    m_blueprintNameHasBeenSet(false)
{
}

PipelineBlueprintSummary::PipelineBlueprintSummary(JsonView jsonValue) : 
    m_blueprintNameHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineBlueprintSummary& PipelineBlueprintSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlueprintName"))
  {
    m_blueprintName = jsonValue.GetString("BlueprintName");

    m_blueprintNameHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineBlueprintSummary::Jsonize() const
{
  JsonValue payload;

  if(m_blueprintNameHasBeenSet)
  {
   payload.WithString("BlueprintName", m_blueprintName);

  }

  return payload;
}

} // namespace Model
} // namespace OSIS
} // namespace Aws
