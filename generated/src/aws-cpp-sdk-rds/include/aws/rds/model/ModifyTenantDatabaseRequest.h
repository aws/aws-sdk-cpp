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
    AWS_RDS_API ModifyTenantDatabaseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyTenantDatabase"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the DB instance that contains the tenant database that you
     * are modifying. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must match the identifier of an existing DB instance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    template<typename DBInstanceIdentifierT = Aws::String>
    void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value); }
    template<typename DBInstanceIdentifierT = Aws::String>
    ModifyTenantDatabaseRequest& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) { SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-supplied name of the tenant database that you want to modify. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match
     * the identifier of an existing tenant database.</p> </li> </ul>
     */
    inline const Aws::String& GetTenantDBName() const { return m_tenantDBName; }
    inline bool TenantDBNameHasBeenSet() const { return m_tenantDBNameHasBeenSet; }
    template<typename TenantDBNameT = Aws::String>
    void SetTenantDBName(TenantDBNameT&& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = std::forward<TenantDBNameT>(value); }
    template<typename TenantDBNameT = Aws::String>
    ModifyTenantDatabaseRequest& WithTenantDBName(TenantDBNameT&& value) { SetTenantDBName(std::forward<TenantDBNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetMasterUserPassword() const { return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    template<typename MasterUserPasswordT = Aws::String>
    void SetMasterUserPassword(MasterUserPasswordT&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::forward<MasterUserPasswordT>(value); }
    template<typename MasterUserPasswordT = Aws::String>
    ModifyTenantDatabaseRequest& WithMasterUserPassword(MasterUserPasswordT&& value) { SetMasterUserPassword(std::forward<MasterUserPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name of the tenant database when renaming a tenant database. This
     * parameter isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Can't be
     * the string null or any other reserved word.</p> </li> <li> <p>Can't be longer
     * than 8 characters.</p> </li> </ul>
     */
    inline const Aws::String& GetNewTenantDBName() const { return m_newTenantDBName; }
    inline bool NewTenantDBNameHasBeenSet() const { return m_newTenantDBNameHasBeenSet; }
    template<typename NewTenantDBNameT = Aws::String>
    void SetNewTenantDBName(NewTenantDBNameT&& value) { m_newTenantDBNameHasBeenSet = true; m_newTenantDBName = std::forward<NewTenantDBNameT>(value); }
    template<typename NewTenantDBNameT = Aws::String>
    ModifyTenantDatabaseRequest& WithNewTenantDBName(NewTenantDBNameT&& value) { SetNewTenantDBName(std::forward<NewTenantDBNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to manage the master user password with Amazon Web Services
     * Secrets Manager.</p> <p>If the tenant database doesn't manage the master user
     * password with Amazon Web Services Secrets Manager, you can turn on this
     * management. In this case, you can't specify <code>MasterUserPassword</code>.</p>
     * <p>If the tenant database already manages the master user password with Amazon
     * Web Services Secrets Manager, and you specify that the master user password is
     * not managed with Amazon Web Services Secrets Manager, then you must specify
     * <code>MasterUserPassword</code>. In this case, Amazon RDS deletes the secret and
     * uses the new password for the master user specified by
     * <code>MasterUserPassword</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Can't manage the master
     * user password with Amazon Web Services Secrets Manager if
     * <code>MasterUserPassword</code> is specified.</p> </li> </ul>
     */
    inline bool GetManageMasterUserPassword() const { return m_manageMasterUserPassword; }
    inline bool ManageMasterUserPasswordHasBeenSet() const { return m_manageMasterUserPasswordHasBeenSet; }
    inline void SetManageMasterUserPassword(bool value) { m_manageMasterUserPasswordHasBeenSet = true; m_manageMasterUserPassword = value; }
    inline ModifyTenantDatabaseRequest& WithManageMasterUserPassword(bool value) { SetManageMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to rotate the secret managed by Amazon Web Services Secrets
     * Manager for the master user password.</p> <p>This setting is valid only if the
     * master user password is managed by RDS in Amazon Web Services Secrets Manager
     * for the DB instance. The secret value contains the updated password.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>You must apply the change
     * immediately when rotating the master user password.</p> </li> </ul>
     */
    inline bool GetRotateMasterUserPassword() const { return m_rotateMasterUserPassword; }
    inline bool RotateMasterUserPasswordHasBeenSet() const { return m_rotateMasterUserPasswordHasBeenSet; }
    inline void SetRotateMasterUserPassword(bool value) { m_rotateMasterUserPasswordHasBeenSet = true; m_rotateMasterUserPassword = value; }
    inline ModifyTenantDatabaseRequest& WithRotateMasterUserPassword(bool value) { SetRotateMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if both of the following conditions are met:</p>
     * <ul> <li> <p>The tenant database doesn't manage the master user password in
     * Amazon Web Services Secrets Manager.</p> <p>If the tenant database already
     * manages the master user password in Amazon Web Services Secrets Manager, you
     * can't change the KMS key used to encrypt the secret.</p> </li> <li> <p>You're
     * turning on <code>ManageMasterUserPassword</code> to manage the master user
     * password in Amazon Web Services Secrets Manager.</p> <p>If you're turning on
     * <code>ManageMasterUserPassword</code> and don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a self-managed KMS key.</p> </li>
     * </ul> <p>The Amazon Web Services KMS key identifier is any of the following:</p>
     * <ul> <li> <p>Key ARN</p> </li> <li> <p>Key ID</p> </li> <li> <p>Alias ARN</p>
     * </li> <li> <p>Alias name for the KMS key</p> </li> </ul> <p>To use a KMS key in
     * a different Amazon Web Services account, specify the key ARN or alias ARN.</p>
     * <p>A default KMS key exists for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetMasterUserSecretKmsKeyId() const { return m_masterUserSecretKmsKeyId; }
    inline bool MasterUserSecretKmsKeyIdHasBeenSet() const { return m_masterUserSecretKmsKeyIdHasBeenSet; }
    template<typename MasterUserSecretKmsKeyIdT = Aws::String>
    void SetMasterUserSecretKmsKeyId(MasterUserSecretKmsKeyIdT&& value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId = std::forward<MasterUserSecretKmsKeyIdT>(value); }
    template<typename MasterUserSecretKmsKeyIdT = Aws::String>
    ModifyTenantDatabaseRequest& WithMasterUserSecretKmsKeyId(MasterUserSecretKmsKeyIdT&& value) { SetMasterUserSecretKmsKeyId(std::forward<MasterUserSecretKmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_tenantDBName;
    bool m_tenantDBNameHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_newTenantDBName;
    bool m_newTenantDBNameHasBeenSet = false;

    bool m_manageMasterUserPassword{false};
    bool m_manageMasterUserPasswordHasBeenSet = false;

    bool m_rotateMasterUserPassword{false};
    bool m_rotateMasterUserPasswordHasBeenSet = false;

    Aws::String m_masterUserSecretKmsKeyId;
    bool m_masterUserSecretKmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
