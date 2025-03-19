/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>The training data configuration to use when creating a domain recommender or
   * custom solution version (trained model).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/TrainingDataConfig">AWS
   * API Reference</a></p>
   */
  class TrainingDataConfig
  {
  public:
    AWS_PERSONALIZE_API TrainingDataConfig() = default;
    AWS_PERSONALIZE_API TrainingDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API TrainingDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the columns to exclude from training. Each key is a dataset type,
     * and each value is a list of columns. Exclude columns to control what data Amazon
     * Personalize uses to generate recommendations.</p> <p> For example, you might
     * have a column that you want to use only to filter recommendations. You can
     * exclude this column from training and Amazon Personalize considers it only when
     * filtering. </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetExcludedDatasetColumns() const { return m_excludedDatasetColumns; }
    inline bool ExcludedDatasetColumnsHasBeenSet() const { return m_excludedDatasetColumnsHasBeenSet; }
    template<typename ExcludedDatasetColumnsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetExcludedDatasetColumns(ExcludedDatasetColumnsT&& value) { m_excludedDatasetColumnsHasBeenSet = true; m_excludedDatasetColumns = std::forward<ExcludedDatasetColumnsT>(value); }
    template<typename ExcludedDatasetColumnsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    TrainingDataConfig& WithExcludedDatasetColumns(ExcludedDatasetColumnsT&& value) { SetExcludedDatasetColumns(std::forward<ExcludedDatasetColumnsT>(value)); return *this;}
    template<typename ExcludedDatasetColumnsKeyT = Aws::String, typename ExcludedDatasetColumnsValueT = Aws::Vector<Aws::String>>
    TrainingDataConfig& AddExcludedDatasetColumns(ExcludedDatasetColumnsKeyT&& key, ExcludedDatasetColumnsValueT&& value) {
      m_excludedDatasetColumnsHasBeenSet = true; m_excludedDatasetColumns.emplace(std::forward<ExcludedDatasetColumnsKeyT>(key), std::forward<ExcludedDatasetColumnsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_excludedDatasetColumns;
    bool m_excludedDatasetColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
