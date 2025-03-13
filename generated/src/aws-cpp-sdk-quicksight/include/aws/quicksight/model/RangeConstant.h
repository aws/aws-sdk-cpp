/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
   * <p>A structure that represents a range constant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RangeConstant">AWS
   * API Reference</a></p>
   */
  class RangeConstant
  {
  public:
    AWS_QUICKSIGHT_API RangeConstant() = default;
    AWS_QUICKSIGHT_API RangeConstant(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RangeConstant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum value for a range constant.</p>
     */
    inline const Aws::String& GetMinimum() const { return m_minimum; }
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }
    template<typename MinimumT = Aws::String>
    void SetMinimum(MinimumT&& value) { m_minimumHasBeenSet = true; m_minimum = std::forward<MinimumT>(value); }
    template<typename MinimumT = Aws::String>
    RangeConstant& WithMinimum(MinimumT&& value) { SetMinimum(std::forward<MinimumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value for a range constant.</p>
     */
    inline const Aws::String& GetMaximum() const { return m_maximum; }
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }
    template<typename MaximumT = Aws::String>
    void SetMaximum(MaximumT&& value) { m_maximumHasBeenSet = true; m_maximum = std::forward<MaximumT>(value); }
    template<typename MaximumT = Aws::String>
    RangeConstant& WithMaximum(MaximumT&& value) { SetMaximum(std::forward<MaximumT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_minimum;
    bool m_minimumHasBeenSet = false;

    Aws::String m_maximum;
    bool m_maximumHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
