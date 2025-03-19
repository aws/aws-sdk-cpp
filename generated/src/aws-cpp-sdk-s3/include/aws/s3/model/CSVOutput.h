/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/QuoteFields.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>Describes how uncompressed comma-separated values (CSV)-formatted results are
   * formatted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CSVOutput">AWS API
   * Reference</a></p>
   */
  class CSVOutput
  {
  public:
    AWS_S3_API CSVOutput() = default;
    AWS_S3_API CSVOutput(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API CSVOutput& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Indicates whether to use quotation marks around output fields. </p> <ul> <li>
     * <p> <code>ALWAYS</code>: Always use quotation marks for output fields.</p> </li>
     * <li> <p> <code>ASNEEDED</code>: Use quotation marks for output fields when
     * needed.</p> </li> </ul>
     */
    inline QuoteFields GetQuoteFields() const { return m_quoteFields; }
    inline bool QuoteFieldsHasBeenSet() const { return m_quoteFieldsHasBeenSet; }
    inline void SetQuoteFields(QuoteFields value) { m_quoteFieldsHasBeenSet = true; m_quoteFields = value; }
    inline CSVOutput& WithQuoteFields(QuoteFields value) { SetQuoteFields(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The single character used for escaping the quote character inside an already
     * escaped value.</p>
     */
    inline const Aws::String& GetQuoteEscapeCharacter() const { return m_quoteEscapeCharacter; }
    inline bool QuoteEscapeCharacterHasBeenSet() const { return m_quoteEscapeCharacterHasBeenSet; }
    template<typename QuoteEscapeCharacterT = Aws::String>
    void SetQuoteEscapeCharacter(QuoteEscapeCharacterT&& value) { m_quoteEscapeCharacterHasBeenSet = true; m_quoteEscapeCharacter = std::forward<QuoteEscapeCharacterT>(value); }
    template<typename QuoteEscapeCharacterT = Aws::String>
    CSVOutput& WithQuoteEscapeCharacter(QuoteEscapeCharacterT&& value) { SetQuoteEscapeCharacter(std::forward<QuoteEscapeCharacterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A single character used to separate individual records in the output. Instead
     * of the default value, you can specify an arbitrary delimiter.</p>
     */
    inline const Aws::String& GetRecordDelimiter() const { return m_recordDelimiter; }
    inline bool RecordDelimiterHasBeenSet() const { return m_recordDelimiterHasBeenSet; }
    template<typename RecordDelimiterT = Aws::String>
    void SetRecordDelimiter(RecordDelimiterT&& value) { m_recordDelimiterHasBeenSet = true; m_recordDelimiter = std::forward<RecordDelimiterT>(value); }
    template<typename RecordDelimiterT = Aws::String>
    CSVOutput& WithRecordDelimiter(RecordDelimiterT&& value) { SetRecordDelimiter(std::forward<RecordDelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value used to separate individual fields in a record. You can specify an
     * arbitrary delimiter.</p>
     */
    inline const Aws::String& GetFieldDelimiter() const { return m_fieldDelimiter; }
    inline bool FieldDelimiterHasBeenSet() const { return m_fieldDelimiterHasBeenSet; }
    template<typename FieldDelimiterT = Aws::String>
    void SetFieldDelimiter(FieldDelimiterT&& value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter = std::forward<FieldDelimiterT>(value); }
    template<typename FieldDelimiterT = Aws::String>
    CSVOutput& WithFieldDelimiter(FieldDelimiterT&& value) { SetFieldDelimiter(std::forward<FieldDelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A single character used for escaping when the field delimiter is part of the
     * value. For example, if the value is <code>a, b</code>, Amazon S3 wraps this
     * field value in quotation marks, as follows: <code>" a , b "</code>.</p>
     */
    inline const Aws::String& GetQuoteCharacter() const { return m_quoteCharacter; }
    inline bool QuoteCharacterHasBeenSet() const { return m_quoteCharacterHasBeenSet; }
    template<typename QuoteCharacterT = Aws::String>
    void SetQuoteCharacter(QuoteCharacterT&& value) { m_quoteCharacterHasBeenSet = true; m_quoteCharacter = std::forward<QuoteCharacterT>(value); }
    template<typename QuoteCharacterT = Aws::String>
    CSVOutput& WithQuoteCharacter(QuoteCharacterT&& value) { SetQuoteCharacter(std::forward<QuoteCharacterT>(value)); return *this;}
    ///@}
  private:

    QuoteFields m_quoteFields{QuoteFields::NOT_SET};
    bool m_quoteFieldsHasBeenSet = false;

    Aws::String m_quoteEscapeCharacter;
    bool m_quoteEscapeCharacterHasBeenSet = false;

    Aws::String m_recordDelimiter;
    bool m_recordDelimiterHasBeenSet = false;

    Aws::String m_fieldDelimiter;
    bool m_fieldDelimiterHasBeenSet = false;

    Aws::String m_quoteCharacter;
    bool m_quoteCharacterHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
