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
    AWS_TEXTRACT_API SplitDocument();
    AWS_TEXTRACT_API SplitDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API SplitDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The index for a given document in a DocumentGroup of a specific Type.</p>
     */
    inline int GetIndex() const{ return m_index; }

    /**
     * <p>The index for a given document in a DocumentGroup of a specific Type.</p>
     */
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }

    /**
     * <p>The index for a given document in a DocumentGroup of a specific Type.</p>
     */
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }

    /**
     * <p>The index for a given document in a DocumentGroup of a specific Type.</p>
     */
    inline SplitDocument& WithIndex(int value) { SetIndex(value); return *this;}


    /**
     * <p>An array of page numbers for a for a given document, ordered by logical
     * boundary.</p>
     */
    inline const Aws::Vector<int>& GetPages() const{ return m_pages; }

    /**
     * <p>An array of page numbers for a for a given document, ordered by logical
     * boundary.</p>
     */
    inline bool PagesHasBeenSet() const { return m_pagesHasBeenSet; }

    /**
     * <p>An array of page numbers for a for a given document, ordered by logical
     * boundary.</p>
     */
    inline void SetPages(const Aws::Vector<int>& value) { m_pagesHasBeenSet = true; m_pages = value; }

    /**
     * <p>An array of page numbers for a for a given document, ordered by logical
     * boundary.</p>
     */
    inline void SetPages(Aws::Vector<int>&& value) { m_pagesHasBeenSet = true; m_pages = std::move(value); }

    /**
     * <p>An array of page numbers for a for a given document, ordered by logical
     * boundary.</p>
     */
    inline SplitDocument& WithPages(const Aws::Vector<int>& value) { SetPages(value); return *this;}

    /**
     * <p>An array of page numbers for a for a given document, ordered by logical
     * boundary.</p>
     */
    inline SplitDocument& WithPages(Aws::Vector<int>&& value) { SetPages(std::move(value)); return *this;}

    /**
     * <p>An array of page numbers for a for a given document, ordered by logical
     * boundary.</p>
     */
    inline SplitDocument& AddPages(int value) { m_pagesHasBeenSet = true; m_pages.push_back(value); return *this; }

  private:

    int m_index;
    bool m_indexHasBeenSet = false;

    Aws::Vector<int> m_pages;
    bool m_pagesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
