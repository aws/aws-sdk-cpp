﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/TextSegment.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>The documents used to generate an Amazon Q Business web experience
   * response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/SourceAttribution">AWS
   * API Reference</a></p>
   */
  class SourceAttribution
  {
  public:
    AWS_QBUSINESS_API SourceAttribution() = default;
    AWS_QBUSINESS_API SourceAttribution(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API SourceAttribution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title of the document which is the source for the Amazon Q Business
     * generated response. </p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    SourceAttribution& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content extract from the document on which the generated response is
     * based. </p>
     */
    inline const Aws::String& GetSnippet() const { return m_snippet; }
    inline bool SnippetHasBeenSet() const { return m_snippetHasBeenSet; }
    template<typename SnippetT = Aws::String>
    void SetSnippet(SnippetT&& value) { m_snippetHasBeenSet = true; m_snippet = std::forward<SnippetT>(value); }
    template<typename SnippetT = Aws::String>
    SourceAttribution& WithSnippet(SnippetT&& value) { SetSnippet(std::forward<SnippetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the document which is the source for the Amazon Q Business
     * generated response. </p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    SourceAttribution& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number attached to a citation in an Amazon Q Business generated
     * response.</p>
     */
    inline int GetCitationNumber() const { return m_citationNumber; }
    inline bool CitationNumberHasBeenSet() const { return m_citationNumberHasBeenSet; }
    inline void SetCitationNumber(int value) { m_citationNumberHasBeenSet = true; m_citationNumber = value; }
    inline SourceAttribution& WithCitationNumber(int value) { SetCitationNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business application was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    SourceAttribution& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A text extract from a source document that is used for source
     * attribution.</p>
     */
    inline const Aws::Vector<TextSegment>& GetTextMessageSegments() const { return m_textMessageSegments; }
    inline bool TextMessageSegmentsHasBeenSet() const { return m_textMessageSegmentsHasBeenSet; }
    template<typename TextMessageSegmentsT = Aws::Vector<TextSegment>>
    void SetTextMessageSegments(TextMessageSegmentsT&& value) { m_textMessageSegmentsHasBeenSet = true; m_textMessageSegments = std::forward<TextMessageSegmentsT>(value); }
    template<typename TextMessageSegmentsT = Aws::Vector<TextSegment>>
    SourceAttribution& WithTextMessageSegments(TextMessageSegmentsT&& value) { SetTextMessageSegments(std::forward<TextMessageSegmentsT>(value)); return *this;}
    template<typename TextMessageSegmentsT = TextSegment>
    SourceAttribution& AddTextMessageSegments(TextMessageSegmentsT&& value) { m_textMessageSegmentsHasBeenSet = true; m_textMessageSegments.emplace_back(std::forward<TextMessageSegmentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_snippet;
    bool m_snippetHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    int m_citationNumber{0};
    bool m_citationNumberHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<TextSegment> m_textMessageSegments;
    bool m_textMessageSegmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
