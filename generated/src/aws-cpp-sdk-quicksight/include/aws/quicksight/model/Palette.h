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
    AWS_QUICKSIGHT_API Palette();
    AWS_QUICKSIGHT_API Palette(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Palette& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The foreground color.</p>
     */
    inline const Aws::String& GetForeground() const{ return m_foreground; }
    inline bool ForegroundHasBeenSet() const { return m_foregroundHasBeenSet; }
    inline void SetForeground(const Aws::String& value) { m_foregroundHasBeenSet = true; m_foreground = value; }
    inline void SetForeground(Aws::String&& value) { m_foregroundHasBeenSet = true; m_foreground = std::move(value); }
    inline void SetForeground(const char* value) { m_foregroundHasBeenSet = true; m_foreground.assign(value); }
    inline Palette& WithForeground(const Aws::String& value) { SetForeground(value); return *this;}
    inline Palette& WithForeground(Aws::String&& value) { SetForeground(std::move(value)); return *this;}
    inline Palette& WithForeground(const char* value) { SetForeground(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The background color.</p>
     */
    inline const Aws::String& GetBackground() const{ return m_background; }
    inline bool BackgroundHasBeenSet() const { return m_backgroundHasBeenSet; }
    inline void SetBackground(const Aws::String& value) { m_backgroundHasBeenSet = true; m_background = value; }
    inline void SetBackground(Aws::String&& value) { m_backgroundHasBeenSet = true; m_background = std::move(value); }
    inline void SetBackground(const char* value) { m_backgroundHasBeenSet = true; m_background.assign(value); }
    inline Palette& WithBackground(const Aws::String& value) { SetBackground(value); return *this;}
    inline Palette& WithBackground(Aws::String&& value) { SetBackground(std::move(value)); return *this;}
    inline Palette& WithBackground(const char* value) { SetBackground(value); return *this;}
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
