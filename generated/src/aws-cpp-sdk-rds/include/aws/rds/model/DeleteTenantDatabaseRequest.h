/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class DeleteTenantDatabaseRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DeleteTenantDatabaseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTenantDatabase"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The user-supplied identifier for the DB instance that contains the tenant
     * database that you want to delete.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    template<typename DBInstanceIdentifierT = Aws::String>
    void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value); }
    template<typename DBInstanceIdentifierT = Aws::String>
    DeleteTenantDatabaseRequest& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) { SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-supplied name of the tenant database that you want to remove from
     * your DB instance. Amazon RDS deletes the tenant database with this name. This
     * parameter isn’t case-sensitive.</p>
     */
    inline const Aws::String& GetTenantDBName() const { return m_tenantDBName; }
    inline bool TenantDBNameHasBeenSet() const { return m_tenantDBNameHasBeenSet; }
    template<typename TenantDBNameT = Aws::String>
    void SetTenantDBName(TenantDBNameT&& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = std::forward<TenantDBNameT>(value); }
    template<typename TenantDBNameT = Aws::String>
    DeleteTenantDatabaseRequest& WithTenantDBName(TenantDBNameT&& value) { SetTenantDBName(std::forward<TenantDBNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to skip the creation of a final DB snapshot before removing
     * the tenant database from your DB instance. If you enable this parameter, RDS
     * doesn't create a DB snapshot. If you don't enable this parameter, RDS creates a
     * DB snapshot before it deletes the tenant database. By default, RDS doesn't skip
     * the final snapshot. If you don't enable this parameter, you must specify the
     * <code>FinalDBSnapshotIdentifier</code> parameter.</p>
     */
    inline bool GetSkipFinalSnapshot() const { return m_skipFinalSnapshot; }
    inline bool SkipFinalSnapshotHasBeenSet() const { return m_skipFinalSnapshotHasBeenSet; }
    inline void SetSkipFinalSnapshot(bool value) { m_skipFinalSnapshotHasBeenSet = true; m_skipFinalSnapshot = value; }
    inline DeleteTenantDatabaseRequest& WithSkipFinalSnapshot(bool value) { SetSkipFinalSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>DBSnapshotIdentifier</code> of the new <code>DBSnapshot</code>
     * created when the <code>SkipFinalSnapshot</code> parameter is disabled.</p>
     *  <p>If you enable this parameter and also enable
     * <code>SkipFinalShapshot</code>, the command results in an error.</p> 
     */
    inline const Aws::String& GetFinalDBSnapshotIdentifier() const { return m_finalDBSnapshotIdentifier; }
    inline bool FinalDBSnapshotIdentifierHasBeenSet() const { return m_finalDBSnapshotIdentifierHasBeenSet; }
    template<typename FinalDBSnapshotIdentifierT = Aws::String>
    void SetFinalDBSnapshotIdentifier(FinalDBSnapshotIdentifierT&& value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier = std::forward<FinalDBSnapshotIdentifierT>(value); }
    template<typename FinalDBSnapshotIdentifierT = Aws::String>
    DeleteTenantDatabaseRequest& WithFinalDBSnapshotIdentifier(FinalDBSnapshotIdentifierT&& value) { SetFinalDBSnapshotIdentifier(std::forward<FinalDBSnapshotIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_tenantDBName;
    bool m_tenantDBNameHasBeenSet = false;

    bool m_skipFinalSnapshot{false};
    bool m_skipFinalSnapshotHasBeenSet = false;

    Aws::String m_finalDBSnapshotIdentifier;
    bool m_finalDBSnapshotIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
