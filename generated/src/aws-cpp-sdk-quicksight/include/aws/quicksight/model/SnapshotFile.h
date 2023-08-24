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
    AWS_QUICKSIGHT_API SnapshotFile();
    AWS_QUICKSIGHT_API SnapshotFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of <code>SnapshotFileSheetSelection</code> objects that contain
     * information on the dashboard sheet that is exported. These objects provide
     * information about the snapshot artifacts that are generated during the job. This
     * structure can hold a maximum of 5 CSV configurations, 5 Excel configurations, or
     * 1 configuration for PDF.</p>
     */
    inline const Aws::Vector<SnapshotFileSheetSelection>& GetSheetSelections() const{ return m_sheetSelections; }

    /**
     * <p>A list of <code>SnapshotFileSheetSelection</code> objects that contain
     * information on the dashboard sheet that is exported. These objects provide
     * information about the snapshot artifacts that are generated during the job. This
     * structure can hold a maximum of 5 CSV configurations, 5 Excel configurations, or
     * 1 configuration for PDF.</p>
     */
    inline bool SheetSelectionsHasBeenSet() const { return m_sheetSelectionsHasBeenSet; }

    /**
     * <p>A list of <code>SnapshotFileSheetSelection</code> objects that contain
     * information on the dashboard sheet that is exported. These objects provide
     * information about the snapshot artifacts that are generated during the job. This
     * structure can hold a maximum of 5 CSV configurations, 5 Excel configurations, or
     * 1 configuration for PDF.</p>
     */
    inline void SetSheetSelections(const Aws::Vector<SnapshotFileSheetSelection>& value) { m_sheetSelectionsHasBeenSet = true; m_sheetSelections = value; }

    /**
     * <p>A list of <code>SnapshotFileSheetSelection</code> objects that contain
     * information on the dashboard sheet that is exported. These objects provide
     * information about the snapshot artifacts that are generated during the job. This
     * structure can hold a maximum of 5 CSV configurations, 5 Excel configurations, or
     * 1 configuration for PDF.</p>
     */
    inline void SetSheetSelections(Aws::Vector<SnapshotFileSheetSelection>&& value) { m_sheetSelectionsHasBeenSet = true; m_sheetSelections = std::move(value); }

    /**
     * <p>A list of <code>SnapshotFileSheetSelection</code> objects that contain
     * information on the dashboard sheet that is exported. These objects provide
     * information about the snapshot artifacts that are generated during the job. This
     * structure can hold a maximum of 5 CSV configurations, 5 Excel configurations, or
     * 1 configuration for PDF.</p>
     */
    inline SnapshotFile& WithSheetSelections(const Aws::Vector<SnapshotFileSheetSelection>& value) { SetSheetSelections(value); return *this;}

    /**
     * <p>A list of <code>SnapshotFileSheetSelection</code> objects that contain
     * information on the dashboard sheet that is exported. These objects provide
     * information about the snapshot artifacts that are generated during the job. This
     * structure can hold a maximum of 5 CSV configurations, 5 Excel configurations, or
     * 1 configuration for PDF.</p>
     */
    inline SnapshotFile& WithSheetSelections(Aws::Vector<SnapshotFileSheetSelection>&& value) { SetSheetSelections(std::move(value)); return *this;}

    /**
     * <p>A list of <code>SnapshotFileSheetSelection</code> objects that contain
     * information on the dashboard sheet that is exported. These objects provide
     * information about the snapshot artifacts that are generated during the job. This
     * structure can hold a maximum of 5 CSV configurations, 5 Excel configurations, or
     * 1 configuration for PDF.</p>
     */
    inline SnapshotFile& AddSheetSelections(const SnapshotFileSheetSelection& value) { m_sheetSelectionsHasBeenSet = true; m_sheetSelections.push_back(value); return *this; }

    /**
     * <p>A list of <code>SnapshotFileSheetSelection</code> objects that contain
     * information on the dashboard sheet that is exported. These objects provide
     * information about the snapshot artifacts that are generated during the job. This
     * structure can hold a maximum of 5 CSV configurations, 5 Excel configurations, or
     * 1 configuration for PDF.</p>
     */
    inline SnapshotFile& AddSheetSelections(SnapshotFileSheetSelection&& value) { m_sheetSelectionsHasBeenSet = true; m_sheetSelections.push_back(std::move(value)); return *this; }


    /**
     * <p>The format of the snapshot file to be generated. You can choose between
     * <code>CSV</code>, <code>Excel</code>, or <code>PDF</code>.</p>
     */
    inline const SnapshotFileFormatType& GetFormatType() const{ return m_formatType; }

    /**
     * <p>The format of the snapshot file to be generated. You can choose between
     * <code>CSV</code>, <code>Excel</code>, or <code>PDF</code>.</p>
     */
    inline bool FormatTypeHasBeenSet() const { return m_formatTypeHasBeenSet; }

    /**
     * <p>The format of the snapshot file to be generated. You can choose between
     * <code>CSV</code>, <code>Excel</code>, or <code>PDF</code>.</p>
     */
    inline void SetFormatType(const SnapshotFileFormatType& value) { m_formatTypeHasBeenSet = true; m_formatType = value; }

    /**
     * <p>The format of the snapshot file to be generated. You can choose between
     * <code>CSV</code>, <code>Excel</code>, or <code>PDF</code>.</p>
     */
    inline void SetFormatType(SnapshotFileFormatType&& value) { m_formatTypeHasBeenSet = true; m_formatType = std::move(value); }

    /**
     * <p>The format of the snapshot file to be generated. You can choose between
     * <code>CSV</code>, <code>Excel</code>, or <code>PDF</code>.</p>
     */
    inline SnapshotFile& WithFormatType(const SnapshotFileFormatType& value) { SetFormatType(value); return *this;}

    /**
     * <p>The format of the snapshot file to be generated. You can choose between
     * <code>CSV</code>, <code>Excel</code>, or <code>PDF</code>.</p>
     */
    inline SnapshotFile& WithFormatType(SnapshotFileFormatType&& value) { SetFormatType(std::move(value)); return *this;}

  private:

    Aws::Vector<SnapshotFileSheetSelection> m_sheetSelections;
    bool m_sheetSelectionsHasBeenSet = false;

    SnapshotFileFormatType m_formatType;
    bool m_formatTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
