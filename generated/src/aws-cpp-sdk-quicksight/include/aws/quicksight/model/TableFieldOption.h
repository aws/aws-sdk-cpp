/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/TableFieldURLConfiguration.h>
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
   * <p>The options for a table field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableFieldOption">AWS
   * API Reference</a></p>
   */
  class TableFieldOption
  {
  public:
    AWS_QUICKSIGHT_API TableFieldOption() = default;
    AWS_QUICKSIGHT_API TableFieldOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableFieldOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field ID for a table field.</p>
     */
    inline const Aws::String& GetFieldId() const { return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    template<typename FieldIdT = Aws::String>
    void SetFieldId(FieldIdT&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::forward<FieldIdT>(value); }
    template<typename FieldIdT = Aws::String>
    TableFieldOption& WithFieldId(FieldIdT&& value) { SetFieldId(std::forward<FieldIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The width for a table field.</p>
     */
    inline const Aws::String& GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    template<typename WidthT = Aws::String>
    void SetWidth(WidthT&& value) { m_widthHasBeenSet = true; m_width = std::forward<WidthT>(value); }
    template<typename WidthT = Aws::String>
    TableFieldOption& WithWidth(WidthT&& value) { SetWidth(std::forward<WidthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom label for a table field.</p>
     */
    inline const Aws::String& GetCustomLabel() const { return m_customLabel; }
    inline bool CustomLabelHasBeenSet() const { return m_customLabelHasBeenSet; }
    template<typename CustomLabelT = Aws::String>
    void SetCustomLabel(CustomLabelT&& value) { m_customLabelHasBeenSet = true; m_customLabel = std::forward<CustomLabelT>(value); }
    template<typename CustomLabelT = Aws::String>
    TableFieldOption& WithCustomLabel(CustomLabelT&& value) { SetCustomLabel(std::forward<CustomLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of a table field.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline TableFieldOption& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL configuration for a table field.</p>
     */
    inline const TableFieldURLConfiguration& GetURLStyling() const { return m_uRLStyling; }
    inline bool URLStylingHasBeenSet() const { return m_uRLStylingHasBeenSet; }
    template<typename URLStylingT = TableFieldURLConfiguration>
    void SetURLStyling(URLStylingT&& value) { m_uRLStylingHasBeenSet = true; m_uRLStyling = std::forward<URLStylingT>(value); }
    template<typename URLStylingT = TableFieldURLConfiguration>
    TableFieldOption& WithURLStyling(URLStylingT&& value) { SetURLStyling(std::forward<URLStylingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::String m_width;
    bool m_widthHasBeenSet = false;

    Aws::String m_customLabel;
    bool m_customLabelHasBeenSet = false;

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    TableFieldURLConfiguration m_uRLStyling;
    bool m_uRLStylingHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
