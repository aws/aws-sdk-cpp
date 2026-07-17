/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/AdminPasswordSourceSummary.h>
#include <aws/odb/model/AutonomousDatabaseApex.h>
#include <aws/odb/model/AutonomousDatabaseConnectionStrings.h>
#include <aws/odb/model/AutonomousDatabaseConnectionUrls.h>
#include <aws/odb/model/AutonomousDatabaseResourceStatus.h>
#include <aws/odb/model/AutonomousMaintenanceScheduleType.h>
#include <aws/odb/model/ComputeModel.h>
#include <aws/odb/model/CustomerContact.h>
#include <aws/odb/model/DataGuardRole.h>
#include <aws/odb/model/DataSafeStatus.h>
#include <aws/odb/model/DatabaseEdition.h>
#include <aws/odb/model/DatabaseManagementStatus.h>
#include <aws/odb/model/DatabaseStandbySummary.h>
#include <aws/odb/model/DatabaseTool.h>
#include <aws/odb/model/DatabaseType.h>
#include <aws/odb/model/DbWorkload.h>
#include <aws/odb/model/DisasterRecoveryConfiguration.h>
#include <aws/odb/model/DisasterRecoveryType.h>
#include <aws/odb/model/EncryptionSummary.h>
#include <aws/odb/model/LicenseModel.h>
#include <aws/odb/model/LongTermBackupSchedule.h>
#include <aws/odb/model/NetServicesArchitecture.h>
#include <aws/odb/model/OpenMode.h>
#include <aws/odb/model/OperationsInsightsStatus.h>
#include <aws/odb/model/PermissionLevel.h>
#include <aws/odb/model/RefreshableMode.h>
#include <aws/odb/model/RefreshableStatus.h>
#include <aws/odb/model/ResourcePoolSummary.h>
#include <aws/odb/model/ScheduledOperationDetails.h>
#include <aws/odb/model/StandbyAllowlistedIpsSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>A summary of an Autonomous Database.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/AutonomousDatabaseSummary">AWS
 * API Reference</a></p>
 */
