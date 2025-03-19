/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>Read options for an annotation import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ReadOptions">AWS
   * API Reference</a></p>
   */
  class ReadOptions
  {
  public:
    AWS_OMICS_API ReadOptions() = default;
    AWS_OMICS_API ReadOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ReadOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file's field separator.</p>
     */
    inline const Aws::String& GetSep() const { return m_sep; }
    inline bool SepHasBeenSet() const { return m_sepHasBeenSet; }
    template<typename SepT = Aws::String>
    void SetSep(SepT&& value) { m_sepHasBeenSet = true; m_sep = std::forward<SepT>(value); }
    template<typename SepT = Aws::String>
    ReadOptions& WithSep(SepT&& value) { SetSep(std::forward<SepT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file's encoding.</p>
     */
    inline const Aws::String& GetEncoding() const { return m_encoding; }
    inline bool EncodingHasBeenSet() const { return m_encodingHasBeenSet; }
    template<typename EncodingT = Aws::String>
    void SetEncoding(EncodingT&& value) { m_encodingHasBeenSet = true; m_encoding = std::forward<EncodingT>(value); }
    template<typename EncodingT = Aws::String>
    ReadOptions& WithEncoding(EncodingT&& value) { SetEncoding(std::forward<EncodingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file's quote character.</p>
     */
    inline const Aws::String& GetQuote() const { return m_quote; }
    inline bool QuoteHasBeenSet() const { return m_quoteHasBeenSet; }
    template<typename QuoteT = Aws::String>
    void SetQuote(QuoteT&& value) { m_quoteHasBeenSet = true; m_quote = std::forward<QuoteT>(value); }
    template<typename QuoteT = Aws::String>
    ReadOptions& WithQuote(QuoteT&& value) { SetQuote(std::forward<QuoteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether all values need to be quoted, or just those that contain quotes.</p>
     */
    inline bool GetQuoteAll() const { return m_quoteAll; }
    inline bool QuoteAllHasBeenSet() const { return m_quoteAllHasBeenSet; }
    inline void SetQuoteAll(bool value) { m_quoteAllHasBeenSet = true; m_quoteAll = value; }
    inline ReadOptions& WithQuoteAll(bool value) { SetQuoteAll(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A character for escaping quotes in the file.</p>
     */
    inline const Aws::String& GetEscape() const { return m_escape; }
    inline bool EscapeHasBeenSet() const { return m_escapeHasBeenSet; }
    template<typename EscapeT = Aws::String>
    void SetEscape(EscapeT&& value) { m_escapeHasBeenSet = true; m_escape = std::forward<EscapeT>(value); }
    template<typename EscapeT = Aws::String>
    ReadOptions& WithEscape(EscapeT&& value) { SetEscape(std::forward<EscapeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether quotes need to be escaped in the file.</p>
     */
    inline bool GetEscapeQuotes() const { return m_escapeQuotes; }
    inline bool EscapeQuotesHasBeenSet() const { return m_escapeQuotesHasBeenSet; }
    inline void SetEscapeQuotes(bool value) { m_escapeQuotesHasBeenSet = true; m_escapeQuotes = value; }
    inline ReadOptions& WithEscapeQuotes(bool value) { SetEscapeQuotes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file's comment character.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    ReadOptions& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the file has a header row.</p>
     */
    inline bool GetHeader() const { return m_header; }
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
    inline void SetHeader(bool value) { m_headerHasBeenSet = true; m_header = value; }
    inline ReadOptions& WithHeader(bool value) { SetHeader(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A line separator for the file.</p>
     */
    inline const Aws::String& GetLineSep() const { return m_lineSep; }
    inline bool LineSepHasBeenSet() const { return m_lineSepHasBeenSet; }
    template<typename LineSepT = Aws::String>
    void SetLineSep(LineSepT&& value) { m_lineSepHasBeenSet = true; m_lineSep = std::forward<LineSepT>(value); }
    template<typename LineSepT = Aws::String>
    ReadOptions& WithLineSep(LineSepT&& value) { SetLineSep(std::forward<LineSepT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sep;
    bool m_sepHasBeenSet = false;

    Aws::String m_encoding;
    bool m_encodingHasBeenSet = false;

    Aws::String m_quote;
    bool m_quoteHasBeenSet = false;

    bool m_quoteAll{false};
    bool m_quoteAllHasBeenSet = false;

    Aws::String m_escape;
    bool m_escapeHasBeenSet = false;

    bool m_escapeQuotes{false};
    bool m_escapeQuotesHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    bool m_header{false};
    bool m_headerHasBeenSet = false;

    Aws::String m_lineSep;
    bool m_lineSepHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
