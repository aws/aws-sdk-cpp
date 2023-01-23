/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataPathValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TimeGranularity.h>
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
   * <p>The color map that determines the color options for a particular
   * element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataPathColor">AWS
   * API Reference</a></p>
   */
  class DataPathColor
  {
  public:
    AWS_QUICKSIGHT_API DataPathColor();
    AWS_QUICKSIGHT_API DataPathColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataPathColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The element that the color needs to be applied to.</p>
     */
    inline const DataPathValue& GetElement() const{ return m_element; }

    /**
     * <p>The element that the color needs to be applied to.</p>
     */
    inline bool ElementHasBeenSet() const { return m_elementHasBeenSet; }

    /**
     * <p>The element that the color needs to be applied to.</p>
     */
    inline void SetElement(const DataPathValue& value) { m_elementHasBeenSet = true; m_element = value; }

    /**
     * <p>The element that the color needs to be applied to.</p>
     */
    inline void SetElement(DataPathValue&& value) { m_elementHasBeenSet = true; m_element = std::move(value); }

    /**
     * <p>The element that the color needs to be applied to.</p>
     */
    inline DataPathColor& WithElement(const DataPathValue& value) { SetElement(value); return *this;}

    /**
     * <p>The element that the color needs to be applied to.</p>
     */
    inline DataPathColor& WithElement(DataPathValue&& value) { SetElement(std::move(value)); return *this;}


    /**
     * <p>The color that needs to be applied to the element.</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }

    /**
     * <p>The color that needs to be applied to the element.</p>
     */
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }

    /**
     * <p>The color that needs to be applied to the element.</p>
     */
    inline void SetColor(const Aws::String& value) { m_colorHasBeenSet = true; m_color = value; }

    /**
     * <p>The color that needs to be applied to the element.</p>
     */
    inline void SetColor(Aws::String&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }

    /**
     * <p>The color that needs to be applied to the element.</p>
     */
    inline void SetColor(const char* value) { m_colorHasBeenSet = true; m_color.assign(value); }

    /**
     * <p>The color that needs to be applied to the element.</p>
     */
    inline DataPathColor& WithColor(const Aws::String& value) { SetColor(value); return *this;}

    /**
     * <p>The color that needs to be applied to the element.</p>
     */
    inline DataPathColor& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}

    /**
     * <p>The color that needs to be applied to the element.</p>
     */
    inline DataPathColor& WithColor(const char* value) { SetColor(value); return *this;}


    /**
     * <p>The time granularity of the field that the color needs to be applied to.</p>
     */
    inline const TimeGranularity& GetTimeGranularity() const{ return m_timeGranularity; }

    /**
     * <p>The time granularity of the field that the color needs to be applied to.</p>
     */
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }

    /**
     * <p>The time granularity of the field that the color needs to be applied to.</p>
     */
    inline void SetTimeGranularity(const TimeGranularity& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }

    /**
     * <p>The time granularity of the field that the color needs to be applied to.</p>
     */
    inline void SetTimeGranularity(TimeGranularity&& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = std::move(value); }

    /**
     * <p>The time granularity of the field that the color needs to be applied to.</p>
     */
    inline DataPathColor& WithTimeGranularity(const TimeGranularity& value) { SetTimeGranularity(value); return *this;}

    /**
     * <p>The time granularity of the field that the color needs to be applied to.</p>
     */
    inline DataPathColor& WithTimeGranularity(TimeGranularity&& value) { SetTimeGranularity(std::move(value)); return *this;}

  private:

    DataPathValue m_element;
    bool m_elementHasBeenSet = false;

    Aws::String m_color;
    bool m_colorHasBeenSet = false;

    TimeGranularity m_timeGranularity;
    bool m_timeGranularityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
