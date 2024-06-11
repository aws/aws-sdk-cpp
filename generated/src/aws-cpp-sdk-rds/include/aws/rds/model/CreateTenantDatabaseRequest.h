/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class CreateTenantDatabaseRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateTenantDatabaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTenantDatabase"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The user-supplied DB instance identifier. RDS creates your tenant database in
     * this DB instance. This parameter isn't case-sensitive.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }
    inline CreateTenantDatabaseRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}
    inline CreateTenantDatabaseRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}
    inline CreateTenantDatabaseRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-supplied name of the tenant database that you want to create in your
     * DB instance. This parameter has the same constraints as <code>DBName</code> in
     * <code>CreateDBInstance</code>.</p>
     */
    inline const Aws::String& GetTenantDBName() const{ return m_tenantDBName; }
    inline bool TenantDBNameHasBeenSet() const { return m_tenantDBNameHasBeenSet; }
    inline void SetTenantDBName(const Aws::String& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = value; }
    inline void SetTenantDBName(Aws::String&& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = std::move(value); }
    inline void SetTenantDBName(const char* value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName.assign(value); }
    inline CreateTenantDatabaseRequest& WithTenantDBName(const Aws::String& value) { SetTenantDBName(value); return *this;}
    inline CreateTenantDatabaseRequest& WithTenantDBName(Aws::String&& value) { SetTenantDBName(std::move(value)); return *this;}
    inline CreateTenantDatabaseRequest& WithTenantDBName(const char* value) { SetTenantDBName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the master user account in your tenant database. RDS creates
     * this user account in the tenant database and grants privileges to the master
     * user. This parameter is case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 16 letters, numbers, or underscores.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't be a reserved word for the
     * chosen database engine.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }
    inline CreateTenantDatabaseRequest& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}
    inline CreateTenantDatabaseRequest& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}
    inline CreateTenantDatabaseRequest& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the master user in your tenant database.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 8 to 30 characters.</p> </li> <li>
     * <p>Can include any printable ASCII character except forward slash
     * (<code>/</code>), double quote (<code>"</code>), at symbol (<code>@</code>),
     * ampersand (<code>&amp;</code>), or single quote (<code>'</code>).</p> </li>
     * </ul>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }
    inline CreateTenantDatabaseRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}
    inline CreateTenantDatabaseRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}
    inline CreateTenantDatabaseRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The character set for your tenant database. If you don't specify a value, the
     * character set name defaults to <code>AL32UTF8</code>.</p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::move(value); }
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }
    inline CreateTenantDatabaseRequest& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}
    inline CreateTenantDatabaseRequest& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(std::move(value)); return *this;}
    inline CreateTenantDatabaseRequest& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>NCHAR</code> value for the tenant database.</p>
     */
    inline const Aws::String& GetNcharCharacterSetName() const{ return m_ncharCharacterSetName; }
    inline bool NcharCharacterSetNameHasBeenSet() const { return m_ncharCharacterSetNameHasBeenSet; }
    inline void SetNcharCharacterSetName(const Aws::String& value) { m_ncharCharacterSetNameHasBeenSet = true; m_ncharCharacterSetName = value; }
    inline void SetNcharCharacterSetName(Aws::String&& value) { m_ncharCharacterSetNameHasBeenSet = true; m_ncharCharacterSetName = std::move(value); }
    inline void SetNcharCharacterSetName(const char* value) { m_ncharCharacterSetNameHasBeenSet = true; m_ncharCharacterSetName.assign(value); }
    inline CreateTenantDatabaseRequest& WithNcharCharacterSetName(const Aws::String& value) { SetNcharCharacterSetName(value); return *this;}
    inline CreateTenantDatabaseRequest& WithNcharCharacterSetName(Aws::String&& value) { SetNcharCharacterSetName(std::move(value)); return *this;}
    inline CreateTenantDatabaseRequest& WithNcharCharacterSetName(const char* value) { SetNcharCharacterSetName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateTenantDatabaseRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateTenantDatabaseRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateTenantDatabaseRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateTenantDatabaseRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_tenantDBName;
    bool m_tenantDBNameHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet = false;

    Aws::String m_ncharCharacterSetName;
    bool m_ncharCharacterSetNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
