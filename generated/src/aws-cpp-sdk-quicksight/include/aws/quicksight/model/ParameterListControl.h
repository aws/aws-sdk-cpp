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
    AWS_QUICKSIGHT_API ParameterListControl() = default;
    AWS_QUICKSIGHT_API ParameterListControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ParameterListControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the <code>ParameterListControl</code>.</p>
     */
    inline const Aws::String& GetParameterControlId() const { return m_parameterControlId; }
    inline bool ParameterControlIdHasBeenSet() const { return m_parameterControlIdHasBeenSet; }
    template<typename ParameterControlIdT = Aws::String>
    void SetParameterControlId(ParameterControlIdT&& value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId = std::forward<ParameterControlIdT>(value); }
    template<typename ParameterControlIdT = Aws::String>
    ParameterListControl& WithParameterControlId(ParameterControlIdT&& value) { SetParameterControlId(std::forward<ParameterControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the <code>ParameterListControl</code>.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    ParameterListControl& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source parameter name of the <code>ParameterListControl</code>.</p>
     */
    inline const Aws::String& GetSourceParameterName() const { return m_sourceParameterName; }
    inline bool SourceParameterNameHasBeenSet() const { return m_sourceParameterNameHasBeenSet; }
    template<typename SourceParameterNameT = Aws::String>
    void SetSourceParameterName(SourceParameterNameT&& value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName = std::forward<SourceParameterNameT>(value); }
    template<typename SourceParameterNameT = Aws::String>
    ParameterListControl& WithSourceParameterName(SourceParameterNameT&& value) { SetSourceParameterName(std::forward<SourceParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const ListControlDisplayOptions& GetDisplayOptions() const { return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    template<typename DisplayOptionsT = ListControlDisplayOptions>
    void SetDisplayOptions(DisplayOptionsT&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::forward<DisplayOptionsT>(value); }
    template<typename DisplayOptionsT = ListControlDisplayOptions>
    ParameterListControl& WithDisplayOptions(DisplayOptionsT&& value) { SetDisplayOptions(std::forward<DisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of <code>ParameterListControl</code>.</p>
     */
    inline SheetControlListType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SheetControlListType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ParameterListControl& WithType(SheetControlListType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of selectable values that are used in a control.</p>
     */
    inline const ParameterSelectableValues& GetSelectableValues() const { return m_selectableValues; }
    inline bool SelectableValuesHasBeenSet() const { return m_selectableValuesHasBeenSet; }
    template<typename SelectableValuesT = ParameterSelectableValues>
    void SetSelectableValues(SelectableValuesT&& value) { m_selectableValuesHasBeenSet = true; m_selectableValues = std::forward<SelectableValuesT>(value); }
    template<typename SelectableValuesT = ParameterSelectableValues>
    ParameterListControl& WithSelectableValues(SelectableValuesT&& value) { SetSelectableValues(std::forward<SelectableValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values that are displayed in a control can be configured to only show
     * values that are valid based on what's selected in other controls.</p>
     */
    inline const CascadingControlConfiguration& GetCascadingControlConfiguration() const { return m_cascadingControlConfiguration; }
    inline bool CascadingControlConfigurationHasBeenSet() const { return m_cascadingControlConfigurationHasBeenSet; }
    template<typename CascadingControlConfigurationT = CascadingControlConfiguration>
    void SetCascadingControlConfiguration(CascadingControlConfigurationT&& value) { m_cascadingControlConfigurationHasBeenSet = true; m_cascadingControlConfiguration = std::forward<CascadingControlConfigurationT>(value); }
    template<typename CascadingControlConfigurationT = CascadingControlConfiguration>
    ParameterListControl& WithCascadingControlConfiguration(CascadingControlConfigurationT&& value) { SetCascadingControlConfiguration(std::forward<CascadingControlConfigurationT>(value)); return *this;}
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

    SheetControlListType m_type{SheetControlListType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ParameterSelectableValues m_selectableValues;
    bool m_selectableValuesHasBeenSet = false;

    CascadingControlConfiguration m_cascadingControlConfiguration;
    bool m_cascadingControlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
