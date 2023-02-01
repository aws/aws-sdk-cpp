/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Each query contains the question you want to ask in the Text and the alias
   * you want to associate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/Query">AWS API
   * Reference</a></p>
   */
  class Query
  {
  public:
    AWS_TEXTRACT_API Query();
    AWS_TEXTRACT_API Query(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Query& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Question that Amazon Textract will apply to the document. An example would be
     * "What is the customer's SSN?"</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>Question that Amazon Textract will apply to the document. An example would be
     * "What is the customer's SSN?"</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>Question that Amazon Textract will apply to the document. An example would be
     * "What is the customer's SSN?"</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>Question that Amazon Textract will apply to the document. An example would be
     * "What is the customer's SSN?"</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>Question that Amazon Textract will apply to the document. An example would be
     * "What is the customer's SSN?"</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>Question that Amazon Textract will apply to the document. An example would be
     * "What is the customer's SSN?"</p>
     */
    inline Query& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>Question that Amazon Textract will apply to the document. An example would be
     * "What is the customer's SSN?"</p>
     */
    inline Query& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>Question that Amazon Textract will apply to the document. An example would be
     * "What is the customer's SSN?"</p>
     */
    inline Query& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>Alias attached to the query, for ease of location.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>Alias attached to the query, for ease of location.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>Alias attached to the query, for ease of location.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>Alias attached to the query, for ease of location.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>Alias attached to the query, for ease of location.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>Alias attached to the query, for ease of location.</p>
     */
    inline Query& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>Alias attached to the query, for ease of location.</p>
     */
    inline Query& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>Alias attached to the query, for ease of location.</p>
     */
    inline Query& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>Pages is a parameter that the user inputs to specify which pages to apply a
     * query to. The following is a list of rules for using this parameter.</p> <ul>
     * <li> <p>If a page is not specified, it is set to <code>["1"]</code> by
     * default.</p> </li> <li> <p>The following characters are allowed in the
     * parameter's string: <code>0 1 2 3 4 5 6 7 8 9 - *</code>. No whitespace is
     * allowed.</p> </li> <li> <p>When using * to indicate all pages, it must be the
     * only element in the list.</p> </li> <li> <p>You can use page intervals, such as
     * <code>[“1-3”, “1-1”, “4-*”]</code>. Where <code>*</code> indicates last page of
     * document.</p> </li> <li> <p>Specified pages must be greater than 0 and less than
     * or equal to the number of pages in the document.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetPages() const{ return m_pages; }

    /**
     * <p>Pages is a parameter that the user inputs to specify which pages to apply a
     * query to. The following is a list of rules for using this parameter.</p> <ul>
     * <li> <p>If a page is not specified, it is set to <code>["1"]</code> by
     * default.</p> </li> <li> <p>The following characters are allowed in the
     * parameter's string: <code>0 1 2 3 4 5 6 7 8 9 - *</code>. No whitespace is
     * allowed.</p> </li> <li> <p>When using * to indicate all pages, it must be the
     * only element in the list.</p> </li> <li> <p>You can use page intervals, such as
     * <code>[“1-3”, “1-1”, “4-*”]</code>. Where <code>*</code> indicates last page of
     * document.</p> </li> <li> <p>Specified pages must be greater than 0 and less than
     * or equal to the number of pages in the document.</p> </li> </ul>
     */
    inline bool PagesHasBeenSet() const { return m_pagesHasBeenSet; }

    /**
     * <p>Pages is a parameter that the user inputs to specify which pages to apply a
     * query to. The following is a list of rules for using this parameter.</p> <ul>
     * <li> <p>If a page is not specified, it is set to <code>["1"]</code> by
     * default.</p> </li> <li> <p>The following characters are allowed in the
     * parameter's string: <code>0 1 2 3 4 5 6 7 8 9 - *</code>. No whitespace is
     * allowed.</p> </li> <li> <p>When using * to indicate all pages, it must be the
     * only element in the list.</p> </li> <li> <p>You can use page intervals, such as
     * <code>[“1-3”, “1-1”, “4-*”]</code>. Where <code>*</code> indicates last page of
     * document.</p> </li> <li> <p>Specified pages must be greater than 0 and less than
     * or equal to the number of pages in the document.</p> </li> </ul>
     */
    inline void SetPages(const Aws::Vector<Aws::String>& value) { m_pagesHasBeenSet = true; m_pages = value; }

    /**
     * <p>Pages is a parameter that the user inputs to specify which pages to apply a
     * query to. The following is a list of rules for using this parameter.</p> <ul>
     * <li> <p>If a page is not specified, it is set to <code>["1"]</code> by
     * default.</p> </li> <li> <p>The following characters are allowed in the
     * parameter's string: <code>0 1 2 3 4 5 6 7 8 9 - *</code>. No whitespace is
     * allowed.</p> </li> <li> <p>When using * to indicate all pages, it must be the
     * only element in the list.</p> </li> <li> <p>You can use page intervals, such as
     * <code>[“1-3”, “1-1”, “4-*”]</code>. Where <code>*</code> indicates last page of
     * document.</p> </li> <li> <p>Specified pages must be greater than 0 and less than
     * or equal to the number of pages in the document.</p> </li> </ul>
     */
    inline void SetPages(Aws::Vector<Aws::String>&& value) { m_pagesHasBeenSet = true; m_pages = std::move(value); }

    /**
     * <p>Pages is a parameter that the user inputs to specify which pages to apply a
     * query to. The following is a list of rules for using this parameter.</p> <ul>
     * <li> <p>If a page is not specified, it is set to <code>["1"]</code> by
     * default.</p> </li> <li> <p>The following characters are allowed in the
     * parameter's string: <code>0 1 2 3 4 5 6 7 8 9 - *</code>. No whitespace is
     * allowed.</p> </li> <li> <p>When using * to indicate all pages, it must be the
     * only element in the list.</p> </li> <li> <p>You can use page intervals, such as
     * <code>[“1-3”, “1-1”, “4-*”]</code>. Where <code>*</code> indicates last page of
     * document.</p> </li> <li> <p>Specified pages must be greater than 0 and less than
     * or equal to the number of pages in the document.</p> </li> </ul>
     */
    inline Query& WithPages(const Aws::Vector<Aws::String>& value) { SetPages(value); return *this;}

    /**
     * <p>Pages is a parameter that the user inputs to specify which pages to apply a
     * query to. The following is a list of rules for using this parameter.</p> <ul>
     * <li> <p>If a page is not specified, it is set to <code>["1"]</code> by
     * default.</p> </li> <li> <p>The following characters are allowed in the
     * parameter's string: <code>0 1 2 3 4 5 6 7 8 9 - *</code>. No whitespace is
     * allowed.</p> </li> <li> <p>When using * to indicate all pages, it must be the
     * only element in the list.</p> </li> <li> <p>You can use page intervals, such as
     * <code>[“1-3”, “1-1”, “4-*”]</code>. Where <code>*</code> indicates last page of
     * document.</p> </li> <li> <p>Specified pages must be greater than 0 and less than
     * or equal to the number of pages in the document.</p> </li> </ul>
     */
    inline Query& WithPages(Aws::Vector<Aws::String>&& value) { SetPages(std::move(value)); return *this;}

    /**
     * <p>Pages is a parameter that the user inputs to specify which pages to apply a
     * query to. The following is a list of rules for using this parameter.</p> <ul>
     * <li> <p>If a page is not specified, it is set to <code>["1"]</code> by
     * default.</p> </li> <li> <p>The following characters are allowed in the
     * parameter's string: <code>0 1 2 3 4 5 6 7 8 9 - *</code>. No whitespace is
     * allowed.</p> </li> <li> <p>When using * to indicate all pages, it must be the
     * only element in the list.</p> </li> <li> <p>You can use page intervals, such as
     * <code>[“1-3”, “1-1”, “4-*”]</code>. Where <code>*</code> indicates last page of
     * document.</p> </li> <li> <p>Specified pages must be greater than 0 and less than
     * or equal to the number of pages in the document.</p> </li> </ul>
     */
    inline Query& AddPages(const Aws::String& value) { m_pagesHasBeenSet = true; m_pages.push_back(value); return *this; }

    /**
     * <p>Pages is a parameter that the user inputs to specify which pages to apply a
     * query to. The following is a list of rules for using this parameter.</p> <ul>
     * <li> <p>If a page is not specified, it is set to <code>["1"]</code> by
     * default.</p> </li> <li> <p>The following characters are allowed in the
     * parameter's string: <code>0 1 2 3 4 5 6 7 8 9 - *</code>. No whitespace is
     * allowed.</p> </li> <li> <p>When using * to indicate all pages, it must be the
     * only element in the list.</p> </li> <li> <p>You can use page intervals, such as
     * <code>[“1-3”, “1-1”, “4-*”]</code>. Where <code>*</code> indicates last page of
     * document.</p> </li> <li> <p>Specified pages must be greater than 0 and less than
     * or equal to the number of pages in the document.</p> </li> </ul>
     */
    inline Query& AddPages(Aws::String&& value) { m_pagesHasBeenSet = true; m_pages.push_back(std::move(value)); return *this; }

    /**
     * <p>Pages is a parameter that the user inputs to specify which pages to apply a
     * query to. The following is a list of rules for using this parameter.</p> <ul>
     * <li> <p>If a page is not specified, it is set to <code>["1"]</code> by
     * default.</p> </li> <li> <p>The following characters are allowed in the
     * parameter's string: <code>0 1 2 3 4 5 6 7 8 9 - *</code>. No whitespace is
     * allowed.</p> </li> <li> <p>When using * to indicate all pages, it must be the
     * only element in the list.</p> </li> <li> <p>You can use page intervals, such as
     * <code>[“1-3”, “1-1”, “4-*”]</code>. Where <code>*</code> indicates last page of
     * document.</p> </li> <li> <p>Specified pages must be greater than 0 and less than
     * or equal to the number of pages in the document.</p> </li> </ul>
     */
    inline Query& AddPages(const char* value) { m_pagesHasBeenSet = true; m_pages.push_back(value); return *this; }

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::Vector<Aws::String> m_pages;
    bool m_pagesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
