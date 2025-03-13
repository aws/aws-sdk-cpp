/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/QuerySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

QuerySummary::QuerySummary(JsonView jsonValue)
{
  *this = jsonValue;
}

QuerySummary& QuerySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queryString"))
  {
    m_queryString = jsonValue.GetString("queryString");
    m_queryStringHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("state"))
  {
    m_state = QueryStateMapper::GetQueryStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue QuerySummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("queryString", m_queryString);

  }

  if(m_waitedHasBeenSet)
  {
   payload.WithInteger("waited", m_waited);

  }

  if(m_elapsedHasBeenSet)
  {
   payload.WithInteger("elapsed", m_elapsed);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", QueryStateMapper::GetNameForQueryState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
