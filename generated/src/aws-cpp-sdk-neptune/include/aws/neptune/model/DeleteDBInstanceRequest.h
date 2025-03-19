/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class DeleteDBInstanceRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API DeleteDBInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBInstance"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The DB instance identifier for the DB instance to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the name
     * of an existing DB instance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    template<typename DBInstanceIdentifierT = Aws::String>
    void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value); }
    template<typename DBInstanceIdentifierT = Aws::String>
    DeleteDBInstanceRequest& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) { SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Determines whether a final DB snapshot is created before the DB instance is
     * deleted. If <code>true</code> is specified, no DBSnapshot is created. If
     * <code>false</code> is specified, a DB snapshot is created before the DB instance
     * is deleted.</p> <p>Note that when a DB instance is in a failure state and has a
     * status of 'failed', 'incompatible-restore', or 'incompatible-network', it can
     * only be deleted when the SkipFinalSnapshot parameter is set to "true".</p>
     * <p>Specify <code>true</code> when deleting a Read Replica.</p>  <p>The
     * FinalDBSnapshotIdentifier parameter must be specified if SkipFinalSnapshot is
     * <code>false</code>.</p>  <p>Default: <code>false</code> </p>
     */
    inline bool GetSkipFinalSnapshot() const { return m_skipFinalSnapshot; }
    inline bool SkipFinalSnapshotHasBeenSet() const { return m_skipFinalSnapshotHasBeenSet; }
    inline void SetSkipFinalSnapshot(bool value) { m_skipFinalSnapshotHasBeenSet = true; m_skipFinalSnapshot = value; }
    inline DeleteDBInstanceRequest& WithSkipFinalSnapshot(bool value) { SetSkipFinalSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The DBSnapshotIdentifier of the new DBSnapshot created when
     * SkipFinalSnapshot is set to <code>false</code>.</p>  <p>Specifying this
     * parameter and also setting the SkipFinalShapshot parameter to true results in an
     * error.</p>  <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters or
     * numbers.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> <li>
     * <p>Cannot be specified when deleting a Read Replica.</p> </li> </ul>
     */
    inline const Aws::String& GetFinalDBSnapshotIdentifier() const { return m_finalDBSnapshotIdentifier; }
    inline bool FinalDBSnapshotIdentifierHasBeenSet() const { return m_finalDBSnapshotIdentifierHasBeenSet; }
    template<typename FinalDBSnapshotIdentifierT = Aws::String>
    void SetFinalDBSnapshotIdentifier(FinalDBSnapshotIdentifierT&& value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier = std::forward<FinalDBSnapshotIdentifierT>(value); }
    template<typename FinalDBSnapshotIdentifierT = Aws::String>
    DeleteDBInstanceRequest& WithFinalDBSnapshotIdentifier(FinalDBSnapshotIdentifierT&& value) { SetFinalDBSnapshotIdentifier(std::forward<FinalDBSnapshotIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    bool m_skipFinalSnapshot{false};
    bool m_skipFinalSnapshotHasBeenSet = false;

    Aws::String m_finalDBSnapshotIdentifier;
    bool m_finalDBSnapshotIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
