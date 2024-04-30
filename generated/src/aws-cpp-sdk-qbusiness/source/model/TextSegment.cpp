/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/TextSegment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

TextSegment::TextSegment() : 
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_snippetExcerptHasBeenSet(false)
{
}

TextSegment::TextSegment(JsonView jsonValue) : 
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_snippetExcerptHasBeenSet(false)
{
  *this = jsonValue;
}

TextSegment& TextSegment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("beginOffset"))
  {
    m_beginOffset = jsonValue.GetInteger("beginOffset");

    m_beginOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endOffset"))
  {
    m_endOffset = jsonValue.GetInteger("endOffset");

    m_endOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snippetExcerpt"))
  {
    m_snippetExcerpt = jsonValue.GetObject("snippetExcerpt");

    m_snippetExcerptHasBeenSet = true;
  }

  return *this;
}

JsonValue TextSegment::Jsonize() const
{
  JsonValue payload;

  if(m_beginOffsetHasBeenSet)
  {
   payload.WithInteger("beginOffset", m_beginOffset);

  }

  if(m_endOffsetHasBeenSet)
  {
   payload.WithInteger("endOffset", m_endOffset);

  }

  if(m_snippetExcerptHasBeenSet)
  {
   payload.WithObject("snippetExcerpt", m_snippetExcerpt.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
