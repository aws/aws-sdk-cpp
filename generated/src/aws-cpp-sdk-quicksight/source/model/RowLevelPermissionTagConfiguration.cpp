/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RowLevelPermissionTagConfiguration.h>
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

RowLevelPermissionTagConfiguration::RowLevelPermissionTagConfiguration() : 
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagRulesHasBeenSet(false)
{
}

RowLevelPermissionTagConfiguration::RowLevelPermissionTagConfiguration(JsonView jsonValue) : 
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagRulesHasBeenSet(false)
{
  *this = jsonValue;
}

RowLevelPermissionTagConfiguration& RowLevelPermissionTagConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagRules"))
  {
    Aws::Utils::Array<JsonView> tagRulesJsonList = jsonValue.GetArray("TagRules");
    for(unsigned tagRulesIndex = 0; tagRulesIndex < tagRulesJsonList.GetLength(); ++tagRulesIndex)
    {
      m_tagRules.push_back(tagRulesJsonList[tagRulesIndex].AsObject());
    }
    m_tagRulesHasBeenSet = true;
  }

  return *this;
}

JsonValue RowLevelPermissionTagConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_tagRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagRulesJsonList(m_tagRules.size());
   for(unsigned tagRulesIndex = 0; tagRulesIndex < tagRulesJsonList.GetLength(); ++tagRulesIndex)
   {
     tagRulesJsonList[tagRulesIndex].AsObject(m_tagRules[tagRulesIndex].Jsonize());
   }
   payload.WithArray("TagRules", std::move(tagRulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
