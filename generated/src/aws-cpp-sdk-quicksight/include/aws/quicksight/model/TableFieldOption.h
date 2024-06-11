﻿/**
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
    AWS_QUICKSIGHT_API TableFieldOption();
    AWS_QUICKSIGHT_API TableFieldOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableFieldOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field ID for a table field.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }
    inline TableFieldOption& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}
    inline TableFieldOption& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}
    inline TableFieldOption& WithFieldId(const char* value) { SetFieldId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The width for a table field.</p>
     */
    inline const Aws::String& GetWidth() const{ return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(const Aws::String& value) { m_widthHasBeenSet = true; m_width = value; }
    inline void SetWidth(Aws::String&& value) { m_widthHasBeenSet = true; m_width = std::move(value); }
    inline void SetWidth(const char* value) { m_widthHasBeenSet = true; m_width.assign(value); }
    inline TableFieldOption& WithWidth(const Aws::String& value) { SetWidth(value); return *this;}
    inline TableFieldOption& WithWidth(Aws::String&& value) { SetWidth(std::move(value)); return *this;}
    inline TableFieldOption& WithWidth(const char* value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom label for a table field.</p>
     */
    inline const Aws::String& GetCustomLabel() const{ return m_customLabel; }
    inline bool CustomLabelHasBeenSet() const { return m_customLabelHasBeenSet; }
    inline void SetCustomLabel(const Aws::String& value) { m_customLabelHasBeenSet = true; m_customLabel = value; }
    inline void SetCustomLabel(Aws::String&& value) { m_customLabelHasBeenSet = true; m_customLabel = std::move(value); }
    inline void SetCustomLabel(const char* value) { m_customLabelHasBeenSet = true; m_customLabel.assign(value); }
    inline TableFieldOption& WithCustomLabel(const Aws::String& value) { SetCustomLabel(value); return *this;}
    inline TableFieldOption& WithCustomLabel(Aws::String&& value) { SetCustomLabel(std::move(value)); return *this;}
    inline TableFieldOption& WithCustomLabel(const char* value) { SetCustomLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of a table field.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline TableFieldOption& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}
    inline TableFieldOption& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL configuration for a table field.</p>
     */
    inline const TableFieldURLConfiguration& GetURLStyling() const{ return m_uRLStyling; }
    inline bool URLStylingHasBeenSet() const { return m_uRLStylingHasBeenSet; }
    inline void SetURLStyling(const TableFieldURLConfiguration& value) { m_uRLStylingHasBeenSet = true; m_uRLStyling = value; }
    inline void SetURLStyling(TableFieldURLConfiguration&& value) { m_uRLStylingHasBeenSet = true; m_uRLStyling = std::move(value); }
    inline TableFieldOption& WithURLStyling(const TableFieldURLConfiguration& value) { SetURLStyling(value); return *this;}
    inline TableFieldOption& WithURLStyling(TableFieldURLConfiguration&& value) { SetURLStyling(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::String m_width;
    bool m_widthHasBeenSet = false;

    Aws::String m_customLabel;
    bool m_customLabelHasBeenSet = false;

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    TableFieldURLConfiguration m_uRLStyling;
    bool m_uRLStylingHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
