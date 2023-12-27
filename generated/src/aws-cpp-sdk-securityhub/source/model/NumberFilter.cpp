/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/NumberFilter.h>
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

NumberFilter::NumberFilter() : 
    m_gte(0.0),
    m_gteHasBeenSet(false),
    m_lte(0.0),
    m_lteHasBeenSet(false),
    m_eq(0.0),
    m_eqHasBeenSet(false),
    m_gt(0.0),
    m_gtHasBeenSet(false),
    m_lt(0.0),
    m_ltHasBeenSet(false)
{
}

NumberFilter::NumberFilter(JsonView jsonValue) : 
    m_gte(0.0),
    m_gteHasBeenSet(false),
    m_lte(0.0),
    m_lteHasBeenSet(false),
    m_eq(0.0),
    m_eqHasBeenSet(false),
    m_gt(0.0),
    m_gtHasBeenSet(false),
    m_lt(0.0),
    m_ltHasBeenSet(false)
{
  *this = jsonValue;
}

NumberFilter& NumberFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Gte"))
  {
    m_gte = jsonValue.GetDouble("Gte");

    m_gteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lte"))
  {
    m_lte = jsonValue.GetDouble("Lte");

    m_lteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Eq"))
  {
    m_eq = jsonValue.GetDouble("Eq");

    m_eqHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Gt"))
  {
    m_gt = jsonValue.GetDouble("Gt");

    m_gtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lt"))
  {
    m_lt = jsonValue.GetDouble("Lt");

    m_ltHasBeenSet = true;
  }

  return *this;
}

JsonValue NumberFilter::Jsonize() const
{
  JsonValue payload;

  if(m_gteHasBeenSet)
  {
   payload.WithDouble("Gte", m_gte);

  }

  if(m_lteHasBeenSet)
  {
   payload.WithDouble("Lte", m_lte);

  }

  if(m_eqHasBeenSet)
  {
   payload.WithDouble("Eq", m_eq);

  }

  if(m_gtHasBeenSet)
  {
   payload.WithDouble("Gt", m_gt);

  }

  if(m_ltHasBeenSet)
  {
   payload.WithDouble("Lt", m_lt);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
