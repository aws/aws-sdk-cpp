/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/DeleteRegionAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

DeleteRegionAction::DeleteRegionAction() : 
    m_regionNameHasBeenSet(false)
{
}

DeleteRegionAction::DeleteRegionAction(JsonView jsonValue) : 
    m_regionNameHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteRegionAction& DeleteRegionAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("regionName"))
  {
    m_regionName = jsonValue.GetString("regionName");

    m_regionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteRegionAction::Jsonize() const
{
  JsonValue payload;

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("regionName", m_regionName);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
