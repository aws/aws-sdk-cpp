/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/CsvConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

CsvConfiguration::CsvConfiguration() : 
    m_columnSeparatorHasBeenSet(false),
    m_escapeCharHasBeenSet(false),
    m_quoteCharHasBeenSet(false),
    m_nullValueHasBeenSet(false),
    m_trimWhiteSpace(false),
    m_trimWhiteSpaceHasBeenSet(false)
{
}

CsvConfiguration::CsvConfiguration(JsonView jsonValue) : 
    m_columnSeparatorHasBeenSet(false),
    m_escapeCharHasBeenSet(false),
    m_quoteCharHasBeenSet(false),
    m_nullValueHasBeenSet(false),
    m_trimWhiteSpace(false),
    m_trimWhiteSpaceHasBeenSet(false)
{
  *this = jsonValue;
}

CsvConfiguration& CsvConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnSeparator"))
  {
    m_columnSeparator = jsonValue.GetString("ColumnSeparator");

    m_columnSeparatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EscapeChar"))
  {
    m_escapeChar = jsonValue.GetString("EscapeChar");

    m_escapeCharHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuoteChar"))
  {
    m_quoteChar = jsonValue.GetString("QuoteChar");

    m_quoteCharHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NullValue"))
  {
    m_nullValue = jsonValue.GetString("NullValue");

    m_nullValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrimWhiteSpace"))
  {
    m_trimWhiteSpace = jsonValue.GetBool("TrimWhiteSpace");

    m_trimWhiteSpaceHasBeenSet = true;
  }

  return *this;
}

JsonValue CsvConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_columnSeparatorHasBeenSet)
  {
   payload.WithString("ColumnSeparator", m_columnSeparator);

  }

  if(m_escapeCharHasBeenSet)
  {
   payload.WithString("EscapeChar", m_escapeChar);

  }

  if(m_quoteCharHasBeenSet)
  {
   payload.WithString("QuoteChar", m_quoteChar);

  }

  if(m_nullValueHasBeenSet)
  {
   payload.WithString("NullValue", m_nullValue);

  }

  if(m_trimWhiteSpaceHasBeenSet)
  {
   payload.WithBool("TrimWhiteSpace", m_trimWhiteSpace);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
