/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReadOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

ReadOptions::ReadOptions() : 
    m_commentHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_escapeHasBeenSet(false),
    m_escapeQuotes(false),
    m_escapeQuotesHasBeenSet(false),
    m_header(false),
    m_headerHasBeenSet(false),
    m_lineSepHasBeenSet(false),
    m_quoteHasBeenSet(false),
    m_quoteAll(false),
    m_quoteAllHasBeenSet(false),
    m_sepHasBeenSet(false)
{
}

ReadOptions::ReadOptions(JsonView jsonValue) : 
    m_commentHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_escapeHasBeenSet(false),
    m_escapeQuotes(false),
    m_escapeQuotesHasBeenSet(false),
    m_header(false),
    m_headerHasBeenSet(false),
    m_lineSepHasBeenSet(false),
    m_quoteHasBeenSet(false),
    m_quoteAll(false),
    m_quoteAllHasBeenSet(false),
    m_sepHasBeenSet(false)
{
  *this = jsonValue;
}

ReadOptions& ReadOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetString("comment");

    m_commentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encoding"))
  {
    m_encoding = jsonValue.GetString("encoding");

    m_encodingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("escape"))
  {
    m_escape = jsonValue.GetString("escape");

    m_escapeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("escapeQuotes"))
  {
    m_escapeQuotes = jsonValue.GetBool("escapeQuotes");

    m_escapeQuotesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("header"))
  {
    m_header = jsonValue.GetBool("header");

    m_headerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lineSep"))
  {
    m_lineSep = jsonValue.GetString("lineSep");

    m_lineSepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("quote"))
  {
    m_quote = jsonValue.GetString("quote");

    m_quoteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("quoteAll"))
  {
    m_quoteAll = jsonValue.GetBool("quoteAll");

    m_quoteAllHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sep"))
  {
    m_sep = jsonValue.GetString("sep");

    m_sepHasBeenSet = true;
  }

  return *this;
}

JsonValue ReadOptions::Jsonize() const
{
  JsonValue payload;

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  if(m_encodingHasBeenSet)
  {
   payload.WithString("encoding", m_encoding);

  }

  if(m_escapeHasBeenSet)
  {
   payload.WithString("escape", m_escape);

  }

  if(m_escapeQuotesHasBeenSet)
  {
   payload.WithBool("escapeQuotes", m_escapeQuotes);

  }

  if(m_headerHasBeenSet)
  {
   payload.WithBool("header", m_header);

  }

  if(m_lineSepHasBeenSet)
  {
   payload.WithString("lineSep", m_lineSep);

  }

  if(m_quoteHasBeenSet)
  {
   payload.WithString("quote", m_quote);

  }

  if(m_quoteAllHasBeenSet)
  {
   payload.WithBool("quoteAll", m_quoteAll);

  }

  if(m_sepHasBeenSet)
  {
   payload.WithString("sep", m_sep);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
