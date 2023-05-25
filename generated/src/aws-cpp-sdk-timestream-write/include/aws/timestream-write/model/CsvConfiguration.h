/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p>A delimited data format where the column separator can be a comma and the
   * record separator is a newline character.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/CsvConfiguration">AWS
   * API Reference</a></p>
   */
  class CsvConfiguration
  {
  public:
    AWS_TIMESTREAMWRITE_API CsvConfiguration();
    AWS_TIMESTREAMWRITE_API CsvConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API CsvConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Column separator can be one of comma (','), pipe ('|), semicolon (';'),
     * tab('/t'), or blank space (' '). </p>
     */
    inline const Aws::String& GetColumnSeparator() const{ return m_columnSeparator; }

    /**
     * <p>Column separator can be one of comma (','), pipe ('|), semicolon (';'),
     * tab('/t'), or blank space (' '). </p>
     */
    inline bool ColumnSeparatorHasBeenSet() const { return m_columnSeparatorHasBeenSet; }

    /**
     * <p>Column separator can be one of comma (','), pipe ('|), semicolon (';'),
     * tab('/t'), or blank space (' '). </p>
     */
    inline void SetColumnSeparator(const Aws::String& value) { m_columnSeparatorHasBeenSet = true; m_columnSeparator = value; }

    /**
     * <p>Column separator can be one of comma (','), pipe ('|), semicolon (';'),
     * tab('/t'), or blank space (' '). </p>
     */
    inline void SetColumnSeparator(Aws::String&& value) { m_columnSeparatorHasBeenSet = true; m_columnSeparator = std::move(value); }

    /**
     * <p>Column separator can be one of comma (','), pipe ('|), semicolon (';'),
     * tab('/t'), or blank space (' '). </p>
     */
    inline void SetColumnSeparator(const char* value) { m_columnSeparatorHasBeenSet = true; m_columnSeparator.assign(value); }

    /**
     * <p>Column separator can be one of comma (','), pipe ('|), semicolon (';'),
     * tab('/t'), or blank space (' '). </p>
     */
    inline CsvConfiguration& WithColumnSeparator(const Aws::String& value) { SetColumnSeparator(value); return *this;}

    /**
     * <p>Column separator can be one of comma (','), pipe ('|), semicolon (';'),
     * tab('/t'), or blank space (' '). </p>
     */
    inline CsvConfiguration& WithColumnSeparator(Aws::String&& value) { SetColumnSeparator(std::move(value)); return *this;}

    /**
     * <p>Column separator can be one of comma (','), pipe ('|), semicolon (';'),
     * tab('/t'), or blank space (' '). </p>
     */
    inline CsvConfiguration& WithColumnSeparator(const char* value) { SetColumnSeparator(value); return *this;}


    /**
     * <p>Escape character can be one of </p>
     */
    inline const Aws::String& GetEscapeChar() const{ return m_escapeChar; }

    /**
     * <p>Escape character can be one of </p>
     */
    inline bool EscapeCharHasBeenSet() const { return m_escapeCharHasBeenSet; }

    /**
     * <p>Escape character can be one of </p>
     */
    inline void SetEscapeChar(const Aws::String& value) { m_escapeCharHasBeenSet = true; m_escapeChar = value; }

    /**
     * <p>Escape character can be one of </p>
     */
    inline void SetEscapeChar(Aws::String&& value) { m_escapeCharHasBeenSet = true; m_escapeChar = std::move(value); }

    /**
     * <p>Escape character can be one of </p>
     */
    inline void SetEscapeChar(const char* value) { m_escapeCharHasBeenSet = true; m_escapeChar.assign(value); }

    /**
     * <p>Escape character can be one of </p>
     */
    inline CsvConfiguration& WithEscapeChar(const Aws::String& value) { SetEscapeChar(value); return *this;}

    /**
     * <p>Escape character can be one of </p>
     */
    inline CsvConfiguration& WithEscapeChar(Aws::String&& value) { SetEscapeChar(std::move(value)); return *this;}

    /**
     * <p>Escape character can be one of </p>
     */
    inline CsvConfiguration& WithEscapeChar(const char* value) { SetEscapeChar(value); return *this;}


    /**
     * <p>Can be single quote (') or double quote (").</p>
     */
    inline const Aws::String& GetQuoteChar() const{ return m_quoteChar; }

    /**
     * <p>Can be single quote (') or double quote (").</p>
     */
    inline bool QuoteCharHasBeenSet() const { return m_quoteCharHasBeenSet; }

    /**
     * <p>Can be single quote (') or double quote (").</p>
     */
    inline void SetQuoteChar(const Aws::String& value) { m_quoteCharHasBeenSet = true; m_quoteChar = value; }

    /**
     * <p>Can be single quote (') or double quote (").</p>
     */
    inline void SetQuoteChar(Aws::String&& value) { m_quoteCharHasBeenSet = true; m_quoteChar = std::move(value); }

    /**
     * <p>Can be single quote (') or double quote (").</p>
     */
    inline void SetQuoteChar(const char* value) { m_quoteCharHasBeenSet = true; m_quoteChar.assign(value); }

    /**
     * <p>Can be single quote (') or double quote (").</p>
     */
    inline CsvConfiguration& WithQuoteChar(const Aws::String& value) { SetQuoteChar(value); return *this;}

    /**
     * <p>Can be single quote (') or double quote (").</p>
     */
    inline CsvConfiguration& WithQuoteChar(Aws::String&& value) { SetQuoteChar(std::move(value)); return *this;}

    /**
     * <p>Can be single quote (') or double quote (").</p>
     */
    inline CsvConfiguration& WithQuoteChar(const char* value) { SetQuoteChar(value); return *this;}


    /**
     * <p>Can be blank space (' ').</p>
     */
    inline const Aws::String& GetNullValue() const{ return m_nullValue; }

    /**
     * <p>Can be blank space (' ').</p>
     */
    inline bool NullValueHasBeenSet() const { return m_nullValueHasBeenSet; }

    /**
     * <p>Can be blank space (' ').</p>
     */
    inline void SetNullValue(const Aws::String& value) { m_nullValueHasBeenSet = true; m_nullValue = value; }

    /**
     * <p>Can be blank space (' ').</p>
     */
    inline void SetNullValue(Aws::String&& value) { m_nullValueHasBeenSet = true; m_nullValue = std::move(value); }

    /**
     * <p>Can be blank space (' ').</p>
     */
    inline void SetNullValue(const char* value) { m_nullValueHasBeenSet = true; m_nullValue.assign(value); }

    /**
     * <p>Can be blank space (' ').</p>
     */
    inline CsvConfiguration& WithNullValue(const Aws::String& value) { SetNullValue(value); return *this;}

    /**
     * <p>Can be blank space (' ').</p>
     */
    inline CsvConfiguration& WithNullValue(Aws::String&& value) { SetNullValue(std::move(value)); return *this;}

    /**
     * <p>Can be blank space (' ').</p>
     */
    inline CsvConfiguration& WithNullValue(const char* value) { SetNullValue(value); return *this;}


    /**
     * <p>Specifies to trim leading and trailing white space.</p>
     */
    inline bool GetTrimWhiteSpace() const{ return m_trimWhiteSpace; }

    /**
     * <p>Specifies to trim leading and trailing white space.</p>
     */
    inline bool TrimWhiteSpaceHasBeenSet() const { return m_trimWhiteSpaceHasBeenSet; }

    /**
     * <p>Specifies to trim leading and trailing white space.</p>
     */
    inline void SetTrimWhiteSpace(bool value) { m_trimWhiteSpaceHasBeenSet = true; m_trimWhiteSpace = value; }

    /**
     * <p>Specifies to trim leading and trailing white space.</p>
     */
    inline CsvConfiguration& WithTrimWhiteSpace(bool value) { SetTrimWhiteSpace(value); return *this;}

  private:

    Aws::String m_columnSeparator;
    bool m_columnSeparatorHasBeenSet = false;

    Aws::String m_escapeChar;
    bool m_escapeCharHasBeenSet = false;

    Aws::String m_quoteChar;
    bool m_quoteCharHasBeenSet = false;

    Aws::String m_nullValue;
    bool m_nullValueHasBeenSet = false;

    bool m_trimWhiteSpace;
    bool m_trimWhiteSpaceHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
