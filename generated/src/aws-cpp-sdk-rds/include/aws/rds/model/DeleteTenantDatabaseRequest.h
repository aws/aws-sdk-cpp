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
    AWS_RDS_API DeleteTenantDatabaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTenantDatabase"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The user-supplied identifier for the DB instance that contains the tenant
     * database that you want to delete.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The user-supplied identifier for the DB instance that contains the tenant
     * database that you want to delete.</p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The user-supplied identifier for the DB instance that contains the tenant
     * database that you want to delete.</p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The user-supplied identifier for the DB instance that contains the tenant
     * database that you want to delete.</p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The user-supplied identifier for the DB instance that contains the tenant
     * database that you want to delete.</p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The user-supplied identifier for the DB instance that contains the tenant
     * database that you want to delete.</p>
     */
    inline DeleteTenantDatabaseRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The user-supplied identifier for the DB instance that contains the tenant
     * database that you want to delete.</p>
     */
    inline DeleteTenantDatabaseRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The user-supplied identifier for the DB instance that contains the tenant
     * database that you want to delete.</p>
     */
    inline DeleteTenantDatabaseRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The user-supplied name of the tenant database that you want to remove from
     * your DB instance. Amazon RDS deletes the tenant database with this name. This
     * parameter isn’t case-sensitive.</p>
     */
    inline const Aws::String& GetTenantDBName() const{ return m_tenantDBName; }

    /**
     * <p>The user-supplied name of the tenant database that you want to remove from
     * your DB instance. Amazon RDS deletes the tenant database with this name. This
     * parameter isn’t case-sensitive.</p>
     */
    inline bool TenantDBNameHasBeenSet() const { return m_tenantDBNameHasBeenSet; }

    /**
     * <p>The user-supplied name of the tenant database that you want to remove from
     * your DB instance. Amazon RDS deletes the tenant database with this name. This
     * parameter isn’t case-sensitive.</p>
     */
    inline void SetTenantDBName(const Aws::String& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = value; }

    /**
     * <p>The user-supplied name of the tenant database that you want to remove from
     * your DB instance. Amazon RDS deletes the tenant database with this name. This
     * parameter isn’t case-sensitive.</p>
     */
    inline void SetTenantDBName(Aws::String&& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = std::move(value); }

    /**
     * <p>The user-supplied name of the tenant database that you want to remove from
     * your DB instance. Amazon RDS deletes the tenant database with this name. This
     * parameter isn’t case-sensitive.</p>
     */
    inline void SetTenantDBName(const char* value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName.assign(value); }

    /**
     * <p>The user-supplied name of the tenant database that you want to remove from
     * your DB instance. Amazon RDS deletes the tenant database with this name. This
     * parameter isn’t case-sensitive.</p>
     */
    inline DeleteTenantDatabaseRequest& WithTenantDBName(const Aws::String& value) { SetTenantDBName(value); return *this;}

    /**
     * <p>The user-supplied name of the tenant database that you want to remove from
     * your DB instance. Amazon RDS deletes the tenant database with this name. This
     * parameter isn’t case-sensitive.</p>
     */
    inline DeleteTenantDatabaseRequest& WithTenantDBName(Aws::String&& value) { SetTenantDBName(std::move(value)); return *this;}

    /**
     * <p>The user-supplied name of the tenant database that you want to remove from
     * your DB instance. Amazon RDS deletes the tenant database with this name. This
     * parameter isn’t case-sensitive.</p>
     */
    inline DeleteTenantDatabaseRequest& WithTenantDBName(const char* value) { SetTenantDBName(value); return *this;}


    /**
     * <p>Specifies whether to skip the creation of a final DB snapshot before removing
     * the tenant database from your DB instance. If you enable this parameter, RDS
     * doesn't create a DB snapshot. If you don't enable this parameter, RDS creates a
     * DB snapshot before it deletes the tenant database. By default, RDS doesn't skip
     * the final snapshot. If you don't enable this parameter, you must specify the
     * <code>FinalDBSnapshotIdentifier</code> parameter.</p>
     */
    inline bool GetSkipFinalSnapshot() const{ return m_skipFinalSnapshot; }

    /**
     * <p>Specifies whether to skip the creation of a final DB snapshot before removing
     * the tenant database from your DB instance. If you enable this parameter, RDS
     * doesn't create a DB snapshot. If you don't enable this parameter, RDS creates a
     * DB snapshot before it deletes the tenant database. By default, RDS doesn't skip
     * the final snapshot. If you don't enable this parameter, you must specify the
     * <code>FinalDBSnapshotIdentifier</code> parameter.</p>
     */
    inline bool SkipFinalSnapshotHasBeenSet() const { return m_skipFinalSnapshotHasBeenSet; }

    /**
     * <p>Specifies whether to skip the creation of a final DB snapshot before removing
     * the tenant database from your DB instance. If you enable this parameter, RDS
     * doesn't create a DB snapshot. If you don't enable this parameter, RDS creates a
     * DB snapshot before it deletes the tenant database. By default, RDS doesn't skip
     * the final snapshot. If you don't enable this parameter, you must specify the
     * <code>FinalDBSnapshotIdentifier</code> parameter.</p>
     */
    inline void SetSkipFinalSnapshot(bool value) { m_skipFinalSnapshotHasBeenSet = true; m_skipFinalSnapshot = value; }

    /**
     * <p>Specifies whether to skip the creation of a final DB snapshot before removing
     * the tenant database from your DB instance. If you enable this parameter, RDS
     * doesn't create a DB snapshot. If you don't enable this parameter, RDS creates a
     * DB snapshot before it deletes the tenant database. By default, RDS doesn't skip
     * the final snapshot. If you don't enable this parameter, you must specify the
     * <code>FinalDBSnapshotIdentifier</code> parameter.</p>
     */
    inline DeleteTenantDatabaseRequest& WithSkipFinalSnapshot(bool value) { SetSkipFinalSnapshot(value); return *this;}


    /**
     * <p>The <code>DBSnapshotIdentifier</code> of the new <code>DBSnapshot</code>
     * created when the <code>SkipFinalSnapshot</code> parameter is disabled.</p>
     *  <p>If you enable this parameter and also enable
     * <code>SkipFinalShapshot</code>, the command results in an error.</p> 
     */
    inline const Aws::String& GetFinalDBSnapshotIdentifier() const{ return m_finalDBSnapshotIdentifier; }

    /**
     * <p>The <code>DBSnapshotIdentifier</code> of the new <code>DBSnapshot</code>
     * created when the <code>SkipFinalSnapshot</code> parameter is disabled.</p>
     *  <p>If you enable this parameter and also enable
     * <code>SkipFinalShapshot</code>, the command results in an error.</p> 
     */
    inline bool FinalDBSnapshotIdentifierHasBeenSet() const { return m_finalDBSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The <code>DBSnapshotIdentifier</code> of the new <code>DBSnapshot</code>
     * created when the <code>SkipFinalSnapshot</code> parameter is disabled.</p>
     *  <p>If you enable this parameter and also enable
     * <code>SkipFinalShapshot</code>, the command results in an error.</p> 
     */
    inline void SetFinalDBSnapshotIdentifier(const Aws::String& value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier = value; }

    /**
     * <p>The <code>DBSnapshotIdentifier</code> of the new <code>DBSnapshot</code>
     * created when the <code>SkipFinalSnapshot</code> parameter is disabled.</p>
     *  <p>If you enable this parameter and also enable
     * <code>SkipFinalShapshot</code>, the command results in an error.</p> 
     */
    inline void SetFinalDBSnapshotIdentifier(Aws::String&& value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier = std::move(value); }

    /**
     * <p>The <code>DBSnapshotIdentifier</code> of the new <code>DBSnapshot</code>
     * created when the <code>SkipFinalSnapshot</code> parameter is disabled.</p>
     *  <p>If you enable this parameter and also enable
     * <code>SkipFinalShapshot</code>, the command results in an error.</p> 
     */
    inline void SetFinalDBSnapshotIdentifier(const char* value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier.assign(value); }

    /**
     * <p>The <code>DBSnapshotIdentifier</code> of the new <code>DBSnapshot</code>
     * created when the <code>SkipFinalSnapshot</code> parameter is disabled.</p>
     *  <p>If you enable this parameter and also enable
     * <code>SkipFinalShapshot</code>, the command results in an error.</p> 
     */
    inline DeleteTenantDatabaseRequest& WithFinalDBSnapshotIdentifier(const Aws::String& value) { SetFinalDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The <code>DBSnapshotIdentifier</code> of the new <code>DBSnapshot</code>
     * created when the <code>SkipFinalSnapshot</code> parameter is disabled.</p>
     *  <p>If you enable this parameter and also enable
     * <code>SkipFinalShapshot</code>, the command results in an error.</p> 
     */
    inline DeleteTenantDatabaseRequest& WithFinalDBSnapshotIdentifier(Aws::String&& value) { SetFinalDBSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>DBSnapshotIdentifier</code> of the new <code>DBSnapshot</code>
     * created when the <code>SkipFinalSnapshot</code> parameter is disabled.</p>
     *  <p>If you enable this parameter and also enable
     * <code>SkipFinalShapshot</code>, the command results in an error.</p> 
     */
    inline DeleteTenantDatabaseRequest& WithFinalDBSnapshotIdentifier(const char* value) { SetFinalDBSnapshotIdentifier(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_tenantDBName;
    bool m_tenantDBNameHasBeenSet = false;

    bool m_skipFinalSnapshot;
    bool m_skipFinalSnapshotHasBeenSet = false;

    Aws::String m_finalDBSnapshotIdentifier;
    bool m_finalDBSnapshotIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
