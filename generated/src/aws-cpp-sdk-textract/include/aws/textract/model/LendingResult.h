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
    AWS_TEXTRACT_API LendingResult();
    AWS_TEXTRACT_API LendingResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API LendingResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The page number for a page, with regard to whole submission.</p>
     */
    inline int GetPage() const{ return m_page; }

    /**
     * <p>The page number for a page, with regard to whole submission.</p>
     */
    inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }

    /**
     * <p>The page number for a page, with regard to whole submission.</p>
     */
    inline void SetPage(int value) { m_pageHasBeenSet = true; m_page = value; }

    /**
     * <p>The page number for a page, with regard to whole submission.</p>
     */
    inline LendingResult& WithPage(int value) { SetPage(value); return *this;}


    /**
     * <p>The classifier result for a given page.</p>
     */
    inline const PageClassification& GetPageClassification() const{ return m_pageClassification; }

    /**
     * <p>The classifier result for a given page.</p>
     */
    inline bool PageClassificationHasBeenSet() const { return m_pageClassificationHasBeenSet; }

    /**
     * <p>The classifier result for a given page.</p>
     */
    inline void SetPageClassification(const PageClassification& value) { m_pageClassificationHasBeenSet = true; m_pageClassification = value; }

    /**
     * <p>The classifier result for a given page.</p>
     */
    inline void SetPageClassification(PageClassification&& value) { m_pageClassificationHasBeenSet = true; m_pageClassification = std::move(value); }

    /**
     * <p>The classifier result for a given page.</p>
     */
    inline LendingResult& WithPageClassification(const PageClassification& value) { SetPageClassification(value); return *this;}

    /**
     * <p>The classifier result for a given page.</p>
     */
    inline LendingResult& WithPageClassification(PageClassification&& value) { SetPageClassification(std::move(value)); return *this;}


    /**
     * <p>An array of Extraction to hold structured data. e.g. normalized key value
     * pairs instead of raw OCR detections .</p>
     */
    inline const Aws::Vector<Extraction>& GetExtractions() const{ return m_extractions; }

    /**
     * <p>An array of Extraction to hold structured data. e.g. normalized key value
     * pairs instead of raw OCR detections .</p>
     */
    inline bool ExtractionsHasBeenSet() const { return m_extractionsHasBeenSet; }

    /**
     * <p>An array of Extraction to hold structured data. e.g. normalized key value
     * pairs instead of raw OCR detections .</p>
     */
    inline void SetExtractions(const Aws::Vector<Extraction>& value) { m_extractionsHasBeenSet = true; m_extractions = value; }

    /**
     * <p>An array of Extraction to hold structured data. e.g. normalized key value
     * pairs instead of raw OCR detections .</p>
     */
    inline void SetExtractions(Aws::Vector<Extraction>&& value) { m_extractionsHasBeenSet = true; m_extractions = std::move(value); }

    /**
     * <p>An array of Extraction to hold structured data. e.g. normalized key value
     * pairs instead of raw OCR detections .</p>
     */
    inline LendingResult& WithExtractions(const Aws::Vector<Extraction>& value) { SetExtractions(value); return *this;}

    /**
     * <p>An array of Extraction to hold structured data. e.g. normalized key value
     * pairs instead of raw OCR detections .</p>
     */
    inline LendingResult& WithExtractions(Aws::Vector<Extraction>&& value) { SetExtractions(std::move(value)); return *this;}

    /**
     * <p>An array of Extraction to hold structured data. e.g. normalized key value
     * pairs instead of raw OCR detections .</p>
     */
    inline LendingResult& AddExtractions(const Extraction& value) { m_extractionsHasBeenSet = true; m_extractions.push_back(value); return *this; }

    /**
     * <p>An array of Extraction to hold structured data. e.g. normalized key value
     * pairs instead of raw OCR detections .</p>
     */
    inline LendingResult& AddExtractions(Extraction&& value) { m_extractionsHasBeenSet = true; m_extractions.push_back(std::move(value)); return *this; }

  private:

    int m_page;
    bool m_pageHasBeenSet = false;

    PageClassification m_pageClassification;
    bool m_pageClassificationHasBeenSet = false;

    Aws::Vector<Extraction> m_extractions;
    bool m_extractionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
