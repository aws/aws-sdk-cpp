/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class BatchModifyClusterSnapshotsRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API BatchModifyClusterSnapshotsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchModifyClusterSnapshots"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A list of snapshot identifiers you want to modify.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotIdentifierList() const { return m_snapshotIdentifierList; }
    inline bool SnapshotIdentifierListHasBeenSet() const { return m_snapshotIdentifierListHasBeenSet; }
    template<typename SnapshotIdentifierListT = Aws::Vector<Aws::String>>
    void SetSnapshotIdentifierList(SnapshotIdentifierListT&& value) { m_snapshotIdentifierListHasBeenSet = true; m_snapshotIdentifierList = std::forward<SnapshotIdentifierListT>(value); }
    template<typename SnapshotIdentifierListT = Aws::Vector<Aws::String>>
    BatchModifyClusterSnapshotsRequest& WithSnapshotIdentifierList(SnapshotIdentifierListT&& value) { SetSnapshotIdentifierList(std::forward<SnapshotIdentifierListT>(value)); return *this;}
    template<typename SnapshotIdentifierListT = Aws::String>
    BatchModifyClusterSnapshotsRequest& AddSnapshotIdentifierList(SnapshotIdentifierListT&& value) { m_snapshotIdentifierListHasBeenSet = true; m_snapshotIdentifierList.emplace_back(std::forward<SnapshotIdentifierListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of days that a manual snapshot is retained. If you specify the
     * value -1, the manual snapshot is retained indefinitely.</p> <p>The number must
     * be either -1 or an integer between 1 and 3,653.</p> <p>If you decrease the
     * manual snapshot retention period from its current value, existing manual
     * snapshots that fall outside of the new retention period will return an error. If
     * you want to suppress the errors and delete the snapshots, use the force option.
     * </p>
     */
    inline int GetManualSnapshotRetentionPeriod() const { return m_manualSnapshotRetentionPeriod; }
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }
    inline BatchModifyClusterSnapshotsRequest& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value indicating whether to override an exception if the retention
     * period has passed. </p>
     */
    inline bool GetForce() const { return m_force; }
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }
    inline BatchModifyClusterSnapshotsRequest& WithForce(bool value) { SetForce(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_snapshotIdentifierList;
    bool m_snapshotIdentifierListHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod{0};
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;

    bool m_force{false};
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
