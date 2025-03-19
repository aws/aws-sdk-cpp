/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/Group.h>
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

Group::Group(JsonView jsonValue)
{
  *this = jsonValue;
}

Group& Group::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupArn"))
  {
    m_groupArn = jsonValue.GetString("GroupArn");
    m_groupArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Criticality"))
  {
    m_criticality = jsonValue.GetInteger("Criticality");
    m_criticalityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");
    m_ownerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationTag"))
  {
    Aws::Map<Aws::String, JsonView> applicationTagJsonMap = jsonValue.GetObject("ApplicationTag").GetAllObjects();
    for(auto& applicationTagItem : applicationTagJsonMap)
    {
      m_applicationTag[applicationTagItem.first] = applicationTagItem.second.AsString();
    }
    m_applicationTagHasBeenSet = true;
  }
  return *this;
}

JsonValue Group::Jsonize() const
{
  JsonValue payload;

  if(m_groupArnHasBeenSet)
  {
   payload.WithString("GroupArn", m_groupArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_criticalityHasBeenSet)
  {
   payload.WithInteger("Criticality", m_criticality);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_applicationTagHasBeenSet)
  {
   JsonValue applicationTagJsonMap;
   for(auto& applicationTagItem : m_applicationTag)
   {
     applicationTagJsonMap.WithString(applicationTagItem.first, applicationTagItem.second);
   }
   payload.WithObject("ApplicationTag", std::move(applicationTagJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
