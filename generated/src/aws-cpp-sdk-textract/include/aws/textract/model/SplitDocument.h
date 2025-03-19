/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
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
   * <p>Contains information about the pages of a document, defined by logical
   * boundary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/SplitDocument">AWS
   * API Reference</a></p>
   */
  class SplitDocument
  {
  public:
    AWS_TEXTRACT_API SplitDocument() = default;
    AWS_TEXTRACT_API SplitDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API SplitDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The index for a given document in a DocumentGroup of a specific Type.</p>
     */
    inline int GetIndex() const { return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }
    inline SplitDocument& WithIndex(int value) { SetIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of page numbers for a for a given document, ordered by logical
     * boundary.</p>
     */
    inline const Aws::Vector<int>& GetPages() const { return m_pages; }
    inline bool PagesHasBeenSet() const { return m_pagesHasBeenSet; }
    template<typename PagesT = Aws::Vector<int>>
    void SetPages(PagesT&& value) { m_pagesHasBeenSet = true; m_pages = std::forward<PagesT>(value); }
    template<typename PagesT = Aws::Vector<int>>
    SplitDocument& WithPages(PagesT&& value) { SetPages(std::forward<PagesT>(value)); return *this;}
    inline SplitDocument& AddPages(int value) { m_pagesHasBeenSet = true; m_pages.push_back(value); return *this; }
    ///@}
  private:

    int m_index{0};
    bool m_indexHasBeenSet = false;

    Aws::Vector<int> m_pages;
    bool m_pagesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
