/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ComputeType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

ComputeType::ComputeType(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputeType& ComputeType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = ComputeMapper::GetComputeForName(jsonValue.GetString("Name"));
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeType::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", ComputeMapper::GetNameForCompute(m_name));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
