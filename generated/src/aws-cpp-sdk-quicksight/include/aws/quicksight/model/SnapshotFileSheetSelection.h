/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/SnapshotFileSheetSelectionScope.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A structure that contains information that identifies the snapshot that needs
   * to be generated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SnapshotFileSheetSelection">AWS
   * API Reference</a></p>
   */
  class SnapshotFileSheetSelection
  {
  public:
    AWS_QUICKSIGHT_API SnapshotFileSheetSelection() = default;
    AWS_QUICKSIGHT_API SnapshotFileSheetSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotFileSheetSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sheet ID of the dashboard to generate the snapshot artifact from. This
     * value is required for CSV, Excel, and PDF format types.</p>
     */
    inline const Aws::String& GetSheetId() const { return m_sheetId; }
    inline bool SheetIdHasBeenSet() const { return m_sheetIdHasBeenSet; }
    template<typename SheetIdT = Aws::String>
    void SetSheetId(SheetIdT&& value) { m_sheetIdHasBeenSet = true; m_sheetId = std::forward<SheetIdT>(value); }
    template<typename SheetIdT = Aws::String>
    SnapshotFileSheetSelection& WithSheetId(SheetIdT&& value) { SetSheetId(std::forward<SheetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The selection scope of the visuals on a sheet of a dashboard that you are
     * generating a snapthot of. You can choose one of the following options.</p> <ul>
     * <li> <p> <code>ALL_VISUALS</code> - Selects all visuals that are on the sheet.
     * This value is required if the snapshot is a PDF.</p> </li> <li> <p>
     * <code>SELECTED_VISUALS</code> - Select the visual that you want to add to the
     * snapshot. This value is required if the snapshot is a CSV or Excel workbook.</p>
     * </li> </ul>
     */
    inline SnapshotFileSheetSelectionScope GetSelectionScope() const { return m_selectionScope; }
    inline bool SelectionScopeHasBeenSet() const { return m_selectionScopeHasBeenSet; }
    inline void SetSelectionScope(SnapshotFileSheetSelectionScope value) { m_selectionScopeHasBeenSet = true; m_selectionScope = value; }
    inline SnapshotFileSheetSelection& WithSelectionScope(SnapshotFileSheetSelectionScope value) { SetSelectionScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A structure that lists the IDs of the visuals in the selected sheet.
     * Supported visual types are table, pivot table visuals. This value is required if
     * you are generating a CSV or Excel workbook. This value supports a maximum of 1
     * visual ID for CSV and 5 visual IDs across up to 5 sheet selections for Excel. If
     * you are generating an Excel workbook, the order of the visual IDs provided in
     * this structure determines the order of the worksheets in the Excel file. </p>
     */
    inline const Aws::Vector<Aws::String>& GetVisualIds() const { return m_visualIds; }
    inline bool VisualIdsHasBeenSet() const { return m_visualIdsHasBeenSet; }
    template<typename VisualIdsT = Aws::Vector<Aws::String>>
    void SetVisualIds(VisualIdsT&& value) { m_visualIdsHasBeenSet = true; m_visualIds = std::forward<VisualIdsT>(value); }
    template<typename VisualIdsT = Aws::Vector<Aws::String>>
    SnapshotFileSheetSelection& WithVisualIds(VisualIdsT&& value) { SetVisualIds(std::forward<VisualIdsT>(value)); return *this;}
    template<typename VisualIdsT = Aws::String>
    SnapshotFileSheetSelection& AddVisualIds(VisualIdsT&& value) { m_visualIdsHasBeenSet = true; m_visualIds.emplace_back(std::forward<VisualIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sheetId;
    bool m_sheetIdHasBeenSet = false;

    SnapshotFileSheetSelectionScope m_selectionScope{SnapshotFileSheetSelectionScope::NOT_SET};
    bool m_selectionScopeHasBeenSet = false;

    Aws::Vector<Aws::String> m_visualIds;
    bool m_visualIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
