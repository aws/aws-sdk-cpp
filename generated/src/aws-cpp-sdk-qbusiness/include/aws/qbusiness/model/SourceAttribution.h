/**
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
    AWS_QBUSINESS_API SourceAttribution();
    AWS_QBUSINESS_API SourceAttribution(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API SourceAttribution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title of the document which is the source for the Amazon Q Business
     * generated response. </p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline SourceAttribution& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline SourceAttribution& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline SourceAttribution& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content extract from the document on which the generated response is
     * based. </p>
     */
    inline const Aws::String& GetSnippet() const{ return m_snippet; }
    inline bool SnippetHasBeenSet() const { return m_snippetHasBeenSet; }
    inline void SetSnippet(const Aws::String& value) { m_snippetHasBeenSet = true; m_snippet = value; }
    inline void SetSnippet(Aws::String&& value) { m_snippetHasBeenSet = true; m_snippet = std::move(value); }
    inline void SetSnippet(const char* value) { m_snippetHasBeenSet = true; m_snippet.assign(value); }
    inline SourceAttribution& WithSnippet(const Aws::String& value) { SetSnippet(value); return *this;}
    inline SourceAttribution& WithSnippet(Aws::String&& value) { SetSnippet(std::move(value)); return *this;}
    inline SourceAttribution& WithSnippet(const char* value) { SetSnippet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the document which is the source for the Amazon Q Business
     * generated response. </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline SourceAttribution& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline SourceAttribution& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline SourceAttribution& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number attached to a citation in an Amazon Q Business generated
     * response.</p>
     */
    inline int GetCitationNumber() const{ return m_citationNumber; }
    inline bool CitationNumberHasBeenSet() const { return m_citationNumberHasBeenSet; }
    inline void SetCitationNumber(int value) { m_citationNumberHasBeenSet = true; m_citationNumber = value; }
    inline SourceAttribution& WithCitationNumber(int value) { SetCitationNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business application was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline SourceAttribution& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline SourceAttribution& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A text extract from a source document that is used for source
     * attribution.</p>
     */
    inline const Aws::Vector<TextSegment>& GetTextMessageSegments() const{ return m_textMessageSegments; }
    inline bool TextMessageSegmentsHasBeenSet() const { return m_textMessageSegmentsHasBeenSet; }
    inline void SetTextMessageSegments(const Aws::Vector<TextSegment>& value) { m_textMessageSegmentsHasBeenSet = true; m_textMessageSegments = value; }
    inline void SetTextMessageSegments(Aws::Vector<TextSegment>&& value) { m_textMessageSegmentsHasBeenSet = true; m_textMessageSegments = std::move(value); }
    inline SourceAttribution& WithTextMessageSegments(const Aws::Vector<TextSegment>& value) { SetTextMessageSegments(value); return *this;}
    inline SourceAttribution& WithTextMessageSegments(Aws::Vector<TextSegment>&& value) { SetTextMessageSegments(std::move(value)); return *this;}
    inline SourceAttribution& AddTextMessageSegments(const TextSegment& value) { m_textMessageSegmentsHasBeenSet = true; m_textMessageSegments.push_back(value); return *this; }
    inline SourceAttribution& AddTextMessageSegments(TextSegment&& value) { m_textMessageSegmentsHasBeenSet = true; m_textMessageSegments.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_snippet;
    bool m_snippetHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    int m_citationNumber;
    bool m_citationNumberHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<TextSegment> m_textMessageSegments;
    bool m_textMessageSegmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
