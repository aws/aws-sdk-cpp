/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/GeospatialColorState.h>
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
   * <p>The definition for a solid color.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialSolidColor">AWS
   * API Reference</a></p>
   */
  class GeospatialSolidColor
  {
  public:
    AWS_QUICKSIGHT_API GeospatialSolidColor();
    AWS_QUICKSIGHT_API GeospatialSolidColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialSolidColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The color and opacity values for the color.</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    inline void SetColor(const Aws::String& value) { m_colorHasBeenSet = true; m_color = value; }
    inline void SetColor(Aws::String&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }
    inline void SetColor(const char* value) { m_colorHasBeenSet = true; m_color.assign(value); }
    inline GeospatialSolidColor& WithColor(const Aws::String& value) { SetColor(value); return *this;}
    inline GeospatialSolidColor& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}
    inline GeospatialSolidColor& WithColor(const char* value) { SetColor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables and disables the view state of the color.</p>
     */
    inline const GeospatialColorState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const GeospatialColorState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(GeospatialColorState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline GeospatialSolidColor& WithState(const GeospatialColorState& value) { SetState(value); return *this;}
    inline GeospatialSolidColor& WithState(GeospatialColorState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_color;
    bool m_colorHasBeenSet = false;

    GeospatialColorState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
