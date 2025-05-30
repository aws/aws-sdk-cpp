﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
namespace MediaConvert
{
namespace Model
{

  /**
   * Use Rectangle to identify a specific area of the video frame.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Rectangle">AWS
   * API Reference</a></p>
   */
  class Rectangle
  {
  public:
    AWS_MEDIACONVERT_API Rectangle() = default;
    AWS_MEDIACONVERT_API Rectangle(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Rectangle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Height of rectangle in pixels. Specify only even numbers.
     */
    inline int GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline Rectangle& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * Width of rectangle in pixels. Specify only even numbers.
     */
    inline int GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline Rectangle& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * The distance, in pixels, between the rectangle and the left edge of the video
     * frame. Specify only even numbers.
     */
    inline int GetX() const { return m_x; }
    inline bool XHasBeenSet() const { return m_xHasBeenSet; }
    inline void SetX(int value) { m_xHasBeenSet = true; m_x = value; }
    inline Rectangle& WithX(int value) { SetX(value); return *this;}
    ///@}

    ///@{
    /**
     * The distance, in pixels, between the rectangle and the top edge of the video
     * frame. Specify only even numbers.
     */
    inline int GetY() const { return m_y; }
    inline bool YHasBeenSet() const { return m_yHasBeenSet; }
    inline void SetY(int value) { m_yHasBeenSet = true; m_y = value; }
    inline Rectangle& WithY(int value) { SetY(value); return *this;}
    ///@}
  private:

    int m_height{0};
    bool m_heightHasBeenSet = false;

    int m_width{0};
    bool m_widthHasBeenSet = false;

    int m_x{0};
    bool m_xHasBeenSet = false;

    int m_y{0};
    bool m_yHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
