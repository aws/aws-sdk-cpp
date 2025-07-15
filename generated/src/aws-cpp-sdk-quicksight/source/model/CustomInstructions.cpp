/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CustomInstructions.h>
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

CustomInstructions::CustomInstructions(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomInstructions& CustomInstructions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomInstructionsString"))
  {
    m_customInstructionsString = jsonValue.GetString("CustomInstructionsString");
    m_customInstructionsStringHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomInstructions::Jsonize() const
{
  JsonValue payload;

  if(m_customInstructionsStringHasBeenSet)
  {
   payload.WithString("CustomInstructionsString", m_customInstructionsString);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
