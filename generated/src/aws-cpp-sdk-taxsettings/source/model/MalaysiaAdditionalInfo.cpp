/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/MalaysiaAdditionalInfo.h>
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

MalaysiaAdditionalInfo::MalaysiaAdditionalInfo() : 
    m_serviceTaxCodesHasBeenSet(false)
{
}

MalaysiaAdditionalInfo::MalaysiaAdditionalInfo(JsonView jsonValue)
  : MalaysiaAdditionalInfo()
{
  *this = jsonValue;
}

MalaysiaAdditionalInfo& MalaysiaAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceTaxCodes"))
  {
    Aws::Utils::Array<JsonView> serviceTaxCodesJsonList = jsonValue.GetArray("serviceTaxCodes");
    for(unsigned serviceTaxCodesIndex = 0; serviceTaxCodesIndex < serviceTaxCodesJsonList.GetLength(); ++serviceTaxCodesIndex)
    {
      m_serviceTaxCodes.push_back(MalaysiaServiceTaxCodeMapper::GetMalaysiaServiceTaxCodeForName(serviceTaxCodesJsonList[serviceTaxCodesIndex].AsString()));
    }
    m_serviceTaxCodesHasBeenSet = true;
  }

  return *this;
}

JsonValue MalaysiaAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_serviceTaxCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceTaxCodesJsonList(m_serviceTaxCodes.size());
   for(unsigned serviceTaxCodesIndex = 0; serviceTaxCodesIndex < serviceTaxCodesJsonList.GetLength(); ++serviceTaxCodesIndex)
   {
     serviceTaxCodesJsonList[serviceTaxCodesIndex].AsString(MalaysiaServiceTaxCodeMapper::GetNameForMalaysiaServiceTaxCode(m_serviceTaxCodes[serviceTaxCodesIndex]));
   }
   payload.WithArray("serviceTaxCodes", std::move(serviceTaxCodesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
