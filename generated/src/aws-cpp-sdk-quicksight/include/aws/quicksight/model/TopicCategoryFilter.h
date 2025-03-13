/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CategoryFilterFunction.h>
#include <aws/quicksight/model/CategoryFilterType.h>
#include <aws/quicksight/model/TopicCategoryFilterConstant.h>
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
   * <p>A structure that represents a category filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicCategoryFilter">AWS
   * API Reference</a></p>
   */
  class TopicCategoryFilter
  {
  public:
    AWS_QUICKSIGHT_API TopicCategoryFilter() = default;
    AWS_QUICKSIGHT_API TopicCategoryFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicCategoryFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category filter function. Valid values for this structure are
     * <code>EXACT</code> and <code>CONTAINS</code>.</p>
     */
    inline CategoryFilterFunction GetCategoryFilterFunction() const { return m_categoryFilterFunction; }
    inline bool CategoryFilterFunctionHasBeenSet() const { return m_categoryFilterFunctionHasBeenSet; }
    inline void SetCategoryFilterFunction(CategoryFilterFunction value) { m_categoryFilterFunctionHasBeenSet = true; m_categoryFilterFunction = value; }
    inline TopicCategoryFilter& WithCategoryFilterFunction(CategoryFilterFunction value) { SetCategoryFilterFunction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category filter type. This element is used to specify whether a filter is
     * a simple category filter or an inverse category filter.</p>
     */
    inline CategoryFilterType GetCategoryFilterType() const { return m_categoryFilterType; }
    inline bool CategoryFilterTypeHasBeenSet() const { return m_categoryFilterTypeHasBeenSet; }
    inline void SetCategoryFilterType(CategoryFilterType value) { m_categoryFilterTypeHasBeenSet = true; m_categoryFilterType = value; }
    inline TopicCategoryFilter& WithCategoryFilterType(CategoryFilterType value) { SetCategoryFilterType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The constant used in a category filter.</p>
     */
    inline const TopicCategoryFilterConstant& GetConstant() const { return m_constant; }
    inline bool ConstantHasBeenSet() const { return m_constantHasBeenSet; }
    template<typename ConstantT = TopicCategoryFilterConstant>
    void SetConstant(ConstantT&& value) { m_constantHasBeenSet = true; m_constant = std::forward<ConstantT>(value); }
    template<typename ConstantT = TopicCategoryFilterConstant>
    TopicCategoryFilter& WithConstant(ConstantT&& value) { SetConstant(std::forward<ConstantT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates if the filter is inverse.</p>
     */
    inline bool GetInverse() const { return m_inverse; }
    inline bool InverseHasBeenSet() const { return m_inverseHasBeenSet; }
    inline void SetInverse(bool value) { m_inverseHasBeenSet = true; m_inverse = value; }
    inline TopicCategoryFilter& WithInverse(bool value) { SetInverse(value); return *this;}
    ///@}
  private:

    CategoryFilterFunction m_categoryFilterFunction{CategoryFilterFunction::NOT_SET};
    bool m_categoryFilterFunctionHasBeenSet = false;

    CategoryFilterType m_categoryFilterType{CategoryFilterType::NOT_SET};
    bool m_categoryFilterTypeHasBeenSet = false;

    TopicCategoryFilterConstant m_constant;
    bool m_constantHasBeenSet = false;

    bool m_inverse{false};
    bool m_inverseHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
