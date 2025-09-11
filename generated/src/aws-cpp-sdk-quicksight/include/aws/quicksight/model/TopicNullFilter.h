/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NullFilterType.h>
#include <aws/quicksight/model/TopicSingularFilterConstant.h>
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
   * <p>The structure that represents a null filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicNullFilter">AWS
   * API Reference</a></p>
   */
  class TopicNullFilter
  {
  public:
    AWS_QUICKSIGHT_API TopicNullFilter() = default;
    AWS_QUICKSIGHT_API TopicNullFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicNullFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the null filter. Valid values for this type are
     * <code>NULLS_ONLY</code>, <code>NON_NULLS_ONLY</code>, and
     * <code>ALL_VALUES</code>.</p>
     */
    inline NullFilterType GetNullFilterType() const { return m_nullFilterType; }
    inline bool NullFilterTypeHasBeenSet() const { return m_nullFilterTypeHasBeenSet; }
    inline void SetNullFilterType(NullFilterType value) { m_nullFilterTypeHasBeenSet = true; m_nullFilterType = value; }
    inline TopicNullFilter& WithNullFilterType(NullFilterType value) { SetNullFilterType(value); return *this;}
    ///@}

    ///@{
    
    inline const TopicSingularFilterConstant& GetConstant() const { return m_constant; }
    inline bool ConstantHasBeenSet() const { return m_constantHasBeenSet; }
    template<typename ConstantT = TopicSingularFilterConstant>
    void SetConstant(ConstantT&& value) { m_constantHasBeenSet = true; m_constant = std::forward<ConstantT>(value); }
    template<typename ConstantT = TopicSingularFilterConstant>
    TopicNullFilter& WithConstant(ConstantT&& value) { SetConstant(std::forward<ConstantT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates if the filter is inverse.</p>
     */
    inline bool GetInverse() const { return m_inverse; }
    inline bool InverseHasBeenSet() const { return m_inverseHasBeenSet; }
    inline void SetInverse(bool value) { m_inverseHasBeenSet = true; m_inverse = value; }
    inline TopicNullFilter& WithInverse(bool value) { SetInverse(value); return *this;}
    ///@}
  private:

    NullFilterType m_nullFilterType{NullFilterType::NOT_SET};
    bool m_nullFilterTypeHasBeenSet = false;

    TopicSingularFilterConstant m_constant;
    bool m_constantHasBeenSet = false;

    bool m_inverse{false};
    bool m_inverseHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
