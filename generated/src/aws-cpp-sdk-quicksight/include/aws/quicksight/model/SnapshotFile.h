/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SnapshotFileFormatType.h>
#include <aws/quicksight/model/SnapshotFileSheetSelection.h>
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
   * <p>A structure that contains the information for the snapshot that you want to
   * generate. This information is provided by you when you start a new snapshot
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SnapshotFile">AWS
   * API Reference</a></p>
   */
  class SnapshotFile
  {
  public:
    AWS_QUICKSIGHT_API SnapshotFile() = default;
    AWS_QUICKSIGHT_API SnapshotFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of <code>SnapshotFileSheetSelection</code> objects that contain
     * information on the dashboard sheet that is exported. These objects provide
     * information about the snapshot artifacts that are generated during the job. This
     * structure can hold a maximum of 5 CSV configurations, 5 Excel configurations, or
     * 1 configuration for PDF.</p>
     */
    inline const Aws::Vector<SnapshotFileSheetSelection>& GetSheetSelections() const { return m_sheetSelections; }
    inline bool SheetSelectionsHasBeenSet() const { return m_sheetSelectionsHasBeenSet; }
    template<typename SheetSelectionsT = Aws::Vector<SnapshotFileSheetSelection>>
    void SetSheetSelections(SheetSelectionsT&& value) { m_sheetSelectionsHasBeenSet = true; m_sheetSelections = std::forward<SheetSelectionsT>(value); }
    template<typename SheetSelectionsT = Aws::Vector<SnapshotFileSheetSelection>>
    SnapshotFile& WithSheetSelections(SheetSelectionsT&& value) { SetSheetSelections(std::forward<SheetSelectionsT>(value)); return *this;}
    template<typename SheetSelectionsT = SnapshotFileSheetSelection>
    SnapshotFile& AddSheetSelections(SheetSelectionsT&& value) { m_sheetSelectionsHasBeenSet = true; m_sheetSelections.emplace_back(std::forward<SheetSelectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The format of the snapshot file to be generated. You can choose between
     * <code>CSV</code>, <code>Excel</code>, or <code>PDF</code>.</p>
     */
    inline SnapshotFileFormatType GetFormatType() const { return m_formatType; }
    inline bool FormatTypeHasBeenSet() const { return m_formatTypeHasBeenSet; }
    inline void SetFormatType(SnapshotFileFormatType value) { m_formatTypeHasBeenSet = true; m_formatType = value; }
    inline SnapshotFile& WithFormatType(SnapshotFileFormatType value) { SetFormatType(value); return *this;}
    ///@}
  private:

    Aws::Vector<SnapshotFileSheetSelection> m_sheetSelections;
    bool m_sheetSelectionsHasBeenSet = false;

    SnapshotFileFormatType m_formatType{SnapshotFileFormatType::NOT_SET};
    bool m_formatTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
