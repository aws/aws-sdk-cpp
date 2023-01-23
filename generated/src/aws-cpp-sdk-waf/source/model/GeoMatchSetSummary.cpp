/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/GeoMatchSetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

GeoMatchSetSummary::GeoMatchSetSummary() : 
    m_geoMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

GeoMatchSetSummary::GeoMatchSetSummary(JsonView jsonValue) : 
    m_geoMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

GeoMatchSetSummary& GeoMatchSetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GeoMatchSetId"))
  {
    m_geoMatchSetId = jsonValue.GetString("GeoMatchSetId");

    m_geoMatchSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue GeoMatchSetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_geoMatchSetIdHasBeenSet)
  {
   payload.WithString("GeoMatchSetId", m_geoMatchSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
