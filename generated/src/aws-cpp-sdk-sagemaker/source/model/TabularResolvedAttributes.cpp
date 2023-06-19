/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TabularResolvedAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

TabularResolvedAttributes::TabularResolvedAttributes() : 
    m_problemType(ProblemType::NOT_SET),
    m_problemTypeHasBeenSet(false)
{
}

TabularResolvedAttributes::TabularResolvedAttributes(JsonView jsonValue) : 
    m_problemType(ProblemType::NOT_SET),
    m_problemTypeHasBeenSet(false)
{
  *this = jsonValue;
}

TabularResolvedAttributes& TabularResolvedAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProblemType"))
  {
    m_problemType = ProblemTypeMapper::GetProblemTypeForName(jsonValue.GetString("ProblemType"));

    m_problemTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue TabularResolvedAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_problemTypeHasBeenSet)
  {
   payload.WithString("ProblemType", ProblemTypeMapper::GetNameForProblemType(m_problemType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
