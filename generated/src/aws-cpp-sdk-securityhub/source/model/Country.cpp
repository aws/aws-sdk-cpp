/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Country.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Country::Country() : 
    m_countryCodeHasBeenSet(false),
    m_countryNameHasBeenSet(false)
{
}

Country::Country(JsonView jsonValue) : 
    m_countryCodeHasBeenSet(false),
    m_countryNameHasBeenSet(false)
{
  *this = jsonValue;
}

Country& Country::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CountryCode"))
  {
    m_countryCode = jsonValue.GetString("CountryCode");

    m_countryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CountryName"))
  {
    m_countryName = jsonValue.GetString("CountryName");

    m_countryNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Country::Jsonize() const
{
  JsonValue payload;

  if(m_countryCodeHasBeenSet)
  {
   payload.WithString("CountryCode", m_countryCode);

  }

  if(m_countryNameHasBeenSet)
  {
   payload.WithString("CountryName", m_countryName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
