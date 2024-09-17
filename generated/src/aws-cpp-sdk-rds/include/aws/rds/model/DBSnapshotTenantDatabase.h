/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains the details of a tenant database in a snapshot of a DB
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBSnapshotTenantDatabase">AWS
   * API Reference</a></p>
   */
  class DBSnapshotTenantDatabase
  {
  public:
    AWS_RDS_API DBSnapshotTenantDatabase();
    AWS_RDS_API DBSnapshotTenantDatabase(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBSnapshotTenantDatabase& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier for the snapshot of the DB instance.</p>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }
    inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = std::move(value); }
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }
    inline DBSnapshotTenantDatabase& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}
    inline DBSnapshotTenantDatabase& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(std::move(value)); return *this;}
    inline DBSnapshotTenantDatabase& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the DB instance that contains the tenant databases.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }
    inline DBSnapshotTenantDatabase& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}
    inline DBSnapshotTenantDatabase& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}
    inline DBSnapshotTenantDatabase& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource identifier of the source CDB instance. This identifier can't be
     * changed and is unique to an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDbiResourceId() const{ return m_dbiResourceId; }
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }
    inline void SetDbiResourceId(const Aws::String& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }
    inline void SetDbiResourceId(Aws::String&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::move(value); }
    inline void SetDbiResourceId(const char* value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId.assign(value); }
    inline DBSnapshotTenantDatabase& WithDbiResourceId(const Aws::String& value) { SetDbiResourceId(value); return *this;}
    inline DBSnapshotTenantDatabase& WithDbiResourceId(Aws::String&& value) { SetDbiResourceId(std::move(value)); return *this;}
    inline DBSnapshotTenantDatabase& WithDbiResourceId(const char* value) { SetDbiResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database engine.</p>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = std::move(value); }
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }
    inline DBSnapshotTenantDatabase& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}
    inline DBSnapshotTenantDatabase& WithEngineName(Aws::String&& value) { SetEngineName(std::move(value)); return *this;}
    inline DBSnapshotTenantDatabase& WithEngineName(const char* value) { SetEngineName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of DB snapshot.</p>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::move(value); }
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }
    inline DBSnapshotTenantDatabase& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}
    inline DBSnapshotTenantDatabase& WithSnapshotType(Aws::String&& value) { SetSnapshotType(std::move(value)); return *this;}
    inline DBSnapshotTenantDatabase& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the DB snapshot was taken, specified in Coordinated Universal Time
     * (UTC). If you copy the snapshot, the creation time changes.</p>
     */
    inline const Aws::Utils::DateTime& GetTenantDatabaseCreateTime() const{ return m_tenantDatabaseCreateTime; }
    inline bool TenantDatabaseCreateTimeHasBeenSet() const { return m_tenantDatabaseCreateTimeHasBeenSet; }
    inline void SetTenantDatabaseCreateTime(const Aws::Utils::DateTime& value) { m_tenantDatabaseCreateTimeHasBeenSet = true; m_tenantDatabaseCreateTime = value; }
    inline void SetTenantDatabaseCreateTime(Aws::Utils::DateTime&& value) { m_tenantDatabaseCreateTimeHasBeenSet = true; m_tenantDatabaseCreateTime = std::move(value); }
    inline DBSnapshotTenantDatabase& WithTenantDatabaseCreateTime(const Aws::Utils::DateTime& value) { SetTenantDatabaseCreateTime(value); return *this;}
    inline DBSnapshotTenantDatabase& WithTenantDatabaseCreateTime(Aws::Utils::DateTime&& value) { SetTenantDatabaseCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the tenant database.</p>
     */
    inline const Aws::String& GetTenantDBName() const{ return m_tenantDBName; }
    inline bool TenantDBNameHasBeenSet() const { return m_tenantDBNameHasBeenSet; }
    inline void SetTenantDBName(const Aws::String& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = value; }
    inline void SetTenantDBName(Aws::String&& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = std::move(value); }
    inline void SetTenantDBName(const char* value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName.assign(value); }
    inline DBSnapshotTenantDatabase& WithTenantDBName(const Aws::String& value) { SetTenantDBName(value); return *this;}
    inline DBSnapshotTenantDatabase& WithTenantDBName(Aws::String&& value) { SetTenantDBName(std::move(value)); return *this;}
    inline DBSnapshotTenantDatabase& WithTenantDBName(const char* value) { SetTenantDBName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The master username of the tenant database.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }
    inline DBSnapshotTenantDatabase& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}
    inline DBSnapshotTenantDatabase& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}
    inline DBSnapshotTenantDatabase& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID of the tenant database.</p>
     */
    inline const Aws::String& GetTenantDatabaseResourceId() const{ return m_tenantDatabaseResourceId; }
    inline bool TenantDatabaseResourceIdHasBeenSet() const { return m_tenantDatabaseResourceIdHasBeenSet; }
    inline void SetTenantDatabaseResourceId(const Aws::String& value) { m_tenantDatabaseResourceIdHasBeenSet = true; m_tenantDatabaseResourceId = value; }
    inline void SetTenantDatabaseResourceId(Aws::String&& value) { m_tenantDatabaseResourceIdHasBeenSet = true; m_tenantDatabaseResourceId = std::move(value); }
    inline void SetTenantDatabaseResourceId(const char* value) { m_tenantDatabaseResourceIdHasBeenSet = true; m_tenantDatabaseResourceId.assign(value); }
    inline DBSnapshotTenantDatabase& WithTenantDatabaseResourceId(const Aws::String& value) { SetTenantDatabaseResourceId(value); return *this;}
    inline DBSnapshotTenantDatabase& WithTenantDatabaseResourceId(Aws::String&& value) { SetTenantDatabaseResourceId(std::move(value)); return *this;}
    inline DBSnapshotTenantDatabase& WithTenantDatabaseResourceId(const char* value) { SetTenantDatabaseResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the character set of a tenant database.</p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::move(value); }
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }
    inline DBSnapshotTenantDatabase& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}
    inline DBSnapshotTenantDatabase& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(std::move(value)); return *this;}
    inline DBSnapshotTenantDatabase& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the snapshot tenant database.</p>
     */
    inline const Aws::String& GetDBSnapshotTenantDatabaseARN() const{ return m_dBSnapshotTenantDatabaseARN; }
    inline bool DBSnapshotTenantDatabaseARNHasBeenSet() const { return m_dBSnapshotTenantDatabaseARNHasBeenSet; }
    inline void SetDBSnapshotTenantDatabaseARN(const Aws::String& value) { m_dBSnapshotTenantDatabaseARNHasBeenSet = true; m_dBSnapshotTenantDatabaseARN = value; }
    inline void SetDBSnapshotTenantDatabaseARN(Aws::String&& value) { m_dBSnapshotTenantDatabaseARNHasBeenSet = true; m_dBSnapshotTenantDatabaseARN = std::move(value); }
    inline void SetDBSnapshotTenantDatabaseARN(const char* value) { m_dBSnapshotTenantDatabaseARNHasBeenSet = true; m_dBSnapshotTenantDatabaseARN.assign(value); }
    inline DBSnapshotTenantDatabase& WithDBSnapshotTenantDatabaseARN(const Aws::String& value) { SetDBSnapshotTenantDatabaseARN(value); return *this;}
    inline DBSnapshotTenantDatabase& WithDBSnapshotTenantDatabaseARN(Aws::String&& value) { SetDBSnapshotTenantDatabaseARN(std::move(value)); return *this;}
    inline DBSnapshotTenantDatabase& WithDBSnapshotTenantDatabaseARN(const char* value) { SetDBSnapshotTenantDatabaseARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>NCHAR</code> character set name of the tenant database.</p>
     */
    inline const Aws::String& GetNcharCharacterSetName() const{ return m_ncharCharacterSetName; }
    inline bool NcharCharacterSetNameHasBeenSet() const { return m_ncharCharacterSetNameHasBeenSet; }
    inline void SetNcharCharacterSetName(const Aws::String& value) { m_ncharCharacterSetNameHasBeenSet = true; m_ncharCharacterSetName = value; }
    inline void SetNcharCharacterSetName(Aws::String&& value) { m_ncharCharacterSetNameHasBeenSet = true; m_ncharCharacterSetName = std::move(value); }
    inline void SetNcharCharacterSetName(const char* value) { m_ncharCharacterSetNameHasBeenSet = true; m_ncharCharacterSetName.assign(value); }
    inline DBSnapshotTenantDatabase& WithNcharCharacterSetName(const Aws::String& value) { SetNcharCharacterSetName(value); return *this;}
    inline DBSnapshotTenantDatabase& WithNcharCharacterSetName(Aws::String&& value) { SetNcharCharacterSetName(std::move(value)); return *this;}
    inline DBSnapshotTenantDatabase& WithNcharCharacterSetName(const char* value) { SetNcharCharacterSetName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }
    inline DBSnapshotTenantDatabase& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}
    inline DBSnapshotTenantDatabase& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}
    inline DBSnapshotTenantDatabase& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }
    inline DBSnapshotTenantDatabase& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet = false;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet = false;

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet = false;

    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet = false;

    Aws::Utils::DateTime m_tenantDatabaseCreateTime;
    bool m_tenantDatabaseCreateTimeHasBeenSet = false;

    Aws::String m_tenantDBName;
    bool m_tenantDBNameHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_tenantDatabaseResourceId;
    bool m_tenantDatabaseResourceIdHasBeenSet = false;

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet = false;

    Aws::String m_dBSnapshotTenantDatabaseARN;
    bool m_dBSnapshotTenantDatabaseARNHasBeenSet = false;

    Aws::String m_ncharCharacterSetName;
    bool m_ncharCharacterSetNameHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
