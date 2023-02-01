/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/GeoMatchStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

GeoMatchStatement::GeoMatchStatement() : 
    m_countryCodesHasBeenSet(false),
    m_forwardedIPConfigHasBeenSet(false)
{
}

GeoMatchStatement::GeoMatchStatement(JsonView jsonValue) : 
    m_countryCodesHasBeenSet(false),
    m_forwardedIPConfigHasBeenSet(false)
{
  *this = jsonValue;
}

GeoMatchStatement& GeoMatchStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CountryCodes"))
  {
    Aws::Utils::Array<JsonView> countryCodesJsonList = jsonValue.GetArray("CountryCodes");
    for(unsigned countryCodesIndex = 0; countryCodesIndex < countryCodesJsonList.GetLength(); ++countryCodesIndex)
    {
      m_countryCodes.push_back(CountryCodeMapper::GetCountryCodeForName(countryCodesJsonList[countryCodesIndex].AsString()));
    }
    m_countryCodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForwardedIPConfig"))
  {
    m_forwardedIPConfig = jsonValue.GetObject("ForwardedIPConfig");

    m_forwardedIPConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue GeoMatchStatement::Jsonize() const
{
  JsonValue payload;

  if(m_countryCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> countryCodesJsonList(m_countryCodes.size());
   for(unsigned countryCodesIndex = 0; countryCodesIndex < countryCodesJsonList.GetLength(); ++countryCodesIndex)
   {
     countryCodesJsonList[countryCodesIndex].AsString(CountryCodeMapper::GetNameForCountryCode(m_countryCodes[countryCodesIndex]));
   }
   payload.WithArray("CountryCodes", std::move(countryCodesJsonList));

  }

  if(m_forwardedIPConfigHasBeenSet)
  {
   payload.WithObject("ForwardedIPConfig", m_forwardedIPConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
