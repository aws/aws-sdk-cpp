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
#include <aws/rds/model/MasterUserSecret.h>
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
    AWS_RDS_API TenantDatabase() = default;
    AWS_RDS_API TenantDatabase(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API TenantDatabase& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The creation time of the tenant database.</p>
     */
    inline const Aws::Utils::DateTime& GetTenantDatabaseCreateTime() const { return m_tenantDatabaseCreateTime; }
    inline bool TenantDatabaseCreateTimeHasBeenSet() const { return m_tenantDatabaseCreateTimeHasBeenSet; }
    template<typename TenantDatabaseCreateTimeT = Aws::Utils::DateTime>
    void SetTenantDatabaseCreateTime(TenantDatabaseCreateTimeT&& value) { m_tenantDatabaseCreateTimeHasBeenSet = true; m_tenantDatabaseCreateTime = std::forward<TenantDatabaseCreateTimeT>(value); }
    template<typename TenantDatabaseCreateTimeT = Aws::Utils::DateTime>
    TenantDatabase& WithTenantDatabaseCreateTime(TenantDatabaseCreateTimeT&& value) { SetTenantDatabaseCreateTime(std::forward<TenantDatabaseCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the DB instance that contains the tenant database.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    template<typename DBInstanceIdentifierT = Aws::String>
    void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value); }
    template<typename DBInstanceIdentifierT = Aws::String>
    TenantDatabase& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) { SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database name of the tenant database.</p>
     */
    inline const Aws::String& GetTenantDBName() const { return m_tenantDBName; }
    inline bool TenantDBNameHasBeenSet() const { return m_tenantDBNameHasBeenSet; }
    template<typename TenantDBNameT = Aws::String>
    void SetTenantDBName(TenantDBNameT&& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = std::forward<TenantDBNameT>(value); }
    template<typename TenantDBNameT = Aws::String>
    TenantDatabase& WithTenantDBName(TenantDBNameT&& value) { SetTenantDBName(std::forward<TenantDBNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the tenant database.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    TenantDatabase& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
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
    TenantDatabase& WithMasterUsername(MasterUsernameT&& value) { SetMasterUsername(std::forward<MasterUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance.</p>
     */
    inline const Aws::String& GetDbiResourceId() const { return m_dbiResourceId; }
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }
    template<typename DbiResourceIdT = Aws::String>
    void SetDbiResourceId(DbiResourceIdT&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::forward<DbiResourceIdT>(value); }
    template<typename DbiResourceIdT = Aws::String>
    TenantDatabase& WithDbiResourceId(DbiResourceIdT&& value) { SetDbiResourceId(std::forward<DbiResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the tenant
     * database.</p>
     */
    inline const Aws::String& GetTenantDatabaseResourceId() const { return m_tenantDatabaseResourceId; }
    inline bool TenantDatabaseResourceIdHasBeenSet() const { return m_tenantDatabaseResourceIdHasBeenSet; }
    template<typename TenantDatabaseResourceIdT = Aws::String>
    void SetTenantDatabaseResourceId(TenantDatabaseResourceIdT&& value) { m_tenantDatabaseResourceIdHasBeenSet = true; m_tenantDatabaseResourceId = std::forward<TenantDatabaseResourceIdT>(value); }
    template<typename TenantDatabaseResourceIdT = Aws::String>
    TenantDatabase& WithTenantDatabaseResourceId(TenantDatabaseResourceIdT&& value) { SetTenantDatabaseResourceId(std::forward<TenantDatabaseResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the tenant database.</p>
     */
    inline const Aws::String& GetTenantDatabaseARN() const { return m_tenantDatabaseARN; }
    inline bool TenantDatabaseARNHasBeenSet() const { return m_tenantDatabaseARNHasBeenSet; }
    template<typename TenantDatabaseARNT = Aws::String>
    void SetTenantDatabaseARN(TenantDatabaseARNT&& value) { m_tenantDatabaseARNHasBeenSet = true; m_tenantDatabaseARN = std::forward<TenantDatabaseARNT>(value); }
    template<typename TenantDatabaseARNT = Aws::String>
    TenantDatabase& WithTenantDatabaseARN(TenantDatabaseARNT&& value) { SetTenantDatabaseARN(std::forward<TenantDatabaseARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The character set of the tenant database.</p>
     */
    inline const Aws::String& GetCharacterSetName() const { return m_characterSetName; }
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }
    template<typename CharacterSetNameT = Aws::String>
    void SetCharacterSetName(CharacterSetNameT&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::forward<CharacterSetNameT>(value); }
    template<typename CharacterSetNameT = Aws::String>
    TenantDatabase& WithCharacterSetName(CharacterSetNameT&& value) { SetCharacterSetName(std::forward<CharacterSetNameT>(value)); return *this;}
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
    TenantDatabase& WithNcharCharacterSetName(NcharCharacterSetNameT&& value) { SetNcharCharacterSetName(std::forward<NcharCharacterSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether deletion protection is enabled for the DB instance.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline TenantDatabase& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about pending changes for a tenant database.</p>
     */
    inline const TenantDatabasePendingModifiedValues& GetPendingModifiedValues() const { return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    template<typename PendingModifiedValuesT = TenantDatabasePendingModifiedValues>
    void SetPendingModifiedValues(PendingModifiedValuesT&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::forward<PendingModifiedValuesT>(value); }
    template<typename PendingModifiedValuesT = TenantDatabasePendingModifiedValues>
    TenantDatabase& WithPendingModifiedValues(PendingModifiedValuesT&& value) { SetPendingModifiedValues(std::forward<PendingModifiedValuesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MasterUserSecret& GetMasterUserSecret() const { return m_masterUserSecret; }
    inline bool MasterUserSecretHasBeenSet() const { return m_masterUserSecretHasBeenSet; }
    template<typename MasterUserSecretT = MasterUserSecret>
    void SetMasterUserSecret(MasterUserSecretT&& value) { m_masterUserSecretHasBeenSet = true; m_masterUserSecret = std::forward<MasterUserSecretT>(value); }
    template<typename MasterUserSecretT = MasterUserSecret>
    TenantDatabase& WithMasterUserSecret(MasterUserSecretT&& value) { SetMasterUserSecret(std::forward<MasterUserSecretT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    template<typename TagListT = Aws::Vector<Tag>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Tag>>
    TenantDatabase& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Tag>
    TenantDatabase& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_tenantDatabaseCreateTime{};
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

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;

    TenantDatabasePendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet = false;

    MasterUserSecret m_masterUserSecret;
    bool m_masterUserSecretHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
