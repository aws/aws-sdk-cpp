/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/SnippetExcerpt.h>
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
   * <p>Provides information about a text extract in a chat response that can be
   * attributed to a source document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/TextSegment">AWS
   * API Reference</a></p>
   */
  class TextSegment
  {
  public:
    AWS_QBUSINESS_API TextSegment();
    AWS_QBUSINESS_API TextSegment(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API TextSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The zero-based location in the response string where the source attribution
     * starts.</p>
     */
    inline int GetBeginOffset() const{ return m_beginOffset; }

    /**
     * <p>The zero-based location in the response string where the source attribution
     * starts.</p>
     */
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }

    /**
     * <p>The zero-based location in the response string where the source attribution
     * starts.</p>
     */
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }

    /**
     * <p>The zero-based location in the response string where the source attribution
     * starts.</p>
     */
    inline TextSegment& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}


    /**
     * <p>The zero-based location in the response string where the source attribution
     * ends.</p>
     */
    inline int GetEndOffset() const{ return m_endOffset; }

    /**
     * <p>The zero-based location in the response string where the source attribution
     * ends.</p>
     */
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }

    /**
     * <p>The zero-based location in the response string where the source attribution
     * ends.</p>
     */
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }

    /**
     * <p>The zero-based location in the response string where the source attribution
     * ends.</p>
     */
    inline TextSegment& WithEndOffset(int value) { SetEndOffset(value); return *this;}


    /**
     * <p>The relevant text excerpt from a source that was used to generate a citation
     * text segment in an Amazon Q Business chat response.</p>
     */
    inline const SnippetExcerpt& GetSnippetExcerpt() const{ return m_snippetExcerpt; }

    /**
     * <p>The relevant text excerpt from a source that was used to generate a citation
     * text segment in an Amazon Q Business chat response.</p>
     */
    inline bool SnippetExcerptHasBeenSet() const { return m_snippetExcerptHasBeenSet; }

    /**
     * <p>The relevant text excerpt from a source that was used to generate a citation
     * text segment in an Amazon Q Business chat response.</p>
     */
    inline void SetSnippetExcerpt(const SnippetExcerpt& value) { m_snippetExcerptHasBeenSet = true; m_snippetExcerpt = value; }

    /**
     * <p>The relevant text excerpt from a source that was used to generate a citation
     * text segment in an Amazon Q Business chat response.</p>
     */
    inline void SetSnippetExcerpt(SnippetExcerpt&& value) { m_snippetExcerptHasBeenSet = true; m_snippetExcerpt = std::move(value); }

    /**
     * <p>The relevant text excerpt from a source that was used to generate a citation
     * text segment in an Amazon Q Business chat response.</p>
     */
    inline TextSegment& WithSnippetExcerpt(const SnippetExcerpt& value) { SetSnippetExcerpt(value); return *this;}

    /**
     * <p>The relevant text excerpt from a source that was used to generate a citation
     * text segment in an Amazon Q Business chat response.</p>
     */
    inline TextSegment& WithSnippetExcerpt(SnippetExcerpt&& value) { SetSnippetExcerpt(std::move(value)); return *this;}

  private:

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset;
    bool m_endOffsetHasBeenSet = false;

    SnippetExcerpt m_snippetExcerpt;
    bool m_snippetExcerptHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
