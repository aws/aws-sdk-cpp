/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/WordCloudAggregatedFieldWells.h>
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
   * <p>The field wells of a word cloud visual.</p> <p>This is a union type
   * structure. For this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WordCloudFieldWells">AWS
   * API Reference</a></p>
   */
  class WordCloudFieldWells
  {
  public:
    AWS_QUICKSIGHT_API WordCloudFieldWells() = default;
    AWS_QUICKSIGHT_API WordCloudFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WordCloudFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aggregated field wells of a word cloud.</p>
     */
    inline const WordCloudAggregatedFieldWells& GetWordCloudAggregatedFieldWells() const { return m_wordCloudAggregatedFieldWells; }
    inline bool WordCloudAggregatedFieldWellsHasBeenSet() const { return m_wordCloudAggregatedFieldWellsHasBeenSet; }
    template<typename WordCloudAggregatedFieldWellsT = WordCloudAggregatedFieldWells>
    void SetWordCloudAggregatedFieldWells(WordCloudAggregatedFieldWellsT&& value) { m_wordCloudAggregatedFieldWellsHasBeenSet = true; m_wordCloudAggregatedFieldWells = std::forward<WordCloudAggregatedFieldWellsT>(value); }
    template<typename WordCloudAggregatedFieldWellsT = WordCloudAggregatedFieldWells>
    WordCloudFieldWells& WithWordCloudAggregatedFieldWells(WordCloudAggregatedFieldWellsT&& value) { SetWordCloudAggregatedFieldWells(std::forward<WordCloudAggregatedFieldWellsT>(value)); return *this;}
    ///@}
  private:

    WordCloudAggregatedFieldWells m_wordCloudAggregatedFieldWells;
    bool m_wordCloudAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
