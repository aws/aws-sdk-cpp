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
    AWS_PERSONALIZE_API TrainingDataConfig();
    AWS_PERSONALIZE_API TrainingDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API TrainingDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the columns to exclude from training. Each key is a dataset type,
     * and each value is a list of columns. Exclude columns to control what data Amazon
     * Personalize uses to generate recommendations. For example, you might have a
     * column that you want to use only to filter recommendations. You can exclude this
     * column from training and Amazon Personalize considers it only when filtering.
     * </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetExcludedDatasetColumns() const{ return m_excludedDatasetColumns; }

    /**
     * <p>Specifies the columns to exclude from training. Each key is a dataset type,
     * and each value is a list of columns. Exclude columns to control what data Amazon
     * Personalize uses to generate recommendations. For example, you might have a
     * column that you want to use only to filter recommendations. You can exclude this
     * column from training and Amazon Personalize considers it only when filtering.
     * </p>
     */
    inline bool ExcludedDatasetColumnsHasBeenSet() const { return m_excludedDatasetColumnsHasBeenSet; }

    /**
     * <p>Specifies the columns to exclude from training. Each key is a dataset type,
     * and each value is a list of columns. Exclude columns to control what data Amazon
     * Personalize uses to generate recommendations. For example, you might have a
     * column that you want to use only to filter recommendations. You can exclude this
     * column from training and Amazon Personalize considers it only when filtering.
     * </p>
     */
    inline void SetExcludedDatasetColumns(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_excludedDatasetColumnsHasBeenSet = true; m_excludedDatasetColumns = value; }

    /**
     * <p>Specifies the columns to exclude from training. Each key is a dataset type,
     * and each value is a list of columns. Exclude columns to control what data Amazon
     * Personalize uses to generate recommendations. For example, you might have a
     * column that you want to use only to filter recommendations. You can exclude this
     * column from training and Amazon Personalize considers it only when filtering.
     * </p>
     */
    inline void SetExcludedDatasetColumns(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_excludedDatasetColumnsHasBeenSet = true; m_excludedDatasetColumns = std::move(value); }

    /**
     * <p>Specifies the columns to exclude from training. Each key is a dataset type,
     * and each value is a list of columns. Exclude columns to control what data Amazon
     * Personalize uses to generate recommendations. For example, you might have a
     * column that you want to use only to filter recommendations. You can exclude this
     * column from training and Amazon Personalize considers it only when filtering.
     * </p>
     */
    inline TrainingDataConfig& WithExcludedDatasetColumns(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetExcludedDatasetColumns(value); return *this;}

    /**
     * <p>Specifies the columns to exclude from training. Each key is a dataset type,
     * and each value is a list of columns. Exclude columns to control what data Amazon
     * Personalize uses to generate recommendations. For example, you might have a
     * column that you want to use only to filter recommendations. You can exclude this
     * column from training and Amazon Personalize considers it only when filtering.
     * </p>
     */
    inline TrainingDataConfig& WithExcludedDatasetColumns(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetExcludedDatasetColumns(std::move(value)); return *this;}

    /**
     * <p>Specifies the columns to exclude from training. Each key is a dataset type,
     * and each value is a list of columns. Exclude columns to control what data Amazon
     * Personalize uses to generate recommendations. For example, you might have a
     * column that you want to use only to filter recommendations. You can exclude this
     * column from training and Amazon Personalize considers it only when filtering.
     * </p>
     */
    inline TrainingDataConfig& AddExcludedDatasetColumns(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_excludedDatasetColumnsHasBeenSet = true; m_excludedDatasetColumns.emplace(key, value); return *this; }

    /**
     * <p>Specifies the columns to exclude from training. Each key is a dataset type,
     * and each value is a list of columns. Exclude columns to control what data Amazon
     * Personalize uses to generate recommendations. For example, you might have a
     * column that you want to use only to filter recommendations. You can exclude this
     * column from training and Amazon Personalize considers it only when filtering.
     * </p>
     */
    inline TrainingDataConfig& AddExcludedDatasetColumns(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_excludedDatasetColumnsHasBeenSet = true; m_excludedDatasetColumns.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the columns to exclude from training. Each key is a dataset type,
     * and each value is a list of columns. Exclude columns to control what data Amazon
     * Personalize uses to generate recommendations. For example, you might have a
     * column that you want to use only to filter recommendations. You can exclude this
     * column from training and Amazon Personalize considers it only when filtering.
     * </p>
     */
    inline TrainingDataConfig& AddExcludedDatasetColumns(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_excludedDatasetColumnsHasBeenSet = true; m_excludedDatasetColumns.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the columns to exclude from training. Each key is a dataset type,
     * and each value is a list of columns. Exclude columns to control what data Amazon
     * Personalize uses to generate recommendations. For example, you might have a
     * column that you want to use only to filter recommendations. You can exclude this
     * column from training and Amazon Personalize considers it only when filtering.
     * </p>
     */
    inline TrainingDataConfig& AddExcludedDatasetColumns(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_excludedDatasetColumnsHasBeenSet = true; m_excludedDatasetColumns.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the columns to exclude from training. Each key is a dataset type,
     * and each value is a list of columns. Exclude columns to control what data Amazon
     * Personalize uses to generate recommendations. For example, you might have a
     * column that you want to use only to filter recommendations. You can exclude this
     * column from training and Amazon Personalize considers it only when filtering.
     * </p>
     */
    inline TrainingDataConfig& AddExcludedDatasetColumns(const char* key, Aws::Vector<Aws::String>&& value) { m_excludedDatasetColumnsHasBeenSet = true; m_excludedDatasetColumns.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the columns to exclude from training. Each key is a dataset type,
     * and each value is a list of columns. Exclude columns to control what data Amazon
     * Personalize uses to generate recommendations. For example, you might have a
     * column that you want to use only to filter recommendations. You can exclude this
     * column from training and Amazon Personalize considers it only when filtering.
     * </p>
     */
    inline TrainingDataConfig& AddExcludedDatasetColumns(const char* key, const Aws::Vector<Aws::String>& value) { m_excludedDatasetColumnsHasBeenSet = true; m_excludedDatasetColumns.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_excludedDatasetColumns;
    bool m_excludedDatasetColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
