/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/ResourceStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

ResourceStatus::ResourceStatus() : 
    m_name(ResourceStatusValue::NOT_SET),
    m_nameHasBeenSet(false)
{
}

ResourceStatus::ResourceStatus(JsonView jsonValue) : 
    m_name(ResourceStatusValue::NOT_SET),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceStatus& ResourceStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = ResourceStatusValueMapper::GetResourceStatusValueForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceStatus::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", ResourceStatusValueMapper::GetNameForResourceStatusValue(m_name));
  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
