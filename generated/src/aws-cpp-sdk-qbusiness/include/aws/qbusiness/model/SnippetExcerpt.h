/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Contains the relevant text excerpt from a source that was used to generate a
   * citation text segment in an Amazon Q Business chat response.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/SnippetExcerpt">AWS
   * API Reference</a></p>
   */
  class SnippetExcerpt
  {
  public:
    AWS_QBUSINESS_API SnippetExcerpt();
    AWS_QBUSINESS_API SnippetExcerpt(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API SnippetExcerpt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The relevant text excerpt from a source that was used to generate a citation
     * text segment in an Amazon Q chat response.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The relevant text excerpt from a source that was used to generate a citation
     * text segment in an Amazon Q chat response.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The relevant text excerpt from a source that was used to generate a citation
     * text segment in an Amazon Q chat response.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The relevant text excerpt from a source that was used to generate a citation
     * text segment in an Amazon Q chat response.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The relevant text excerpt from a source that was used to generate a citation
     * text segment in an Amazon Q chat response.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The relevant text excerpt from a source that was used to generate a citation
     * text segment in an Amazon Q chat response.</p>
     */
    inline SnippetExcerpt& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The relevant text excerpt from a source that was used to generate a citation
     * text segment in an Amazon Q chat response.</p>
     */
    inline SnippetExcerpt& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The relevant text excerpt from a source that was used to generate a citation
     * text segment in an Amazon Q chat response.</p>
     */
    inline SnippetExcerpt& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
