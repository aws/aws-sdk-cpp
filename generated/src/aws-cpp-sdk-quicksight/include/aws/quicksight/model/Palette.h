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
   * <p>The color palette.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Palette">AWS
   * API Reference</a></p>
   */
  class Palette
  {
  public:
    AWS_QUICKSIGHT_API Palette() = default;
    AWS_QUICKSIGHT_API Palette(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Palette& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The foreground color.</p>
     */
    inline const Aws::String& GetForeground() const { return m_foreground; }
    inline bool ForegroundHasBeenSet() const { return m_foregroundHasBeenSet; }
    template<typename ForegroundT = Aws::String>
    void SetForeground(ForegroundT&& value) { m_foregroundHasBeenSet = true; m_foreground = std::forward<ForegroundT>(value); }
    template<typename ForegroundT = Aws::String>
    Palette& WithForeground(ForegroundT&& value) { SetForeground(std::forward<ForegroundT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The background color.</p>
     */
    inline const Aws::String& GetBackground() const { return m_background; }
    inline bool BackgroundHasBeenSet() const { return m_backgroundHasBeenSet; }
    template<typename BackgroundT = Aws::String>
    void SetBackground(BackgroundT&& value) { m_backgroundHasBeenSet = true; m_background = std::forward<BackgroundT>(value); }
    template<typename BackgroundT = Aws::String>
    Palette& WithBackground(BackgroundT&& value) { SetBackground(std::forward<BackgroundT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_foreground;
    bool m_foregroundHasBeenSet = false;

    Aws::String m_background;
    bool m_backgroundHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
