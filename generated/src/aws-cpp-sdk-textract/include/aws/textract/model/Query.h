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
    AWS_TEXTRACT_API Query() = default;
    AWS_TEXTRACT_API Query(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Query& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Question that Amazon Textract will apply to the document. An example would be
     * "What is the customer's SSN?"</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    Query& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Alias attached to the query, for ease of location.</p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    Query& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Vector<Aws::String>& GetPages() const { return m_pages; }
    inline bool PagesHasBeenSet() const { return m_pagesHasBeenSet; }
    template<typename PagesT = Aws::Vector<Aws::String>>
    void SetPages(PagesT&& value) { m_pagesHasBeenSet = true; m_pages = std::forward<PagesT>(value); }
    template<typename PagesT = Aws::Vector<Aws::String>>
    Query& WithPages(PagesT&& value) { SetPages(std::forward<PagesT>(value)); return *this;}
    template<typename PagesT = Aws::String>
    Query& AddPages(PagesT&& value) { m_pagesHasBeenSet = true; m_pages.emplace_back(std::forward<PagesT>(value)); return *this; }
    ///@}
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
