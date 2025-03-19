/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/CitationSpan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

CitationSpan::CitationSpan(JsonView jsonValue)
{
  *this = jsonValue;
}

CitationSpan& CitationSpan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("beginOffsetInclusive"))
  {
    m_beginOffsetInclusive = jsonValue.GetInteger("beginOffsetInclusive");
    m_beginOffsetInclusiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endOffsetExclusive"))
  {
    m_endOffsetExclusive = jsonValue.GetInteger("endOffsetExclusive");
    m_endOffsetExclusiveHasBeenSet = true;
  }
  return *this;
}

JsonValue CitationSpan::Jsonize() const
{
  JsonValue payload;

  if(m_beginOffsetInclusiveHasBeenSet)
  {
   payload.WithInteger("beginOffsetInclusive", m_beginOffsetInclusive);

  }

  if(m_endOffsetExclusiveHasBeenSet)
  {
   payload.WithInteger("endOffsetExclusive", m_endOffsetExclusive);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
