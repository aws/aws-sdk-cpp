/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ConfigurationCheckDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SsmSap
{
namespace Model
{

ConfigurationCheckDefinition::ConfigurationCheckDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigurationCheckDefinition& ConfigurationCheckDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = ConfigurationCheckTypeMapper::GetConfigurationCheckTypeForName(jsonValue.GetString("Id"));
    m_idHasBeenSet = true;
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
  if(jsonValue.ValueExists("ApplicableApplicationTypes"))
  {
    Aws::Utils::Array<JsonView> applicableApplicationTypesJsonList = jsonValue.GetArray("ApplicableApplicationTypes");
    for(unsigned applicableApplicationTypesIndex = 0; applicableApplicationTypesIndex < applicableApplicationTypesJsonList.GetLength(); ++applicableApplicationTypesIndex)
    {
      m_applicableApplicationTypes.push_back(ApplicationTypeMapper::GetApplicationTypeForName(applicableApplicationTypesJsonList[applicableApplicationTypesIndex].AsString()));
    }
    m_applicableApplicationTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationCheckDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", ConfigurationCheckTypeMapper::GetNameForConfigurationCheckType(m_id));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_applicableApplicationTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicableApplicationTypesJsonList(m_applicableApplicationTypes.size());
   for(unsigned applicableApplicationTypesIndex = 0; applicableApplicationTypesIndex < applicableApplicationTypesJsonList.GetLength(); ++applicableApplicationTypesIndex)
   {
     applicableApplicationTypesJsonList[applicableApplicationTypesIndex].AsString(ApplicationTypeMapper::GetNameForApplicationType(m_applicableApplicationTypes[applicableApplicationTypesIndex]));
   }
   payload.WithArray("ApplicableApplicationTypes", std::move(applicableApplicationTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
