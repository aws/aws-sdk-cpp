/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/Locale.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

Locale::Locale() : 
    m_countryHasBeenSet(false),
    m_subdivisionHasBeenSet(false)
{
}

Locale::Locale(JsonView jsonValue) : 
    m_countryHasBeenSet(false),
    m_subdivisionHasBeenSet(false)
{
  *this = jsonValue;
}

Locale& Locale::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");

    m_countryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subdivision"))
  {
    m_subdivision = jsonValue.GetString("Subdivision");

    m_subdivisionHasBeenSet = true;
  }

  return *this;
}

JsonValue Locale::Jsonize() const
{
  JsonValue payload;

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_subdivisionHasBeenSet)
  {
   payload.WithString("Subdivision", m_subdivision);

  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws
