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
    AWS_NEPTUNE_API DBEngineVersion();
    AWS_NEPTUNE_API DBEngineVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API DBEngineVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the database engine.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline DBEngineVersion& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline DBEngineVersion& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline DBEngineVersion& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the database engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline DBEngineVersion& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline DBEngineVersion& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline DBEngineVersion& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::move(value); }
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily.assign(value); }
    inline DBEngineVersion& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}
    inline DBEngineVersion& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(std::move(value)); return *this;}
    inline DBEngineVersion& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the database engine.</p>
     */
    inline const Aws::String& GetDBEngineDescription() const{ return m_dBEngineDescription; }
    inline bool DBEngineDescriptionHasBeenSet() const { return m_dBEngineDescriptionHasBeenSet; }
    inline void SetDBEngineDescription(const Aws::String& value) { m_dBEngineDescriptionHasBeenSet = true; m_dBEngineDescription = value; }
    inline void SetDBEngineDescription(Aws::String&& value) { m_dBEngineDescriptionHasBeenSet = true; m_dBEngineDescription = std::move(value); }
    inline void SetDBEngineDescription(const char* value) { m_dBEngineDescriptionHasBeenSet = true; m_dBEngineDescription.assign(value); }
    inline DBEngineVersion& WithDBEngineDescription(const Aws::String& value) { SetDBEngineDescription(value); return *this;}
    inline DBEngineVersion& WithDBEngineDescription(Aws::String&& value) { SetDBEngineDescription(std::move(value)); return *this;}
    inline DBEngineVersion& WithDBEngineDescription(const char* value) { SetDBEngineDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the database engine version.</p>
     */
    inline const Aws::String& GetDBEngineVersionDescription() const{ return m_dBEngineVersionDescription; }
    inline bool DBEngineVersionDescriptionHasBeenSet() const { return m_dBEngineVersionDescriptionHasBeenSet; }
    inline void SetDBEngineVersionDescription(const Aws::String& value) { m_dBEngineVersionDescriptionHasBeenSet = true; m_dBEngineVersionDescription = value; }
    inline void SetDBEngineVersionDescription(Aws::String&& value) { m_dBEngineVersionDescriptionHasBeenSet = true; m_dBEngineVersionDescription = std::move(value); }
    inline void SetDBEngineVersionDescription(const char* value) { m_dBEngineVersionDescriptionHasBeenSet = true; m_dBEngineVersionDescription.assign(value); }
    inline DBEngineVersion& WithDBEngineVersionDescription(const Aws::String& value) { SetDBEngineVersionDescription(value); return *this;}
    inline DBEngineVersion& WithDBEngineVersionDescription(Aws::String&& value) { SetDBEngineVersionDescription(std::move(value)); return *this;}
    inline DBEngineVersion& WithDBEngineVersionDescription(const char* value) { SetDBEngineVersionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline const CharacterSet& GetDefaultCharacterSet() const{ return m_defaultCharacterSet; }
    inline bool DefaultCharacterSetHasBeenSet() const { return m_defaultCharacterSetHasBeenSet; }
    inline void SetDefaultCharacterSet(const CharacterSet& value) { m_defaultCharacterSetHasBeenSet = true; m_defaultCharacterSet = value; }
    inline void SetDefaultCharacterSet(CharacterSet&& value) { m_defaultCharacterSetHasBeenSet = true; m_defaultCharacterSet = std::move(value); }
    inline DBEngineVersion& WithDefaultCharacterSet(const CharacterSet& value) { SetDefaultCharacterSet(value); return *this;}
    inline DBEngineVersion& WithDefaultCharacterSet(CharacterSet&& value) { SetDefaultCharacterSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline const Aws::Vector<CharacterSet>& GetSupportedCharacterSets() const{ return m_supportedCharacterSets; }
    inline bool SupportedCharacterSetsHasBeenSet() const { return m_supportedCharacterSetsHasBeenSet; }
    inline void SetSupportedCharacterSets(const Aws::Vector<CharacterSet>& value) { m_supportedCharacterSetsHasBeenSet = true; m_supportedCharacterSets = value; }
    inline void SetSupportedCharacterSets(Aws::Vector<CharacterSet>&& value) { m_supportedCharacterSetsHasBeenSet = true; m_supportedCharacterSets = std::move(value); }
    inline DBEngineVersion& WithSupportedCharacterSets(const Aws::Vector<CharacterSet>& value) { SetSupportedCharacterSets(value); return *this;}
    inline DBEngineVersion& WithSupportedCharacterSets(Aws::Vector<CharacterSet>&& value) { SetSupportedCharacterSets(std::move(value)); return *this;}
    inline DBEngineVersion& AddSupportedCharacterSets(const CharacterSet& value) { m_supportedCharacterSetsHasBeenSet = true; m_supportedCharacterSets.push_back(value); return *this; }
    inline DBEngineVersion& AddSupportedCharacterSets(CharacterSet&& value) { m_supportedCharacterSetsHasBeenSet = true; m_supportedCharacterSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline const Aws::Vector<UpgradeTarget>& GetValidUpgradeTarget() const{ return m_validUpgradeTarget; }
    inline bool ValidUpgradeTargetHasBeenSet() const { return m_validUpgradeTargetHasBeenSet; }
    inline void SetValidUpgradeTarget(const Aws::Vector<UpgradeTarget>& value) { m_validUpgradeTargetHasBeenSet = true; m_validUpgradeTarget = value; }
    inline void SetValidUpgradeTarget(Aws::Vector<UpgradeTarget>&& value) { m_validUpgradeTargetHasBeenSet = true; m_validUpgradeTarget = std::move(value); }
    inline DBEngineVersion& WithValidUpgradeTarget(const Aws::Vector<UpgradeTarget>& value) { SetValidUpgradeTarget(value); return *this;}
    inline DBEngineVersion& WithValidUpgradeTarget(Aws::Vector<UpgradeTarget>&& value) { SetValidUpgradeTarget(std::move(value)); return *this;}
    inline DBEngineVersion& AddValidUpgradeTarget(const UpgradeTarget& value) { m_validUpgradeTargetHasBeenSet = true; m_validUpgradeTarget.push_back(value); return *this; }
    inline DBEngineVersion& AddValidUpgradeTarget(UpgradeTarget&& value) { m_validUpgradeTargetHasBeenSet = true; m_validUpgradeTarget.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.</p>
     */
    inline const Aws::Vector<Timezone>& GetSupportedTimezones() const{ return m_supportedTimezones; }
    inline bool SupportedTimezonesHasBeenSet() const { return m_supportedTimezonesHasBeenSet; }
    inline void SetSupportedTimezones(const Aws::Vector<Timezone>& value) { m_supportedTimezonesHasBeenSet = true; m_supportedTimezones = value; }
    inline void SetSupportedTimezones(Aws::Vector<Timezone>&& value) { m_supportedTimezonesHasBeenSet = true; m_supportedTimezones = std::move(value); }
    inline DBEngineVersion& WithSupportedTimezones(const Aws::Vector<Timezone>& value) { SetSupportedTimezones(value); return *this;}
    inline DBEngineVersion& WithSupportedTimezones(Aws::Vector<Timezone>&& value) { SetSupportedTimezones(std::move(value)); return *this;}
    inline DBEngineVersion& AddSupportedTimezones(const Timezone& value) { m_supportedTimezonesHasBeenSet = true; m_supportedTimezones.push_back(value); return *this; }
    inline DBEngineVersion& AddSupportedTimezones(Timezone&& value) { m_supportedTimezonesHasBeenSet = true; m_supportedTimezones.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportableLogTypes() const{ return m_exportableLogTypes; }
    inline bool ExportableLogTypesHasBeenSet() const { return m_exportableLogTypesHasBeenSet; }
    inline void SetExportableLogTypes(const Aws::Vector<Aws::String>& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes = value; }
    inline void SetExportableLogTypes(Aws::Vector<Aws::String>&& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes = std::move(value); }
    inline DBEngineVersion& WithExportableLogTypes(const Aws::Vector<Aws::String>& value) { SetExportableLogTypes(value); return *this;}
    inline DBEngineVersion& WithExportableLogTypes(Aws::Vector<Aws::String>&& value) { SetExportableLogTypes(std::move(value)); return *this;}
    inline DBEngineVersion& AddExportableLogTypes(const Aws::String& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes.push_back(value); return *this; }
    inline DBEngineVersion& AddExportableLogTypes(Aws::String&& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes.push_back(std::move(value)); return *this; }
    inline DBEngineVersion& AddExportableLogTypes(const char* value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the engine version supports exporting the log
     * types specified by ExportableLogTypes to CloudWatch Logs.</p>
     */
    inline bool GetSupportsLogExportsToCloudwatchLogs() const{ return m_supportsLogExportsToCloudwatchLogs; }
    inline bool SupportsLogExportsToCloudwatchLogsHasBeenSet() const { return m_supportsLogExportsToCloudwatchLogsHasBeenSet; }
    inline void SetSupportsLogExportsToCloudwatchLogs(bool value) { m_supportsLogExportsToCloudwatchLogsHasBeenSet = true; m_supportsLogExportsToCloudwatchLogs = value; }
    inline DBEngineVersion& WithSupportsLogExportsToCloudwatchLogs(bool value) { SetSupportsLogExportsToCloudwatchLogs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the database engine version supports read replicas.</p>
     */
    inline bool GetSupportsReadReplica() const{ return m_supportsReadReplica; }
    inline bool SupportsReadReplicaHasBeenSet() const { return m_supportsReadReplicaHasBeenSet; }
    inline void SetSupportsReadReplica(bool value) { m_supportsReadReplicaHasBeenSet = true; m_supportsReadReplica = value; }
    inline DBEngineVersion& WithSupportsReadReplica(bool value) { SetSupportsReadReplica(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether you can use Aurora global databases with a
     * specific DB engine version.</p>
     */
    inline bool GetSupportsGlobalDatabases() const{ return m_supportsGlobalDatabases; }
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

    bool m_supportsLogExportsToCloudwatchLogs;
    bool m_supportsLogExportsToCloudwatchLogsHasBeenSet = false;

    bool m_supportsReadReplica;
    bool m_supportsReadReplicaHasBeenSet = false;

    bool m_supportsGlobalDatabases;
    bool m_supportsGlobalDatabasesHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
