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
    AWS_TEXTRACT_API PageClassification();
    AWS_TEXTRACT_API PageClassification(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API PageClassification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The class, or document type, assigned to a detected Page object. The class,
     * or document type, assigned to a detected Page object.</p>
     */
    inline const Aws::Vector<Prediction>& GetPageType() const{ return m_pageType; }

    /**
     * <p>The class, or document type, assigned to a detected Page object. The class,
     * or document type, assigned to a detected Page object.</p>
     */
    inline bool PageTypeHasBeenSet() const { return m_pageTypeHasBeenSet; }

    /**
     * <p>The class, or document type, assigned to a detected Page object. The class,
     * or document type, assigned to a detected Page object.</p>
     */
    inline void SetPageType(const Aws::Vector<Prediction>& value) { m_pageTypeHasBeenSet = true; m_pageType = value; }

    /**
     * <p>The class, or document type, assigned to a detected Page object. The class,
     * or document type, assigned to a detected Page object.</p>
     */
    inline void SetPageType(Aws::Vector<Prediction>&& value) { m_pageTypeHasBeenSet = true; m_pageType = std::move(value); }

    /**
     * <p>The class, or document type, assigned to a detected Page object. The class,
     * or document type, assigned to a detected Page object.</p>
     */
    inline PageClassification& WithPageType(const Aws::Vector<Prediction>& value) { SetPageType(value); return *this;}

    /**
     * <p>The class, or document type, assigned to a detected Page object. The class,
     * or document type, assigned to a detected Page object.</p>
     */
    inline PageClassification& WithPageType(Aws::Vector<Prediction>&& value) { SetPageType(std::move(value)); return *this;}

    /**
     * <p>The class, or document type, assigned to a detected Page object. The class,
     * or document type, assigned to a detected Page object.</p>
     */
    inline PageClassification& AddPageType(const Prediction& value) { m_pageTypeHasBeenSet = true; m_pageType.push_back(value); return *this; }

    /**
     * <p>The class, or document type, assigned to a detected Page object. The class,
     * or document type, assigned to a detected Page object.</p>
     */
    inline PageClassification& AddPageType(Prediction&& value) { m_pageTypeHasBeenSet = true; m_pageType.push_back(std::move(value)); return *this; }


    /**
     * <p> The page number the value was detected on, relative to Amazon Textract's
     * starting position.</p>
     */
    inline const Aws::Vector<Prediction>& GetPageNumber() const{ return m_pageNumber; }

    /**
     * <p> The page number the value was detected on, relative to Amazon Textract's
     * starting position.</p>
     */
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }

    /**
     * <p> The page number the value was detected on, relative to Amazon Textract's
     * starting position.</p>
     */
    inline void SetPageNumber(const Aws::Vector<Prediction>& value) { m_pageNumberHasBeenSet = true; m_pageNumber = value; }

    /**
     * <p> The page number the value was detected on, relative to Amazon Textract's
     * starting position.</p>
     */
    inline void SetPageNumber(Aws::Vector<Prediction>&& value) { m_pageNumberHasBeenSet = true; m_pageNumber = std::move(value); }

    /**
     * <p> The page number the value was detected on, relative to Amazon Textract's
     * starting position.</p>
     */
    inline PageClassification& WithPageNumber(const Aws::Vector<Prediction>& value) { SetPageNumber(value); return *this;}

    /**
     * <p> The page number the value was detected on, relative to Amazon Textract's
     * starting position.</p>
     */
    inline PageClassification& WithPageNumber(Aws::Vector<Prediction>&& value) { SetPageNumber(std::move(value)); return *this;}

    /**
     * <p> The page number the value was detected on, relative to Amazon Textract's
     * starting position.</p>
     */
    inline PageClassification& AddPageNumber(const Prediction& value) { m_pageNumberHasBeenSet = true; m_pageNumber.push_back(value); return *this; }

    /**
     * <p> The page number the value was detected on, relative to Amazon Textract's
     * starting position.</p>
     */
    inline PageClassification& AddPageNumber(Prediction&& value) { m_pageNumberHasBeenSet = true; m_pageNumber.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Prediction> m_pageType;
    bool m_pageTypeHasBeenSet = false;

    Aws::Vector<Prediction> m_pageNumber;
    bool m_pageNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
