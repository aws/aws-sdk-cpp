/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/AssignedVariablesDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

AssignedVariablesDetails::AssignedVariablesDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

AssignedVariablesDetails& AssignedVariablesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("truncated"))
  {
    m_truncated = jsonValue.GetBool("truncated");
    m_truncatedHasBeenSet = true;
  }
  return *this;
}

JsonValue AssignedVariablesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_truncatedHasBeenSet)
  {
   payload.WithBool("truncated", m_truncated);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
