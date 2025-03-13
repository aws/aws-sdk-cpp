/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/ConfigurationDefinitionSummary.h>
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

ConfigurationDefinitionSummary::ConfigurationDefinitionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigurationDefinitionSummary& ConfigurationDefinitionSummary::operator =(JsonView jsonValue)
{
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

JsonValue ConfigurationDefinitionSummary::Jsonize() const
{
  JsonValue payload;

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
