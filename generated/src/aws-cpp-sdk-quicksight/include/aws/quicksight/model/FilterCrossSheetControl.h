/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A control from a filter that is scoped across more than one sheet. This
   * represents your filter control on a sheet</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterCrossSheetControl">AWS
   * API Reference</a></p>
   */
  class FilterCrossSheetControl
  {
  public:
    AWS_QUICKSIGHT_API FilterCrossSheetControl() = default;
    AWS_QUICKSIGHT_API FilterCrossSheetControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterCrossSheetControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the <code>FilterCrossSheetControl</code>.</p>
     */
    inline const Aws::String& GetFilterControlId() const { return m_filterControlId; }
    inline bool FilterControlIdHasBeenSet() const { return m_filterControlIdHasBeenSet; }
    template<typename FilterControlIdT = Aws::String>
    void SetFilterControlId(FilterControlIdT&& value) { m_filterControlIdHasBeenSet = true; m_filterControlId = std::forward<FilterControlIdT>(value); }
    template<typename FilterControlIdT = Aws::String>
    FilterCrossSheetControl& WithFilterControlId(FilterControlIdT&& value) { SetFilterControlId(std::forward<FilterControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source filter ID of the <code>FilterCrossSheetControl</code>.</p>
     */
    inline const Aws::String& GetSourceFilterId() const { return m_sourceFilterId; }
    inline bool SourceFilterIdHasBeenSet() const { return m_sourceFilterIdHasBeenSet; }
    template<typename SourceFilterIdT = Aws::String>
    void SetSourceFilterId(SourceFilterIdT&& value) { m_sourceFilterIdHasBeenSet = true; m_sourceFilterId = std::forward<SourceFilterIdT>(value); }
    template<typename SourceFilterIdT = Aws::String>
    FilterCrossSheetControl& WithSourceFilterId(SourceFilterIdT&& value) { SetSourceFilterId(std::forward<SourceFilterIdT>(value)); return *this;}
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
    FilterCrossSheetControl& WithCascadingControlConfiguration(CascadingControlConfigurationT&& value) { SetCascadingControlConfiguration(std::forward<CascadingControlConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterControlId;
    bool m_filterControlIdHasBeenSet = false;

    Aws::String m_sourceFilterId;
    bool m_sourceFilterIdHasBeenSet = false;

    CascadingControlConfiguration m_cascadingControlConfiguration;
    bool m_cascadingControlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
