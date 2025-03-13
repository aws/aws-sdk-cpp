/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/ConfigurationSummary.h>
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

ConfigurationSummary::ConfigurationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigurationSummary& ConfigurationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Account"))
  {
    m_account = jsonValue.GetString("Account");
    m_accountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfigurationDefinitionId"))
  {
    m_configurationDefinitionId = jsonValue.GetString("ConfigurationDefinitionId");
    m_configurationDefinitionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FirstClassParameters"))
  {
    Aws::Map<Aws::String, JsonView> firstClassParametersJsonMap = jsonValue.GetObject("FirstClassParameters").GetAllObjects();
    for(auto& firstClassParametersItem : firstClassParametersJsonMap)
    {
      m_firstClassParameters[firstClassParametersItem.first] = firstClassParametersItem.second.AsString();
    }
    m_firstClassParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManagerArn"))
  {
    m_managerArn = jsonValue.GetString("ManagerArn");
    m_managerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
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
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TypeVersion"))
  {
    m_typeVersion = jsonValue.GetString("TypeVersion");
    m_typeVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_accountHasBeenSet)
  {
   payload.WithString("Account", m_account);

  }

  if(m_configurationDefinitionIdHasBeenSet)
  {
   payload.WithString("ConfigurationDefinitionId", m_configurationDefinitionId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_firstClassParametersHasBeenSet)
  {
   JsonValue firstClassParametersJsonMap;
   for(auto& firstClassParametersItem : m_firstClassParameters)
   {
     firstClassParametersJsonMap.WithString(firstClassParametersItem.first, firstClassParametersItem.second);
   }
   payload.WithObject("FirstClassParameters", std::move(firstClassParametersJsonMap));

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_managerArnHasBeenSet)
  {
   payload.WithString("ManagerArn", m_managerArn);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

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

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_typeVersionHasBeenSet)
  {
   payload.WithString("TypeVersion", m_typeVersion);

  }

  return payload;
}

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
