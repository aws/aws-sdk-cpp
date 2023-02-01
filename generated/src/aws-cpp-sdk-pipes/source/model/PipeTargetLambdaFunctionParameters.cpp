/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeTargetLambdaFunctionParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

PipeTargetLambdaFunctionParameters::PipeTargetLambdaFunctionParameters() : 
    m_invocationType(PipeTargetInvocationType::NOT_SET),
    m_invocationTypeHasBeenSet(false)
{
}

PipeTargetLambdaFunctionParameters::PipeTargetLambdaFunctionParameters(JsonView jsonValue) : 
    m_invocationType(PipeTargetInvocationType::NOT_SET),
    m_invocationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

PipeTargetLambdaFunctionParameters& PipeTargetLambdaFunctionParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InvocationType"))
  {
    m_invocationType = PipeTargetInvocationTypeMapper::GetPipeTargetInvocationTypeForName(jsonValue.GetString("InvocationType"));

    m_invocationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue PipeTargetLambdaFunctionParameters::Jsonize() const
{
  JsonValue payload;

  if(m_invocationTypeHasBeenSet)
  {
   payload.WithString("InvocationType", PipeTargetInvocationTypeMapper::GetNameForPipeTargetInvocationType(m_invocationType));
  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
