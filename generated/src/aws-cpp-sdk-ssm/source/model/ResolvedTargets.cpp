/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ResolvedTargets.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ResolvedTargets::ResolvedTargets() : 
    m_parameterValuesHasBeenSet(false),
    m_truncated(false),
    m_truncatedHasBeenSet(false)
{
}

ResolvedTargets::ResolvedTargets(JsonView jsonValue) : 
    m_parameterValuesHasBeenSet(false),
    m_truncated(false),
    m_truncatedHasBeenSet(false)
{
  *this = jsonValue;
}

ResolvedTargets& ResolvedTargets::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParameterValues"))
  {
    Aws::Utils::Array<JsonView> parameterValuesJsonList = jsonValue.GetArray("ParameterValues");
    for(unsigned parameterValuesIndex = 0; parameterValuesIndex < parameterValuesJsonList.GetLength(); ++parameterValuesIndex)
    {
      m_parameterValues.push_back(parameterValuesJsonList[parameterValuesIndex].AsString());
    }
    m_parameterValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Truncated"))
  {
    m_truncated = jsonValue.GetBool("Truncated");

    m_truncatedHasBeenSet = true;
  }

  return *this;
}

JsonValue ResolvedTargets::Jsonize() const
{
  JsonValue payload;

  if(m_parameterValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parameterValuesJsonList(m_parameterValues.size());
   for(unsigned parameterValuesIndex = 0; parameterValuesIndex < parameterValuesJsonList.GetLength(); ++parameterValuesIndex)
   {
     parameterValuesJsonList[parameterValuesIndex].AsString(m_parameterValues[parameterValuesIndex]);
   }
   payload.WithArray("ParameterValues", std::move(parameterValuesJsonList));

  }

  if(m_truncatedHasBeenSet)
  {
   payload.WithBool("Truncated", m_truncated);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
