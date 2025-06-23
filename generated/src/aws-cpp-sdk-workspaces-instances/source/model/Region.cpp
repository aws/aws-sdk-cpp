/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/Region.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

Region::Region(JsonView jsonValue)
{
  *this = jsonValue;
}

Region& Region::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegionName"))
  {
    m_regionName = jsonValue.GetString("RegionName");
    m_regionNameHasBeenSet = true;
  }
  return *this;
}

JsonValue Region::Jsonize() const
{
  JsonValue payload;

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("RegionName", m_regionName);

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
