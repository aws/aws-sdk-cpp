/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FileFormat.h>
#include <aws/quicksight/model/TextQualifier.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Information about the format for a source file or files.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UploadSettings">AWS
   * API Reference</a></p>
   */
  class UploadSettings
  {
  public:
    AWS_QUICKSIGHT_API UploadSettings() = default;
    AWS_QUICKSIGHT_API UploadSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API UploadSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>File format.</p>
     */
    inline FileFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(FileFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline UploadSettings& WithFormat(FileFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A row number to start reading data from.</p>
     */
    inline int GetStartFromRow() const { return m_startFromRow; }
    inline bool StartFromRowHasBeenSet() const { return m_startFromRowHasBeenSet; }
    inline void SetStartFromRow(int value) { m_startFromRowHasBeenSet = true; m_startFromRow = value; }
    inline UploadSettings& WithStartFromRow(int value) { SetStartFromRow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the file has a header row, or the files each have a header row.</p>
     */
    inline bool GetContainsHeader() const { return m_containsHeader; }
    inline bool ContainsHeaderHasBeenSet() const { return m_containsHeaderHasBeenSet; }
    inline void SetContainsHeader(bool value) { m_containsHeaderHasBeenSet = true; m_containsHeader = value; }
    inline UploadSettings& WithContainsHeader(bool value) { SetContainsHeader(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text qualifier.</p>
     */
    inline TextQualifier GetTextQualifier() const { return m_textQualifier; }
    inline bool TextQualifierHasBeenSet() const { return m_textQualifierHasBeenSet; }
    inline void SetTextQualifier(TextQualifier value) { m_textQualifierHasBeenSet = true; m_textQualifier = value; }
    inline UploadSettings& WithTextQualifier(TextQualifier value) { SetTextQualifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delimiter between values in the file.</p>
     */
    inline const Aws::String& GetDelimiter() const { return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    template<typename DelimiterT = Aws::String>
    void SetDelimiter(DelimiterT&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::forward<DelimiterT>(value); }
    template<typename DelimiterT = Aws::String>
    UploadSettings& WithDelimiter(DelimiterT&& value) { SetDelimiter(std::forward<DelimiterT>(value)); return *this;}
    ///@}
  private:

    FileFormat m_format{FileFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    int m_startFromRow{0};
    bool m_startFromRowHasBeenSet = false;

    bool m_containsHeader{false};
    bool m_containsHeaderHasBeenSet = false;

    TextQualifier m_textQualifier{TextQualifier::NOT_SET};
    bool m_textQualifierHasBeenSet = false;

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
