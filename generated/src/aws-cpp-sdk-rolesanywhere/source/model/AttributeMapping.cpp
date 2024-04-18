/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/AttributeMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

AttributeMapping::AttributeMapping() : 
    m_certificateField(CertificateField::NOT_SET),
    m_certificateFieldHasBeenSet(false),
    m_mappingRulesHasBeenSet(false)
{
}

AttributeMapping::AttributeMapping(JsonView jsonValue) : 
    m_certificateField(CertificateField::NOT_SET),
    m_certificateFieldHasBeenSet(false),
    m_mappingRulesHasBeenSet(false)
{
  *this = jsonValue;
}

AttributeMapping& AttributeMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateField"))
  {
    m_certificateField = CertificateFieldMapper::GetCertificateFieldForName(jsonValue.GetString("certificateField"));

    m_certificateFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mappingRules"))
  {
    Aws::Utils::Array<JsonView> mappingRulesJsonList = jsonValue.GetArray("mappingRules");
    for(unsigned mappingRulesIndex = 0; mappingRulesIndex < mappingRulesJsonList.GetLength(); ++mappingRulesIndex)
    {
      m_mappingRules.push_back(mappingRulesJsonList[mappingRulesIndex].AsObject());
    }
    m_mappingRulesHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributeMapping::Jsonize() const
{
  JsonValue payload;

  if(m_certificateFieldHasBeenSet)
  {
   payload.WithString("certificateField", CertificateFieldMapper::GetNameForCertificateField(m_certificateField));
  }

  if(m_mappingRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mappingRulesJsonList(m_mappingRules.size());
   for(unsigned mappingRulesIndex = 0; mappingRulesIndex < mappingRulesJsonList.GetLength(); ++mappingRulesIndex)
   {
     mappingRulesJsonList[mappingRulesIndex].AsObject(m_mappingRules[mappingRulesIndex].Jsonize());
   }
   payload.WithArray("mappingRules", std::move(mappingRulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
