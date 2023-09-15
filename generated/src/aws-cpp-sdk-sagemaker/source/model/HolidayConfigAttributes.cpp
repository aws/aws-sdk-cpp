/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HolidayConfigAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

HolidayConfigAttributes::HolidayConfigAttributes() : 
    m_countryCodeHasBeenSet(false)
{
}

HolidayConfigAttributes::HolidayConfigAttributes(JsonView jsonValue) : 
    m_countryCodeHasBeenSet(false)
{
  *this = jsonValue;
}

HolidayConfigAttributes& HolidayConfigAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CountryCode"))
  {
    m_countryCode = jsonValue.GetString("CountryCode");

    m_countryCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue HolidayConfigAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_countryCodeHasBeenSet)
  {
   payload.WithString("CountryCode", m_countryCode);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
