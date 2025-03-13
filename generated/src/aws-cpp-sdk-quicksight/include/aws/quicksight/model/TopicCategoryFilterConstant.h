/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ConstantType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/CollectiveConstant.h>
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
   * <p>A constant used in a category filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicCategoryFilterConstant">AWS
   * API Reference</a></p>
   */
  class TopicCategoryFilterConstant
  {
  public:
    AWS_QUICKSIGHT_API TopicCategoryFilterConstant() = default;
    AWS_QUICKSIGHT_API TopicCategoryFilterConstant(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicCategoryFilterConstant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of category filter constant. This element is used to specify whether
     * a constant is a singular or collective. Valid values are <code>SINGULAR</code>
     * and <code>COLLECTIVE</code>.</p>
     */
    inline ConstantType GetConstantType() const { return m_constantType; }
    inline bool ConstantTypeHasBeenSet() const { return m_constantTypeHasBeenSet; }
    inline void SetConstantType(ConstantType value) { m_constantTypeHasBeenSet = true; m_constantType = value; }
    inline TopicCategoryFilterConstant& WithConstantType(ConstantType value) { SetConstantType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A singular constant used in a category filter. This element is used to
     * specify a single value for the constant.</p>
     */
    inline const Aws::String& GetSingularConstant() const { return m_singularConstant; }
    inline bool SingularConstantHasBeenSet() const { return m_singularConstantHasBeenSet; }
    template<typename SingularConstantT = Aws::String>
    void SetSingularConstant(SingularConstantT&& value) { m_singularConstantHasBeenSet = true; m_singularConstant = std::forward<SingularConstantT>(value); }
    template<typename SingularConstantT = Aws::String>
    TopicCategoryFilterConstant& WithSingularConstant(SingularConstantT&& value) { SetSingularConstant(std::forward<SingularConstantT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collective constant used in a category filter. This element is used to
     * specify a list of values for the constant.</p>
     */
    inline const CollectiveConstant& GetCollectiveConstant() const { return m_collectiveConstant; }
    inline bool CollectiveConstantHasBeenSet() const { return m_collectiveConstantHasBeenSet; }
    template<typename CollectiveConstantT = CollectiveConstant>
    void SetCollectiveConstant(CollectiveConstantT&& value) { m_collectiveConstantHasBeenSet = true; m_collectiveConstant = std::forward<CollectiveConstantT>(value); }
    template<typename CollectiveConstantT = CollectiveConstant>
    TopicCategoryFilterConstant& WithCollectiveConstant(CollectiveConstantT&& value) { SetCollectiveConstant(std::forward<CollectiveConstantT>(value)); return *this;}
    ///@}
  private:

    ConstantType m_constantType{ConstantType::NOT_SET};
    bool m_constantTypeHasBeenSet = false;

    Aws::String m_singularConstant;
    bool m_singularConstantHasBeenSet = false;

    CollectiveConstant m_collectiveConstant;
    bool m_collectiveConstantHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
