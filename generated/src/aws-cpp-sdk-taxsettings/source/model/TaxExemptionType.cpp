/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/TaxExemptionType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

TaxExemptionType::TaxExemptionType(JsonView jsonValue)
{
  *this = jsonValue;
}

TaxExemptionType& TaxExemptionType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicableJurisdictions"))
  {
    Aws::Utils::Array<JsonView> applicableJurisdictionsJsonList = jsonValue.GetArray("applicableJurisdictions");
    for(unsigned applicableJurisdictionsIndex = 0; applicableJurisdictionsIndex < applicableJurisdictionsJsonList.GetLength(); ++applicableJurisdictionsIndex)
    {
      m_applicableJurisdictions.push_back(applicableJurisdictionsJsonList[applicableJurisdictionsIndex].AsObject());
    }
    m_applicableJurisdictionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  return *this;
}

JsonValue TaxExemptionType::Jsonize() const
{
  JsonValue payload;

  if(m_applicableJurisdictionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicableJurisdictionsJsonList(m_applicableJurisdictions.size());
   for(unsigned applicableJurisdictionsIndex = 0; applicableJurisdictionsIndex < applicableJurisdictionsJsonList.GetLength(); ++applicableJurisdictionsIndex)
   {
     applicableJurisdictionsJsonList[applicableJurisdictionsIndex].AsObject(m_applicableJurisdictions[applicableJurisdictionsIndex].Jsonize());
   }
   payload.WithArray("applicableJurisdictions", std::move(applicableJurisdictionsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
