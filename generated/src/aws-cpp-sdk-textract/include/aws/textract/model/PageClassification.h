/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/Prediction.h>
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
   * <p>The class assigned to a Page object detected in an input document. Contains
   * information regarding the predicted type/class of a document's page and the page
   * number that the Page object was detected on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/PageClassification">AWS
   * API Reference</a></p>
   */
  class PageClassification
  {
  public:
    AWS_TEXTRACT_API PageClassification() = default;
    AWS_TEXTRACT_API PageClassification(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API PageClassification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The class, or document type, assigned to a detected Page object. The class,
     * or document type, assigned to a detected Page object.</p>
     */
    inline const Aws::Vector<Prediction>& GetPageType() const { return m_pageType; }
    inline bool PageTypeHasBeenSet() const { return m_pageTypeHasBeenSet; }
    template<typename PageTypeT = Aws::Vector<Prediction>>
    void SetPageType(PageTypeT&& value) { m_pageTypeHasBeenSet = true; m_pageType = std::forward<PageTypeT>(value); }
    template<typename PageTypeT = Aws::Vector<Prediction>>
    PageClassification& WithPageType(PageTypeT&& value) { SetPageType(std::forward<PageTypeT>(value)); return *this;}
    template<typename PageTypeT = Prediction>
    PageClassification& AddPageType(PageTypeT&& value) { m_pageTypeHasBeenSet = true; m_pageType.emplace_back(std::forward<PageTypeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The page number the value was detected on, relative to Amazon Textract's
     * starting position.</p>
     */
    inline const Aws::Vector<Prediction>& GetPageNumber() const { return m_pageNumber; }
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }
    template<typename PageNumberT = Aws::Vector<Prediction>>
    void SetPageNumber(PageNumberT&& value) { m_pageNumberHasBeenSet = true; m_pageNumber = std::forward<PageNumberT>(value); }
    template<typename PageNumberT = Aws::Vector<Prediction>>
    PageClassification& WithPageNumber(PageNumberT&& value) { SetPageNumber(std::forward<PageNumberT>(value)); return *this;}
    template<typename PageNumberT = Prediction>
    PageClassification& AddPageNumber(PageNumberT&& value) { m_pageNumberHasBeenSet = true; m_pageNumber.emplace_back(std::forward<PageNumberT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Prediction> m_pageType;
    bool m_pageTypeHasBeenSet = false;

    Aws::Vector<Prediction> m_pageNumber;
    bool m_pageNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
