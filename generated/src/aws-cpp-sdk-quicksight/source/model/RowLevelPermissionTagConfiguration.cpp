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
    m_tagRulesHasBeenSet(false),
    m_tagRuleConfigurationsHasBeenSet(false)
{
}

RowLevelPermissionTagConfiguration::RowLevelPermissionTagConfiguration(JsonView jsonValue) : 
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagRulesHasBeenSet(false),
    m_tagRuleConfigurationsHasBeenSet(false)
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

  if(jsonValue.ValueExists("TagRuleConfigurations"))
  {
    Aws::Utils::Array<JsonView> tagRuleConfigurationsJsonList = jsonValue.GetArray("TagRuleConfigurations");
    for(unsigned tagRuleConfigurationsIndex = 0; tagRuleConfigurationsIndex < tagRuleConfigurationsJsonList.GetLength(); ++tagRuleConfigurationsIndex)
    {
      Aws::Utils::Array<JsonView> rowLevelPermissionTagRuleConfigurationJsonList = tagRuleConfigurationsJsonList[tagRuleConfigurationsIndex].AsArray();
      Aws::Vector<Aws::String> rowLevelPermissionTagRuleConfigurationList;
      rowLevelPermissionTagRuleConfigurationList.reserve((size_t)rowLevelPermissionTagRuleConfigurationJsonList.GetLength());
      for(unsigned rowLevelPermissionTagRuleConfigurationIndex = 0; rowLevelPermissionTagRuleConfigurationIndex < rowLevelPermissionTagRuleConfigurationJsonList.GetLength(); ++rowLevelPermissionTagRuleConfigurationIndex)
      {
        rowLevelPermissionTagRuleConfigurationList.push_back(rowLevelPermissionTagRuleConfigurationJsonList[rowLevelPermissionTagRuleConfigurationIndex].AsString());
      }
      m_tagRuleConfigurations.push_back(std::move(rowLevelPermissionTagRuleConfigurationList));
    }
    m_tagRuleConfigurationsHasBeenSet = true;
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

  if(m_tagRuleConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagRuleConfigurationsJsonList(m_tagRuleConfigurations.size());
   for(unsigned tagRuleConfigurationsIndex = 0; tagRuleConfigurationsIndex < tagRuleConfigurationsJsonList.GetLength(); ++tagRuleConfigurationsIndex)
   {
     Aws::Utils::Array<JsonValue> rowLevelPermissionTagRuleConfigurationJsonList(m_tagRuleConfigurations[tagRuleConfigurationsIndex].size());
     for(unsigned rowLevelPermissionTagRuleConfigurationIndex = 0; rowLevelPermissionTagRuleConfigurationIndex < rowLevelPermissionTagRuleConfigurationJsonList.GetLength(); ++rowLevelPermissionTagRuleConfigurationIndex)
     {
       rowLevelPermissionTagRuleConfigurationJsonList[rowLevelPermissionTagRuleConfigurationIndex].AsString(m_tagRuleConfigurations[tagRuleConfigurationsIndex][rowLevelPermissionTagRuleConfigurationIndex]);
     }
     tagRuleConfigurationsJsonList[tagRuleConfigurationsIndex].AsArray(std::move(rowLevelPermissionTagRuleConfigurationJsonList));
   }
   payload.WithArray("TagRuleConfigurations", std::move(tagRuleConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
