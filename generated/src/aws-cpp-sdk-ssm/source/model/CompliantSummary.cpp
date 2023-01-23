/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/CompliantSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

CompliantSummary::CompliantSummary() : 
    m_compliantCount(0),
    m_compliantCountHasBeenSet(false),
    m_severitySummaryHasBeenSet(false)
{
}

CompliantSummary::CompliantSummary(JsonView jsonValue) : 
    m_compliantCount(0),
    m_compliantCountHasBeenSet(false),
    m_severitySummaryHasBeenSet(false)
{
  *this = jsonValue;
}

CompliantSummary& CompliantSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CompliantCount"))
  {
    m_compliantCount = jsonValue.GetInteger("CompliantCount");

    m_compliantCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SeveritySummary"))
  {
    m_severitySummary = jsonValue.GetObject("SeveritySummary");

    m_severitySummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue CompliantSummary::Jsonize() const
{
  JsonValue payload;

  if(m_compliantCountHasBeenSet)
  {
   payload.WithInteger("CompliantCount", m_compliantCount);

  }

  if(m_severitySummaryHasBeenSet)
  {
   payload.WithObject("SeveritySummary", m_severitySummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
