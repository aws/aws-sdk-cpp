/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
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
  class ModifyClusterSnapshotRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API ModifyClusterSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyClusterSnapshot"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the snapshot whose setting you want to modify.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }

    /**
     * <p>The identifier of the snapshot whose setting you want to modify.</p>
     */
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the snapshot whose setting you want to modify.</p>
     */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The identifier of the snapshot whose setting you want to modify.</p>
     */
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier of the snapshot whose setting you want to modify.</p>
     */
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the snapshot whose setting you want to modify.</p>
     */
    inline ModifyClusterSnapshotRequest& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the snapshot whose setting you want to modify.</p>
     */
    inline ModifyClusterSnapshotRequest& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the snapshot whose setting you want to modify.</p>
     */
    inline ModifyClusterSnapshotRequest& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}


    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely.</p> <p>If the manual snapshot
     * falls outside of the new retention period, you can specify the force option to
     * immediately delete the snapshot.</p> <p>The value must be either -1 or an
     * integer between 1 and 3,653.</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const{ return m_manualSnapshotRetentionPeriod; }

    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely.</p> <p>If the manual snapshot
     * falls outside of the new retention period, you can specify the force option to
     * immediately delete the snapshot.</p> <p>The value must be either -1 or an
     * integer between 1 and 3,653.</p>
     */
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely.</p> <p>If the manual snapshot
     * falls outside of the new retention period, you can specify the force option to
     * immediately delete the snapshot.</p> <p>The value must be either -1 or an
     * integer between 1 and 3,653.</p>
     */
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }

    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely.</p> <p>If the manual snapshot
     * falls outside of the new retention period, you can specify the force option to
     * immediately delete the snapshot.</p> <p>The value must be either -1 or an
     * integer between 1 and 3,653.</p>
     */
    inline ModifyClusterSnapshotRequest& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}


    /**
     * <p>A Boolean option to override an exception if the retention period has already
     * passed.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>A Boolean option to override an exception if the retention period has already
     * passed.</p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>A Boolean option to override an exception if the retention period has already
     * passed.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>A Boolean option to override an exception if the retention period has already
     * passed.</p>
     */
    inline ModifyClusterSnapshotRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod;
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
