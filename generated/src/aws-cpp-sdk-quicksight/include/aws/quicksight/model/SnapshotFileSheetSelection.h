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
    AWS_QUICKSIGHT_API SnapshotFileSheetSelection();
    AWS_QUICKSIGHT_API SnapshotFileSheetSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotFileSheetSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sheet ID of the dashboard to generate the snapshot artifact from. This
     * value is required for CSV and PDF format types.</p>
     */
    inline const Aws::String& GetSheetId() const{ return m_sheetId; }

    /**
     * <p>The sheet ID of the dashboard to generate the snapshot artifact from. This
     * value is required for CSV and PDF format types.</p>
     */
    inline bool SheetIdHasBeenSet() const { return m_sheetIdHasBeenSet; }

    /**
     * <p>The sheet ID of the dashboard to generate the snapshot artifact from. This
     * value is required for CSV and PDF format types.</p>
     */
    inline void SetSheetId(const Aws::String& value) { m_sheetIdHasBeenSet = true; m_sheetId = value; }

    /**
     * <p>The sheet ID of the dashboard to generate the snapshot artifact from. This
     * value is required for CSV and PDF format types.</p>
     */
    inline void SetSheetId(Aws::String&& value) { m_sheetIdHasBeenSet = true; m_sheetId = std::move(value); }

    /**
     * <p>The sheet ID of the dashboard to generate the snapshot artifact from. This
     * value is required for CSV and PDF format types.</p>
     */
    inline void SetSheetId(const char* value) { m_sheetIdHasBeenSet = true; m_sheetId.assign(value); }

    /**
     * <p>The sheet ID of the dashboard to generate the snapshot artifact from. This
     * value is required for CSV and PDF format types.</p>
     */
    inline SnapshotFileSheetSelection& WithSheetId(const Aws::String& value) { SetSheetId(value); return *this;}

    /**
     * <p>The sheet ID of the dashboard to generate the snapshot artifact from. This
     * value is required for CSV and PDF format types.</p>
     */
    inline SnapshotFileSheetSelection& WithSheetId(Aws::String&& value) { SetSheetId(std::move(value)); return *this;}

    /**
     * <p>The sheet ID of the dashboard to generate the snapshot artifact from. This
     * value is required for CSV and PDF format types.</p>
     */
    inline SnapshotFileSheetSelection& WithSheetId(const char* value) { SetSheetId(value); return *this;}


    /**
     * <p>The selection scope of the visuals on a sheet of a dashboard that you are
     * generating a snapthot of. You can choose one of the following options.</p> <ul>
     * <li> <p> <code>ALL_VISUALS</code> - Selects all visuals that are on the sheet.
     * This value is required if the snapshot is a PDF.</p> </li> <li> <p>
     * <code>SELECTED_VISUALS</code> - Select the visual that you want to add to the
     * snapshot. This value is required if the snapshot is a CSV.</p> </li> </ul>
     */
    inline const SnapshotFileSheetSelectionScope& GetSelectionScope() const{ return m_selectionScope; }

    /**
     * <p>The selection scope of the visuals on a sheet of a dashboard that you are
     * generating a snapthot of. You can choose one of the following options.</p> <ul>
     * <li> <p> <code>ALL_VISUALS</code> - Selects all visuals that are on the sheet.
     * This value is required if the snapshot is a PDF.</p> </li> <li> <p>
     * <code>SELECTED_VISUALS</code> - Select the visual that you want to add to the
     * snapshot. This value is required if the snapshot is a CSV.</p> </li> </ul>
     */
    inline bool SelectionScopeHasBeenSet() const { return m_selectionScopeHasBeenSet; }

    /**
     * <p>The selection scope of the visuals on a sheet of a dashboard that you are
     * generating a snapthot of. You can choose one of the following options.</p> <ul>
     * <li> <p> <code>ALL_VISUALS</code> - Selects all visuals that are on the sheet.
     * This value is required if the snapshot is a PDF.</p> </li> <li> <p>
     * <code>SELECTED_VISUALS</code> - Select the visual that you want to add to the
     * snapshot. This value is required if the snapshot is a CSV.</p> </li> </ul>
     */
    inline void SetSelectionScope(const SnapshotFileSheetSelectionScope& value) { m_selectionScopeHasBeenSet = true; m_selectionScope = value; }

    /**
     * <p>The selection scope of the visuals on a sheet of a dashboard that you are
     * generating a snapthot of. You can choose one of the following options.</p> <ul>
     * <li> <p> <code>ALL_VISUALS</code> - Selects all visuals that are on the sheet.
     * This value is required if the snapshot is a PDF.</p> </li> <li> <p>
     * <code>SELECTED_VISUALS</code> - Select the visual that you want to add to the
     * snapshot. This value is required if the snapshot is a CSV.</p> </li> </ul>
     */
    inline void SetSelectionScope(SnapshotFileSheetSelectionScope&& value) { m_selectionScopeHasBeenSet = true; m_selectionScope = std::move(value); }

    /**
     * <p>The selection scope of the visuals on a sheet of a dashboard that you are
     * generating a snapthot of. You can choose one of the following options.</p> <ul>
     * <li> <p> <code>ALL_VISUALS</code> - Selects all visuals that are on the sheet.
     * This value is required if the snapshot is a PDF.</p> </li> <li> <p>
     * <code>SELECTED_VISUALS</code> - Select the visual that you want to add to the
     * snapshot. This value is required if the snapshot is a CSV.</p> </li> </ul>
     */
    inline SnapshotFileSheetSelection& WithSelectionScope(const SnapshotFileSheetSelectionScope& value) { SetSelectionScope(value); return *this;}

    /**
     * <p>The selection scope of the visuals on a sheet of a dashboard that you are
     * generating a snapthot of. You can choose one of the following options.</p> <ul>
     * <li> <p> <code>ALL_VISUALS</code> - Selects all visuals that are on the sheet.
     * This value is required if the snapshot is a PDF.</p> </li> <li> <p>
     * <code>SELECTED_VISUALS</code> - Select the visual that you want to add to the
     * snapshot. This value is required if the snapshot is a CSV.</p> </li> </ul>
     */
    inline SnapshotFileSheetSelection& WithSelectionScope(SnapshotFileSheetSelectionScope&& value) { SetSelectionScope(std::move(value)); return *this;}


    /**
     * <p> A list of visual IDs that are located in the selected sheet. This structure
     * supports tables and pivot tables. This structure is required if you are
     * generating a CSV. You can add a maximum of 1 visual ID to this structure. </p>
     */
    inline const Aws::Vector<Aws::String>& GetVisualIds() const{ return m_visualIds; }

    /**
     * <p> A list of visual IDs that are located in the selected sheet. This structure
     * supports tables and pivot tables. This structure is required if you are
     * generating a CSV. You can add a maximum of 1 visual ID to this structure. </p>
     */
    inline bool VisualIdsHasBeenSet() const { return m_visualIdsHasBeenSet; }

    /**
     * <p> A list of visual IDs that are located in the selected sheet. This structure
     * supports tables and pivot tables. This structure is required if you are
     * generating a CSV. You can add a maximum of 1 visual ID to this structure. </p>
     */
    inline void SetVisualIds(const Aws::Vector<Aws::String>& value) { m_visualIdsHasBeenSet = true; m_visualIds = value; }

    /**
     * <p> A list of visual IDs that are located in the selected sheet. This structure
     * supports tables and pivot tables. This structure is required if you are
     * generating a CSV. You can add a maximum of 1 visual ID to this structure. </p>
     */
    inline void SetVisualIds(Aws::Vector<Aws::String>&& value) { m_visualIdsHasBeenSet = true; m_visualIds = std::move(value); }

    /**
     * <p> A list of visual IDs that are located in the selected sheet. This structure
     * supports tables and pivot tables. This structure is required if you are
     * generating a CSV. You can add a maximum of 1 visual ID to this structure. </p>
     */
    inline SnapshotFileSheetSelection& WithVisualIds(const Aws::Vector<Aws::String>& value) { SetVisualIds(value); return *this;}

    /**
     * <p> A list of visual IDs that are located in the selected sheet. This structure
     * supports tables and pivot tables. This structure is required if you are
     * generating a CSV. You can add a maximum of 1 visual ID to this structure. </p>
     */
    inline SnapshotFileSheetSelection& WithVisualIds(Aws::Vector<Aws::String>&& value) { SetVisualIds(std::move(value)); return *this;}

    /**
     * <p> A list of visual IDs that are located in the selected sheet. This structure
     * supports tables and pivot tables. This structure is required if you are
     * generating a CSV. You can add a maximum of 1 visual ID to this structure. </p>
     */
    inline SnapshotFileSheetSelection& AddVisualIds(const Aws::String& value) { m_visualIdsHasBeenSet = true; m_visualIds.push_back(value); return *this; }

    /**
     * <p> A list of visual IDs that are located in the selected sheet. This structure
     * supports tables and pivot tables. This structure is required if you are
     * generating a CSV. You can add a maximum of 1 visual ID to this structure. </p>
     */
    inline SnapshotFileSheetSelection& AddVisualIds(Aws::String&& value) { m_visualIdsHasBeenSet = true; m_visualIds.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of visual IDs that are located in the selected sheet. This structure
     * supports tables and pivot tables. This structure is required if you are
     * generating a CSV. You can add a maximum of 1 visual ID to this structure. </p>
     */
    inline SnapshotFileSheetSelection& AddVisualIds(const char* value) { m_visualIdsHasBeenSet = true; m_visualIds.push_back(value); return *this; }

  private:

    Aws::String m_sheetId;
    bool m_sheetIdHasBeenSet = false;

    SnapshotFileSheetSelectionScope m_selectionScope;
    bool m_selectionScopeHasBeenSet = false;

    Aws::Vector<Aws::String> m_visualIds;
    bool m_visualIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
