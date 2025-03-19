/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune/model/CharacterSet.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/UpgradeTarget.h>
#include <aws/neptune/model/Timezone.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p> This data type is used as a response element in the action
   * <a>DescribeDBEngineVersions</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DBEngineVersion">AWS
   * API Reference</a></p>
   */
  class DBEngineVersion
  {
  public:
    AWS_NEPTUNE_API DBEngineVersion() = default;
    AWS_NEPTUNE_API DBEngineVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API DBEngineVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the database engine.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    DBEngineVersion& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the database engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    DBEngineVersion& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const { return m_dBParameterGroupFamily; }
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }
    template<typename DBParameterGroupFamilyT = Aws::String>
    void SetDBParameterGroupFamily(DBParameterGroupFamilyT&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::forward<DBParameterGroupFamilyT>(value); }
    template<typename DBParameterGroupFamilyT = Aws::String>
    DBEngineVersion& WithDBParameterGroupFamily(DBParameterGroupFamilyT&& value) { SetDBParameterGroupFamily(std::forward<DBParameterGroupFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the database engine.</p>
     */
    inline const Aws::String& GetDBEngineDescription() const { return m_dBEngineDescription; }
    inline bool DBEngineDescriptionHasBeenSet() const { return m_dBEngineDescriptionHasBeenSet; }
    template<typename DBEngineDescriptionT = Aws::String>
    void SetDBEngineDescription(DBEngineDescriptionT&& value) { m_dBEngineDescriptionHasBeenSet = true; m_dBEngineDescription = std::forward<DBEngineDescriptionT>(value); }
    template<typename DBEngineDescriptionT = Aws::String>
    DBEngineVersion& WithDBEngineDescription(DBEngineDescriptionT&& value) { SetDBEngineDescription(std::forward<DBEngineDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the database engine version.</p>
     */
    inline const Aws::String& GetDBEngineVersionDescription() const { return m_dBEngineVersionDescription; }
    inline bool DBEngineVersionDescriptionHasBeenSet() const { return m_dBEngineVersionDescriptionHasBeenSet; }
    template<typename DBEngineVersionDescriptionT = Aws::String>
    void SetDBEngineVersionDescription(DBEngineVersionDescriptionT&& value) { m_dBEngineVersionDescriptionHasBeenSet = true; m_dBEngineVersionDescription = std::forward<DBEngineVersionDescriptionT>(value); }
    template<typename DBEngineVersionDescriptionT = Aws::String>
    DBEngineVersion& WithDBEngineVersionDescription(DBEngineVersionDescriptionT&& value) { SetDBEngineVersionDescription(std::forward<DBEngineVersionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline const CharacterSet& GetDefaultCharacterSet() const { return m_defaultCharacterSet; }
    inline bool DefaultCharacterSetHasBeenSet() const { return m_defaultCharacterSetHasBeenSet; }
    template<typename DefaultCharacterSetT = CharacterSet>
    void SetDefaultCharacterSet(DefaultCharacterSetT&& value) { m_defaultCharacterSetHasBeenSet = true; m_defaultCharacterSet = std::forward<DefaultCharacterSetT>(value); }
    template<typename DefaultCharacterSetT = CharacterSet>
    DBEngineVersion& WithDefaultCharacterSet(DefaultCharacterSetT&& value) { SetDefaultCharacterSet(std::forward<DefaultCharacterSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline const Aws::Vector<CharacterSet>& GetSupportedCharacterSets() const { return m_supportedCharacterSets; }
    inline bool SupportedCharacterSetsHasBeenSet() const { return m_supportedCharacterSetsHasBeenSet; }
    template<typename SupportedCharacterSetsT = Aws::Vector<CharacterSet>>
    void SetSupportedCharacterSets(SupportedCharacterSetsT&& value) { m_supportedCharacterSetsHasBeenSet = true; m_supportedCharacterSets = std::forward<SupportedCharacterSetsT>(value); }
    template<typename SupportedCharacterSetsT = Aws::Vector<CharacterSet>>
    DBEngineVersion& WithSupportedCharacterSets(SupportedCharacterSetsT&& value) { SetSupportedCharacterSets(std::forward<SupportedCharacterSetsT>(value)); return *this;}
    template<typename SupportedCharacterSetsT = CharacterSet>
    DBEngineVersion& AddSupportedCharacterSets(SupportedCharacterSetsT&& value) { m_supportedCharacterSetsHasBeenSet = true; m_supportedCharacterSets.emplace_back(std::forward<SupportedCharacterSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline const Aws::Vector<UpgradeTarget>& GetValidUpgradeTarget() const { return m_validUpgradeTarget; }
    inline bool ValidUpgradeTargetHasBeenSet() const { return m_validUpgradeTargetHasBeenSet; }
    template<typename ValidUpgradeTargetT = Aws::Vector<UpgradeTarget>>
    void SetValidUpgradeTarget(ValidUpgradeTargetT&& value) { m_validUpgradeTargetHasBeenSet = true; m_validUpgradeTarget = std::forward<ValidUpgradeTargetT>(value); }
    template<typename ValidUpgradeTargetT = Aws::Vector<UpgradeTarget>>
    DBEngineVersion& WithValidUpgradeTarget(ValidUpgradeTargetT&& value) { SetValidUpgradeTarget(std::forward<ValidUpgradeTargetT>(value)); return *this;}
    template<typename ValidUpgradeTargetT = UpgradeTarget>
    DBEngineVersion& AddValidUpgradeTarget(ValidUpgradeTargetT&& value) { m_validUpgradeTargetHasBeenSet = true; m_validUpgradeTarget.emplace_back(std::forward<ValidUpgradeTargetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.</p>
     */
    inline const Aws::Vector<Timezone>& GetSupportedTimezones() const { return m_supportedTimezones; }
    inline bool SupportedTimezonesHasBeenSet() const { return m_supportedTimezonesHasBeenSet; }
    template<typename SupportedTimezonesT = Aws::Vector<Timezone>>
    void SetSupportedTimezones(SupportedTimezonesT&& value) { m_supportedTimezonesHasBeenSet = true; m_supportedTimezones = std::forward<SupportedTimezonesT>(value); }
    template<typename SupportedTimezonesT = Aws::Vector<Timezone>>
    DBEngineVersion& WithSupportedTimezones(SupportedTimezonesT&& value) { SetSupportedTimezones(std::forward<SupportedTimezonesT>(value)); return *this;}
    template<typename SupportedTimezonesT = Timezone>
    DBEngineVersion& AddSupportedTimezones(SupportedTimezonesT&& value) { m_supportedTimezonesHasBeenSet = true; m_supportedTimezones.emplace_back(std::forward<SupportedTimezonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportableLogTypes() const { return m_exportableLogTypes; }
    inline bool ExportableLogTypesHasBeenSet() const { return m_exportableLogTypesHasBeenSet; }
    template<typename ExportableLogTypesT = Aws::Vector<Aws::String>>
    void SetExportableLogTypes(ExportableLogTypesT&& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes = std::forward<ExportableLogTypesT>(value); }
    template<typename ExportableLogTypesT = Aws::Vector<Aws::String>>
    DBEngineVersion& WithExportableLogTypes(ExportableLogTypesT&& value) { SetExportableLogTypes(std::forward<ExportableLogTypesT>(value)); return *this;}
    template<typename ExportableLogTypesT = Aws::String>
    DBEngineVersion& AddExportableLogTypes(ExportableLogTypesT&& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes.emplace_back(std::forward<ExportableLogTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the engine version supports exporting the log
     * types specified by ExportableLogTypes to CloudWatch Logs.</p>
     */
    inline bool GetSupportsLogExportsToCloudwatchLogs() const { return m_supportsLogExportsToCloudwatchLogs; }
    inline bool SupportsLogExportsToCloudwatchLogsHasBeenSet() const { return m_supportsLogExportsToCloudwatchLogsHasBeenSet; }
    inline void SetSupportsLogExportsToCloudwatchLogs(bool value) { m_supportsLogExportsToCloudwatchLogsHasBeenSet = true; m_supportsLogExportsToCloudwatchLogs = value; }
    inline DBEngineVersion& WithSupportsLogExportsToCloudwatchLogs(bool value) { SetSupportsLogExportsToCloudwatchLogs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the database engine version supports read replicas.</p>
     */
    inline bool GetSupportsReadReplica() const { return m_supportsReadReplica; }
    inline bool SupportsReadReplicaHasBeenSet() const { return m_supportsReadReplicaHasBeenSet; }
    inline void SetSupportsReadReplica(bool value) { m_supportsReadReplicaHasBeenSet = true; m_supportsReadReplica = value; }
    inline DBEngineVersion& WithSupportsReadReplica(bool value) { SetSupportsReadReplica(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether you can use Aurora global databases with a
     * specific DB engine version.</p>
     */
    inline bool GetSupportsGlobalDatabases() const { return m_supportsGlobalDatabases; }
    inline bool SupportsGlobalDatabasesHasBeenSet() const { return m_supportsGlobalDatabasesHasBeenSet; }
    inline void SetSupportsGlobalDatabases(bool value) { m_supportsGlobalDatabasesHasBeenSet = true; m_supportsGlobalDatabases = value; }
    inline DBEngineVersion& WithSupportsGlobalDatabases(bool value) { SetSupportsGlobalDatabases(value); return *this;}
    ///@}
  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_dBParameterGroupFamily;
    bool m_dBParameterGroupFamilyHasBeenSet = false;

    Aws::String m_dBEngineDescription;
    bool m_dBEngineDescriptionHasBeenSet = false;

    Aws::String m_dBEngineVersionDescription;
    bool m_dBEngineVersionDescriptionHasBeenSet = false;

    CharacterSet m_defaultCharacterSet;
    bool m_defaultCharacterSetHasBeenSet = false;

    Aws::Vector<CharacterSet> m_supportedCharacterSets;
    bool m_supportedCharacterSetsHasBeenSet = false;

    Aws::Vector<UpgradeTarget> m_validUpgradeTarget;
    bool m_validUpgradeTargetHasBeenSet = false;

    Aws::Vector<Timezone> m_supportedTimezones;
    bool m_supportedTimezonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_exportableLogTypes;
    bool m_exportableLogTypesHasBeenSet = false;

    bool m_supportsLogExportsToCloudwatchLogs{false};
    bool m_supportsLogExportsToCloudwatchLogsHasBeenSet = false;

    bool m_supportsReadReplica{false};
    bool m_supportsReadReplicaHasBeenSet = false;

    bool m_supportsGlobalDatabases{false};
    bool m_supportsGlobalDatabasesHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
