/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/TextDocumentStatistics.h>
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

TextDocumentStatistics::TextDocumentStatistics() : 
    m_indexedTextBytes(0),
    m_indexedTextBytesHasBeenSet(false),
    m_indexedTextDocumentCount(0),
    m_indexedTextDocumentCountHasBeenSet(false)
{
}

TextDocumentStatistics::TextDocumentStatistics(JsonView jsonValue) : 
    m_indexedTextBytes(0),
    m_indexedTextBytesHasBeenSet(false),
    m_indexedTextDocumentCount(0),
    m_indexedTextDocumentCountHasBeenSet(false)
{
  *this = jsonValue;
}

TextDocumentStatistics& TextDocumentStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("indexedTextBytes"))
  {
    m_indexedTextBytes = jsonValue.GetInt64("indexedTextBytes");

    m_indexedTextBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("indexedTextDocumentCount"))
  {
    m_indexedTextDocumentCount = jsonValue.GetInteger("indexedTextDocumentCount");

    m_indexedTextDocumentCountHasBeenSet = true;
  }

  return *this;
}

JsonValue TextDocumentStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_indexedTextBytesHasBeenSet)
  {
   payload.WithInt64("indexedTextBytes", m_indexedTextBytes);

  }

  if(m_indexedTextDocumentCountHasBeenSet)
  {
   payload.WithInteger("indexedTextDocumentCount", m_indexedTextDocumentCount);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