class AutonomousDatabaseSummary {
 public:
  AWS_ODB_API AutonomousDatabaseSummary() = default;
  AWS_ODB_API AutonomousDatabaseSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API AutonomousDatabaseSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the Autonomous Database.</p>
   */
  inline const Aws::String& GetAutonomousDatabaseId() const { return m_autonomousDatabaseId; }
  inline bool AutonomousDatabaseIdHasBeenSet() const { return m_autonomousDatabaseIdHasBeenSet; }
  template <typename AutonomousDatabaseIdT = Aws::String>
  void SetAutonomousDatabaseId(AutonomousDatabaseIdT&& value) {
    m_autonomousDatabaseIdHasBeenSet = true;
    m_autonomousDatabaseId = std::forward<AutonomousDatabaseIdT>(value);
  }
  template <typename AutonomousDatabaseIdT = Aws::String>
  AutonomousDatabaseSummary& WithAutonomousDatabaseId(AutonomousDatabaseIdT&& value) {
    SetAutonomousDatabaseId(std::forward<AutonomousDatabaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Autonomous Database.</p>
   */
  inline const Aws::String& GetAutonomousDatabaseArn() const { return m_autonomousDatabaseArn; }
  inline bool AutonomousDatabaseArnHasBeenSet() const { return m_autonomousDatabaseArnHasBeenSet; }
  template <typename AutonomousDatabaseArnT = Aws::String>
  void SetAutonomousDatabaseArn(AutonomousDatabaseArnT&& value) {
    m_autonomousDatabaseArnHasBeenSet = true;
    m_autonomousDatabaseArn = std::forward<AutonomousDatabaseArnT>(value);
  }
  template <typename AutonomousDatabaseArnT = Aws::String>
  AutonomousDatabaseSummary& WithAutonomousDatabaseArn(AutonomousDatabaseArnT&& value) {
    SetAutonomousDatabaseArn(std::forward<AutonomousDatabaseArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Oracle Cloud Infrastructure (OCI) resource anchor associated
   * with the Autonomous Database.</p>
   */
  inline const Aws::String& GetOciResourceAnchorName() const { return m_ociResourceAnchorName; }
  inline bool OciResourceAnchorNameHasBeenSet() const { return m_ociResourceAnchorNameHasBeenSet; }
  template <typename OciResourceAnchorNameT = Aws::String>
  void SetOciResourceAnchorName(OciResourceAnchorNameT&& value) {
    m_ociResourceAnchorNameHasBeenSet = true;
    m_ociResourceAnchorName = std::forward<OciResourceAnchorNameT>(value);
  }
  template <typename OciResourceAnchorNameT = Aws::String>
  AutonomousDatabaseSummary& WithOciResourceAnchorName(OciResourceAnchorNameT&& value) {
    SetOciResourceAnchorName(std::forward<OciResourceAnchorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The progress of the current operation on the Autonomous Database, as a
   * percentage.</p>
   */
  inline double GetPercentProgress() const { return m_percentProgress; }
  inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
  inline void SetPercentProgress(double value) {
    m_percentProgressHasBeenSet = true;
    m_percentProgress = value;
  }
  inline AutonomousDatabaseSummary& WithPercentProgress(double value) {
    SetPercentProgress(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle Cloud Identifier (OCID) of the Autonomous Database.</p>
   */
  inline const Aws::String& GetOcid() const { return m_ocid; }
  inline bool OcidHasBeenSet() const { return m_ocidHasBeenSet; }
  template <typename OcidT = Aws::String>
  void SetOcid(OcidT&& value) {
    m_ocidHasBeenSet = true;
    m_ocid = std::forward<OcidT>(value);
  }
  template <typename OcidT = Aws::String>
  AutonomousDatabaseSummary& WithOcid(OcidT&& value) {
    SetOcid(std::forward<OcidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL for accessing the OCI console page for the Autonomous Database.</p>
   */
  inline const Aws::String& GetOciUrl() const { return m_ociUrl; }
  inline bool OciUrlHasBeenSet() const { return m_ociUrlHasBeenSet; }
  template <typename OciUrlT = Aws::String>
  void SetOciUrl(OciUrlT&& value) {
    m_ociUrlHasBeenSet = true;
    m_ociUrl = std::forward<OciUrlT>(value);
  }
  template <typename OciUrlT = Aws::String>
  AutonomousDatabaseSummary& WithOciUrl(OciUrlT&& value) {
    SetOciUrl(std::forward<OciUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user-friendly name of the Autonomous Database.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  AutonomousDatabaseSummary& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Autonomous Database.</p>
   */
  inline const Aws::String& GetDbName() const { return m_dbName; }
  inline bool DbNameHasBeenSet() const { return m_dbNameHasBeenSet; }
  template <typename DbNameT = Aws::String>
  void SetDbName(DbNameT&& value) {
    m_dbNameHasBeenSet = true;
    m_dbName = std::forward<DbNameT>(value);
  }
  template <typename DbNameT = Aws::String>
  AutonomousDatabaseSummary& WithDbName(DbNameT&& value) {
    SetDbName(std::forward<DbNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the source from which the Autonomous Database was
   * created.</p>
   */
  inline const Aws::String& GetSourceId() const { return m_sourceId; }
  inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
  template <typename SourceIdT = Aws::String>
  void SetSourceId(SourceIdT&& value) {
    m_sourceIdHasBeenSet = true;
    m_sourceId = std::forward<SourceIdT>(value);
  }
  template <typename SourceIdT = Aws::String>
  AutonomousDatabaseSummary& WithSourceId(SourceIdT&& value) {
    SetSourceId(std::forward<SourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the Autonomous Database.</p>
   */
  inline AutonomousDatabaseResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AutonomousDatabaseResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AutonomousDatabaseSummary& WithStatus(AutonomousDatabaseResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the current status of the Autonomous Database,
   * if applicable.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  AutonomousDatabaseSummary& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the Autonomous Database, either a regular database or a
   * clone.</p>
   */
  inline DatabaseType GetDatabaseType() const { return m_databaseType; }
  inline bool DatabaseTypeHasBeenSet() const { return m_databaseTypeHasBeenSet; }
  inline void SetDatabaseType(DatabaseType value) {
    m_databaseTypeHasBeenSet = true;
    m_databaseType = value;
  }
  inline AutonomousDatabaseSummary& WithDatabaseType(DatabaseType value) {
    SetDatabaseType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle Database software version of the Autonomous Database.</p>
   */
  inline const Aws::String& GetDbVersion() const { return m_dbVersion; }
  inline bool DbVersionHasBeenSet() const { return m_dbVersionHasBeenSet; }
  template <typename DbVersionT = Aws::String>
  void SetDbVersion(DbVersionT&& value) {
    m_dbVersionHasBeenSet = true;
    m_dbVersion = std::forward<DbVersionT>(value);
  }
  template <typename DbVersionT = Aws::String>
  AutonomousDatabaseSummary& WithDbVersion(DbVersionT&& value) {
    SetDbVersion(std::forward<DbVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The intended use of the Autonomous Database, such as transaction processing,
   * data warehouse, JSON database, or APEX.</p>
   */
  inline DbWorkload GetDbWorkload() const { return m_dbWorkload; }
  inline bool DbWorkloadHasBeenSet() const { return m_dbWorkloadHasBeenSet; }
  inline void SetDbWorkload(DbWorkload value) {
    m_dbWorkloadHasBeenSet = true;
    m_dbWorkload = value;
  }
  inline AutonomousDatabaseSummary& WithDbWorkload(DbWorkload value) {
    SetDbWorkload(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The character set of the Autonomous Database.</p>
   */
  inline const Aws::String& GetCharacterSet() const { return m_characterSet; }
  inline bool CharacterSetHasBeenSet() const { return m_characterSetHasBeenSet; }
  template <typename CharacterSetT = Aws::String>
  void SetCharacterSet(CharacterSetT&& value) {
    m_characterSetHasBeenSet = true;
    m_characterSet = std::forward<CharacterSetT>(value);
  }
  template <typename CharacterSetT = Aws::String>
  AutonomousDatabaseSummary& WithCharacterSet(CharacterSetT&& value) {
    SetCharacterSet(std::forward<CharacterSetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The national character set of the Autonomous Database.</p>
   */
  inline const Aws::String& GetNcharacterSet() const { return m_ncharacterSet; }
  inline bool NcharacterSetHasBeenSet() const { return m_ncharacterSetHasBeenSet; }
  template <typename NcharacterSetT = Aws::String>
  void SetNcharacterSet(NcharacterSetT&& value) {
    m_ncharacterSetHasBeenSet = true;
    m_ncharacterSet = std::forward<NcharacterSetT>(value);
  }
  template <typename NcharacterSetT = Aws::String>
  AutonomousDatabaseSummary& WithNcharacterSet(NcharacterSetT&& value) {
    SetNcharacterSet(std::forward<NcharacterSetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle Database edition of the Autonomous Database.</p>
   */
  inline DatabaseEdition GetDatabaseEdition() const { return m_databaseEdition; }
  inline bool DatabaseEditionHasBeenSet() const { return m_databaseEditionHasBeenSet; }
  inline void SetDatabaseEdition(DatabaseEdition value) {
    m_databaseEditionHasBeenSet = true;
    m_databaseEdition = value;
  }
  inline AutonomousDatabaseSummary& WithDatabaseEdition(DatabaseEdition value) {
    SetDatabaseEdition(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle license model that applies to the Autonomous Database.</p>
   */
  inline LicenseModel GetLicenseModel() const { return m_licenseModel; }
  inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
  inline void SetLicenseModel(LicenseModel value) {
    m_licenseModelHasBeenSet = true;
    m_licenseModel = value;
  }
  inline AutonomousDatabaseSummary& WithLicenseModel(LicenseModel value) {
    SetLicenseModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mode in which the Autonomous Database is open, either read-only or
   * read/write.</p>
   */
  inline OpenMode GetOpenMode() const { return m_openMode; }
  inline bool OpenModeHasBeenSet() const { return m_openModeHasBeenSet; }
  inline void SetOpenMode(OpenMode value) {
    m_openModeHasBeenSet = true;
    m_openMode = value;
  }
  inline AutonomousDatabaseSummary& WithOpenMode(OpenMode value) {
    SetOpenMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permission level of the Autonomous Database.</p>
   */
  inline PermissionLevel GetPermissionLevel() const { return m_permissionLevel; }
  inline bool PermissionLevelHasBeenSet() const { return m_permissionLevelHasBeenSet; }
  inline void SetPermissionLevel(PermissionLevel value) {
    m_permissionLevelHasBeenSet = true;
    m_permissionLevel = value;
  }
  inline AutonomousDatabaseSummary& WithPermissionLevel(PermissionLevel value) {
    SetPermissionLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether mutual TLS (mTLS) authentication is required to connect to
   * the Autonomous Database.</p>
   */
  inline bool GetIsMtlsConnectionRequired() const { return m_isMtlsConnectionRequired; }
  inline bool IsMtlsConnectionRequiredHasBeenSet() const { return m_isMtlsConnectionRequiredHasBeenSet; }
  inline void SetIsMtlsConnectionRequired(bool value) {
    m_isMtlsConnectionRequiredHasBeenSet = true;
    m_isMtlsConnectionRequired = value;
  }
  inline AutonomousDatabaseSummary& WithIsMtlsConnectionRequired(bool value) {
    SetIsMtlsConnectionRequired(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maintenance schedule type for the Autonomous Database.</p>
   */
  inline AutonomousMaintenanceScheduleType GetAutonomousMaintenanceScheduleType() const { return m_autonomousMaintenanceScheduleType; }
  inline bool AutonomousMaintenanceScheduleTypeHasBeenSet() const { return m_autonomousMaintenanceScheduleTypeHasBeenSet; }
  inline void SetAutonomousMaintenanceScheduleType(AutonomousMaintenanceScheduleType value) {
    m_autonomousMaintenanceScheduleTypeHasBeenSet = true;
    m_autonomousMaintenanceScheduleType = value;
  }
  inline AutonomousDatabaseSummary& WithAutonomousMaintenanceScheduleType(AutonomousMaintenanceScheduleType value) {
    SetAutonomousMaintenanceScheduleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle Net Services architecture of the Autonomous Database, either
   * dedicated or shared.</p>
   */
  inline NetServicesArchitecture GetNetServicesArchitecture() const { return m_netServicesArchitecture; }
  inline bool NetServicesArchitectureHasBeenSet() const { return m_netServicesArchitectureHasBeenSet; }
  inline void SetNetServicesArchitecture(NetServicesArchitecture value) {
    m_netServicesArchitectureHasBeenSet = true;
    m_netServicesArchitecture = value;
  }
  inline AutonomousDatabaseSummary& WithNetServicesArchitecture(NetServicesArchitecture value) {
    SetNetServicesArchitecture(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Oracle Database software versions to which the Autonomous
   * Database can be upgraded.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailableUpgradeVersions() const { return m_availableUpgradeVersions; }
  inline bool AvailableUpgradeVersionsHasBeenSet() const { return m_availableUpgradeVersionsHasBeenSet; }
  template <typename AvailableUpgradeVersionsT = Aws::Vector<Aws::String>>
  void SetAvailableUpgradeVersions(AvailableUpgradeVersionsT&& value) {
    m_availableUpgradeVersionsHasBeenSet = true;
    m_availableUpgradeVersions = std::forward<AvailableUpgradeVersionsT>(value);
  }
  template <typename AvailableUpgradeVersionsT = Aws::Vector<Aws::String>>
  AutonomousDatabaseSummary& WithAvailableUpgradeVersions(AvailableUpgradeVersionsT&& value) {
    SetAvailableUpgradeVersions(std::forward<AvailableUpgradeVersionsT>(value));
    return *this;
  }
  template <typename AvailableUpgradeVersionsT = Aws::String>
  AutonomousDatabaseSummary& AddAvailableUpgradeVersions(AvailableUpgradeVersionsT&& value) {
    m_availableUpgradeVersionsHasBeenSet = true;
    m_availableUpgradeVersions.emplace_back(std::forward<AvailableUpgradeVersionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of compute resources that you can allocate to the
   * Autonomous Database under the bring-your-own-license (BYOL) model.</p>
   */
  inline int GetByolComputeCountLimit() const { return m_byolComputeCountLimit; }
  inline bool ByolComputeCountLimitHasBeenSet() const { return m_byolComputeCountLimitHasBeenSet; }
  inline void SetByolComputeCountLimit(int value) {
    m_byolComputeCountLimitHasBeenSet = true;
    m_byolComputeCountLimit = value;
  }
  inline AutonomousDatabaseSummary& WithByolComputeCountLimit(int value) {
    SetByolComputeCountLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection string details for the Autonomous Database.</p>
   */
  inline const AutonomousDatabaseConnectionStrings& GetConnectionStringDetails() const { return m_connectionStringDetails; }
  inline bool ConnectionStringDetailsHasBeenSet() const { return m_connectionStringDetailsHasBeenSet; }
  template <typename ConnectionStringDetailsT = AutonomousDatabaseConnectionStrings>
  void SetConnectionStringDetails(ConnectionStringDetailsT&& value) {
    m_connectionStringDetailsHasBeenSet = true;
    m_connectionStringDetails = std::forward<ConnectionStringDetailsT>(value);
  }
  template <typename ConnectionStringDetailsT = AutonomousDatabaseConnectionStrings>
  AutonomousDatabaseSummary& WithConnectionStringDetails(ConnectionStringDetailsT&& value) {
    SetConnectionStringDetails(std::forward<ConnectionStringDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL for accessing the Oracle service console for the Autonomous
   * Database.</p>
   */
  inline const Aws::String& GetServiceConsoleUrl() const { return m_serviceConsoleUrl; }
  inline bool ServiceConsoleUrlHasBeenSet() const { return m_serviceConsoleUrlHasBeenSet; }
  template <typename ServiceConsoleUrlT = Aws::String>
  void SetServiceConsoleUrl(ServiceConsoleUrlT&& value) {
    m_serviceConsoleUrlHasBeenSet = true;
    m_serviceConsoleUrl = std::forward<ServiceConsoleUrlT>(value);
  }
  template <typename ServiceConsoleUrlT = Aws::String>
  AutonomousDatabaseSummary& WithServiceConsoleUrl(ServiceConsoleUrlT&& value) {
    SetServiceConsoleUrl(std::forward<ServiceConsoleUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL for accessing Oracle SQL Developer Web for the Autonomous
   * Database.</p>
   */
  inline const Aws::String& GetSqlWebDeveloperUrl() const { return m_sqlWebDeveloperUrl; }
  inline bool SqlWebDeveloperUrlHasBeenSet() const { return m_sqlWebDeveloperUrlHasBeenSet; }
  template <typename SqlWebDeveloperUrlT = Aws::String>
  void SetSqlWebDeveloperUrl(SqlWebDeveloperUrlT&& value) {
    m_sqlWebDeveloperUrlHasBeenSet = true;
    m_sqlWebDeveloperUrl = std::forward<SqlWebDeveloperUrlT>(value);
  }
  template <typename SqlWebDeveloperUrlT = Aws::String>
  AutonomousDatabaseSummary& WithSqlWebDeveloperUrl(SqlWebDeveloperUrlT&& value) {
    SetSqlWebDeveloperUrl(std::forward<SqlWebDeveloperUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of customer contacts that receive operational notifications from
   * Oracle for the Autonomous Database.</p>
   */
  inline const Aws::Vector<CustomerContact>& GetCustomerContacts() const { return m_customerContacts; }
  inline bool CustomerContactsHasBeenSet() const { return m_customerContactsHasBeenSet; }
  template <typename CustomerContactsT = Aws::Vector<CustomerContact>>
  void SetCustomerContacts(CustomerContactsT&& value) {
    m_customerContactsHasBeenSet = true;
    m_customerContacts = std::forward<CustomerContactsT>(value);
  }
  template <typename CustomerContactsT = Aws::Vector<CustomerContact>>
  AutonomousDatabaseSummary& WithCustomerContacts(CustomerContactsT&& value) {
    SetCustomerContacts(std::forward<CustomerContactsT>(value));
    return *this;
  }
  template <typename CustomerContactsT = CustomerContact>
  AutonomousDatabaseSummary& AddCustomerContacts(CustomerContactsT&& value) {
    m_customerContactsHasBeenSet = true;
    m_customerContacts.emplace_back(std::forward<CustomerContactsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle Application Express (APEX) details for the Autonomous
   * Database.</p>
   */
  inline const AutonomousDatabaseApex& GetApexDetails() const { return m_apexDetails; }
  inline bool ApexDetailsHasBeenSet() const { return m_apexDetailsHasBeenSet; }
  template <typename ApexDetailsT = AutonomousDatabaseApex>
  void SetApexDetails(ApexDetailsT&& value) {
    m_apexDetailsHasBeenSet = true;
    m_apexDetails = std::forward<ApexDetailsT>(value);
  }
  template <typename ApexDetailsT = AutonomousDatabaseApex>
  AutonomousDatabaseSummary& WithApexDetails(ApexDetailsT&& value) {
    SetApexDetails(std::forward<ApexDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the standby Autonomous Database in a cross-Region Oracle Data
   * Guard configuration.</p>
   */
  inline const DatabaseStandbySummary& GetStandbyDb() const { return m_standbyDb; }
  inline bool StandbyDbHasBeenSet() const { return m_standbyDbHasBeenSet; }
  template <typename StandbyDbT = DatabaseStandbySummary>
  void SetStandbyDb(StandbyDbT&& value) {
    m_standbyDbHasBeenSet = true;
    m_standbyDb = std::forward<StandbyDbT>(value);
  }
  template <typename StandbyDbT = DatabaseStandbySummary>
  AutonomousDatabaseSummary& WithStandbyDb(StandbyDbT&& value) {
    SetStandbyDb(std::forward<StandbyDbT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the local standby Autonomous Database in an Oracle Data Guard
   * configuration.</p>
   */
  inline const DatabaseStandbySummary& GetLocalStandbyDb() const { return m_localStandbyDb; }
  inline bool LocalStandbyDbHasBeenSet() const { return m_localStandbyDbHasBeenSet; }
  template <typename LocalStandbyDbT = DatabaseStandbySummary>
  void SetLocalStandbyDb(LocalStandbyDbT&& value) {
    m_localStandbyDbHasBeenSet = true;
    m_localStandbyDb = std::forward<LocalStandbyDbT>(value);
  }
  template <typename LocalStandbyDbT = DatabaseStandbySummary>
  AutonomousDatabaseSummary& WithLocalStandbyDb(LocalStandbyDbT&& value) {
    SetLocalStandbyDb(std::forward<LocalStandbyDbT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the Oracle Data Safe registration for the Autonomous
   * Database.</p>
   */
  inline DataSafeStatus GetDataSafeStatus() const { return m_dataSafeStatus; }
  inline bool DataSafeStatusHasBeenSet() const { return m_dataSafeStatusHasBeenSet; }
  inline void SetDataSafeStatus(DataSafeStatus value) {
    m_dataSafeStatusHasBeenSet = true;
    m_dataSafeStatus = value;
  }
  inline AutonomousDatabaseSummary& WithDataSafeStatus(DataSafeStatus value) {
    SetDataSafeStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of Oracle Database Management for the Autonomous Database.</p>
   */
  inline DatabaseManagementStatus GetDatabaseManagementStatus() const { return m_databaseManagementStatus; }
  inline bool DatabaseManagementStatusHasBeenSet() const { return m_databaseManagementStatusHasBeenSet; }
  inline void SetDatabaseManagementStatus(DatabaseManagementStatus value) {
    m_databaseManagementStatusHasBeenSet = true;
    m_databaseManagementStatus = value;
  }
  inline AutonomousDatabaseSummary& WithDatabaseManagementStatus(DatabaseManagementStatus value) {
    SetDatabaseManagementStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of Oracle Operations Insights for the Autonomous Database.</p>
   */
  inline OperationsInsightsStatus GetOperationsInsightsStatus() const { return m_operationsInsightsStatus; }
  inline bool OperationsInsightsStatusHasBeenSet() const { return m_operationsInsightsStatusHasBeenSet; }
  inline void SetOperationsInsightsStatus(OperationsInsightsStatus value) {
    m_operationsInsightsStatusHasBeenSet = true;
    m_operationsInsightsStatus = value;
  }
  inline AutonomousDatabaseSummary& WithOperationsInsightsStatus(OperationsInsightsStatus value) {
    SetOperationsInsightsStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone where the Autonomous Database is located.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  AutonomousDatabaseSummary& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Availability Zone where the Autonomous Database
   * is located.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  AutonomousDatabaseSummary& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The component on the Autonomous Database that the current maintenance is
   * being applied to.</p>
   */
  inline const Aws::String& GetMaintenanceTargetComponent() const { return m_maintenanceTargetComponent; }
  inline bool MaintenanceTargetComponentHasBeenSet() const { return m_maintenanceTargetComponentHasBeenSet; }
  template <typename MaintenanceTargetComponentT = Aws::String>
  void SetMaintenanceTargetComponent(MaintenanceTargetComponentT&& value) {
    m_maintenanceTargetComponentHasBeenSet = true;
    m_maintenanceTargetComponent = std::forward<MaintenanceTargetComponentT>(value);
  }
  template <typename MaintenanceTargetComponentT = Aws::String>
  AutonomousDatabaseSummary& WithMaintenanceTargetComponent(MaintenanceTargetComponentT&& value) {
    SetMaintenanceTargetComponent(std::forward<MaintenanceTargetComponentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection URLs for accessing tools and services for the Autonomous
   * Database.</p>
   */
  inline const AutonomousDatabaseConnectionUrls& GetConnectionUrls() const { return m_connectionUrls; }
  inline bool ConnectionUrlsHasBeenSet() const { return m_connectionUrlsHasBeenSet; }
  template <typename ConnectionUrlsT = AutonomousDatabaseConnectionUrls>
  void SetConnectionUrls(ConnectionUrlsT&& value) {
    m_connectionUrlsHasBeenSet = true;
    m_connectionUrls = std::forward<ConnectionUrlsT>(value);
  }
  template <typename ConnectionUrlsT = AutonomousDatabaseConnectionUrls>
  AutonomousDatabaseSummary& WithConnectionUrls(ConnectionUrlsT&& value) {
    SetConnectionUrls(std::forward<ConnectionUrlsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of database management tools enabled for the Autonomous
   * Database.</p>
   */
  inline const Aws::Vector<DatabaseTool>& GetDbToolsDetails() const { return m_dbToolsDetails; }
  inline bool DbToolsDetailsHasBeenSet() const { return m_dbToolsDetailsHasBeenSet; }
  template <typename DbToolsDetailsT = Aws::Vector<DatabaseTool>>
  void SetDbToolsDetails(DbToolsDetailsT&& value) {
    m_dbToolsDetailsHasBeenSet = true;
    m_dbToolsDetails = std::forward<DbToolsDetailsT>(value);
  }
  template <typename DbToolsDetailsT = Aws::Vector<DatabaseTool>>
  AutonomousDatabaseSummary& WithDbToolsDetails(DbToolsDetailsT&& value) {
    SetDbToolsDetails(std::forward<DbToolsDetailsT>(value));
    return *this;
  }
  template <typename DbToolsDetailsT = DatabaseTool>
  AutonomousDatabaseSummary& AddDbToolsDetails(DbToolsDetailsT&& value) {
    m_dbToolsDetailsHasBeenSet = true;
    m_dbToolsDetails.emplace_back(std::forward<DbToolsDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of scheduled start and stop times for the Autonomous Database.</p>
   */
  inline const Aws::Vector<ScheduledOperationDetails>& GetScheduledOperations() const { return m_scheduledOperations; }
  inline bool ScheduledOperationsHasBeenSet() const { return m_scheduledOperationsHasBeenSet; }
  template <typename ScheduledOperationsT = Aws::Vector<ScheduledOperationDetails>>
  void SetScheduledOperations(ScheduledOperationsT&& value) {
    m_scheduledOperationsHasBeenSet = true;
    m_scheduledOperations = std::forward<ScheduledOperationsT>(value);
  }
  template <typename ScheduledOperationsT = Aws::Vector<ScheduledOperationDetails>>
  AutonomousDatabaseSummary& WithScheduledOperations(ScheduledOperationsT&& value) {
    SetScheduledOperations(std::forward<ScheduledOperationsT>(value));
    return *this;
  }
  template <typename ScheduledOperationsT = ScheduledOperationDetails>
  AutonomousDatabaseSummary& AddScheduledOperations(ScheduledOperationsT&& value) {
    m_scheduledOperationsHasBeenSet = true;
    m_scheduledOperations.emplace_back(std::forward<ScheduledOperationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the resource pool leader Autonomous Database.</p>
   */
  inline const Aws::String& GetResourcePoolLeaderId() const { return m_resourcePoolLeaderId; }
  inline bool ResourcePoolLeaderIdHasBeenSet() const { return m_resourcePoolLeaderIdHasBeenSet; }
  template <typename ResourcePoolLeaderIdT = Aws::String>
  void SetResourcePoolLeaderId(ResourcePoolLeaderIdT&& value) {
    m_resourcePoolLeaderIdHasBeenSet = true;
    m_resourcePoolLeaderId = std::forward<ResourcePoolLeaderIdT>(value);
  }
  template <typename ResourcePoolLeaderIdT = Aws::String>
  AutonomousDatabaseSummary& WithResourcePoolLeaderId(ResourcePoolLeaderIdT&& value) {
    SetResourcePoolLeaderId(std::forward<ResourcePoolLeaderIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compute capacity, in number of Elastic CPUs (ECPUs) or Oracle CPUs
   * (OCPUs), assigned to the Autonomous Database.</p>
   */
  inline double GetComputeCount() const { return m_computeCount; }
  inline bool ComputeCountHasBeenSet() const { return m_computeCountHasBeenSet; }
  inline void SetComputeCount(double value) {
    m_computeCountHasBeenSet = true;
    m_computeCount = value;
  }
  inline AutonomousDatabaseSummary& WithComputeCount(double value) {
    SetComputeCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compute model of the Autonomous Database, either ECPU or OCPU.</p>
   */
  inline ComputeModel GetComputeModel() const { return m_computeModel; }
  inline bool ComputeModelHasBeenSet() const { return m_computeModelHasBeenSet; }
  inline void SetComputeModel(ComputeModel value) {
    m_computeModelHasBeenSet = true;
    m_computeModel = value;
  }
  inline AutonomousDatabaseSummary& WithComputeModel(ComputeModel value) {
    SetComputeModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of CPU cores allocated to the Autonomous Database.</p>
   */
  inline int GetCpuCoreCount() const { return m_cpuCoreCount; }
  inline bool CpuCoreCountHasBeenSet() const { return m_cpuCoreCountHasBeenSet; }
  inline void SetCpuCoreCount(int value) {
    m_cpuCoreCountHasBeenSet = true;
    m_cpuCoreCount = value;
  }
  inline AutonomousDatabaseSummary& WithCpuCoreCount(int value) {
    SetCpuCoreCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of memory allocated per Oracle Compute Unit, in GB.</p>
   */
  inline int GetMemoryPerOracleComputeUnitInGBs() const { return m_memoryPerOracleComputeUnitInGBs; }
  inline bool MemoryPerOracleComputeUnitInGBsHasBeenSet() const { return m_memoryPerOracleComputeUnitInGBsHasBeenSet; }
  inline void SetMemoryPerOracleComputeUnitInGBs(int value) {
    m_memoryPerOracleComputeUnitInGBsHasBeenSet = true;
    m_memoryPerOracleComputeUnitInGBs = value;
  }
  inline AutonomousDatabaseSummary& WithMemoryPerOracleComputeUnitInGBs(int value) {
    SetMemoryPerOracleComputeUnitInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of CPU core counts that you can provision for the Autonomous
   * Database.</p>
   */
  inline const Aws::Vector<int>& GetProvisionableCpus() const { return m_provisionableCpus; }
  inline bool ProvisionableCpusHasBeenSet() const { return m_provisionableCpusHasBeenSet; }
  template <typename ProvisionableCpusT = Aws::Vector<int>>
  void SetProvisionableCpus(ProvisionableCpusT&& value) {
    m_provisionableCpusHasBeenSet = true;
    m_provisionableCpus = std::forward<ProvisionableCpusT>(value);
  }
  template <typename ProvisionableCpusT = Aws::Vector<int>>
  AutonomousDatabaseSummary& WithProvisionableCpus(ProvisionableCpusT&& value) {
    SetProvisionableCpus(std::forward<ProvisionableCpusT>(value));
    return *this;
  }
  inline AutonomousDatabaseSummary& AddProvisionableCpus(int value) {
    m_provisionableCpusHasBeenSet = true;
    m_provisionableCpus.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether automatic scaling of the compute resources is enabled for
   * the Autonomous Database.</p>
   */
  inline bool GetIsAutoScalingEnabled() const { return m_isAutoScalingEnabled; }
  inline bool IsAutoScalingEnabledHasBeenSet() const { return m_isAutoScalingEnabledHasBeenSet; }
  inline void SetIsAutoScalingEnabled(bool value) {
    m_isAutoScalingEnabledHasBeenSet = true;
    m_isAutoScalingEnabled = value;
  }
  inline AutonomousDatabaseSummary& WithIsAutoScalingEnabled(bool value) {
    SetIsAutoScalingEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size, in terabytes (TB), of the data volume allocated for the Autonomous
   * Database.</p>
   */
  inline double GetDataStorageSizeInTBs() const { return m_dataStorageSizeInTBs; }
  inline bool DataStorageSizeInTBsHasBeenSet() const { return m_dataStorageSizeInTBsHasBeenSet; }
  inline void SetDataStorageSizeInTBs(double value) {
    m_dataStorageSizeInTBsHasBeenSet = true;
    m_dataStorageSizeInTBs = value;
  }
  inline AutonomousDatabaseSummary& WithDataStorageSizeInTBs(double value) {
    SetDataStorageSizeInTBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size, in gigabytes (GB), of the data volume allocated for the Autonomous
   * Database.</p>
   */
  inline int GetDataStorageSizeInGBs() const { return m_dataStorageSizeInGBs; }
  inline bool DataStorageSizeInGBsHasBeenSet() const { return m_dataStorageSizeInGBsHasBeenSet; }
  inline void SetDataStorageSizeInGBs(int value) {
    m_dataStorageSizeInGBsHasBeenSet = true;
    m_dataStorageSizeInGBs = value;
  }
  inline AutonomousDatabaseSummary& WithDataStorageSizeInGBs(int value) {
    SetDataStorageSizeInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of data storage currently in use by the Autonomous Database, in
   * TB.</p>
   */
  inline double GetUsedDataStorageSizeInTBs() const { return m_usedDataStorageSizeInTBs; }
  inline bool UsedDataStorageSizeInTBsHasBeenSet() const { return m_usedDataStorageSizeInTBsHasBeenSet; }
  inline void SetUsedDataStorageSizeInTBs(double value) {
    m_usedDataStorageSizeInTBsHasBeenSet = true;
    m_usedDataStorageSizeInTBs = value;
  }
  inline AutonomousDatabaseSummary& WithUsedDataStorageSizeInTBs(double value) {
    SetUsedDataStorageSizeInTBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of data storage currently in use by the Autonomous Database, in
   * GB.</p>
   */
  inline int GetUsedDataStorageSizeInGBs() const { return m_usedDataStorageSizeInGBs; }
  inline bool UsedDataStorageSizeInGBsHasBeenSet() const { return m_usedDataStorageSizeInGBsHasBeenSet; }
  inline void SetUsedDataStorageSizeInGBs(int value) {
    m_usedDataStorageSizeInGBsHasBeenSet = true;
    m_usedDataStorageSizeInGBs = value;
  }
  inline AutonomousDatabaseSummary& WithUsedDataStorageSizeInGBs(int value) {
    SetUsedDataStorageSizeInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actual amount of data storage currently in use by the Autonomous
   * Database, in TB.</p>
   */
  inline double GetActualUsedDataStorageSizeInTBs() const { return m_actualUsedDataStorageSizeInTBs; }
  inline bool ActualUsedDataStorageSizeInTBsHasBeenSet() const { return m_actualUsedDataStorageSizeInTBsHasBeenSet; }
  inline void SetActualUsedDataStorageSizeInTBs(double value) {
    m_actualUsedDataStorageSizeInTBsHasBeenSet = true;
    m_actualUsedDataStorageSizeInTBs = value;
  }
  inline AutonomousDatabaseSummary& WithActualUsedDataStorageSizeInTBs(double value) {
    SetActualUsedDataStorageSizeInTBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of storage currently allocated to the Autonomous Database, in
   * TB.</p>
   */
  inline double GetAllocatedStorageSizeInTBs() const { return m_allocatedStorageSizeInTBs; }
  inline bool AllocatedStorageSizeInTBsHasBeenSet() const { return m_allocatedStorageSizeInTBsHasBeenSet; }
  inline void SetAllocatedStorageSizeInTBs(double value) {
    m_allocatedStorageSizeInTBsHasBeenSet = true;
    m_allocatedStorageSizeInTBs = value;
  }
  inline AutonomousDatabaseSummary& WithAllocatedStorageSizeInTBs(double value) {
    SetAllocatedStorageSizeInTBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the in-memory area of the Autonomous Database, in GB.</p>
   */
  inline int GetInMemoryAreaInGBs() const { return m_inMemoryAreaInGBs; }
  inline bool InMemoryAreaInGBsHasBeenSet() const { return m_inMemoryAreaInGBsHasBeenSet; }
  inline void SetInMemoryAreaInGBs(int value) {
    m_inMemoryAreaInGBsHasBeenSet = true;
    m_inMemoryAreaInGBs = value;
  }
  inline AutonomousDatabaseSummary& WithInMemoryAreaInGBs(int value) {
    SetInMemoryAreaInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether automatic scaling of the storage is enabled for the
   * Autonomous Database.</p>
   */
  inline bool GetIsAutoScalingForStorageEnabled() const { return m_isAutoScalingForStorageEnabled; }
  inline bool IsAutoScalingForStorageEnabledHasBeenSet() const { return m_isAutoScalingForStorageEnabledHasBeenSet; }
  inline void SetIsAutoScalingForStorageEnabled(bool value) {
    m_isAutoScalingForStorageEnabledHasBeenSet = true;
    m_isAutoScalingForStorageEnabled = value;
  }
  inline AutonomousDatabaseSummary& WithIsAutoScalingForStorageEnabled(bool value) {
    SetIsAutoScalingForStorageEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the ODB network associated with the Autonomous
   * Database.</p>
   */
  inline const Aws::String& GetOdbNetworkId() const { return m_odbNetworkId; }
  inline bool OdbNetworkIdHasBeenSet() const { return m_odbNetworkIdHasBeenSet; }
  template <typename OdbNetworkIdT = Aws::String>
  void SetOdbNetworkId(OdbNetworkIdT&& value) {
    m_odbNetworkIdHasBeenSet = true;
    m_odbNetworkId = std::forward<OdbNetworkIdT>(value);
  }
  template <typename OdbNetworkIdT = Aws::String>
  AutonomousDatabaseSummary& WithOdbNetworkId(OdbNetworkIdT&& value) {
    SetOdbNetworkId(std::forward<OdbNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ODB network associated with the
   * Autonomous Database.</p>
   */
  inline const Aws::String& GetOdbNetworkArn() const { return m_odbNetworkArn; }
  inline bool OdbNetworkArnHasBeenSet() const { return m_odbNetworkArnHasBeenSet; }
  template <typename OdbNetworkArnT = Aws::String>
  void SetOdbNetworkArn(OdbNetworkArnT&& value) {
    m_odbNetworkArnHasBeenSet = true;
    m_odbNetworkArn = std::forward<OdbNetworkArnT>(value);
  }
  template <typename OdbNetworkArnT = Aws::String>
  AutonomousDatabaseSummary& WithOdbNetworkArn(OdbNetworkArnT&& value) {
    SetOdbNetworkArn(std::forward<OdbNetworkArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private endpoint for the Autonomous Database.</p>
   */
  inline const Aws::String& GetPrivateEndpoint() const { return m_privateEndpoint; }
  inline bool PrivateEndpointHasBeenSet() const { return m_privateEndpointHasBeenSet; }
  template <typename PrivateEndpointT = Aws::String>
  void SetPrivateEndpoint(PrivateEndpointT&& value) {
    m_privateEndpointHasBeenSet = true;
    m_privateEndpoint = std::forward<PrivateEndpointT>(value);
  }
  template <typename PrivateEndpointT = Aws::String>
  AutonomousDatabaseSummary& WithPrivateEndpoint(PrivateEndpointT&& value) {
    SetPrivateEndpoint(std::forward<PrivateEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private endpoint IP address for the Autonomous Database.</p>
   */
  inline const Aws::String& GetPrivateEndpointIp() const { return m_privateEndpointIp; }
  inline bool PrivateEndpointIpHasBeenSet() const { return m_privateEndpointIpHasBeenSet; }
  template <typename PrivateEndpointIpT = Aws::String>
  void SetPrivateEndpointIp(PrivateEndpointIpT&& value) {
    m_privateEndpointIpHasBeenSet = true;
    m_privateEndpointIp = std::forward<PrivateEndpointIpT>(value);
  }
  template <typename PrivateEndpointIpT = Aws::String>
  AutonomousDatabaseSummary& WithPrivateEndpointIp(PrivateEndpointIpT&& value) {
    SetPrivateEndpointIp(std::forward<PrivateEndpointIpT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private endpoint label for the Autonomous Database.</p>
   */
  inline const Aws::String& GetPrivateEndpointLabel() const { return m_privateEndpointLabel; }
  inline bool PrivateEndpointLabelHasBeenSet() const { return m_privateEndpointLabelHasBeenSet; }
  template <typename PrivateEndpointLabelT = Aws::String>
  void SetPrivateEndpointLabel(PrivateEndpointLabelT&& value) {
    m_privateEndpointLabelHasBeenSet = true;
    m_privateEndpointLabel = std::forward<PrivateEndpointLabelT>(value);
  }
  template <typename PrivateEndpointLabelT = Aws::String>
  AutonomousDatabaseSummary& WithPrivateEndpointLabel(PrivateEndpointLabelT&& value) {
    SetPrivateEndpointLabel(std::forward<PrivateEndpointLabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of IP addresses that are allowed to access the Autonomous
   * Database.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowlistedIps() const { return m_allowlistedIps; }
  inline bool AllowlistedIpsHasBeenSet() const { return m_allowlistedIpsHasBeenSet; }
  template <typename AllowlistedIpsT = Aws::Vector<Aws::String>>
  void SetAllowlistedIps(AllowlistedIpsT&& value) {
    m_allowlistedIpsHasBeenSet = true;
    m_allowlistedIps = std::forward<AllowlistedIpsT>(value);
  }
  template <typename AllowlistedIpsT = Aws::Vector<Aws::String>>
  AutonomousDatabaseSummary& WithAllowlistedIps(AllowlistedIpsT&& value) {
    SetAllowlistedIps(std::forward<AllowlistedIpsT>(value));
    return *this;
  }
  template <typename AllowlistedIpsT = Aws::String>
  AutonomousDatabaseSummary& AddAllowlistedIps(AllowlistedIpsT&& value) {
    m_allowlistedIpsHasBeenSet = true;
    m_allowlistedIps.emplace_back(std::forward<AllowlistedIpsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of IP addresses that are allowed to access the standby Autonomous
   * Database.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStandbyAllowlistedIps() const { return m_standbyAllowlistedIps; }
  inline bool StandbyAllowlistedIpsHasBeenSet() const { return m_standbyAllowlistedIpsHasBeenSet; }
  template <typename StandbyAllowlistedIpsT = Aws::Vector<Aws::String>>
  void SetStandbyAllowlistedIps(StandbyAllowlistedIpsT&& value) {
    m_standbyAllowlistedIpsHasBeenSet = true;
    m_standbyAllowlistedIps = std::forward<StandbyAllowlistedIpsT>(value);
  }
  template <typename StandbyAllowlistedIpsT = Aws::Vector<Aws::String>>
  AutonomousDatabaseSummary& WithStandbyAllowlistedIps(StandbyAllowlistedIpsT&& value) {
    SetStandbyAllowlistedIps(std::forward<StandbyAllowlistedIpsT>(value));
    return *this;
  }
  template <typename StandbyAllowlistedIpsT = Aws::String>
  AutonomousDatabaseSummary& AddStandbyAllowlistedIps(StandbyAllowlistedIpsT&& value) {
    m_standbyAllowlistedIpsHasBeenSet = true;
    m_standbyAllowlistedIps.emplace_back(std::forward<StandbyAllowlistedIpsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source of the allowlisted IP addresses for the standby Autonomous
   * Database.</p>
   */
  inline StandbyAllowlistedIpsSource GetStandbyAllowlistedIpsSource() const { return m_standbyAllowlistedIpsSource; }
  inline bool StandbyAllowlistedIpsSourceHasBeenSet() const { return m_standbyAllowlistedIpsSourceHasBeenSet; }
  inline void SetStandbyAllowlistedIpsSource(StandbyAllowlistedIpsSource value) {
    m_standbyAllowlistedIpsSourceHasBeenSet = true;
    m_standbyAllowlistedIpsSource = value;
  }
  inline AutonomousDatabaseSummary& WithStandbyAllowlistedIpsSource(StandbyAllowlistedIpsSource value) {
    SetStandbyAllowlistedIpsSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether local Oracle Data Guard is enabled for the Autonomous
   * Database.</p>
   */
  inline bool GetIsLocalDataGuardEnabled() const { return m_isLocalDataGuardEnabled; }
  inline bool IsLocalDataGuardEnabledHasBeenSet() const { return m_isLocalDataGuardEnabledHasBeenSet; }
  inline void SetIsLocalDataGuardEnabled(bool value) {
    m_isLocalDataGuardEnabledHasBeenSet = true;
    m_isLocalDataGuardEnabled = value;
  }
  inline AutonomousDatabaseSummary& WithIsLocalDataGuardEnabled(bool value) {
    SetIsLocalDataGuardEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether remote Oracle Data Guard is enabled for the Autonomous
   * Database.</p>
   */
  inline bool GetIsRemoteDataGuardEnabled() const { return m_isRemoteDataGuardEnabled; }
  inline bool IsRemoteDataGuardEnabledHasBeenSet() const { return m_isRemoteDataGuardEnabledHasBeenSet; }
  inline void SetIsRemoteDataGuardEnabled(bool value) {
    m_isRemoteDataGuardEnabledHasBeenSet = true;
    m_isRemoteDataGuardEnabled = value;
  }
  inline AutonomousDatabaseSummary& WithIsRemoteDataGuardEnabled(bool value) {
    SetIsRemoteDataGuardEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of local disaster recovery configured for the Autonomous
   * Database.</p>
   */
  inline DisasterRecoveryType GetLocalDisasterRecoveryType() const { return m_localDisasterRecoveryType; }
  inline bool LocalDisasterRecoveryTypeHasBeenSet() const { return m_localDisasterRecoveryTypeHasBeenSet; }
  inline void SetLocalDisasterRecoveryType(DisasterRecoveryType value) {
    m_localDisasterRecoveryTypeHasBeenSet = true;
    m_localDisasterRecoveryType = value;
  }
  inline AutonomousDatabaseSummary& WithLocalDisasterRecoveryType(DisasterRecoveryType value) {
    SetLocalDisasterRecoveryType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle Data Guard role of the Autonomous Database.</p>
   */
  inline DataGuardRole GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  inline void SetRole(DataGuardRole value) {
    m_roleHasBeenSet = true;
    m_role = value;
  }
  inline AutonomousDatabaseSummary& WithRole(DataGuardRole value) {
    SetRole(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of unique identifiers of the peer Autonomous Databases.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPeerDbIds() const { return m_peerDbIds; }
  inline bool PeerDbIdsHasBeenSet() const { return m_peerDbIdsHasBeenSet; }
  template <typename PeerDbIdsT = Aws::Vector<Aws::String>>
  void SetPeerDbIds(PeerDbIdsT&& value) {
    m_peerDbIdsHasBeenSet = true;
    m_peerDbIds = std::forward<PeerDbIdsT>(value);
  }
  template <typename PeerDbIdsT = Aws::Vector<Aws::String>>
  AutonomousDatabaseSummary& WithPeerDbIds(PeerDbIdsT&& value) {
    SetPeerDbIds(std::forward<PeerDbIdsT>(value));
    return *this;
  }
  template <typename PeerDbIdsT = Aws::String>
  AutonomousDatabaseSummary& AddPeerDbIds(PeerDbIdsT&& value) {
    m_peerDbIdsHasBeenSet = true;
    m_peerDbIds.emplace_back(std::forward<PeerDbIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of time, in seconds, that the data in the Autonomous Database is
   * behind the data in the primary database.</p>
   */
  inline int GetFailedDataRecoveryInSeconds() const { return m_failedDataRecoveryInSeconds; }
  inline bool FailedDataRecoveryInSecondsHasBeenSet() const { return m_failedDataRecoveryInSecondsHasBeenSet; }
  inline void SetFailedDataRecoveryInSeconds(int value) {
    m_failedDataRecoveryInSecondsHasBeenSet = true;
    m_failedDataRecoveryInSeconds = value;
  }
  inline AutonomousDatabaseSummary& WithFailedDataRecoveryInSeconds(int value) {
    SetFailedDataRecoveryInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum data loss limit, in seconds, for automatic failover to the local
   * Oracle Data Guard standby database.</p>
   */
  inline int GetLocalAdgAutoFailoverMaxDataLossLimit() const { return m_localAdgAutoFailoverMaxDataLossLimit; }
  inline bool LocalAdgAutoFailoverMaxDataLossLimitHasBeenSet() const { return m_localAdgAutoFailoverMaxDataLossLimitHasBeenSet; }
  inline void SetLocalAdgAutoFailoverMaxDataLossLimit(int value) {
    m_localAdgAutoFailoverMaxDataLossLimitHasBeenSet = true;
    m_localAdgAutoFailoverMaxDataLossLimit = value;
  }
  inline AutonomousDatabaseSummary& WithLocalAdgAutoFailoverMaxDataLossLimit(int value) {
    SetLocalAdgAutoFailoverMaxDataLossLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the remote disaster recovery for the Autonomous
   * Database.</p>
   */
  inline const DisasterRecoveryConfiguration& GetRemoteDisasterRecoveryConfiguration() const {
    return m_remoteDisasterRecoveryConfiguration;
  }
  inline bool RemoteDisasterRecoveryConfigurationHasBeenSet() const { return m_remoteDisasterRecoveryConfigurationHasBeenSet; }
  template <typename RemoteDisasterRecoveryConfigurationT = DisasterRecoveryConfiguration>
  void SetRemoteDisasterRecoveryConfiguration(RemoteDisasterRecoveryConfigurationT&& value) {
    m_remoteDisasterRecoveryConfigurationHasBeenSet = true;
    m_remoteDisasterRecoveryConfiguration = std::forward<RemoteDisasterRecoveryConfigurationT>(value);
  }
  template <typename RemoteDisasterRecoveryConfigurationT = DisasterRecoveryConfiguration>
  AutonomousDatabaseSummary& WithRemoteDisasterRecoveryConfiguration(RemoteDisasterRecoveryConfigurationT&& value) {
    SetRemoteDisasterRecoveryConfiguration(std::forward<RemoteDisasterRecoveryConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the Autonomous Database is a refreshable clone.</p>
   */
  inline bool GetIsRefreshableClone() const { return m_isRefreshableClone; }
  inline bool IsRefreshableCloneHasBeenSet() const { return m_isRefreshableCloneHasBeenSet; }
  inline void SetIsRefreshableClone(bool value) {
    m_isRefreshableCloneHasBeenSet = true;
    m_isRefreshableClone = value;
  }
  inline AutonomousDatabaseSummary& WithIsRefreshableClone(bool value) {
    SetIsRefreshableClone(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The refresh mode of the refreshable clone Autonomous Database.</p>
   */
  inline RefreshableMode GetRefreshableMode() const { return m_refreshableMode; }
  inline bool RefreshableModeHasBeenSet() const { return m_refreshableModeHasBeenSet; }
  inline void SetRefreshableMode(RefreshableMode value) {
    m_refreshableModeHasBeenSet = true;
    m_refreshableMode = value;
  }
  inline AutonomousDatabaseSummary& WithRefreshableMode(RefreshableMode value) {
    SetRefreshableMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The refresh status of the refreshable clone Autonomous Database.</p>
   */
  inline RefreshableStatus GetRefreshableStatus() const { return m_refreshableStatus; }
  inline bool RefreshableStatusHasBeenSet() const { return m_refreshableStatusHasBeenSet; }
  inline void SetRefreshableStatus(RefreshableStatus value) {
    m_refreshableStatusHasBeenSet = true;
    m_refreshableStatus = value;
  }
  inline AutonomousDatabaseSummary& WithRefreshableStatus(RefreshableStatus value) {
    SetRefreshableStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The frequency, in seconds, at which the refreshable clone Autonomous Database
   * is automatically refreshed.</p>
   */
  inline int GetAutoRefreshFrequencyInSeconds() const { return m_autoRefreshFrequencyInSeconds; }
  inline bool AutoRefreshFrequencyInSecondsHasBeenSet() const { return m_autoRefreshFrequencyInSecondsHasBeenSet; }
  inline void SetAutoRefreshFrequencyInSeconds(int value) {
    m_autoRefreshFrequencyInSecondsHasBeenSet = true;
    m_autoRefreshFrequencyInSeconds = value;
  }
  inline AutonomousDatabaseSummary& WithAutoRefreshFrequencyInSeconds(int value) {
    SetAutoRefreshFrequencyInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time lag, in seconds, between the refreshable clone and its source
   * Autonomous Database.</p>
   */
  inline int GetAutoRefreshPointLagInSeconds() const { return m_autoRefreshPointLagInSeconds; }
  inline bool AutoRefreshPointLagInSecondsHasBeenSet() const { return m_autoRefreshPointLagInSecondsHasBeenSet; }
  inline void SetAutoRefreshPointLagInSeconds(int value) {
    m_autoRefreshPointLagInSecondsHasBeenSet = true;
    m_autoRefreshPointLagInSeconds = value;
  }
  inline AutonomousDatabaseSummary& WithAutoRefreshPointLagInSeconds(int value) {
    SetAutoRefreshPointLagInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether reconnecting the refreshable clone to its source Autonomous
   * Database is enabled.</p>
   */
  inline bool GetIsReconnectCloneEnabled() const { return m_isReconnectCloneEnabled; }
  inline bool IsReconnectCloneEnabledHasBeenSet() const { return m_isReconnectCloneEnabledHasBeenSet; }
  inline void SetIsReconnectCloneEnabled(bool value) {
    m_isReconnectCloneEnabledHasBeenSet = true;
    m_isReconnectCloneEnabled = value;
  }
  inline AutonomousDatabaseSummary& WithIsReconnectCloneEnabled(bool value) {
    SetIsReconnectCloneEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of tablespace identifiers to clone for the Autonomous Database.</p>
   */
  inline const Aws::Vector<int>& GetCloneTableSpaceList() const { return m_cloneTableSpaceList; }
  inline bool CloneTableSpaceListHasBeenSet() const { return m_cloneTableSpaceListHasBeenSet; }
  template <typename CloneTableSpaceListT = Aws::Vector<int>>
  void SetCloneTableSpaceList(CloneTableSpaceListT&& value) {
    m_cloneTableSpaceListHasBeenSet = true;
    m_cloneTableSpaceList = std::forward<CloneTableSpaceListT>(value);
  }
  template <typename CloneTableSpaceListT = Aws::Vector<int>>
  AutonomousDatabaseSummary& WithCloneTableSpaceList(CloneTableSpaceListT&& value) {
    SetCloneTableSpaceList(std::forward<CloneTableSpaceListT>(value));
    return *this;
  }
  inline AutonomousDatabaseSummary& AddCloneTableSpaceList(int value) {
    m_cloneTableSpaceListHasBeenSet = true;
    m_cloneTableSpaceList.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The retention period, in days, for automatic backups of the Autonomous
   * Database.</p>
   */
  inline int GetBackupRetentionPeriodInDays() const { return m_backupRetentionPeriodInDays; }
  inline bool BackupRetentionPeriodInDaysHasBeenSet() const { return m_backupRetentionPeriodInDaysHasBeenSet; }
  inline void SetBackupRetentionPeriodInDays(int value) {
    m_backupRetentionPeriodInDaysHasBeenSet = true;
    m_backupRetentionPeriodInDays = value;
  }
  inline AutonomousDatabaseSummary& WithBackupRetentionPeriodInDays(int value) {
    SetBackupRetentionPeriodInDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The long-term backup schedule for the Autonomous Database.</p>
   */
  inline const LongTermBackupSchedule& GetLongTermBackupSchedule() const { return m_longTermBackupSchedule; }
  inline bool LongTermBackupScheduleHasBeenSet() const { return m_longTermBackupScheduleHasBeenSet; }
  template <typename LongTermBackupScheduleT = LongTermBackupSchedule>
  void SetLongTermBackupSchedule(LongTermBackupScheduleT&& value) {
    m_longTermBackupScheduleHasBeenSet = true;
    m_longTermBackupSchedule = std::forward<LongTermBackupScheduleT>(value);
  }
  template <typename LongTermBackupScheduleT = LongTermBackupSchedule>
  AutonomousDatabaseSummary& WithLongTermBackupSchedule(LongTermBackupScheduleT&& value) {
    SetLongTermBackupSchedule(std::forward<LongTermBackupScheduleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the backup retention period of the Autonomous Database is
   * locked.</p>
   */
  inline bool GetIsBackupRetentionLocked() const { return m_isBackupRetentionLocked; }
  inline bool IsBackupRetentionLockedHasBeenSet() const { return m_isBackupRetentionLockedHasBeenSet; }
  inline void SetIsBackupRetentionLocked(bool value) {
    m_isBackupRetentionLockedHasBeenSet = true;
    m_isBackupRetentionLocked = value;
  }
  inline AutonomousDatabaseSummary& WithIsBackupRetentionLocked(bool value) {
    SetIsBackupRetentionLocked(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total amount of backup storage used by the Autonomous Database, in
   * GB.</p>
   */
  inline double GetTotalBackupStorageSizeInGBs() const { return m_totalBackupStorageSizeInGBs; }
  inline bool TotalBackupStorageSizeInGBsHasBeenSet() const { return m_totalBackupStorageSizeInGBsHasBeenSet; }
  inline void SetTotalBackupStorageSizeInGBs(double value) {
    m_totalBackupStorageSizeInGBsHasBeenSet = true;
    m_totalBackupStorageSizeInGBs = value;
  }
  inline AutonomousDatabaseSummary& WithTotalBackupStorageSizeInGBs(double value) {
    SetTotalBackupStorageSizeInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the resource pool for the Autonomous Database.</p>
   */
  inline const ResourcePoolSummary& GetResourcePoolSummary() const { return m_resourcePoolSummary; }
  inline bool ResourcePoolSummaryHasBeenSet() const { return m_resourcePoolSummaryHasBeenSet; }
  template <typename ResourcePoolSummaryT = ResourcePoolSummary>
  void SetResourcePoolSummary(ResourcePoolSummaryT&& value) {
    m_resourcePoolSummaryHasBeenSet = true;
    m_resourcePoolSummary = std::forward<ResourcePoolSummaryT>(value);
  }
  template <typename ResourcePoolSummaryT = ResourcePoolSummary>
  AutonomousDatabaseSummary& WithResourcePoolSummary(ResourcePoolSummaryT&& value) {
    SetResourcePoolSummary(std::forward<ResourcePoolSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration for the Autonomous Database.</p>
   */
  inline const EncryptionSummary& GetEncryptionSummary() const { return m_encryptionSummary; }
  inline bool EncryptionSummaryHasBeenSet() const { return m_encryptionSummaryHasBeenSet; }
  template <typename EncryptionSummaryT = EncryptionSummary>
  void SetEncryptionSummary(EncryptionSummaryT&& value) {
    m_encryptionSummaryHasBeenSet = true;
    m_encryptionSummary = std::forward<EncryptionSummaryT>(value);
  }
  template <typename EncryptionSummaryT = EncryptionSummary>
  AutonomousDatabaseSummary& WithEncryptionSummary(EncryptionSummaryT&& value) {
    SetEncryptionSummary(std::forward<EncryptionSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Autonomous Database was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time of the last backup of the Autonomous Database.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeOfLastBackup() const { return m_timeOfLastBackup; }
  inline bool TimeOfLastBackupHasBeenSet() const { return m_timeOfLastBackupHasBeenSet; }
  template <typename TimeOfLastBackupT = Aws::Utils::DateTime>
  void SetTimeOfLastBackup(TimeOfLastBackupT&& value) {
    m_timeOfLastBackupHasBeenSet = true;
    m_timeOfLastBackup = std::forward<TimeOfLastBackupT>(value);
  }
  template <typename TimeOfLastBackupT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithTimeOfLastBackup(TimeOfLastBackupT&& value) {
    SetTimeOfLastBackup(std::forward<TimeOfLastBackupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the next maintenance of the Autonomous Database
   * begins.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeMaintenanceBegin() const { return m_timeMaintenanceBegin; }
  inline bool TimeMaintenanceBeginHasBeenSet() const { return m_timeMaintenanceBeginHasBeenSet; }
  template <typename TimeMaintenanceBeginT = Aws::Utils::DateTime>
  void SetTimeMaintenanceBegin(TimeMaintenanceBeginT&& value) {
    m_timeMaintenanceBeginHasBeenSet = true;
    m_timeMaintenanceBegin = std::forward<TimeMaintenanceBeginT>(value);
  }
  template <typename TimeMaintenanceBeginT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithTimeMaintenanceBegin(TimeMaintenanceBeginT&& value) {
    SetTimeMaintenanceBegin(std::forward<TimeMaintenanceBeginT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the next maintenance of the Autonomous Database
   * ends.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeMaintenanceEnd() const { return m_timeMaintenanceEnd; }
  inline bool TimeMaintenanceEndHasBeenSet() const { return m_timeMaintenanceEndHasBeenSet; }
  template <typename TimeMaintenanceEndT = Aws::Utils::DateTime>
  void SetTimeMaintenanceEnd(TimeMaintenanceEndT&& value) {
    m_timeMaintenanceEndHasBeenSet = true;
    m_timeMaintenanceEnd = std::forward<TimeMaintenanceEndT>(value);
  }
  template <typename TimeMaintenanceEndT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithTimeMaintenanceEnd(TimeMaintenanceEndT&& value) {
    SetTimeMaintenanceEnd(std::forward<TimeMaintenanceEndT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when local Oracle Data Guard was enabled for the Autonomous
   * Database.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeLocalDataGuardEnabled() const { return m_timeLocalDataGuardEnabled; }
  inline bool TimeLocalDataGuardEnabledHasBeenSet() const { return m_timeLocalDataGuardEnabledHasBeenSet; }
  template <typename TimeLocalDataGuardEnabledT = Aws::Utils::DateTime>
  void SetTimeLocalDataGuardEnabled(TimeLocalDataGuardEnabledT&& value) {
    m_timeLocalDataGuardEnabledHasBeenSet = true;
    m_timeLocalDataGuardEnabled = std::forward<TimeLocalDataGuardEnabledT>(value);
  }
  template <typename TimeLocalDataGuardEnabledT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithTimeLocalDataGuardEnabled(TimeLocalDataGuardEnabledT&& value) {
    SetTimeLocalDataGuardEnabled(std::forward<TimeLocalDataGuardEnabledT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Oracle Data Guard role of the Autonomous Database
   * last changed.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeDataGuardRoleChanged() const { return m_timeDataGuardRoleChanged; }
  inline bool TimeDataGuardRoleChangedHasBeenSet() const { return m_timeDataGuardRoleChangedHasBeenSet; }
  template <typename TimeDataGuardRoleChangedT = Aws::Utils::DateTime>
  void SetTimeDataGuardRoleChanged(TimeDataGuardRoleChangedT&& value) {
    m_timeDataGuardRoleChangedHasBeenSet = true;
    m_timeDataGuardRoleChanged = std::forward<TimeDataGuardRoleChangedT>(value);
  }
  template <typename TimeDataGuardRoleChangedT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithTimeDataGuardRoleChanged(TimeDataGuardRoleChangedT&& value) {
    SetTimeDataGuardRoleChanged(std::forward<TimeDataGuardRoleChangedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time of the last switchover operation for the Autonomous
   * Database.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeOfLastSwitchover() const { return m_timeOfLastSwitchover; }
  inline bool TimeOfLastSwitchoverHasBeenSet() const { return m_timeOfLastSwitchoverHasBeenSet; }
  template <typename TimeOfLastSwitchoverT = Aws::Utils::DateTime>
  void SetTimeOfLastSwitchover(TimeOfLastSwitchoverT&& value) {
    m_timeOfLastSwitchoverHasBeenSet = true;
    m_timeOfLastSwitchover = std::forward<TimeOfLastSwitchoverT>(value);
  }
  template <typename TimeOfLastSwitchoverT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithTimeOfLastSwitchover(TimeOfLastSwitchoverT&& value) {
    SetTimeOfLastSwitchover(std::forward<TimeOfLastSwitchoverT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time of the last failover operation for the Autonomous
   * Database.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeOfLastFailover() const { return m_timeOfLastFailover; }
  inline bool TimeOfLastFailoverHasBeenSet() const { return m_timeOfLastFailoverHasBeenSet; }
  template <typename TimeOfLastFailoverT = Aws::Utils::DateTime>
  void SetTimeOfLastFailover(TimeOfLastFailoverT&& value) {
    m_timeOfLastFailoverHasBeenSet = true;
    m_timeOfLastFailover = std::forward<TimeOfLastFailoverT>(value);
  }
  template <typename TimeOfLastFailoverT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithTimeOfLastFailover(TimeOfLastFailoverT&& value) {
    SetTimeOfLastFailover(std::forward<TimeOfLastFailoverT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time of the last refresh of the refreshable clone Autonomous
   * Database.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeOfLastRefresh() const { return m_timeOfLastRefresh; }
  inline bool TimeOfLastRefreshHasBeenSet() const { return m_timeOfLastRefreshHasBeenSet; }
  template <typename TimeOfLastRefreshT = Aws::Utils::DateTime>
  void SetTimeOfLastRefresh(TimeOfLastRefreshT&& value) {
    m_timeOfLastRefreshHasBeenSet = true;
    m_timeOfLastRefresh = std::forward<TimeOfLastRefreshT>(value);
  }
  template <typename TimeOfLastRefreshT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithTimeOfLastRefresh(TimeOfLastRefreshT&& value) {
    SetTimeOfLastRefresh(std::forward<TimeOfLastRefreshT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time as of which the data in the refreshable clone Autonomous
   * Database is current.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeOfLastRefreshPoint() const { return m_timeOfLastRefreshPoint; }
  inline bool TimeOfLastRefreshPointHasBeenSet() const { return m_timeOfLastRefreshPointHasBeenSet; }
  template <typename TimeOfLastRefreshPointT = Aws::Utils::DateTime>
  void SetTimeOfLastRefreshPoint(TimeOfLastRefreshPointT&& value) {
    m_timeOfLastRefreshPointHasBeenSet = true;
    m_timeOfLastRefreshPoint = std::forward<TimeOfLastRefreshPointT>(value);
  }
  template <typename TimeOfLastRefreshPointT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithTimeOfLastRefreshPoint(TimeOfLastRefreshPointT&& value) {
    SetTimeOfLastRefreshPoint(std::forward<TimeOfLastRefreshPointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time of the next scheduled refresh of the refreshable clone
   * Autonomous Database.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeOfNextRefresh() const { return m_timeOfNextRefresh; }
  inline bool TimeOfNextRefreshHasBeenSet() const { return m_timeOfNextRefreshHasBeenSet; }
  template <typename TimeOfNextRefreshT = Aws::Utils::DateTime>
  void SetTimeOfNextRefresh(TimeOfNextRefreshT&& value) {
    m_timeOfNextRefreshHasBeenSet = true;
    m_timeOfNextRefresh = std::forward<TimeOfNextRefreshT>(value);
  }
  template <typename TimeOfNextRefreshT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithTimeOfNextRefresh(TimeOfNextRefreshT&& value) {
    SetTimeOfNextRefresh(std::forward<TimeOfNextRefreshT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time at which the automatic refresh of the refreshable clone
   * Autonomous Database starts.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeOfAutoRefreshStart() const { return m_timeOfAutoRefreshStart; }
  inline bool TimeOfAutoRefreshStartHasBeenSet() const { return m_timeOfAutoRefreshStartHasBeenSet; }
  template <typename TimeOfAutoRefreshStartT = Aws::Utils::DateTime>
  void SetTimeOfAutoRefreshStart(TimeOfAutoRefreshStartT&& value) {
    m_timeOfAutoRefreshStartHasBeenSet = true;
    m_timeOfAutoRefreshStart = std::forward<TimeOfAutoRefreshStartT>(value);
  }
  template <typename TimeOfAutoRefreshStartT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithTimeOfAutoRefreshStart(TimeOfAutoRefreshStartT&& value) {
    SetTimeOfAutoRefreshStart(std::forward<TimeOfAutoRefreshStartT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the inactive Always Free Autonomous Database is
   * scheduled to be automatically deleted.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeDeletionOfFreeAutonomousDatabase() const { return m_timeDeletionOfFreeAutonomousDatabase; }
  inline bool TimeDeletionOfFreeAutonomousDatabaseHasBeenSet() const { return m_timeDeletionOfFreeAutonomousDatabaseHasBeenSet; }
  template <typename TimeDeletionOfFreeAutonomousDatabaseT = Aws::Utils::DateTime>
  void SetTimeDeletionOfFreeAutonomousDatabase(TimeDeletionOfFreeAutonomousDatabaseT&& value) {
    m_timeDeletionOfFreeAutonomousDatabaseHasBeenSet = true;
    m_timeDeletionOfFreeAutonomousDatabase = std::forward<TimeDeletionOfFreeAutonomousDatabaseT>(value);
  }
  template <typename TimeDeletionOfFreeAutonomousDatabaseT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithTimeDeletionOfFreeAutonomousDatabase(TimeDeletionOfFreeAutonomousDatabaseT&& value) {
    SetTimeDeletionOfFreeAutonomousDatabase(std::forward<TimeDeletionOfFreeAutonomousDatabaseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Always Free Autonomous Database is scheduled to be
   * stopped because of inactivity.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeReclamationOfFreeAutonomousDatabase() const {
    return m_timeReclamationOfFreeAutonomousDatabase;
  }
  inline bool TimeReclamationOfFreeAutonomousDatabaseHasBeenSet() const { return m_timeReclamationOfFreeAutonomousDatabaseHasBeenSet; }
  template <typename TimeReclamationOfFreeAutonomousDatabaseT = Aws::Utils::DateTime>
  void SetTimeReclamationOfFreeAutonomousDatabase(TimeReclamationOfFreeAutonomousDatabaseT&& value) {
    m_timeReclamationOfFreeAutonomousDatabaseHasBeenSet = true;
    m_timeReclamationOfFreeAutonomousDatabase = std::forward<TimeReclamationOfFreeAutonomousDatabaseT>(value);
  }
  template <typename TimeReclamationOfFreeAutonomousDatabaseT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithTimeReclamationOfFreeAutonomousDatabase(TimeReclamationOfFreeAutonomousDatabaseT&& value) {
    SetTimeReclamationOfFreeAutonomousDatabase(std::forward<TimeReclamationOfFreeAutonomousDatabaseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the disaster recovery role of the Autonomous Database
   * last changed.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeDisasterRecoveryRoleChanged() const { return m_timeDisasterRecoveryRoleChanged; }
  inline bool TimeDisasterRecoveryRoleChangedHasBeenSet() const { return m_timeDisasterRecoveryRoleChangedHasBeenSet; }
  template <typename TimeDisasterRecoveryRoleChangedT = Aws::Utils::DateTime>
  void SetTimeDisasterRecoveryRoleChanged(TimeDisasterRecoveryRoleChangedT&& value) {
    m_timeDisasterRecoveryRoleChangedHasBeenSet = true;
    m_timeDisasterRecoveryRoleChanged = std::forward<TimeDisasterRecoveryRoleChangedT>(value);
  }
  template <typename TimeDisasterRecoveryRoleChangedT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithTimeDisasterRecoveryRoleChanged(TimeDisasterRecoveryRoleChangedT&& value) {
    SetTimeDisasterRecoveryRoleChanged(std::forward<TimeDisasterRecoveryRoleChangedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time until which reconnecting the refreshable clone to its
   * source Autonomous Database is allowed.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeUntilReconnectCloneEnabled() const { return m_timeUntilReconnectCloneEnabled; }
  inline bool TimeUntilReconnectCloneEnabledHasBeenSet() const { return m_timeUntilReconnectCloneEnabledHasBeenSet; }
  template <typename TimeUntilReconnectCloneEnabledT = Aws::Utils::DateTime>
  void SetTimeUntilReconnectCloneEnabled(TimeUntilReconnectCloneEnabledT&& value) {
    m_timeUntilReconnectCloneEnabledHasBeenSet = true;
    m_timeUntilReconnectCloneEnabled = std::forward<TimeUntilReconnectCloneEnabledT>(value);
  }
  template <typename TimeUntilReconnectCloneEnabledT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithTimeUntilReconnectCloneEnabled(TimeUntilReconnectCloneEnabledT&& value) {
    SetTimeUntilReconnectCloneEnabled(std::forward<TimeUntilReconnectCloneEnabledT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time of the next scheduled long-term backup of the Autonomous
   * Database.</p>
   */
  inline const Aws::Utils::DateTime& GetNextLongTermBackupTimeStamp() const { return m_nextLongTermBackupTimeStamp; }
  inline bool NextLongTermBackupTimeStampHasBeenSet() const { return m_nextLongTermBackupTimeStampHasBeenSet; }
  template <typename NextLongTermBackupTimeStampT = Aws::Utils::DateTime>
  void SetNextLongTermBackupTimeStamp(NextLongTermBackupTimeStampT&& value) {
    m_nextLongTermBackupTimeStampHasBeenSet = true;
    m_nextLongTermBackupTimeStamp = std::forward<NextLongTermBackupTimeStampT>(value);
  }
  template <typename NextLongTermBackupTimeStampT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithNextLongTermBackupTimeStamp(NextLongTermBackupTimeStampT&& value) {
    SetNextLongTermBackupTimeStamp(std::forward<NextLongTermBackupTimeStampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Autonomous Database was restored after
   * deletion.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeUndeleted() const { return m_timeUndeleted; }
  inline bool TimeUndeletedHasBeenSet() const { return m_timeUndeletedHasBeenSet; }
  template <typename TimeUndeletedT = Aws::Utils::DateTime>
  void SetTimeUndeleted(TimeUndeletedT&& value) {
    m_timeUndeletedHasBeenSet = true;
    m_timeUndeleted = std::forward<TimeUndeletedT>(value);
  }
  template <typename TimeUndeletedT = Aws::Utils::DateTime>
  AutonomousDatabaseSummary& WithTimeUndeleted(TimeUndeletedT&& value) {
    SetTimeUndeleted(std::forward<TimeUndeletedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The summary of the admin password source configuration for the Autonomous
   * Database.</p>
   */
  inline const AdminPasswordSourceSummary& GetAdminPasswordSourceSummary() const { return m_adminPasswordSourceSummary; }
  inline bool AdminPasswordSourceSummaryHasBeenSet() const { return m_adminPasswordSourceSummaryHasBeenSet; }
  template <typename AdminPasswordSourceSummaryT = AdminPasswordSourceSummary>
  void SetAdminPasswordSourceSummary(AdminPasswordSourceSummaryT&& value) {
    m_adminPasswordSourceSummaryHasBeenSet = true;
    m_adminPasswordSourceSummary = std::forward<AdminPasswordSourceSummaryT>(value);
  }
  template <typename AdminPasswordSourceSummaryT = AdminPasswordSourceSummary>
  AutonomousDatabaseSummary& WithAdminPasswordSourceSummary(AdminPasswordSourceSummaryT&& value) {
    SetAdminPasswordSourceSummary(std::forward<AdminPasswordSourceSummaryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_autonomousDatabaseId;

  Aws::String m_autonomousDatabaseArn;

  Aws::String m_ociResourceAnchorName;

  double m_percentProgress{0.0};

  Aws::String m_ocid;

  Aws::String m_ociUrl;

  Aws::String m_displayName;

  Aws::String m_dbName;

  Aws::String m_sourceId;

  AutonomousDatabaseResourceStatus m_status{AutonomousDatabaseResourceStatus::NOT_SET};

  Aws::String m_statusReason;

  DatabaseType m_databaseType{DatabaseType::NOT_SET};

  Aws::String m_dbVersion;

  DbWorkload m_dbWorkload{DbWorkload::NOT_SET};

  Aws::String m_characterSet;

  Aws::String m_ncharacterSet;

  DatabaseEdition m_databaseEdition{DatabaseEdition::NOT_SET};

  LicenseModel m_licenseModel{LicenseModel::NOT_SET};

  OpenMode m_openMode{OpenMode::NOT_SET};

  PermissionLevel m_permissionLevel{PermissionLevel::NOT_SET};

  bool m_isMtlsConnectionRequired{false};

  AutonomousMaintenanceScheduleType m_autonomousMaintenanceScheduleType{AutonomousMaintenanceScheduleType::NOT_SET};

  NetServicesArchitecture m_netServicesArchitecture{NetServicesArchitecture::NOT_SET};

  Aws::Vector<Aws::String> m_availableUpgradeVersions;

  int m_byolComputeCountLimit{0};

  AutonomousDatabaseConnectionStrings m_connectionStringDetails;

  Aws::String m_serviceConsoleUrl;

  Aws::String m_sqlWebDeveloperUrl;

  Aws::Vector<CustomerContact> m_customerContacts;

  AutonomousDatabaseApex m_apexDetails;

  DatabaseStandbySummary m_standbyDb;

  DatabaseStandbySummary m_localStandbyDb;

  DataSafeStatus m_dataSafeStatus{DataSafeStatus::NOT_SET};

  DatabaseManagementStatus m_databaseManagementStatus{DatabaseManagementStatus::NOT_SET};

  OperationsInsightsStatus m_operationsInsightsStatus{OperationsInsightsStatus::NOT_SET};

  Aws::String m_availabilityZone;

  Aws::String m_availabilityZoneId;

  Aws::String m_maintenanceTargetComponent;

  AutonomousDatabaseConnectionUrls m_connectionUrls;

  Aws::Vector<DatabaseTool> m_dbToolsDetails;

  Aws::Vector<ScheduledOperationDetails> m_scheduledOperations;

  Aws::String m_resourcePoolLeaderId;

  double m_computeCount{0.0};

  ComputeModel m_computeModel{ComputeModel::NOT_SET};

  int m_cpuCoreCount{0};

  int m_memoryPerOracleComputeUnitInGBs{0};

  Aws::Vector<int> m_provisionableCpus;

  bool m_isAutoScalingEnabled{false};

  double m_dataStorageSizeInTBs{0.0};

  int m_dataStorageSizeInGBs{0};

  double m_usedDataStorageSizeInTBs{0.0};

  int m_usedDataStorageSizeInGBs{0};

  double m_actualUsedDataStorageSizeInTBs{0.0};

  double m_allocatedStorageSizeInTBs{0.0};

  int m_inMemoryAreaInGBs{0};

  bool m_isAutoScalingForStorageEnabled{false};

  Aws::String m_odbNetworkId;

  Aws::String m_odbNetworkArn;

  Aws::String m_privateEndpoint;

  Aws::String m_privateEndpointIp;

  Aws::String m_privateEndpointLabel;

  Aws::Vector<Aws::String> m_allowlistedIps;

  Aws::Vector<Aws::String> m_standbyAllowlistedIps;

  StandbyAllowlistedIpsSource m_standbyAllowlistedIpsSource{StandbyAllowlistedIpsSource::NOT_SET};

  bool m_isLocalDataGuardEnabled{false};

  bool m_isRemoteDataGuardEnabled{false};

  DisasterRecoveryType m_localDisasterRecoveryType{DisasterRecoveryType::NOT_SET};

  DataGuardRole m_role{DataGuardRole::NOT_SET};

  Aws::Vector<Aws::String> m_peerDbIds;

  int m_failedDataRecoveryInSeconds{0};

  int m_localAdgAutoFailoverMaxDataLossLimit{0};

  DisasterRecoveryConfiguration m_remoteDisasterRecoveryConfiguration;

  bool m_isRefreshableClone{false};

  RefreshableMode m_refreshableMode{RefreshableMode::NOT_SET};

  RefreshableStatus m_refreshableStatus{RefreshableStatus::NOT_SET};

  int m_autoRefreshFrequencyInSeconds{0};

  int m_autoRefreshPointLagInSeconds{0};

  bool m_isReconnectCloneEnabled{false};

  Aws::Vector<int> m_cloneTableSpaceList;

  int m_backupRetentionPeriodInDays{0};

  LongTermBackupSchedule m_longTermBackupSchedule;

  bool m_isBackupRetentionLocked{false};

  double m_totalBackupStorageSizeInGBs{0.0};

  ResourcePoolSummary m_resourcePoolSummary;

  EncryptionSummary m_encryptionSummary;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_timeOfLastBackup{};

  Aws::Utils::DateTime m_timeMaintenanceBegin{};

  Aws::Utils::DateTime m_timeMaintenanceEnd{};

  Aws::Utils::DateTime m_timeLocalDataGuardEnabled{};

  Aws::Utils::DateTime m_timeDataGuardRoleChanged{};

  Aws::Utils::DateTime m_timeOfLastSwitchover{};

  Aws::Utils::DateTime m_timeOfLastFailover{};

  Aws::Utils::DateTime m_timeOfLastRefresh{};

  Aws::Utils::DateTime m_timeOfLastRefreshPoint{};

  Aws::Utils::DateTime m_timeOfNextRefresh{};

  Aws::Utils::DateTime m_timeOfAutoRefreshStart{};

  Aws::Utils::DateTime m_timeDeletionOfFreeAutonomousDatabase{};

  Aws::Utils::DateTime m_timeReclamationOfFreeAutonomousDatabase{};

  Aws::Utils::DateTime m_timeDisasterRecoveryRoleChanged{};

  Aws::Utils::DateTime m_timeUntilReconnectCloneEnabled{};

  Aws::Utils::DateTime m_nextLongTermBackupTimeStamp{};

  Aws::Utils::DateTime m_timeUndeleted{};

  AdminPasswordSourceSummary m_adminPasswordSourceSummary;
  bool m_autonomousDatabaseIdHasBeenSet = false;
  bool m_autonomousDatabaseArnHasBeenSet = false;
  bool m_ociResourceAnchorNameHasBeenSet = false;
  bool m_percentProgressHasBeenSet = false;
  bool m_ocidHasBeenSet = false;
  bool m_ociUrlHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_dbNameHasBeenSet = false;
  bool m_sourceIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_databaseTypeHasBeenSet = false;
  bool m_dbVersionHasBeenSet = false;
  bool m_dbWorkloadHasBeenSet = false;
  bool m_characterSetHasBeenSet = false;
  bool m_ncharacterSetHasBeenSet = false;
  bool m_databaseEditionHasBeenSet = false;
  bool m_licenseModelHasBeenSet = false;
  bool m_openModeHasBeenSet = false;
  bool m_permissionLevelHasBeenSet = false;
  bool m_isMtlsConnectionRequiredHasBeenSet = false;
  bool m_autonomousMaintenanceScheduleTypeHasBeenSet = false;
  bool m_netServicesArchitectureHasBeenSet = false;
  bool m_availableUpgradeVersionsHasBeenSet = false;
  bool m_byolComputeCountLimitHasBeenSet = false;
  bool m_connectionStringDetailsHasBeenSet = false;
  bool m_serviceConsoleUrlHasBeenSet = false;
  bool m_sqlWebDeveloperUrlHasBeenSet = false;
  bool m_customerContactsHasBeenSet = false;
  bool m_apexDetailsHasBeenSet = false;
  bool m_standbyDbHasBeenSet = false;
  bool m_localStandbyDbHasBeenSet = false;
  bool m_dataSafeStatusHasBeenSet = false;
  bool m_databaseManagementStatusHasBeenSet = false;
  bool m_operationsInsightsStatusHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_maintenanceTargetComponentHasBeenSet = false;
  bool m_connectionUrlsHasBeenSet = false;
  bool m_dbToolsDetailsHasBeenSet = false;
  bool m_scheduledOperationsHasBeenSet = false;
  bool m_resourcePoolLeaderIdHasBeenSet = false;
  bool m_computeCountHasBeenSet = false;
  bool m_computeModelHasBeenSet = false;
  bool m_cpuCoreCountHasBeenSet = false;
  bool m_memoryPerOracleComputeUnitInGBsHasBeenSet = false;
  bool m_provisionableCpusHasBeenSet = false;
  bool m_isAutoScalingEnabledHasBeenSet = false;
  bool m_dataStorageSizeInTBsHasBeenSet = false;
  bool m_dataStorageSizeInGBsHasBeenSet = false;
  bool m_usedDataStorageSizeInTBsHasBeenSet = false;
  bool m_usedDataStorageSizeInGBsHasBeenSet = false;
  bool m_actualUsedDataStorageSizeInTBsHasBeenSet = false;
  bool m_allocatedStorageSizeInTBsHasBeenSet = false;
  bool m_inMemoryAreaInGBsHasBeenSet = false;
  bool m_isAutoScalingForStorageEnabledHasBeenSet = false;
  bool m_odbNetworkIdHasBeenSet = false;
  bool m_odbNetworkArnHasBeenSet = false;
  bool m_privateEndpointHasBeenSet = false;
  bool m_privateEndpointIpHasBeenSet = false;
  bool m_privateEndpointLabelHasBeenSet = false;
  bool m_allowlistedIpsHasBeenSet = false;
  bool m_standbyAllowlistedIpsHasBeenSet = false;
  bool m_standbyAllowlistedIpsSourceHasBeenSet = false;
  bool m_isLocalDataGuardEnabledHasBeenSet = false;
  bool m_isRemoteDataGuardEnabledHasBeenSet = false;
  bool m_localDisasterRecoveryTypeHasBeenSet = false;
  bool m_roleHasBeenSet = false;
  bool m_peerDbIdsHasBeenSet = false;
  bool m_failedDataRecoveryInSecondsHasBeenSet = false;
  bool m_localAdgAutoFailoverMaxDataLossLimitHasBeenSet = false;
  bool m_remoteDisasterRecoveryConfigurationHasBeenSet = false;
  bool m_isRefreshableCloneHasBeenSet = false;
  bool m_refreshableModeHasBeenSet = false;
  bool m_refreshableStatusHasBeenSet = false;
  bool m_autoRefreshFrequencyInSecondsHasBeenSet = false;
  bool m_autoRefreshPointLagInSecondsHasBeenSet = false;
  bool m_isReconnectCloneEnabledHasBeenSet = false;
  bool m_cloneTableSpaceListHasBeenSet = false;
  bool m_backupRetentionPeriodInDaysHasBeenSet = false;
  bool m_longTermBackupScheduleHasBeenSet = false;
  bool m_isBackupRetentionLockedHasBeenSet = false;
  bool m_totalBackupStorageSizeInGBsHasBeenSet = false;
  bool m_resourcePoolSummaryHasBeenSet = false;
  bool m_encryptionSummaryHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_timeOfLastBackupHasBeenSet = false;
  bool m_timeMaintenanceBeginHasBeenSet = false;
  bool m_timeMaintenanceEndHasBeenSet = false;
  bool m_timeLocalDataGuardEnabledHasBeenSet = false;
  bool m_timeDataGuardRoleChangedHasBeenSet = false;
  bool m_timeOfLastSwitchoverHasBeenSet = false;
  bool m_timeOfLastFailoverHasBeenSet = false;
  bool m_timeOfLastRefreshHasBeenSet = false;
  bool m_timeOfLastRefreshPointHasBeenSet = false;
  bool m_timeOfNextRefreshHasBeenSet = false;
  bool m_timeOfAutoRefreshStartHasBeenSet = false;
  bool m_timeDeletionOfFreeAutonomousDatabaseHasBeenSet = false;
  bool m_timeReclamationOfFreeAutonomousDatabaseHasBeenSet = false;
  bool m_timeDisasterRecoveryRoleChangedHasBeenSet = false;
  bool m_timeUntilReconnectCloneEnabledHasBeenSet = false;
  bool m_nextLongTermBackupTimeStampHasBeenSet = false;
  bool m_timeUndeletedHasBeenSet = false;
  bool m_adminPasswordSourceSummaryHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
