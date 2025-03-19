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
  class DeleteDBClusterRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API DeleteDBClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBCluster"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    DeleteDBClusterRequest& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Determines whether a final DB cluster snapshot is created before the DB
     * cluster is deleted. If <code>true</code> is specified, no DB cluster snapshot is
     * created. If <code>false</code> is specified, a DB cluster snapshot is created
     * before the DB cluster is deleted.</p>  <p>You must specify a
     * <code>FinalDBSnapshotIdentifier</code> parameter if
     * <code>SkipFinalSnapshot</code> is <code>false</code>.</p>  <p>Default:
     * <code>false</code> </p>
     */
    inline bool GetSkipFinalSnapshot() const { return m_skipFinalSnapshot; }
    inline bool SkipFinalSnapshotHasBeenSet() const { return m_skipFinalSnapshotHasBeenSet; }
    inline void SetSkipFinalSnapshot(bool value) { m_skipFinalSnapshotHasBeenSet = true; m_skipFinalSnapshot = value; }
    inline DeleteDBClusterRequest& WithSkipFinalSnapshot(bool value) { SetSkipFinalSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is set to <code>false</code>.</p>  <p>
     * Specifying this parameter and also setting the <code>SkipFinalShapshot</code>
     * parameter to true results in an error.</p>  <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul>
     */
    inline const Aws::String& GetFinalDBSnapshotIdentifier() const { return m_finalDBSnapshotIdentifier; }
    inline bool FinalDBSnapshotIdentifierHasBeenSet() const { return m_finalDBSnapshotIdentifierHasBeenSet; }
    template<typename FinalDBSnapshotIdentifierT = Aws::String>
    void SetFinalDBSnapshotIdentifier(FinalDBSnapshotIdentifierT&& value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier = std::forward<FinalDBSnapshotIdentifierT>(value); }
    template<typename FinalDBSnapshotIdentifierT = Aws::String>
    DeleteDBClusterRequest& WithFinalDBSnapshotIdentifier(FinalDBSnapshotIdentifierT&& value) { SetFinalDBSnapshotIdentifier(std::forward<FinalDBSnapshotIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    bool m_skipFinalSnapshot{false};
    bool m_skipFinalSnapshotHasBeenSet = false;

    Aws::String m_finalDBSnapshotIdentifier;
    bool m_finalDBSnapshotIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
