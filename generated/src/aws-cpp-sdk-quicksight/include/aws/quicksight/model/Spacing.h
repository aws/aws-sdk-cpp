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
   * <p>The configuration of spacing (often a margin or padding).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Spacing">AWS
   * API Reference</a></p>
   */
  class Spacing
  {
  public:
    AWS_QUICKSIGHT_API Spacing() = default;
    AWS_QUICKSIGHT_API Spacing(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Spacing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Define the top spacing.</p>
     */
    inline const Aws::String& GetTop() const { return m_top; }
    inline bool TopHasBeenSet() const { return m_topHasBeenSet; }
    template<typename TopT = Aws::String>
    void SetTop(TopT&& value) { m_topHasBeenSet = true; m_top = std::forward<TopT>(value); }
    template<typename TopT = Aws::String>
    Spacing& WithTop(TopT&& value) { SetTop(std::forward<TopT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Define the bottom spacing.</p>
     */
    inline const Aws::String& GetBottom() const { return m_bottom; }
    inline bool BottomHasBeenSet() const { return m_bottomHasBeenSet; }
    template<typename BottomT = Aws::String>
    void SetBottom(BottomT&& value) { m_bottomHasBeenSet = true; m_bottom = std::forward<BottomT>(value); }
    template<typename BottomT = Aws::String>
    Spacing& WithBottom(BottomT&& value) { SetBottom(std::forward<BottomT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Define the left spacing.</p>
     */
    inline const Aws::String& GetLeft() const { return m_left; }
    inline bool LeftHasBeenSet() const { return m_leftHasBeenSet; }
    template<typename LeftT = Aws::String>
    void SetLeft(LeftT&& value) { m_leftHasBeenSet = true; m_left = std::forward<LeftT>(value); }
    template<typename LeftT = Aws::String>
    Spacing& WithLeft(LeftT&& value) { SetLeft(std::forward<LeftT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Define the right spacing.</p>
     */
    inline const Aws::String& GetRight() const { return m_right; }
    inline bool RightHasBeenSet() const { return m_rightHasBeenSet; }
    template<typename RightT = Aws::String>
    void SetRight(RightT&& value) { m_rightHasBeenSet = true; m_right = std::forward<RightT>(value); }
    template<typename RightT = Aws::String>
    Spacing& WithRight(RightT&& value) { SetRight(std::forward<RightT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_top;
    bool m_topHasBeenSet = false;

    Aws::String m_bottom;
    bool m_bottomHasBeenSet = false;

    Aws::String m_left;
    bool m_leftHasBeenSet = false;

    Aws::String m_right;
    bool m_rightHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
