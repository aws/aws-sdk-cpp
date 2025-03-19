/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>Information about rows for a data set SPICE ingestion.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RowInfo">AWS
   * API Reference</a></p>
   */
  class RowInfo
  {
  public:
    AWS_QUICKSIGHT_API RowInfo() = default;
    AWS_QUICKSIGHT_API RowInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RowInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of rows that were ingested.</p>
     */
    inline long long GetRowsIngested() const { return m_rowsIngested; }
    inline bool RowsIngestedHasBeenSet() const { return m_rowsIngestedHasBeenSet; }
    inline void SetRowsIngested(long long value) { m_rowsIngestedHasBeenSet = true; m_rowsIngested = value; }
    inline RowInfo& WithRowsIngested(long long value) { SetRowsIngested(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rows that were not ingested.</p>
     */
    inline long long GetRowsDropped() const { return m_rowsDropped; }
    inline bool RowsDroppedHasBeenSet() const { return m_rowsDroppedHasBeenSet; }
    inline void SetRowsDropped(long long value) { m_rowsDroppedHasBeenSet = true; m_rowsDropped = value; }
    inline RowInfo& WithRowsDropped(long long value) { SetRowsDropped(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of rows in the dataset.</p>
     */
    inline long long GetTotalRowsInDataset() const { return m_totalRowsInDataset; }
    inline bool TotalRowsInDatasetHasBeenSet() const { return m_totalRowsInDatasetHasBeenSet; }
    inline void SetTotalRowsInDataset(long long value) { m_totalRowsInDatasetHasBeenSet = true; m_totalRowsInDataset = value; }
    inline RowInfo& WithTotalRowsInDataset(long long value) { SetTotalRowsInDataset(value); return *this;}
    ///@}
  private:

    long long m_rowsIngested{0};
    bool m_rowsIngestedHasBeenSet = false;

    long long m_rowsDropped{0};
    bool m_rowsDroppedHasBeenSet = false;

    long long m_totalRowsInDataset{0};
    bool m_totalRowsInDatasetHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
