/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-a2i-runtime/model/HumanLoopInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AugmentedAIRuntime
{
namespace Model
{

HumanLoopInput::HumanLoopInput() : 
    m_inputContentHasBeenSet(false)
{
}

HumanLoopInput::HumanLoopInput(JsonView jsonValue) : 
    m_inputContentHasBeenSet(false)
{
  *this = jsonValue;
}

HumanLoopInput& HumanLoopInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputContent"))
  {
    m_inputContent = jsonValue.GetString("InputContent");

    m_inputContentHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanLoopInput::Jsonize() const
{
  JsonValue payload;

  if(m_inputContentHasBeenSet)
  {
   payload.WithString("InputContent", m_inputContent);

  }

  return payload;
}

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
