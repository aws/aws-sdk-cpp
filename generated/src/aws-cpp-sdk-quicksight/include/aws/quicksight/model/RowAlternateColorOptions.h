﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/WidgetStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Determines the row alternate color options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RowAlternateColorOptions">AWS
   * API Reference</a></p>
   */
  class RowAlternateColorOptions
  {
  public:
    AWS_QUICKSIGHT_API RowAlternateColorOptions();
    AWS_QUICKSIGHT_API RowAlternateColorOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RowAlternateColorOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the widget status.</p>
     */
    inline const WidgetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const WidgetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(WidgetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RowAlternateColorOptions& WithStatus(const WidgetStatus& value) { SetStatus(value); return *this;}
    inline RowAlternateColorOptions& WithStatus(WidgetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the list of row alternate colors.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRowAlternateColors() const{ return m_rowAlternateColors; }
    inline bool RowAlternateColorsHasBeenSet() const { return m_rowAlternateColorsHasBeenSet; }
    inline void SetRowAlternateColors(const Aws::Vector<Aws::String>& value) { m_rowAlternateColorsHasBeenSet = true; m_rowAlternateColors = value; }
    inline void SetRowAlternateColors(Aws::Vector<Aws::String>&& value) { m_rowAlternateColorsHasBeenSet = true; m_rowAlternateColors = std::move(value); }
    inline RowAlternateColorOptions& WithRowAlternateColors(const Aws::Vector<Aws::String>& value) { SetRowAlternateColors(value); return *this;}
    inline RowAlternateColorOptions& WithRowAlternateColors(Aws::Vector<Aws::String>&& value) { SetRowAlternateColors(std::move(value)); return *this;}
    inline RowAlternateColorOptions& AddRowAlternateColors(const Aws::String& value) { m_rowAlternateColorsHasBeenSet = true; m_rowAlternateColors.push_back(value); return *this; }
    inline RowAlternateColorOptions& AddRowAlternateColors(Aws::String&& value) { m_rowAlternateColorsHasBeenSet = true; m_rowAlternateColors.push_back(std::move(value)); return *this; }
    inline RowAlternateColorOptions& AddRowAlternateColors(const char* value) { m_rowAlternateColorsHasBeenSet = true; m_rowAlternateColors.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The primary background color options for alternate rows.</p>
     */
    inline const WidgetStatus& GetUsePrimaryBackgroundColor() const{ return m_usePrimaryBackgroundColor; }
    inline bool UsePrimaryBackgroundColorHasBeenSet() const { return m_usePrimaryBackgroundColorHasBeenSet; }
    inline void SetUsePrimaryBackgroundColor(const WidgetStatus& value) { m_usePrimaryBackgroundColorHasBeenSet = true; m_usePrimaryBackgroundColor = value; }
    inline void SetUsePrimaryBackgroundColor(WidgetStatus&& value) { m_usePrimaryBackgroundColorHasBeenSet = true; m_usePrimaryBackgroundColor = std::move(value); }
    inline RowAlternateColorOptions& WithUsePrimaryBackgroundColor(const WidgetStatus& value) { SetUsePrimaryBackgroundColor(value); return *this;}
    inline RowAlternateColorOptions& WithUsePrimaryBackgroundColor(WidgetStatus&& value) { SetUsePrimaryBackgroundColor(std::move(value)); return *this;}
    ///@}
  private:

    WidgetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_rowAlternateColors;
    bool m_rowAlternateColorsHasBeenSet = false;

    WidgetStatus m_usePrimaryBackgroundColor;
    bool m_usePrimaryBackgroundColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
