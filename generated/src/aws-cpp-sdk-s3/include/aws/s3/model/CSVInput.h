/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/FileHeaderInfo.h>
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
   * <p>Describes how an uncompressed comma-separated values (CSV)-formatted input
   * object is formatted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CSVInput">AWS API
   * Reference</a></p>
   */
  class CSVInput
  {
  public:
    AWS_S3_API CSVInput() = default;
    AWS_S3_API CSVInput(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API CSVInput& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Describes the first line of input. Valid values are:</p> <ul> <li> <p>
     * <code>NONE</code>: First line is not a header.</p> </li> <li> <p>
     * <code>IGNORE</code>: First line is a header, but you can't use the header values
     * to indicate the column in an expression. You can use column position (such as
     * _1, _2, …) to indicate the column (<code>SELECT s._1 FROM OBJECT s</code>).</p>
     * </li> <li> <p> <code>Use</code>: First line is a header, and you can use the
     * header value to identify a column in an expression (<code>SELECT "name" FROM
     * OBJECT</code>). </p> </li> </ul>
     */
    inline FileHeaderInfo GetFileHeaderInfo() const { return m_fileHeaderInfo; }
    inline bool FileHeaderInfoHasBeenSet() const { return m_fileHeaderInfoHasBeenSet; }
    inline void SetFileHeaderInfo(FileHeaderInfo value) { m_fileHeaderInfoHasBeenSet = true; m_fileHeaderInfo = value; }
    inline CSVInput& WithFileHeaderInfo(FileHeaderInfo value) { SetFileHeaderInfo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A single character used to indicate that a row should be ignored when the
     * character is present at the start of that row. You can specify any character to
     * indicate a comment line. The default character is <code>#</code>.</p>
     * <p>Default: <code>#</code> </p>
     */
    inline const Aws::String& GetComments() const { return m_comments; }
    inline bool CommentsHasBeenSet() const { return m_commentsHasBeenSet; }
    template<typename CommentsT = Aws::String>
    void SetComments(CommentsT&& value) { m_commentsHasBeenSet = true; m_comments = std::forward<CommentsT>(value); }
    template<typename CommentsT = Aws::String>
    CSVInput& WithComments(CommentsT&& value) { SetComments(std::forward<CommentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A single character used for escaping the quotation mark character inside an
     * already escaped value. For example, the value <code>""" a , b """</code> is
     * parsed as <code>" a , b "</code>.</p>
     */
    inline const Aws::String& GetQuoteEscapeCharacter() const { return m_quoteEscapeCharacter; }
    inline bool QuoteEscapeCharacterHasBeenSet() const { return m_quoteEscapeCharacterHasBeenSet; }
    template<typename QuoteEscapeCharacterT = Aws::String>
    void SetQuoteEscapeCharacter(QuoteEscapeCharacterT&& value) { m_quoteEscapeCharacterHasBeenSet = true; m_quoteEscapeCharacter = std::forward<QuoteEscapeCharacterT>(value); }
    template<typename QuoteEscapeCharacterT = Aws::String>
    CSVInput& WithQuoteEscapeCharacter(QuoteEscapeCharacterT&& value) { SetQuoteEscapeCharacter(std::forward<QuoteEscapeCharacterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A single character used to separate individual records in the input. Instead
     * of the default value, you can specify an arbitrary delimiter.</p>
     */
    inline const Aws::String& GetRecordDelimiter() const { return m_recordDelimiter; }
    inline bool RecordDelimiterHasBeenSet() const { return m_recordDelimiterHasBeenSet; }
    template<typename RecordDelimiterT = Aws::String>
    void SetRecordDelimiter(RecordDelimiterT&& value) { m_recordDelimiterHasBeenSet = true; m_recordDelimiter = std::forward<RecordDelimiterT>(value); }
    template<typename RecordDelimiterT = Aws::String>
    CSVInput& WithRecordDelimiter(RecordDelimiterT&& value) { SetRecordDelimiter(std::forward<RecordDelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A single character used to separate individual fields in a record. You can
     * specify an arbitrary delimiter.</p>
     */
    inline const Aws::String& GetFieldDelimiter() const { return m_fieldDelimiter; }
    inline bool FieldDelimiterHasBeenSet() const { return m_fieldDelimiterHasBeenSet; }
    template<typename FieldDelimiterT = Aws::String>
    void SetFieldDelimiter(FieldDelimiterT&& value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter = std::forward<FieldDelimiterT>(value); }
    template<typename FieldDelimiterT = Aws::String>
    CSVInput& WithFieldDelimiter(FieldDelimiterT&& value) { SetFieldDelimiter(std::forward<FieldDelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A single character used for escaping when the field delimiter is part of the
     * value. For example, if the value is <code>a, b</code>, Amazon S3 wraps this
     * field value in quotation marks, as follows: <code>" a , b "</code>.</p> <p>Type:
     * String</p> <p>Default: <code>"</code> </p> <p>Ancestors: <code>CSV</code> </p>
     */
    inline const Aws::String& GetQuoteCharacter() const { return m_quoteCharacter; }
    inline bool QuoteCharacterHasBeenSet() const { return m_quoteCharacterHasBeenSet; }
    template<typename QuoteCharacterT = Aws::String>
    void SetQuoteCharacter(QuoteCharacterT&& value) { m_quoteCharacterHasBeenSet = true; m_quoteCharacter = std::forward<QuoteCharacterT>(value); }
    template<typename QuoteCharacterT = Aws::String>
    CSVInput& WithQuoteCharacter(QuoteCharacterT&& value) { SetQuoteCharacter(std::forward<QuoteCharacterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that CSV field values may contain quoted record delimiters and such
     * records should be allowed. Default value is FALSE. Setting this value to TRUE
     * may lower performance.</p>
     */
    inline bool GetAllowQuotedRecordDelimiter() const { return m_allowQuotedRecordDelimiter; }
    inline bool AllowQuotedRecordDelimiterHasBeenSet() const { return m_allowQuotedRecordDelimiterHasBeenSet; }
    inline void SetAllowQuotedRecordDelimiter(bool value) { m_allowQuotedRecordDelimiterHasBeenSet = true; m_allowQuotedRecordDelimiter = value; }
    inline CSVInput& WithAllowQuotedRecordDelimiter(bool value) { SetAllowQuotedRecordDelimiter(value); return *this;}
    ///@}
  private:

    FileHeaderInfo m_fileHeaderInfo{FileHeaderInfo::NOT_SET};
    bool m_fileHeaderInfoHasBeenSet = false;

    Aws::String m_comments;
    bool m_commentsHasBeenSet = false;

    Aws::String m_quoteEscapeCharacter;
    bool m_quoteEscapeCharacterHasBeenSet = false;

    Aws::String m_recordDelimiter;
    bool m_recordDelimiterHasBeenSet = false;

    Aws::String m_fieldDelimiter;
    bool m_fieldDelimiterHasBeenSet = false;

    Aws::String m_quoteCharacter;
    bool m_quoteCharacterHasBeenSet = false;

    bool m_allowQuotedRecordDelimiter{false};
    bool m_allowQuotedRecordDelimiterHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
