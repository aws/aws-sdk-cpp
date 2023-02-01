/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ConvergenceDetected.h>
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

ConvergenceDetected::ConvergenceDetected() : 
    m_completeOnConvergence(CompleteOnConvergence::NOT_SET),
    m_completeOnConvergenceHasBeenSet(false)
{
}

ConvergenceDetected::ConvergenceDetected(JsonView jsonValue) : 
    m_completeOnConvergence(CompleteOnConvergence::NOT_SET),
    m_completeOnConvergenceHasBeenSet(false)
{
  *this = jsonValue;
}

ConvergenceDetected& ConvergenceDetected::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CompleteOnConvergence"))
  {
    m_completeOnConvergence = CompleteOnConvergenceMapper::GetCompleteOnConvergenceForName(jsonValue.GetString("CompleteOnConvergence"));

    m_completeOnConvergenceHasBeenSet = true;
  }

  return *this;
}

JsonValue ConvergenceDetected::Jsonize() const
{
  JsonValue payload;

  if(m_completeOnConvergenceHasBeenSet)
  {
   payload.WithString("CompleteOnConvergence", CompleteOnConvergenceMapper::GetNameForCompleteOnConvergence(m_completeOnConvergence));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
