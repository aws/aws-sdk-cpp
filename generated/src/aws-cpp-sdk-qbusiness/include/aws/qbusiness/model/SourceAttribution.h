/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The documents used to generate an Amazon Q web experience
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


    /**
     * <p>The number attached to a citation in an Amazon Q generated response.</p>
     */
    inline int GetCitationNumber() const{ return m_citationNumber; }

    /**
     * <p>The number attached to a citation in an Amazon Q generated response.</p>
     */
    inline bool CitationNumberHasBeenSet() const { return m_citationNumberHasBeenSet; }

    /**
     * <p>The number attached to a citation in an Amazon Q generated response.</p>
     */
    inline void SetCitationNumber(int value) { m_citationNumberHasBeenSet = true; m_citationNumber = value; }

    /**
     * <p>The number attached to a citation in an Amazon Q generated response.</p>
     */
    inline SourceAttribution& WithCitationNumber(int value) { SetCitationNumber(value); return *this;}


    /**
     * <p>The content extract from the document on which the generated response is
     * based. </p>
     */
    inline const Aws::String& GetSnippet() const{ return m_snippet; }

    /**
     * <p>The content extract from the document on which the generated response is
     * based. </p>
     */
    inline bool SnippetHasBeenSet() const { return m_snippetHasBeenSet; }

    /**
     * <p>The content extract from the document on which the generated response is
     * based. </p>
     */
    inline void SetSnippet(const Aws::String& value) { m_snippetHasBeenSet = true; m_snippet = value; }

    /**
     * <p>The content extract from the document on which the generated response is
     * based. </p>
     */
    inline void SetSnippet(Aws::String&& value) { m_snippetHasBeenSet = true; m_snippet = std::move(value); }

    /**
     * <p>The content extract from the document on which the generated response is
     * based. </p>
     */
    inline void SetSnippet(const char* value) { m_snippetHasBeenSet = true; m_snippet.assign(value); }

    /**
     * <p>The content extract from the document on which the generated response is
     * based. </p>
     */
    inline SourceAttribution& WithSnippet(const Aws::String& value) { SetSnippet(value); return *this;}

    /**
     * <p>The content extract from the document on which the generated response is
     * based. </p>
     */
    inline SourceAttribution& WithSnippet(Aws::String&& value) { SetSnippet(std::move(value)); return *this;}

    /**
     * <p>The content extract from the document on which the generated response is
     * based. </p>
     */
    inline SourceAttribution& WithSnippet(const char* value) { SetSnippet(value); return *this;}


    /**
     * <p>A text extract from a source document that is used for source
     * attribution.</p>
     */
    inline const Aws::Vector<TextSegment>& GetTextMessageSegments() const{ return m_textMessageSegments; }

    /**
     * <p>A text extract from a source document that is used for source
     * attribution.</p>
     */
    inline bool TextMessageSegmentsHasBeenSet() const { return m_textMessageSegmentsHasBeenSet; }

    /**
     * <p>A text extract from a source document that is used for source
     * attribution.</p>
     */
    inline void SetTextMessageSegments(const Aws::Vector<TextSegment>& value) { m_textMessageSegmentsHasBeenSet = true; m_textMessageSegments = value; }

    /**
     * <p>A text extract from a source document that is used for source
     * attribution.</p>
     */
    inline void SetTextMessageSegments(Aws::Vector<TextSegment>&& value) { m_textMessageSegmentsHasBeenSet = true; m_textMessageSegments = std::move(value); }

    /**
     * <p>A text extract from a source document that is used for source
     * attribution.</p>
     */
    inline SourceAttribution& WithTextMessageSegments(const Aws::Vector<TextSegment>& value) { SetTextMessageSegments(value); return *this;}

    /**
     * <p>A text extract from a source document that is used for source
     * attribution.</p>
     */
    inline SourceAttribution& WithTextMessageSegments(Aws::Vector<TextSegment>&& value) { SetTextMessageSegments(std::move(value)); return *this;}

    /**
     * <p>A text extract from a source document that is used for source
     * attribution.</p>
     */
    inline SourceAttribution& AddTextMessageSegments(const TextSegment& value) { m_textMessageSegmentsHasBeenSet = true; m_textMessageSegments.push_back(value); return *this; }

    /**
     * <p>A text extract from a source document that is used for source
     * attribution.</p>
     */
    inline SourceAttribution& AddTextMessageSegments(TextSegment&& value) { m_textMessageSegmentsHasBeenSet = true; m_textMessageSegments.push_back(std::move(value)); return *this; }


    /**
     * <p>The title of the document which is the source for the Amazon Q generated
     * response. </p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the document which is the source for the Amazon Q generated
     * response. </p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the document which is the source for the Amazon Q generated
     * response. </p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the document which is the source for the Amazon Q generated
     * response. </p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the document which is the source for the Amazon Q generated
     * response. </p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the document which is the source for the Amazon Q generated
     * response. </p>
     */
    inline SourceAttribution& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the document which is the source for the Amazon Q generated
     * response. </p>
     */
    inline SourceAttribution& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the document which is the source for the Amazon Q generated
     * response. </p>
     */
    inline SourceAttribution& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline SourceAttribution& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline SourceAttribution& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The URL of the document which is the source for the Amazon Q generated
     * response. </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL of the document which is the source for the Amazon Q generated
     * response. </p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL of the document which is the source for the Amazon Q generated
     * response. </p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL of the document which is the source for the Amazon Q generated
     * response. </p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL of the document which is the source for the Amazon Q generated
     * response. </p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL of the document which is the source for the Amazon Q generated
     * response. </p>
     */
    inline SourceAttribution& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL of the document which is the source for the Amazon Q generated
     * response. </p>
     */
    inline SourceAttribution& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the document which is the source for the Amazon Q generated
     * response. </p>
     */
    inline SourceAttribution& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    int m_citationNumber;
    bool m_citationNumberHasBeenSet = false;

    Aws::String m_snippet;
    bool m_snippetHasBeenSet = false;

    Aws::Vector<TextSegment> m_textMessageSegments;
    bool m_textMessageSegmentsHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
