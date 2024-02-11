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
  class ModifyTenantDatabaseRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyTenantDatabaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyTenantDatabase"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the DB instance that contains the tenant database that you
     * are modifying. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must match the identifier of an existing DB instance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The identifier of the DB instance that contains the tenant database that you
     * are modifying. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must match the identifier of an existing DB instance.</p> </li> </ul>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the DB instance that contains the tenant database that you
     * are modifying. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must match the identifier of an existing DB instance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The identifier of the DB instance that contains the tenant database that you
     * are modifying. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must match the identifier of an existing DB instance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The identifier of the DB instance that contains the tenant database that you
     * are modifying. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must match the identifier of an existing DB instance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The identifier of the DB instance that contains the tenant database that you
     * are modifying. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must match the identifier of an existing DB instance.</p> </li> </ul>
     */
    inline ModifyTenantDatabaseRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB instance that contains the tenant database that you
     * are modifying. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must match the identifier of an existing DB instance.</p> </li> </ul>
     */
    inline ModifyTenantDatabaseRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the DB instance that contains the tenant database that you
     * are modifying. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must match the identifier of an existing DB instance.</p> </li> </ul>
     */
    inline ModifyTenantDatabaseRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The user-supplied name of the tenant database that you want to modify. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match
     * the identifier of an existing tenant database.</p> </li> </ul>
     */
    inline const Aws::String& GetTenantDBName() const{ return m_tenantDBName; }

    /**
     * <p>The user-supplied name of the tenant database that you want to modify. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match
     * the identifier of an existing tenant database.</p> </li> </ul>
     */
    inline bool TenantDBNameHasBeenSet() const { return m_tenantDBNameHasBeenSet; }

    /**
     * <p>The user-supplied name of the tenant database that you want to modify. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match
     * the identifier of an existing tenant database.</p> </li> </ul>
     */
    inline void SetTenantDBName(const Aws::String& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = value; }

    /**
     * <p>The user-supplied name of the tenant database that you want to modify. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match
     * the identifier of an existing tenant database.</p> </li> </ul>
     */
    inline void SetTenantDBName(Aws::String&& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = std::move(value); }

    /**
     * <p>The user-supplied name of the tenant database that you want to modify. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match
     * the identifier of an existing tenant database.</p> </li> </ul>
     */
    inline void SetTenantDBName(const char* value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName.assign(value); }

    /**
     * <p>The user-supplied name of the tenant database that you want to modify. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match
     * the identifier of an existing tenant database.</p> </li> </ul>
     */
    inline ModifyTenantDatabaseRequest& WithTenantDBName(const Aws::String& value) { SetTenantDBName(value); return *this;}

    /**
     * <p>The user-supplied name of the tenant database that you want to modify. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match
     * the identifier of an existing tenant database.</p> </li> </ul>
     */
    inline ModifyTenantDatabaseRequest& WithTenantDBName(Aws::String&& value) { SetTenantDBName(std::move(value)); return *this;}

    /**
     * <p>The user-supplied name of the tenant database that you want to modify. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match
     * the identifier of an existing tenant database.</p> </li> </ul>
     */
    inline ModifyTenantDatabaseRequest& WithTenantDBName(const char* value) { SetTenantDBName(value); return *this;}


    /**
     * <p>The new password for the master user of the specified tenant database in your
     * DB instance.</p>  <p>Amazon RDS operations never return the password, so
     * this action provides a way to regain access to a tenant database user if the
     * password is lost. This includes restoring privileges that might have been
     * accidentally revoked.</p>  <p>Constraints:</p> <ul> <li> <p>Can include
     * any printable ASCII character except <code>/</code>, <code>"</code> (double
     * quote), <code>@</code>, <code>&amp;</code> (ampersand), and <code>'</code>
     * (single quote).</p> </li> </ul> <p>Length constraints:</p> <ul> <li> <p>Must
     * contain between 8 and 30 characters. </p> </li> </ul>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The new password for the master user of the specified tenant database in your
     * DB instance.</p>  <p>Amazon RDS operations never return the password, so
     * this action provides a way to regain access to a tenant database user if the
     * password is lost. This includes restoring privileges that might have been
     * accidentally revoked.</p>  <p>Constraints:</p> <ul> <li> <p>Can include
     * any printable ASCII character except <code>/</code>, <code>"</code> (double
     * quote), <code>@</code>, <code>&amp;</code> (ampersand), and <code>'</code>
     * (single quote).</p> </li> </ul> <p>Length constraints:</p> <ul> <li> <p>Must
     * contain between 8 and 30 characters. </p> </li> </ul>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The new password for the master user of the specified tenant database in your
     * DB instance.</p>  <p>Amazon RDS operations never return the password, so
     * this action provides a way to regain access to a tenant database user if the
     * password is lost. This includes restoring privileges that might have been
     * accidentally revoked.</p>  <p>Constraints:</p> <ul> <li> <p>Can include
     * any printable ASCII character except <code>/</code>, <code>"</code> (double
     * quote), <code>@</code>, <code>&amp;</code> (ampersand), and <code>'</code>
     * (single quote).</p> </li> </ul> <p>Length constraints:</p> <ul> <li> <p>Must
     * contain between 8 and 30 characters. </p> </li> </ul>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The new password for the master user of the specified tenant database in your
     * DB instance.</p>  <p>Amazon RDS operations never return the password, so
     * this action provides a way to regain access to a tenant database user if the
     * password is lost. This includes restoring privileges that might have been
     * accidentally revoked.</p>  <p>Constraints:</p> <ul> <li> <p>Can include
     * any printable ASCII character except <code>/</code>, <code>"</code> (double
     * quote), <code>@</code>, <code>&amp;</code> (ampersand), and <code>'</code>
     * (single quote).</p> </li> </ul> <p>Length constraints:</p> <ul> <li> <p>Must
     * contain between 8 and 30 characters. </p> </li> </ul>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The new password for the master user of the specified tenant database in your
     * DB instance.</p>  <p>Amazon RDS operations never return the password, so
     * this action provides a way to regain access to a tenant database user if the
     * password is lost. This includes restoring privileges that might have been
     * accidentally revoked.</p>  <p>Constraints:</p> <ul> <li> <p>Can include
     * any printable ASCII character except <code>/</code>, <code>"</code> (double
     * quote), <code>@</code>, <code>&amp;</code> (ampersand), and <code>'</code>
     * (single quote).</p> </li> </ul> <p>Length constraints:</p> <ul> <li> <p>Must
     * contain between 8 and 30 characters. </p> </li> </ul>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The new password for the master user of the specified tenant database in your
     * DB instance.</p>  <p>Amazon RDS operations never return the password, so
     * this action provides a way to regain access to a tenant database user if the
     * password is lost. This includes restoring privileges that might have been
     * accidentally revoked.</p>  <p>Constraints:</p> <ul> <li> <p>Can include
     * any printable ASCII character except <code>/</code>, <code>"</code> (double
     * quote), <code>@</code>, <code>&amp;</code> (ampersand), and <code>'</code>
     * (single quote).</p> </li> </ul> <p>Length constraints:</p> <ul> <li> <p>Must
     * contain between 8 and 30 characters. </p> </li> </ul>
     */
    inline ModifyTenantDatabaseRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The new password for the master user of the specified tenant database in your
     * DB instance.</p>  <p>Amazon RDS operations never return the password, so
     * this action provides a way to regain access to a tenant database user if the
     * password is lost. This includes restoring privileges that might have been
     * accidentally revoked.</p>  <p>Constraints:</p> <ul> <li> <p>Can include
     * any printable ASCII character except <code>/</code>, <code>"</code> (double
     * quote), <code>@</code>, <code>&amp;</code> (ampersand), and <code>'</code>
     * (single quote).</p> </li> </ul> <p>Length constraints:</p> <ul> <li> <p>Must
     * contain between 8 and 30 characters. </p> </li> </ul>
     */
    inline ModifyTenantDatabaseRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The new password for the master user of the specified tenant database in your
     * DB instance.</p>  <p>Amazon RDS operations never return the password, so
     * this action provides a way to regain access to a tenant database user if the
     * password is lost. This includes restoring privileges that might have been
     * accidentally revoked.</p>  <p>Constraints:</p> <ul> <li> <p>Can include
     * any printable ASCII character except <code>/</code>, <code>"</code> (double
     * quote), <code>@</code>, <code>&amp;</code> (ampersand), and <code>'</code>
     * (single quote).</p> </li> </ul> <p>Length constraints:</p> <ul> <li> <p>Must
     * contain between 8 and 30 characters. </p> </li> </ul>
     */
    inline ModifyTenantDatabaseRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>The new name of the tenant database when renaming a tenant database. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Can't be
     * the string null or any other reserved word.</p> </li> <li> <p>Can't be longer
     * than 8 characters.</p> </li> </ul>
     */
    inline const Aws::String& GetNewTenantDBName() const{ return m_newTenantDBName; }

    /**
     * <p>The new name of the tenant database when renaming a tenant database. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Can't be
     * the string null or any other reserved word.</p> </li> <li> <p>Can't be longer
     * than 8 characters.</p> </li> </ul>
     */
    inline bool NewTenantDBNameHasBeenSet() const { return m_newTenantDBNameHasBeenSet; }

    /**
     * <p>The new name of the tenant database when renaming a tenant database. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Can't be
     * the string null or any other reserved word.</p> </li> <li> <p>Can't be longer
     * than 8 characters.</p> </li> </ul>
     */
    inline void SetNewTenantDBName(const Aws::String& value) { m_newTenantDBNameHasBeenSet = true; m_newTenantDBName = value; }

    /**
     * <p>The new name of the tenant database when renaming a tenant database. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Can't be
     * the string null or any other reserved word.</p> </li> <li> <p>Can't be longer
     * than 8 characters.</p> </li> </ul>
     */
    inline void SetNewTenantDBName(Aws::String&& value) { m_newTenantDBNameHasBeenSet = true; m_newTenantDBName = std::move(value); }

    /**
     * <p>The new name of the tenant database when renaming a tenant database. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Can't be
     * the string null or any other reserved word.</p> </li> <li> <p>Can't be longer
     * than 8 characters.</p> </li> </ul>
     */
    inline void SetNewTenantDBName(const char* value) { m_newTenantDBNameHasBeenSet = true; m_newTenantDBName.assign(value); }

    /**
     * <p>The new name of the tenant database when renaming a tenant database. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Can't be
     * the string null or any other reserved word.</p> </li> <li> <p>Can't be longer
     * than 8 characters.</p> </li> </ul>
     */
    inline ModifyTenantDatabaseRequest& WithNewTenantDBName(const Aws::String& value) { SetNewTenantDBName(value); return *this;}

    /**
     * <p>The new name of the tenant database when renaming a tenant database. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Can't be
     * the string null or any other reserved word.</p> </li> <li> <p>Can't be longer
     * than 8 characters.</p> </li> </ul>
     */
    inline ModifyTenantDatabaseRequest& WithNewTenantDBName(Aws::String&& value) { SetNewTenantDBName(std::move(value)); return *this;}

    /**
     * <p>The new name of the tenant database when renaming a tenant database. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Can't be
     * the string null or any other reserved word.</p> </li> <li> <p>Can't be longer
     * than 8 characters.</p> </li> </ul>
     */
    inline ModifyTenantDatabaseRequest& WithNewTenantDBName(const char* value) { SetNewTenantDBName(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_tenantDBName;
    bool m_tenantDBNameHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_newTenantDBName;
    bool m_newTenantDBNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
