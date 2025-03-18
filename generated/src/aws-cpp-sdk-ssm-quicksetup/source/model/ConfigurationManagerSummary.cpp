/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/ConfigurationManagerSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMQuickSetup
{
namespace Model
{

ConfigurationManagerSummary::ConfigurationManagerSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigurationManagerSummary& ConfigurationManagerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigurationDefinitionSummaries"))
  {
    Aws::Utils::Array<JsonView> configurationDefinitionSummariesJsonList = jsonValue.GetArray("ConfigurationDefinitionSummaries");
    for(unsigned configurationDefinitionSummariesIndex = 0; configurationDefinitionSummariesIndex < configurationDefinitionSummariesJsonList.GetLength(); ++configurationDefinitionSummariesIndex)
    {
      m_configurationDefinitionSummaries.push_back(configurationDefinitionSummariesJsonList[configurationDefinitionSummariesIndex].AsObject());
    }
    m_configurationDefinitionSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManagerArn"))
  {
    m_managerArn = jsonValue.GetString("ManagerArn");
    m_managerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusSummaries"))
  {
    Aws::Utils::Array<JsonView> statusSummariesJsonList = jsonValue.GetArray("StatusSummaries");
    for(unsigned statusSummariesIndex = 0; statusSummariesIndex < statusSummariesJsonList.GetLength(); ++statusSummariesIndex)
    {
      m_statusSummaries.push_back(statusSummariesJsonList[statusSummariesIndex].AsObject());
    }
    m_statusSummariesHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationManagerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_configurationDefinitionSummariesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationDefinitionSummariesJsonList(m_configurationDefinitionSummaries.size());
   for(unsigned configurationDefinitionSummariesIndex = 0; configurationDefinitionSummariesIndex < configurationDefinitionSummariesJsonList.GetLength(); ++configurationDefinitionSummariesIndex)
   {
     configurationDefinitionSummariesJsonList[configurationDefinitionSummariesIndex].AsObject(m_configurationDefinitionSummaries[configurationDefinitionSummariesIndex].Jsonize());
   }
   payload.WithArray("ConfigurationDefinitionSummaries", std::move(configurationDefinitionSummariesJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_managerArnHasBeenSet)
  {
   payload.WithString("ManagerArn", m_managerArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusSummariesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusSummariesJsonList(m_statusSummaries.size());
   for(unsigned statusSummariesIndex = 0; statusSummariesIndex < statusSummariesJsonList.GetLength(); ++statusSummariesIndex)
   {
     statusSummariesJsonList[statusSummariesIndex].AsObject(m_statusSummaries[statusSummariesIndex].Jsonize());
   }
   payload.WithArray("StatusSummaries", std::move(statusSummariesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
