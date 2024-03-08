/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/TenantDatabasePendingModifiedValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>A tenant database in the DB instance. This data type is an element in the
   * response to the <code>DescribeTenantDatabases</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/TenantDatabase">AWS
   * API Reference</a></p>
   */
  class TenantDatabase
  {
  public:
    AWS_RDS_API TenantDatabase();
    AWS_RDS_API TenantDatabase(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API TenantDatabase& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The creation time of the tenant database.</p>
     */
    inline const Aws::Utils::DateTime& GetTenantDatabaseCreateTime() const{ return m_tenantDatabaseCreateTime; }

    /**
     * <p>The creation time of the tenant database.</p>
     */
    inline bool TenantDatabaseCreateTimeHasBeenSet() const { return m_tenantDatabaseCreateTimeHasBeenSet; }

    /**
     * <p>The creation time of the tenant database.</p>
     */
    inline void SetTenantDatabaseCreateTime(const Aws::Utils::DateTime& value) { m_tenantDatabaseCreateTimeHasBeenSet = true; m_tenantDatabaseCreateTime = value; }

    /**
     * <p>The creation time of the tenant database.</p>
     */
    inline void SetTenantDatabaseCreateTime(Aws::Utils::DateTime&& value) { m_tenantDatabaseCreateTimeHasBeenSet = true; m_tenantDatabaseCreateTime = std::move(value); }

    /**
     * <p>The creation time of the tenant database.</p>
     */
    inline TenantDatabase& WithTenantDatabaseCreateTime(const Aws::Utils::DateTime& value) { SetTenantDatabaseCreateTime(value); return *this;}

    /**
     * <p>The creation time of the tenant database.</p>
     */
    inline TenantDatabase& WithTenantDatabaseCreateTime(Aws::Utils::DateTime&& value) { SetTenantDatabaseCreateTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the DB instance that contains the tenant database.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The ID of the DB instance that contains the tenant database.</p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The ID of the DB instance that contains the tenant database.</p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The ID of the DB instance that contains the tenant database.</p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The ID of the DB instance that contains the tenant database.</p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The ID of the DB instance that contains the tenant database.</p>
     */
    inline TenantDatabase& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The ID of the DB instance that contains the tenant database.</p>
     */
    inline TenantDatabase& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the DB instance that contains the tenant database.</p>
     */
    inline TenantDatabase& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The database name of the tenant database.</p>
     */
    inline const Aws::String& GetTenantDBName() const{ return m_tenantDBName; }

    /**
     * <p>The database name of the tenant database.</p>
     */
    inline bool TenantDBNameHasBeenSet() const { return m_tenantDBNameHasBeenSet; }

    /**
     * <p>The database name of the tenant database.</p>
     */
    inline void SetTenantDBName(const Aws::String& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = value; }

    /**
     * <p>The database name of the tenant database.</p>
     */
    inline void SetTenantDBName(Aws::String&& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = std::move(value); }

    /**
     * <p>The database name of the tenant database.</p>
     */
    inline void SetTenantDBName(const char* value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName.assign(value); }

    /**
     * <p>The database name of the tenant database.</p>
     */
    inline TenantDatabase& WithTenantDBName(const Aws::String& value) { SetTenantDBName(value); return *this;}

    /**
     * <p>The database name of the tenant database.</p>
     */
    inline TenantDatabase& WithTenantDBName(Aws::String&& value) { SetTenantDBName(std::move(value)); return *this;}

    /**
     * <p>The database name of the tenant database.</p>
     */
    inline TenantDatabase& WithTenantDBName(const char* value) { SetTenantDBName(value); return *this;}


    /**
     * <p>The status of the tenant database.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the tenant database.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the tenant database.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the tenant database.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the tenant database.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the tenant database.</p>
     */
    inline TenantDatabase& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the tenant database.</p>
     */
    inline TenantDatabase& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the tenant database.</p>
     */
    inline TenantDatabase& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The master username of the tenant database.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>The master username of the tenant database.</p>
     */
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

    /**
     * <p>The master username of the tenant database.</p>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The master username of the tenant database.</p>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>The master username of the tenant database.</p>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>The master username of the tenant database.</p>
     */
    inline TenantDatabase& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The master username of the tenant database.</p>
     */
    inline TenantDatabase& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>The master username of the tenant database.</p>
     */
    inline TenantDatabase& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance.</p>
     */
    inline const Aws::String& GetDbiResourceId() const{ return m_dbiResourceId; }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance.</p>
     */
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance.</p>
     */
    inline void SetDbiResourceId(const Aws::String& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance.</p>
     */
    inline void SetDbiResourceId(Aws::String&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::move(value); }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance.</p>
     */
    inline void SetDbiResourceId(const char* value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId.assign(value); }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance.</p>
     */
    inline TenantDatabase& WithDbiResourceId(const Aws::String& value) { SetDbiResourceId(value); return *this;}

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance.</p>
     */
    inline TenantDatabase& WithDbiResourceId(Aws::String&& value) { SetDbiResourceId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance.</p>
     */
    inline TenantDatabase& WithDbiResourceId(const char* value) { SetDbiResourceId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the tenant
     * database.</p>
     */
    inline const Aws::String& GetTenantDatabaseResourceId() const{ return m_tenantDatabaseResourceId; }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the tenant
     * database.</p>
     */
    inline bool TenantDatabaseResourceIdHasBeenSet() const { return m_tenantDatabaseResourceIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the tenant
     * database.</p>
     */
    inline void SetTenantDatabaseResourceId(const Aws::String& value) { m_tenantDatabaseResourceIdHasBeenSet = true; m_tenantDatabaseResourceId = value; }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the tenant
     * database.</p>
     */
    inline void SetTenantDatabaseResourceId(Aws::String&& value) { m_tenantDatabaseResourceIdHasBeenSet = true; m_tenantDatabaseResourceId = std::move(value); }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the tenant
     * database.</p>
     */
    inline void SetTenantDatabaseResourceId(const char* value) { m_tenantDatabaseResourceIdHasBeenSet = true; m_tenantDatabaseResourceId.assign(value); }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the tenant
     * database.</p>
     */
    inline TenantDatabase& WithTenantDatabaseResourceId(const Aws::String& value) { SetTenantDatabaseResourceId(value); return *this;}

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the tenant
     * database.</p>
     */
    inline TenantDatabase& WithTenantDatabaseResourceId(Aws::String&& value) { SetTenantDatabaseResourceId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the tenant
     * database.</p>
     */
    inline TenantDatabase& WithTenantDatabaseResourceId(const char* value) { SetTenantDatabaseResourceId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the tenant database.</p>
     */
    inline const Aws::String& GetTenantDatabaseARN() const{ return m_tenantDatabaseARN; }

    /**
     * <p>The Amazon Resource Name (ARN) for the tenant database.</p>
     */
    inline bool TenantDatabaseARNHasBeenSet() const { return m_tenantDatabaseARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the tenant database.</p>
     */
    inline void SetTenantDatabaseARN(const Aws::String& value) { m_tenantDatabaseARNHasBeenSet = true; m_tenantDatabaseARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the tenant database.</p>
     */
    inline void SetTenantDatabaseARN(Aws::String&& value) { m_tenantDatabaseARNHasBeenSet = true; m_tenantDatabaseARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the tenant database.</p>
     */
    inline void SetTenantDatabaseARN(const char* value) { m_tenantDatabaseARNHasBeenSet = true; m_tenantDatabaseARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the tenant database.</p>
     */
    inline TenantDatabase& WithTenantDatabaseARN(const Aws::String& value) { SetTenantDatabaseARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the tenant database.</p>
     */
    inline TenantDatabase& WithTenantDatabaseARN(Aws::String&& value) { SetTenantDatabaseARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the tenant database.</p>
     */
    inline TenantDatabase& WithTenantDatabaseARN(const char* value) { SetTenantDatabaseARN(value); return *this;}


    /**
     * <p>The character set of the tenant database.</p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }

    /**
     * <p>The character set of the tenant database.</p>
     */
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }

    /**
     * <p>The character set of the tenant database.</p>
     */
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /**
     * <p>The character set of the tenant database.</p>
     */
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::move(value); }

    /**
     * <p>The character set of the tenant database.</p>
     */
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }

    /**
     * <p>The character set of the tenant database.</p>
     */
    inline TenantDatabase& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}

    /**
     * <p>The character set of the tenant database.</p>
     */
    inline TenantDatabase& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(std::move(value)); return *this;}

    /**
     * <p>The character set of the tenant database.</p>
     */
    inline TenantDatabase& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}


    /**
     * <p>The <code>NCHAR</code> character set name of the tenant database.</p>
     */
    inline const Aws::String& GetNcharCharacterSetName() const{ return m_ncharCharacterSetName; }

    /**
     * <p>The <code>NCHAR</code> character set name of the tenant database.</p>
     */
    inline bool NcharCharacterSetNameHasBeenSet() const { return m_ncharCharacterSetNameHasBeenSet; }

    /**
     * <p>The <code>NCHAR</code> character set name of the tenant database.</p>
     */
    inline void SetNcharCharacterSetName(const Aws::String& value) { m_ncharCharacterSetNameHasBeenSet = true; m_ncharCharacterSetName = value; }

    /**
     * <p>The <code>NCHAR</code> character set name of the tenant database.</p>
     */
    inline void SetNcharCharacterSetName(Aws::String&& value) { m_ncharCharacterSetNameHasBeenSet = true; m_ncharCharacterSetName = std::move(value); }

    /**
     * <p>The <code>NCHAR</code> character set name of the tenant database.</p>
     */
    inline void SetNcharCharacterSetName(const char* value) { m_ncharCharacterSetNameHasBeenSet = true; m_ncharCharacterSetName.assign(value); }

    /**
     * <p>The <code>NCHAR</code> character set name of the tenant database.</p>
     */
    inline TenantDatabase& WithNcharCharacterSetName(const Aws::String& value) { SetNcharCharacterSetName(value); return *this;}

    /**
     * <p>The <code>NCHAR</code> character set name of the tenant database.</p>
     */
    inline TenantDatabase& WithNcharCharacterSetName(Aws::String&& value) { SetNcharCharacterSetName(std::move(value)); return *this;}

    /**
     * <p>The <code>NCHAR</code> character set name of the tenant database.</p>
     */
    inline TenantDatabase& WithNcharCharacterSetName(const char* value) { SetNcharCharacterSetName(value); return *this;}


    /**
     * <p>Specifies whether deletion protection is enabled for the DB instance.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>Specifies whether deletion protection is enabled for the DB instance.</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>Specifies whether deletion protection is enabled for the DB instance.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>Specifies whether deletion protection is enabled for the DB instance.</p>
     */
    inline TenantDatabase& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>Information about pending changes for a tenant database.</p>
     */
    inline const TenantDatabasePendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }

    /**
     * <p>Information about pending changes for a tenant database.</p>
     */
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }

    /**
     * <p>Information about pending changes for a tenant database.</p>
     */
    inline void SetPendingModifiedValues(const TenantDatabasePendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }

    /**
     * <p>Information about pending changes for a tenant database.</p>
     */
    inline void SetPendingModifiedValues(TenantDatabasePendingModifiedValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::move(value); }

    /**
     * <p>Information about pending changes for a tenant database.</p>
     */
    inline TenantDatabase& WithPendingModifiedValues(const TenantDatabasePendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}

    /**
     * <p>Information about pending changes for a tenant database.</p>
     */
    inline TenantDatabase& WithPendingModifiedValues(TenantDatabasePendingModifiedValues&& value) { SetPendingModifiedValues(std::move(value)); return *this;}


    
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    
    inline TenantDatabase& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    
    inline TenantDatabase& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    
    inline TenantDatabase& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    
    inline TenantDatabase& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }

  private:

    Aws::Utils::DateTime m_tenantDatabaseCreateTime;
    bool m_tenantDatabaseCreateTimeHasBeenSet = false;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_tenantDBName;
    bool m_tenantDBNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet = false;

    Aws::String m_tenantDatabaseResourceId;
    bool m_tenantDatabaseResourceIdHasBeenSet = false;

    Aws::String m_tenantDatabaseARN;
    bool m_tenantDatabaseARNHasBeenSet = false;

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet = false;

    Aws::String m_ncharCharacterSetName;
    bool m_ncharCharacterSetNameHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    TenantDatabasePendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
