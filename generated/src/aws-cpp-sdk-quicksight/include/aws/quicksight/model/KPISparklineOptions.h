﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/KPISparklineType.h>
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
   * <p>The options that determine the visibility, color, type, and tooltip
   * visibility of the sparkline of a KPI visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KPISparklineOptions">AWS
   * API Reference</a></p>
   */
  class KPISparklineOptions
  {
  public:
    AWS_QUICKSIGHT_API KPISparklineOptions();
    AWS_QUICKSIGHT_API KPISparklineOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPISparklineOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visibility of the sparkline.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline KPISparklineOptions& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}
    inline KPISparklineOptions& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the sparkline.</p>
     */
    inline const KPISparklineType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const KPISparklineType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(KPISparklineType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline KPISparklineOptions& WithType(const KPISparklineType& value) { SetType(value); return *this;}
    inline KPISparklineOptions& WithType(KPISparklineType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color of the sparkline.</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    inline void SetColor(const Aws::String& value) { m_colorHasBeenSet = true; m_color = value; }
    inline void SetColor(Aws::String&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }
    inline void SetColor(const char* value) { m_colorHasBeenSet = true; m_color.assign(value); }
    inline KPISparklineOptions& WithColor(const Aws::String& value) { SetColor(value); return *this;}
    inline KPISparklineOptions& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}
    inline KPISparklineOptions& WithColor(const char* value) { SetColor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tooltip visibility of the sparkline.</p>
     */
    inline const Visibility& GetTooltipVisibility() const{ return m_tooltipVisibility; }
    inline bool TooltipVisibilityHasBeenSet() const { return m_tooltipVisibilityHasBeenSet; }
    inline void SetTooltipVisibility(const Visibility& value) { m_tooltipVisibilityHasBeenSet = true; m_tooltipVisibility = value; }
    inline void SetTooltipVisibility(Visibility&& value) { m_tooltipVisibilityHasBeenSet = true; m_tooltipVisibility = std::move(value); }
    inline KPISparklineOptions& WithTooltipVisibility(const Visibility& value) { SetTooltipVisibility(value); return *this;}
    inline KPISparklineOptions& WithTooltipVisibility(Visibility&& value) { SetTooltipVisibility(std::move(value)); return *this;}
    ///@}
  private:

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    KPISparklineType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_color;
    bool m_colorHasBeenSet = false;

    Visibility m_tooltipVisibility;
    bool m_tooltipVisibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
