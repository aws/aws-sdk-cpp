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
    AWS_RDS_API DBSnapshotTenantDatabase() = default;
    AWS_RDS_API DBSnapshotTenantDatabase(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBSnapshotTenantDatabase& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier for the snapshot of the DB instance.</p>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const { return m_dBSnapshotIdentifier; }
    inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }
    template<typename DBSnapshotIdentifierT = Aws::String>
    void SetDBSnapshotIdentifier(DBSnapshotIdentifierT&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = std::forward<DBSnapshotIdentifierT>(value); }
    template<typename DBSnapshotIdentifierT = Aws::String>
    DBSnapshotTenantDatabase& WithDBSnapshotIdentifier(DBSnapshotIdentifierT&& value) { SetDBSnapshotIdentifier(std::forward<DBSnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the DB instance that contains the tenant databases.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    template<typename DBInstanceIdentifierT = Aws::String>
    void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value); }
    template<typename DBInstanceIdentifierT = Aws::String>
    DBSnapshotTenantDatabase& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) { SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource identifier of the source CDB instance. This identifier can't be
     * changed and is unique to an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDbiResourceId() const { return m_dbiResourceId; }
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }
    template<typename DbiResourceIdT = Aws::String>
    void SetDbiResourceId(DbiResourceIdT&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::forward<DbiResourceIdT>(value); }
    template<typename DbiResourceIdT = Aws::String>
    DBSnapshotTenantDatabase& WithDbiResourceId(DbiResourceIdT&& value) { SetDbiResourceId(std::forward<DbiResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database engine.</p>
     */
    inline const Aws::String& GetEngineName() const { return m_engineName; }
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }
    template<typename EngineNameT = Aws::String>
    void SetEngineName(EngineNameT&& value) { m_engineNameHasBeenSet = true; m_engineName = std::forward<EngineNameT>(value); }
    template<typename EngineNameT = Aws::String>
    DBSnapshotTenantDatabase& WithEngineName(EngineNameT&& value) { SetEngineName(std::forward<EngineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of DB snapshot.</p>
     */
    inline const Aws::String& GetSnapshotType() const { return m_snapshotType; }
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }
    template<typename SnapshotTypeT = Aws::String>
    void SetSnapshotType(SnapshotTypeT&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::forward<SnapshotTypeT>(value); }
    template<typename SnapshotTypeT = Aws::String>
    DBSnapshotTenantDatabase& WithSnapshotType(SnapshotTypeT&& value) { SetSnapshotType(std::forward<SnapshotTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the DB snapshot was taken, specified in Coordinated Universal Time
     * (UTC). If you copy the snapshot, the creation time changes.</p>
     */
    inline const Aws::Utils::DateTime& GetTenantDatabaseCreateTime() const { return m_tenantDatabaseCreateTime; }
    inline bool TenantDatabaseCreateTimeHasBeenSet() const { return m_tenantDatabaseCreateTimeHasBeenSet; }
    template<typename TenantDatabaseCreateTimeT = Aws::Utils::DateTime>
    void SetTenantDatabaseCreateTime(TenantDatabaseCreateTimeT&& value) { m_tenantDatabaseCreateTimeHasBeenSet = true; m_tenantDatabaseCreateTime = std::forward<TenantDatabaseCreateTimeT>(value); }
    template<typename TenantDatabaseCreateTimeT = Aws::Utils::DateTime>
    DBSnapshotTenantDatabase& WithTenantDatabaseCreateTime(TenantDatabaseCreateTimeT&& value) { SetTenantDatabaseCreateTime(std::forward<TenantDatabaseCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the tenant database.</p>
     */
    inline const Aws::String& GetTenantDBName() const { return m_tenantDBName; }
    inline bool TenantDBNameHasBeenSet() const { return m_tenantDBNameHasBeenSet; }
    template<typename TenantDBNameT = Aws::String>
    void SetTenantDBName(TenantDBNameT&& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = std::forward<TenantDBNameT>(value); }
    template<typename TenantDBNameT = Aws::String>
    DBSnapshotTenantDatabase& WithTenantDBName(TenantDBNameT&& value) { SetTenantDBName(std::forward<TenantDBNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The master username of the tenant database.</p>
     */
    inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    template<typename MasterUsernameT = Aws::String>
    void SetMasterUsername(MasterUsernameT&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::forward<MasterUsernameT>(value); }
    template<typename MasterUsernameT = Aws::String>
    DBSnapshotTenantDatabase& WithMasterUsername(MasterUsernameT&& value) { SetMasterUsername(std::forward<MasterUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID of the tenant database.</p>
     */
    inline const Aws::String& GetTenantDatabaseResourceId() const { return m_tenantDatabaseResourceId; }
    inline bool TenantDatabaseResourceIdHasBeenSet() const { return m_tenantDatabaseResourceIdHasBeenSet; }
    template<typename TenantDatabaseResourceIdT = Aws::String>
    void SetTenantDatabaseResourceId(TenantDatabaseResourceIdT&& value) { m_tenantDatabaseResourceIdHasBeenSet = true; m_tenantDatabaseResourceId = std::forward<TenantDatabaseResourceIdT>(value); }
    template<typename TenantDatabaseResourceIdT = Aws::String>
    DBSnapshotTenantDatabase& WithTenantDatabaseResourceId(TenantDatabaseResourceIdT&& value) { SetTenantDatabaseResourceId(std::forward<TenantDatabaseResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the character set of a tenant database.</p>
     */
    inline const Aws::String& GetCharacterSetName() const { return m_characterSetName; }
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }
    template<typename CharacterSetNameT = Aws::String>
    void SetCharacterSetName(CharacterSetNameT&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::forward<CharacterSetNameT>(value); }
    template<typename CharacterSetNameT = Aws::String>
    DBSnapshotTenantDatabase& WithCharacterSetName(CharacterSetNameT&& value) { SetCharacterSetName(std::forward<CharacterSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the snapshot tenant database.</p>
     */
    inline const Aws::String& GetDBSnapshotTenantDatabaseARN() const { return m_dBSnapshotTenantDatabaseARN; }
    inline bool DBSnapshotTenantDatabaseARNHasBeenSet() const { return m_dBSnapshotTenantDatabaseARNHasBeenSet; }
    template<typename DBSnapshotTenantDatabaseARNT = Aws::String>
    void SetDBSnapshotTenantDatabaseARN(DBSnapshotTenantDatabaseARNT&& value) { m_dBSnapshotTenantDatabaseARNHasBeenSet = true; m_dBSnapshotTenantDatabaseARN = std::forward<DBSnapshotTenantDatabaseARNT>(value); }
    template<typename DBSnapshotTenantDatabaseARNT = Aws::String>
    DBSnapshotTenantDatabase& WithDBSnapshotTenantDatabaseARN(DBSnapshotTenantDatabaseARNT&& value) { SetDBSnapshotTenantDatabaseARN(std::forward<DBSnapshotTenantDatabaseARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>NCHAR</code> character set name of the tenant database.</p>
     */
    inline const Aws::String& GetNcharCharacterSetName() const { return m_ncharCharacterSetName; }
    inline bool NcharCharacterSetNameHasBeenSet() const { return m_ncharCharacterSetNameHasBeenSet; }
    template<typename NcharCharacterSetNameT = Aws::String>
    void SetNcharCharacterSetName(NcharCharacterSetNameT&& value) { m_ncharCharacterSetNameHasBeenSet = true; m_ncharCharacterSetName = std::forward<NcharCharacterSetNameT>(value); }
    template<typename NcharCharacterSetNameT = Aws::String>
    DBSnapshotTenantDatabase& WithNcharCharacterSetName(NcharCharacterSetNameT&& value) { SetNcharCharacterSetName(std::forward<NcharCharacterSetNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    template<typename TagListT = Aws::Vector<Tag>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Tag>>
    DBSnapshotTenantDatabase& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Tag>
    DBSnapshotTenantDatabase& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
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

    Aws::Utils::DateTime m_tenantDatabaseCreateTime{};
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
