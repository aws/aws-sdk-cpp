/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ResourceSeverityBreakdown.h>
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

ResourceSeverityBreakdown::ResourceSeverityBreakdown(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceSeverityBreakdown& ResourceSeverityBreakdown::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Other"))
  {
    m_other = jsonValue.GetInteger("Other");
    m_otherHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Fatal"))
  {
    m_fatal = jsonValue.GetInteger("Fatal");
    m_fatalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Critical"))
  {
    m_critical = jsonValue.GetInteger("Critical");
    m_criticalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("High"))
  {
    m_high = jsonValue.GetInteger("High");
    m_highHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Medium"))
  {
    m_medium = jsonValue.GetInteger("Medium");
    m_mediumHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Low"))
  {
    m_low = jsonValue.GetInteger("Low");
    m_lowHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Informational"))
  {
    m_informational = jsonValue.GetInteger("Informational");
    m_informationalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Unknown"))
  {
    m_unknown = jsonValue.GetInteger("Unknown");
    m_unknownHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceSeverityBreakdown::Jsonize() const
{
  JsonValue payload;

  if(m_otherHasBeenSet)
  {
   payload.WithInteger("Other", m_other);

  }

  if(m_fatalHasBeenSet)
  {
   payload.WithInteger("Fatal", m_fatal);

  }

  if(m_criticalHasBeenSet)
  {
   payload.WithInteger("Critical", m_critical);

  }

  if(m_highHasBeenSet)
  {
   payload.WithInteger("High", m_high);

  }

  if(m_mediumHasBeenSet)
  {
   payload.WithInteger("Medium", m_medium);

  }

  if(m_lowHasBeenSet)
  {
   payload.WithInteger("Low", m_low);

  }

  if(m_informationalHasBeenSet)
  {
   payload.WithInteger("Informational", m_informational);

  }

  if(m_unknownHasBeenSet)
  {
   payload.WithInteger("Unknown", m_unknown);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
