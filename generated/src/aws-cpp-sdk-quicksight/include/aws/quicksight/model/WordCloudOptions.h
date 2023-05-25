/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/WordCloudWordOrientation.h>
#include <aws/quicksight/model/WordCloudWordScaling.h>
#include <aws/quicksight/model/WordCloudCloudLayout.h>
#include <aws/quicksight/model/WordCloudWordCasing.h>
#include <aws/quicksight/model/WordCloudWordPadding.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The word cloud options for a word cloud visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WordCloudOptions">AWS
   * API Reference</a></p>
   */
  class WordCloudOptions
  {
  public:
    AWS_QUICKSIGHT_API WordCloudOptions();
    AWS_QUICKSIGHT_API WordCloudOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WordCloudOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The word orientation options (horizontal, horizontal_and_vertical) for the
     * words in a word cloud.</p>
     */
    inline const WordCloudWordOrientation& GetWordOrientation() const{ return m_wordOrientation; }

    /**
     * <p>The word orientation options (horizontal, horizontal_and_vertical) for the
     * words in a word cloud.</p>
     */
    inline bool WordOrientationHasBeenSet() const { return m_wordOrientationHasBeenSet; }

    /**
     * <p>The word orientation options (horizontal, horizontal_and_vertical) for the
     * words in a word cloud.</p>
     */
    inline void SetWordOrientation(const WordCloudWordOrientation& value) { m_wordOrientationHasBeenSet = true; m_wordOrientation = value; }

    /**
     * <p>The word orientation options (horizontal, horizontal_and_vertical) for the
     * words in a word cloud.</p>
     */
    inline void SetWordOrientation(WordCloudWordOrientation&& value) { m_wordOrientationHasBeenSet = true; m_wordOrientation = std::move(value); }

    /**
     * <p>The word orientation options (horizontal, horizontal_and_vertical) for the
     * words in a word cloud.</p>
     */
    inline WordCloudOptions& WithWordOrientation(const WordCloudWordOrientation& value) { SetWordOrientation(value); return *this;}

    /**
     * <p>The word orientation options (horizontal, horizontal_and_vertical) for the
     * words in a word cloud.</p>
     */
    inline WordCloudOptions& WithWordOrientation(WordCloudWordOrientation&& value) { SetWordOrientation(std::move(value)); return *this;}


    /**
     * <p>The word scaling options (emphasize, normal) for the words in a word
     * cloud.</p>
     */
    inline const WordCloudWordScaling& GetWordScaling() const{ return m_wordScaling; }

    /**
     * <p>The word scaling options (emphasize, normal) for the words in a word
     * cloud.</p>
     */
    inline bool WordScalingHasBeenSet() const { return m_wordScalingHasBeenSet; }

    /**
     * <p>The word scaling options (emphasize, normal) for the words in a word
     * cloud.</p>
     */
    inline void SetWordScaling(const WordCloudWordScaling& value) { m_wordScalingHasBeenSet = true; m_wordScaling = value; }

    /**
     * <p>The word scaling options (emphasize, normal) for the words in a word
     * cloud.</p>
     */
    inline void SetWordScaling(WordCloudWordScaling&& value) { m_wordScalingHasBeenSet = true; m_wordScaling = std::move(value); }

    /**
     * <p>The word scaling options (emphasize, normal) for the words in a word
     * cloud.</p>
     */
    inline WordCloudOptions& WithWordScaling(const WordCloudWordScaling& value) { SetWordScaling(value); return *this;}

    /**
     * <p>The word scaling options (emphasize, normal) for the words in a word
     * cloud.</p>
     */
    inline WordCloudOptions& WithWordScaling(WordCloudWordScaling&& value) { SetWordScaling(std::move(value)); return *this;}


    /**
     * <p>The cloud layout options (fluid, normal) of a word cloud.</p>
     */
    inline const WordCloudCloudLayout& GetCloudLayout() const{ return m_cloudLayout; }

    /**
     * <p>The cloud layout options (fluid, normal) of a word cloud.</p>
     */
    inline bool CloudLayoutHasBeenSet() const { return m_cloudLayoutHasBeenSet; }

    /**
     * <p>The cloud layout options (fluid, normal) of a word cloud.</p>
     */
    inline void SetCloudLayout(const WordCloudCloudLayout& value) { m_cloudLayoutHasBeenSet = true; m_cloudLayout = value; }

    /**
     * <p>The cloud layout options (fluid, normal) of a word cloud.</p>
     */
    inline void SetCloudLayout(WordCloudCloudLayout&& value) { m_cloudLayoutHasBeenSet = true; m_cloudLayout = std::move(value); }

    /**
     * <p>The cloud layout options (fluid, normal) of a word cloud.</p>
     */
    inline WordCloudOptions& WithCloudLayout(const WordCloudCloudLayout& value) { SetCloudLayout(value); return *this;}

    /**
     * <p>The cloud layout options (fluid, normal) of a word cloud.</p>
     */
    inline WordCloudOptions& WithCloudLayout(WordCloudCloudLayout&& value) { SetCloudLayout(std::move(value)); return *this;}


    /**
     * <p>The word casing options (lower_case, existing_case) for the words in a word
     * cloud.</p>
     */
    inline const WordCloudWordCasing& GetWordCasing() const{ return m_wordCasing; }

    /**
     * <p>The word casing options (lower_case, existing_case) for the words in a word
     * cloud.</p>
     */
    inline bool WordCasingHasBeenSet() const { return m_wordCasingHasBeenSet; }

    /**
     * <p>The word casing options (lower_case, existing_case) for the words in a word
     * cloud.</p>
     */
    inline void SetWordCasing(const WordCloudWordCasing& value) { m_wordCasingHasBeenSet = true; m_wordCasing = value; }

    /**
     * <p>The word casing options (lower_case, existing_case) for the words in a word
     * cloud.</p>
     */
    inline void SetWordCasing(WordCloudWordCasing&& value) { m_wordCasingHasBeenSet = true; m_wordCasing = std::move(value); }

    /**
     * <p>The word casing options (lower_case, existing_case) for the words in a word
     * cloud.</p>
     */
    inline WordCloudOptions& WithWordCasing(const WordCloudWordCasing& value) { SetWordCasing(value); return *this;}

    /**
     * <p>The word casing options (lower_case, existing_case) for the words in a word
     * cloud.</p>
     */
    inline WordCloudOptions& WithWordCasing(WordCloudWordCasing&& value) { SetWordCasing(std::move(value)); return *this;}


    /**
     * <p>The word padding options (none, small, medium, large) for the words in a word
     * cloud.</p>
     */
    inline const WordCloudWordPadding& GetWordPadding() const{ return m_wordPadding; }

    /**
     * <p>The word padding options (none, small, medium, large) for the words in a word
     * cloud.</p>
     */
    inline bool WordPaddingHasBeenSet() const { return m_wordPaddingHasBeenSet; }

    /**
     * <p>The word padding options (none, small, medium, large) for the words in a word
     * cloud.</p>
     */
    inline void SetWordPadding(const WordCloudWordPadding& value) { m_wordPaddingHasBeenSet = true; m_wordPadding = value; }

    /**
     * <p>The word padding options (none, small, medium, large) for the words in a word
     * cloud.</p>
     */
    inline void SetWordPadding(WordCloudWordPadding&& value) { m_wordPaddingHasBeenSet = true; m_wordPadding = std::move(value); }

    /**
     * <p>The word padding options (none, small, medium, large) for the words in a word
     * cloud.</p>
     */
    inline WordCloudOptions& WithWordPadding(const WordCloudWordPadding& value) { SetWordPadding(value); return *this;}

    /**
     * <p>The word padding options (none, small, medium, large) for the words in a word
     * cloud.</p>
     */
    inline WordCloudOptions& WithWordPadding(WordCloudWordPadding&& value) { SetWordPadding(std::move(value)); return *this;}


    /**
     * <p>The length limit of each word from 1-100.</p>
     */
    inline int GetMaximumStringLength() const{ return m_maximumStringLength; }

    /**
     * <p>The length limit of each word from 1-100.</p>
     */
    inline bool MaximumStringLengthHasBeenSet() const { return m_maximumStringLengthHasBeenSet; }

    /**
     * <p>The length limit of each word from 1-100.</p>
     */
    inline void SetMaximumStringLength(int value) { m_maximumStringLengthHasBeenSet = true; m_maximumStringLength = value; }

    /**
     * <p>The length limit of each word from 1-100.</p>
     */
    inline WordCloudOptions& WithMaximumStringLength(int value) { SetMaximumStringLength(value); return *this;}

  private:

    WordCloudWordOrientation m_wordOrientation;
    bool m_wordOrientationHasBeenSet = false;

    WordCloudWordScaling m_wordScaling;
    bool m_wordScalingHasBeenSet = false;

    WordCloudCloudLayout m_cloudLayout;
    bool m_cloudLayoutHasBeenSet = false;

    WordCloudWordCasing m_wordCasing;
    bool m_wordCasingHasBeenSet = false;

    WordCloudWordPadding m_wordPadding;
    bool m_wordPaddingHasBeenSet = false;

    int m_maximumStringLength;
    bool m_maximumStringLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
