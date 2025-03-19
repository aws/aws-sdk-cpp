/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/PageClassification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/Extraction.h>
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
   * <p>Contains the detections for each page analyzed through the Analyze Lending
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/LendingResult">AWS
   * API Reference</a></p>
   */
  class LendingResult
  {
  public:
    AWS_TEXTRACT_API LendingResult() = default;
    AWS_TEXTRACT_API LendingResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API LendingResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The page number for a page, with regard to whole submission.</p>
     */
    inline int GetPage() const { return m_page; }
    inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }
    inline void SetPage(int value) { m_pageHasBeenSet = true; m_page = value; }
    inline LendingResult& WithPage(int value) { SetPage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The classifier result for a given page.</p>
     */
    inline const PageClassification& GetPageClassification() const { return m_pageClassification; }
    inline bool PageClassificationHasBeenSet() const { return m_pageClassificationHasBeenSet; }
    template<typename PageClassificationT = PageClassification>
    void SetPageClassification(PageClassificationT&& value) { m_pageClassificationHasBeenSet = true; m_pageClassification = std::forward<PageClassificationT>(value); }
    template<typename PageClassificationT = PageClassification>
    LendingResult& WithPageClassification(PageClassificationT&& value) { SetPageClassification(std::forward<PageClassificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Extraction to hold structured data. e.g. normalized key value
     * pairs instead of raw OCR detections .</p>
     */
    inline const Aws::Vector<Extraction>& GetExtractions() const { return m_extractions; }
    inline bool ExtractionsHasBeenSet() const { return m_extractionsHasBeenSet; }
    template<typename ExtractionsT = Aws::Vector<Extraction>>
    void SetExtractions(ExtractionsT&& value) { m_extractionsHasBeenSet = true; m_extractions = std::forward<ExtractionsT>(value); }
    template<typename ExtractionsT = Aws::Vector<Extraction>>
    LendingResult& WithExtractions(ExtractionsT&& value) { SetExtractions(std::forward<ExtractionsT>(value)); return *this;}
    template<typename ExtractionsT = Extraction>
    LendingResult& AddExtractions(ExtractionsT&& value) { m_extractionsHasBeenSet = true; m_extractions.emplace_back(std::forward<ExtractionsT>(value)); return *this; }
    ///@}
  private:

    int m_page{0};
    bool m_pageHasBeenSet = false;

    PageClassification m_pageClassification;
    bool m_pageClassificationHasBeenSet = false;

    Aws::Vector<Extraction> m_extractions;
    bool m_extractionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
