/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/QueryEvalStats.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace neptunedata
{
namespace Model
{

QueryEvalStats::QueryEvalStats() : 
    m_waited(0),
    m_waitedHasBeenSet(false),
    m_elapsed(0),
    m_elapsedHasBeenSet(false),
    m_cancelled(false),
    m_cancelledHasBeenSet(false),
    m_subqueriesHasBeenSet(false)
{
}

QueryEvalStats::QueryEvalStats(JsonView jsonValue) : 
    m_waited(0),
    m_waitedHasBeenSet(false),
    m_elapsed(0),
    m_elapsedHasBeenSet(false),
    m_cancelled(false),
    m_cancelledHasBeenSet(false),
    m_subqueriesHasBeenSet(false)
{
  *this = jsonValue;
}

QueryEvalStats& QueryEvalStats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("waited"))
  {
    m_waited = jsonValue.GetInteger("waited");

    m_waitedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("elapsed"))
  {
    m_elapsed = jsonValue.GetInteger("elapsed");

    m_elapsedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cancelled"))
  {
    m_cancelled = jsonValue.GetBool("cancelled");

    m_cancelledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subqueries"))
  {
    m_subqueries = jsonValue.GetObject("subqueries");

    m_subqueriesHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryEvalStats::Jsonize() const
{
  JsonValue payload;

  if(m_waitedHasBeenSet)
  {
   payload.WithInteger("waited", m_waited);

  }

  if(m_elapsedHasBeenSet)
  {
   payload.WithInteger("elapsed", m_elapsed);

  }

  if(m_cancelledHasBeenSet)
  {
   payload.WithBool("cancelled", m_cancelled);

  }

  if(m_subqueriesHasBeenSet)
  {
    if(!m_subqueries.View().IsNull())
    {
       payload.WithObject("subqueries", JsonValue(m_subqueries.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
