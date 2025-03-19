/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ConstantType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A structure that represents a singular filter constant, used in filters to
   * specify a single value to match against.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicSingularFilterConstant">AWS
   * API Reference</a></p>
   */
  class TopicSingularFilterConstant
  {
  public:
    AWS_QUICKSIGHT_API TopicSingularFilterConstant() = default;
    AWS_QUICKSIGHT_API TopicSingularFilterConstant(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicSingularFilterConstant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the singular filter constant. Valid values for this structure are
     * <code>SINGULAR</code>.</p>
     */
    inline ConstantType GetConstantType() const { return m_constantType; }
    inline bool ConstantTypeHasBeenSet() const { return m_constantTypeHasBeenSet; }
    inline void SetConstantType(ConstantType value) { m_constantTypeHasBeenSet = true; m_constantType = value; }
    inline TopicSingularFilterConstant& WithConstantType(ConstantType value) { SetConstantType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the singular filter constant.</p>
     */
    inline const Aws::String& GetSingularConstant() const { return m_singularConstant; }
    inline bool SingularConstantHasBeenSet() const { return m_singularConstantHasBeenSet; }
    template<typename SingularConstantT = Aws::String>
    void SetSingularConstant(SingularConstantT&& value) { m_singularConstantHasBeenSet = true; m_singularConstant = std::forward<SingularConstantT>(value); }
    template<typename SingularConstantT = Aws::String>
    TopicSingularFilterConstant& WithSingularConstant(SingularConstantT&& value) { SetSingularConstant(std::forward<SingularConstantT>(value)); return *this;}
    ///@}
  private:

    ConstantType m_constantType{ConstantType::NOT_SET};
    bool m_constantTypeHasBeenSet = false;

    Aws::String m_singularConstant;
    bool m_singularConstantHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
