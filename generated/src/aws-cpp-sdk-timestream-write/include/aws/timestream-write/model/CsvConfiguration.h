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
    AWS_TIMESTREAMWRITE_API CsvConfiguration() = default;
    AWS_TIMESTREAMWRITE_API CsvConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API CsvConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Column separator can be one of comma (','), pipe ('|), semicolon (';'),
     * tab('/t'), or blank space (' '). </p>
     */
    inline const Aws::String& GetColumnSeparator() const { return m_columnSeparator; }
    inline bool ColumnSeparatorHasBeenSet() const { return m_columnSeparatorHasBeenSet; }
    template<typename ColumnSeparatorT = Aws::String>
    void SetColumnSeparator(ColumnSeparatorT&& value) { m_columnSeparatorHasBeenSet = true; m_columnSeparator = std::forward<ColumnSeparatorT>(value); }
    template<typename ColumnSeparatorT = Aws::String>
    CsvConfiguration& WithColumnSeparator(ColumnSeparatorT&& value) { SetColumnSeparator(std::forward<ColumnSeparatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Escape character can be one of </p>
     */
    inline const Aws::String& GetEscapeChar() const { return m_escapeChar; }
    inline bool EscapeCharHasBeenSet() const { return m_escapeCharHasBeenSet; }
    template<typename EscapeCharT = Aws::String>
    void SetEscapeChar(EscapeCharT&& value) { m_escapeCharHasBeenSet = true; m_escapeChar = std::forward<EscapeCharT>(value); }
    template<typename EscapeCharT = Aws::String>
    CsvConfiguration& WithEscapeChar(EscapeCharT&& value) { SetEscapeChar(std::forward<EscapeCharT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Can be single quote (') or double quote (").</p>
     */
    inline const Aws::String& GetQuoteChar() const { return m_quoteChar; }
    inline bool QuoteCharHasBeenSet() const { return m_quoteCharHasBeenSet; }
    template<typename QuoteCharT = Aws::String>
    void SetQuoteChar(QuoteCharT&& value) { m_quoteCharHasBeenSet = true; m_quoteChar = std::forward<QuoteCharT>(value); }
    template<typename QuoteCharT = Aws::String>
    CsvConfiguration& WithQuoteChar(QuoteCharT&& value) { SetQuoteChar(std::forward<QuoteCharT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Can be blank space (' ').</p>
     */
    inline const Aws::String& GetNullValue() const { return m_nullValue; }
    inline bool NullValueHasBeenSet() const { return m_nullValueHasBeenSet; }
    template<typename NullValueT = Aws::String>
    void SetNullValue(NullValueT&& value) { m_nullValueHasBeenSet = true; m_nullValue = std::forward<NullValueT>(value); }
    template<typename NullValueT = Aws::String>
    CsvConfiguration& WithNullValue(NullValueT&& value) { SetNullValue(std::forward<NullValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies to trim leading and trailing white space.</p>
     */
    inline bool GetTrimWhiteSpace() const { return m_trimWhiteSpace; }
    inline bool TrimWhiteSpaceHasBeenSet() const { return m_trimWhiteSpaceHasBeenSet; }
    inline void SetTrimWhiteSpace(bool value) { m_trimWhiteSpaceHasBeenSet = true; m_trimWhiteSpace = value; }
    inline CsvConfiguration& WithTrimWhiteSpace(bool value) { SetTrimWhiteSpace(value); return *this;}
    ///@}
  private:

    Aws::String m_columnSeparator;
    bool m_columnSeparatorHasBeenSet = false;

    Aws::String m_escapeChar;
    bool m_escapeCharHasBeenSet = false;

    Aws::String m_quoteChar;
    bool m_quoteCharHasBeenSet = false;

    Aws::String m_nullValue;
    bool m_nullValueHasBeenSet = false;

    bool m_trimWhiteSpace{false};
    bool m_trimWhiteSpaceHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
