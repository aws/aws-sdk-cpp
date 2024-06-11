/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ListControlDisplayOptions.h>
#include <aws/quicksight/model/SheetControlListType.h>
#include <aws/quicksight/model/ParameterSelectableValues.h>
#include <aws/quicksight/model/CascadingControlConfiguration.h>
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
   * <p>A control to display a list with buttons or boxes that are used to select
   * either a single value or multiple values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ParameterListControl">AWS
   * API Reference</a></p>
   */
  class ParameterListControl
  {
  public:
    AWS_QUICKSIGHT_API ParameterListControl();
    AWS_QUICKSIGHT_API ParameterListControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ParameterListControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the <code>ParameterListControl</code>.</p>
     */
    inline const Aws::String& GetParameterControlId() const{ return m_parameterControlId; }
    inline bool ParameterControlIdHasBeenSet() const { return m_parameterControlIdHasBeenSet; }
    inline void SetParameterControlId(const Aws::String& value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId = value; }
    inline void SetParameterControlId(Aws::String&& value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId = std::move(value); }
    inline void SetParameterControlId(const char* value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId.assign(value); }
    inline ParameterListControl& WithParameterControlId(const Aws::String& value) { SetParameterControlId(value); return *this;}
    inline ParameterListControl& WithParameterControlId(Aws::String&& value) { SetParameterControlId(std::move(value)); return *this;}
    inline ParameterListControl& WithParameterControlId(const char* value) { SetParameterControlId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the <code>ParameterListControl</code>.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline ParameterListControl& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline ParameterListControl& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline ParameterListControl& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source parameter name of the <code>ParameterListControl</code>.</p>
     */
    inline const Aws::String& GetSourceParameterName() const{ return m_sourceParameterName; }
    inline bool SourceParameterNameHasBeenSet() const { return m_sourceParameterNameHasBeenSet; }
    inline void SetSourceParameterName(const Aws::String& value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName = value; }
    inline void SetSourceParameterName(Aws::String&& value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName = std::move(value); }
    inline void SetSourceParameterName(const char* value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName.assign(value); }
    inline ParameterListControl& WithSourceParameterName(const Aws::String& value) { SetSourceParameterName(value); return *this;}
    inline ParameterListControl& WithSourceParameterName(Aws::String&& value) { SetSourceParameterName(std::move(value)); return *this;}
    inline ParameterListControl& WithSourceParameterName(const char* value) { SetSourceParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const ListControlDisplayOptions& GetDisplayOptions() const{ return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    inline void SetDisplayOptions(const ListControlDisplayOptions& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = value; }
    inline void SetDisplayOptions(ListControlDisplayOptions&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::move(value); }
    inline ParameterListControl& WithDisplayOptions(const ListControlDisplayOptions& value) { SetDisplayOptions(value); return *this;}
    inline ParameterListControl& WithDisplayOptions(ListControlDisplayOptions&& value) { SetDisplayOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of <code>ParameterListControl</code>.</p>
     */
    inline const SheetControlListType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SheetControlListType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SheetControlListType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ParameterListControl& WithType(const SheetControlListType& value) { SetType(value); return *this;}
    inline ParameterListControl& WithType(SheetControlListType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of selectable values that are used in a control.</p>
     */
    inline const ParameterSelectableValues& GetSelectableValues() const{ return m_selectableValues; }
    inline bool SelectableValuesHasBeenSet() const { return m_selectableValuesHasBeenSet; }
    inline void SetSelectableValues(const ParameterSelectableValues& value) { m_selectableValuesHasBeenSet = true; m_selectableValues = value; }
    inline void SetSelectableValues(ParameterSelectableValues&& value) { m_selectableValuesHasBeenSet = true; m_selectableValues = std::move(value); }
    inline ParameterListControl& WithSelectableValues(const ParameterSelectableValues& value) { SetSelectableValues(value); return *this;}
    inline ParameterListControl& WithSelectableValues(ParameterSelectableValues&& value) { SetSelectableValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values that are displayed in a control can be configured to only show
     * values that are valid based on what's selected in other controls.</p>
     */
    inline const CascadingControlConfiguration& GetCascadingControlConfiguration() const{ return m_cascadingControlConfiguration; }
    inline bool CascadingControlConfigurationHasBeenSet() const { return m_cascadingControlConfigurationHasBeenSet; }
    inline void SetCascadingControlConfiguration(const CascadingControlConfiguration& value) { m_cascadingControlConfigurationHasBeenSet = true; m_cascadingControlConfiguration = value; }
    inline void SetCascadingControlConfiguration(CascadingControlConfiguration&& value) { m_cascadingControlConfigurationHasBeenSet = true; m_cascadingControlConfiguration = std::move(value); }
    inline ParameterListControl& WithCascadingControlConfiguration(const CascadingControlConfiguration& value) { SetCascadingControlConfiguration(value); return *this;}
    inline ParameterListControl& WithCascadingControlConfiguration(CascadingControlConfiguration&& value) { SetCascadingControlConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_parameterControlId;
    bool m_parameterControlIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_sourceParameterName;
    bool m_sourceParameterNameHasBeenSet = false;

    ListControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;

    SheetControlListType m_type;
    bool m_typeHasBeenSet = false;

    ParameterSelectableValues m_selectableValues;
    bool m_selectableValuesHasBeenSet = false;

    CascadingControlConfiguration m_cascadingControlConfiguration;
    bool m_cascadingControlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
