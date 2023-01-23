/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/GroupConfiguration.h>
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

GroupConfiguration::GroupConfiguration() : 
    m_configurationHasBeenSet(false),
    m_proposedConfigurationHasBeenSet(false),
    m_status(GroupConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

GroupConfiguration::GroupConfiguration(JsonView jsonValue) : 
    m_configurationHasBeenSet(false),
    m_proposedConfigurationHasBeenSet(false),
    m_status(GroupConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

GroupConfiguration& GroupConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Configuration"))
  {
    Aws::Utils::Array<JsonView> configurationJsonList = jsonValue.GetArray("Configuration");
    for(unsigned configurationIndex = 0; configurationIndex < configurationJsonList.GetLength(); ++configurationIndex)
    {
      m_configuration.push_back(configurationJsonList[configurationIndex].AsObject());
    }
    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProposedConfiguration"))
  {
    Aws::Utils::Array<JsonView> proposedConfigurationJsonList = jsonValue.GetArray("ProposedConfiguration");
    for(unsigned proposedConfigurationIndex = 0; proposedConfigurationIndex < proposedConfigurationJsonList.GetLength(); ++proposedConfigurationIndex)
    {
      m_proposedConfiguration.push_back(proposedConfigurationJsonList[proposedConfigurationIndex].AsObject());
    }
    m_proposedConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = GroupConfigurationStatusMapper::GetGroupConfigurationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationJsonList(m_configuration.size());
   for(unsigned configurationIndex = 0; configurationIndex < configurationJsonList.GetLength(); ++configurationIndex)
   {
     configurationJsonList[configurationIndex].AsObject(m_configuration[configurationIndex].Jsonize());
   }
   payload.WithArray("Configuration", std::move(configurationJsonList));

  }

  if(m_proposedConfigurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> proposedConfigurationJsonList(m_proposedConfiguration.size());
   for(unsigned proposedConfigurationIndex = 0; proposedConfigurationIndex < proposedConfigurationJsonList.GetLength(); ++proposedConfigurationIndex)
   {
     proposedConfigurationJsonList[proposedConfigurationIndex].AsObject(m_proposedConfiguration[proposedConfigurationIndex].Jsonize());
   }
   payload.WithArray("ProposedConfiguration", std::move(proposedConfigurationJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", GroupConfigurationStatusMapper::GetNameForGroupConfigurationStatus(m_status));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
