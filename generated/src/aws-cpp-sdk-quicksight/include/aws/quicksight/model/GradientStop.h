﻿/**
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
   * <p>Determines the gradient stop configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GradientStop">AWS
   * API Reference</a></p>
   */
  class GradientStop
  {
  public:
    AWS_QUICKSIGHT_API GradientStop();
    AWS_QUICKSIGHT_API GradientStop(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GradientStop& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines gradient offset value.</p>
     */
    inline double GetGradientOffset() const{ return m_gradientOffset; }
    inline bool GradientOffsetHasBeenSet() const { return m_gradientOffsetHasBeenSet; }
    inline void SetGradientOffset(double value) { m_gradientOffsetHasBeenSet = true; m_gradientOffset = value; }
    inline GradientStop& WithGradientOffset(double value) { SetGradientOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the data value.</p>
     */
    inline double GetDataValue() const{ return m_dataValue; }
    inline bool DataValueHasBeenSet() const { return m_dataValueHasBeenSet; }
    inline void SetDataValue(double value) { m_dataValueHasBeenSet = true; m_dataValue = value; }
    inline GradientStop& WithDataValue(double value) { SetDataValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the color.</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    inline void SetColor(const Aws::String& value) { m_colorHasBeenSet = true; m_color = value; }
    inline void SetColor(Aws::String&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }
    inline void SetColor(const char* value) { m_colorHasBeenSet = true; m_color.assign(value); }
    inline GradientStop& WithColor(const Aws::String& value) { SetColor(value); return *this;}
    inline GradientStop& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}
    inline GradientStop& WithColor(const char* value) { SetColor(value); return *this;}
    ///@}
  private:

    double m_gradientOffset;
    bool m_gradientOffsetHasBeenSet = false;

    double m_dataValue;
    bool m_dataValueHasBeenSet = false;

    Aws::String m_color;
    bool m_colorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
