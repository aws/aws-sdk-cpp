/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/Headers.h>
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

Headers::Headers() : 
    m_matchPatternHasBeenSet(false),
    m_matchScope(MapMatchScope::NOT_SET),
    m_matchScopeHasBeenSet(false),
    m_oversizeHandling(OversizeHandling::NOT_SET),
    m_oversizeHandlingHasBeenSet(false)
{
}

Headers::Headers(JsonView jsonValue) : 
    m_matchPatternHasBeenSet(false),
    m_matchScope(MapMatchScope::NOT_SET),
    m_matchScopeHasBeenSet(false),
    m_oversizeHandling(OversizeHandling::NOT_SET),
    m_oversizeHandlingHasBeenSet(false)
{
  *this = jsonValue;
}

Headers& Headers::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MatchPattern"))
  {
    m_matchPattern = jsonValue.GetObject("MatchPattern");

    m_matchPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MatchScope"))
  {
    m_matchScope = MapMatchScopeMapper::GetMapMatchScopeForName(jsonValue.GetString("MatchScope"));

    m_matchScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OversizeHandling"))
  {
    m_oversizeHandling = OversizeHandlingMapper::GetOversizeHandlingForName(jsonValue.GetString("OversizeHandling"));

    m_oversizeHandlingHasBeenSet = true;
  }

  return *this;
}

JsonValue Headers::Jsonize() const
{
  JsonValue payload;

  if(m_matchPatternHasBeenSet)
  {
   payload.WithObject("MatchPattern", m_matchPattern.Jsonize());

  }

  if(m_matchScopeHasBeenSet)
  {
   payload.WithString("MatchScope", MapMatchScopeMapper::GetNameForMapMatchScope(m_matchScope));
  }

  if(m_oversizeHandlingHasBeenSet)
  {
   payload.WithString("OversizeHandling", OversizeHandlingMapper::GetNameForOversizeHandling(m_oversizeHandling));
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
