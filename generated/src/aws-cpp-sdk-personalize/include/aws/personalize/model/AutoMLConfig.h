/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
   * <p>When the solution performs AutoML (<code>performAutoML</code> is true in <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSolution.html">CreateSolution</a>),
   * Amazon Personalize determines which recipe, from the specified list, optimizes
   * the given metric. Amazon Personalize then uses that recipe for the
   * solution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/AutoMLConfig">AWS
   * API Reference</a></p>
   */
  class AutoMLConfig
  {
  public:
    AWS_PERSONALIZE_API AutoMLConfig() = default;
    AWS_PERSONALIZE_API AutoMLConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API AutoMLConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric to optimize.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    AutoMLConfig& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of candidate recipes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecipeList() const { return m_recipeList; }
    inline bool RecipeListHasBeenSet() const { return m_recipeListHasBeenSet; }
    template<typename RecipeListT = Aws::Vector<Aws::String>>
    void SetRecipeList(RecipeListT&& value) { m_recipeListHasBeenSet = true; m_recipeList = std::forward<RecipeListT>(value); }
    template<typename RecipeListT = Aws::Vector<Aws::String>>
    AutoMLConfig& WithRecipeList(RecipeListT&& value) { SetRecipeList(std::forward<RecipeListT>(value)); return *this;}
    template<typename RecipeListT = Aws::String>
    AutoMLConfig& AddRecipeList(RecipeListT&& value) { m_recipeListHasBeenSet = true; m_recipeList.emplace_back(std::forward<RecipeListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_recipeList;
    bool m_recipeListHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
