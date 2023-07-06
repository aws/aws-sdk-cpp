/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/CustomColor.h>
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
   * <p>The color configurations for a column.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColorsConfiguration">AWS
   * API Reference</a></p>
   */
  class ColorsConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ColorsConfiguration();
    AWS_QUICKSIGHT_API ColorsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColorsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of up to 50 custom colors.</p>
     */
    inline const Aws::Vector<CustomColor>& GetCustomColors() const{ return m_customColors; }

    /**
     * <p>A list of up to 50 custom colors.</p>
     */
    inline bool CustomColorsHasBeenSet() const { return m_customColorsHasBeenSet; }

    /**
     * <p>A list of up to 50 custom colors.</p>
     */
    inline void SetCustomColors(const Aws::Vector<CustomColor>& value) { m_customColorsHasBeenSet = true; m_customColors = value; }

    /**
     * <p>A list of up to 50 custom colors.</p>
     */
    inline void SetCustomColors(Aws::Vector<CustomColor>&& value) { m_customColorsHasBeenSet = true; m_customColors = std::move(value); }

    /**
     * <p>A list of up to 50 custom colors.</p>
     */
    inline ColorsConfiguration& WithCustomColors(const Aws::Vector<CustomColor>& value) { SetCustomColors(value); return *this;}

    /**
     * <p>A list of up to 50 custom colors.</p>
     */
    inline ColorsConfiguration& WithCustomColors(Aws::Vector<CustomColor>&& value) { SetCustomColors(std::move(value)); return *this;}

    /**
     * <p>A list of up to 50 custom colors.</p>
     */
    inline ColorsConfiguration& AddCustomColors(const CustomColor& value) { m_customColorsHasBeenSet = true; m_customColors.push_back(value); return *this; }

    /**
     * <p>A list of up to 50 custom colors.</p>
     */
    inline ColorsConfiguration& AddCustomColors(CustomColor&& value) { m_customColorsHasBeenSet = true; m_customColors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CustomColor> m_customColors;
    bool m_customColorsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
