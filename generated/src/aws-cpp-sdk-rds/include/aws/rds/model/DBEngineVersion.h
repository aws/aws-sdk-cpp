/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/CharacterSet.h>
#include <aws/rds/model/CustomDBEngineVersionAMI.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/ServerlessV2FeaturesSupport.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/UpgradeTarget.h>
#include <aws/rds/model/Timezone.h>
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
   * <p>This data type is used as a response element in the action
   * <code>DescribeDBEngineVersions</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBEngineVersion">AWS
   * API Reference</a></p>
   */
  class DBEngineVersion
  {
  public:
    AWS_RDS_API DBEngineVersion();
    AWS_RDS_API DBEngineVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBEngineVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * <p>The default character set for new instances of this engine version, if the
     * <code>CharacterSetName</code> parameter of the CreateDBInstance API isn't
     * specified.</p>
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
     * <p>The EC2 image</p>
     */
    inline const CustomDBEngineVersionAMI& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const CustomDBEngineVersionAMI& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(CustomDBEngineVersionAMI&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline DBEngineVersion& WithImage(const CustomDBEngineVersionAMI& value) { SetImage(value); return *this;}
    inline DBEngineVersion& WithImage(CustomDBEngineVersionAMI&& value) { SetImage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates the source media provider of the AMI based on the
     * usage operation. Applicable for RDS Custom for SQL Server.</p>
     */
    inline const Aws::String& GetDBEngineMediaType() const{ return m_dBEngineMediaType; }
    inline bool DBEngineMediaTypeHasBeenSet() const { return m_dBEngineMediaTypeHasBeenSet; }
    inline void SetDBEngineMediaType(const Aws::String& value) { m_dBEngineMediaTypeHasBeenSet = true; m_dBEngineMediaType = value; }
    inline void SetDBEngineMediaType(Aws::String&& value) { m_dBEngineMediaTypeHasBeenSet = true; m_dBEngineMediaType = std::move(value); }
    inline void SetDBEngineMediaType(const char* value) { m_dBEngineMediaTypeHasBeenSet = true; m_dBEngineMediaType.assign(value); }
    inline DBEngineVersion& WithDBEngineMediaType(const Aws::String& value) { SetDBEngineMediaType(value); return *this;}
    inline DBEngineVersion& WithDBEngineMediaType(Aws::String&& value) { SetDBEngineMediaType(std::move(value)); return *this;}
    inline DBEngineVersion& WithDBEngineMediaType(const char* value) { SetDBEngineMediaType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * operation.</p>
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
     * <p>A list of the character sets supported by the Oracle DB engine for the
     * <code>NcharCharacterSetName</code> parameter of the
     * <code>CreateDBInstance</code> operation.</p>
     */
    inline const Aws::Vector<CharacterSet>& GetSupportedNcharCharacterSets() const{ return m_supportedNcharCharacterSets; }
    inline bool SupportedNcharCharacterSetsHasBeenSet() const { return m_supportedNcharCharacterSetsHasBeenSet; }
    inline void SetSupportedNcharCharacterSets(const Aws::Vector<CharacterSet>& value) { m_supportedNcharCharacterSetsHasBeenSet = true; m_supportedNcharCharacterSets = value; }
    inline void SetSupportedNcharCharacterSets(Aws::Vector<CharacterSet>&& value) { m_supportedNcharCharacterSetsHasBeenSet = true; m_supportedNcharCharacterSets = std::move(value); }
    inline DBEngineVersion& WithSupportedNcharCharacterSets(const Aws::Vector<CharacterSet>& value) { SetSupportedNcharCharacterSets(value); return *this;}
    inline DBEngineVersion& WithSupportedNcharCharacterSets(Aws::Vector<CharacterSet>&& value) { SetSupportedNcharCharacterSets(std::move(value)); return *this;}
    inline DBEngineVersion& AddSupportedNcharCharacterSets(const CharacterSet& value) { m_supportedNcharCharacterSetsHasBeenSet = true; m_supportedNcharCharacterSets.push_back(value); return *this; }
    inline DBEngineVersion& AddSupportedNcharCharacterSets(CharacterSet&& value) { m_supportedNcharCharacterSetsHasBeenSet = true; m_supportedNcharCharacterSets.push_back(std::move(value)); return *this; }
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
     * <p>Indicates whether the engine version supports exporting the log types
     * specified by ExportableLogTypes to CloudWatch Logs.</p>
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
     * <p>A list of the supported DB engine modes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedEngineModes() const{ return m_supportedEngineModes; }
    inline bool SupportedEngineModesHasBeenSet() const { return m_supportedEngineModesHasBeenSet; }
    inline void SetSupportedEngineModes(const Aws::Vector<Aws::String>& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes = value; }
    inline void SetSupportedEngineModes(Aws::Vector<Aws::String>&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes = std::move(value); }
    inline DBEngineVersion& WithSupportedEngineModes(const Aws::Vector<Aws::String>& value) { SetSupportedEngineModes(value); return *this;}
    inline DBEngineVersion& WithSupportedEngineModes(Aws::Vector<Aws::String>&& value) { SetSupportedEngineModes(std::move(value)); return *this;}
    inline DBEngineVersion& AddSupportedEngineModes(const Aws::String& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(value); return *this; }
    inline DBEngineVersion& AddSupportedEngineModes(Aws::String&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(std::move(value)); return *this; }
    inline DBEngineVersion& AddSupportedEngineModes(const char* value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of features supported by the DB engine.</p> <p>The supported features
     * vary by DB engine and DB engine version.</p> <p>To determine the supported
     * features for a specific DB engine and DB engine version using the CLI, use the
     * following command:</p> <p> <code>aws rds describe-db-engine-versions --engine
     * &lt;engine_name&gt; --engine-version &lt;engine_version&gt;</code> </p> <p>For
     * example, to determine the supported features for RDS for PostgreSQL version 13.3
     * using the CLI, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine postgres --engine-version 13.3</code> </p>
     * <p>The supported features are listed under <code>SupportedFeatureNames</code> in
     * the output.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedFeatureNames() const{ return m_supportedFeatureNames; }
    inline bool SupportedFeatureNamesHasBeenSet() const { return m_supportedFeatureNamesHasBeenSet; }
    inline void SetSupportedFeatureNames(const Aws::Vector<Aws::String>& value) { m_supportedFeatureNamesHasBeenSet = true; m_supportedFeatureNames = value; }
    inline void SetSupportedFeatureNames(Aws::Vector<Aws::String>&& value) { m_supportedFeatureNamesHasBeenSet = true; m_supportedFeatureNames = std::move(value); }
    inline DBEngineVersion& WithSupportedFeatureNames(const Aws::Vector<Aws::String>& value) { SetSupportedFeatureNames(value); return *this;}
    inline DBEngineVersion& WithSupportedFeatureNames(Aws::Vector<Aws::String>&& value) { SetSupportedFeatureNames(std::move(value)); return *this;}
    inline DBEngineVersion& AddSupportedFeatureNames(const Aws::String& value) { m_supportedFeatureNamesHasBeenSet = true; m_supportedFeatureNames.push_back(value); return *this; }
    inline DBEngineVersion& AddSupportedFeatureNames(Aws::String&& value) { m_supportedFeatureNamesHasBeenSet = true; m_supportedFeatureNames.push_back(std::move(value)); return *this; }
    inline DBEngineVersion& AddSupportedFeatureNames(const char* value) { m_supportedFeatureNamesHasBeenSet = true; m_supportedFeatureNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline DBEngineVersion& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DBEngineVersion& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DBEngineVersion& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you can use Aurora parallel query with a specific DB engine
     * version.</p>
     */
    inline bool GetSupportsParallelQuery() const{ return m_supportsParallelQuery; }
    inline bool SupportsParallelQueryHasBeenSet() const { return m_supportsParallelQueryHasBeenSet; }
    inline void SetSupportsParallelQuery(bool value) { m_supportsParallelQueryHasBeenSet = true; m_supportsParallelQuery = value; }
    inline DBEngineVersion& WithSupportsParallelQuery(bool value) { SetSupportsParallelQuery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you can use Aurora global databases with a specific DB
     * engine version.</p>
     */
    inline bool GetSupportsGlobalDatabases() const{ return m_supportsGlobalDatabases; }
    inline bool SupportsGlobalDatabasesHasBeenSet() const { return m_supportsGlobalDatabasesHasBeenSet; }
    inline void SetSupportsGlobalDatabases(bool value) { m_supportsGlobalDatabasesHasBeenSet = true; m_supportsGlobalDatabases = value; }
    inline DBEngineVersion& WithSupportsGlobalDatabases(bool value) { SetSupportsGlobalDatabases(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The major engine version of the CEV.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const{ return m_majorEngineVersion; }
    inline bool MajorEngineVersionHasBeenSet() const { return m_majorEngineVersionHasBeenSet; }
    inline void SetMajorEngineVersion(const Aws::String& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = value; }
    inline void SetMajorEngineVersion(Aws::String&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::move(value); }
    inline void SetMajorEngineVersion(const char* value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion.assign(value); }
    inline DBEngineVersion& WithMajorEngineVersion(const Aws::String& value) { SetMajorEngineVersion(value); return *this;}
    inline DBEngineVersion& WithMajorEngineVersion(Aws::String&& value) { SetMajorEngineVersion(std::move(value)); return *this;}
    inline DBEngineVersion& WithMajorEngineVersion(const char* value) { SetMajorEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket that contains your database installation
     * files.</p>
     */
    inline const Aws::String& GetDatabaseInstallationFilesS3BucketName() const{ return m_databaseInstallationFilesS3BucketName; }
    inline bool DatabaseInstallationFilesS3BucketNameHasBeenSet() const { return m_databaseInstallationFilesS3BucketNameHasBeenSet; }
    inline void SetDatabaseInstallationFilesS3BucketName(const Aws::String& value) { m_databaseInstallationFilesS3BucketNameHasBeenSet = true; m_databaseInstallationFilesS3BucketName = value; }
    inline void SetDatabaseInstallationFilesS3BucketName(Aws::String&& value) { m_databaseInstallationFilesS3BucketNameHasBeenSet = true; m_databaseInstallationFilesS3BucketName = std::move(value); }
    inline void SetDatabaseInstallationFilesS3BucketName(const char* value) { m_databaseInstallationFilesS3BucketNameHasBeenSet = true; m_databaseInstallationFilesS3BucketName.assign(value); }
    inline DBEngineVersion& WithDatabaseInstallationFilesS3BucketName(const Aws::String& value) { SetDatabaseInstallationFilesS3BucketName(value); return *this;}
    inline DBEngineVersion& WithDatabaseInstallationFilesS3BucketName(Aws::String&& value) { SetDatabaseInstallationFilesS3BucketName(std::move(value)); return *this;}
    inline DBEngineVersion& WithDatabaseInstallationFilesS3BucketName(const char* value) { SetDatabaseInstallationFilesS3BucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 directory that contains the database installation files. If not
     * specified, then no prefix is assumed.</p>
     */
    inline const Aws::String& GetDatabaseInstallationFilesS3Prefix() const{ return m_databaseInstallationFilesS3Prefix; }
    inline bool DatabaseInstallationFilesS3PrefixHasBeenSet() const { return m_databaseInstallationFilesS3PrefixHasBeenSet; }
    inline void SetDatabaseInstallationFilesS3Prefix(const Aws::String& value) { m_databaseInstallationFilesS3PrefixHasBeenSet = true; m_databaseInstallationFilesS3Prefix = value; }
    inline void SetDatabaseInstallationFilesS3Prefix(Aws::String&& value) { m_databaseInstallationFilesS3PrefixHasBeenSet = true; m_databaseInstallationFilesS3Prefix = std::move(value); }
    inline void SetDatabaseInstallationFilesS3Prefix(const char* value) { m_databaseInstallationFilesS3PrefixHasBeenSet = true; m_databaseInstallationFilesS3Prefix.assign(value); }
    inline DBEngineVersion& WithDatabaseInstallationFilesS3Prefix(const Aws::String& value) { SetDatabaseInstallationFilesS3Prefix(value); return *this;}
    inline DBEngineVersion& WithDatabaseInstallationFilesS3Prefix(Aws::String&& value) { SetDatabaseInstallationFilesS3Prefix(std::move(value)); return *this;}
    inline DBEngineVersion& WithDatabaseInstallationFilesS3Prefix(const char* value) { SetDatabaseInstallationFilesS3Prefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the custom engine version.</p>
     */
    inline const Aws::String& GetDBEngineVersionArn() const{ return m_dBEngineVersionArn; }
    inline bool DBEngineVersionArnHasBeenSet() const { return m_dBEngineVersionArnHasBeenSet; }
    inline void SetDBEngineVersionArn(const Aws::String& value) { m_dBEngineVersionArnHasBeenSet = true; m_dBEngineVersionArn = value; }
    inline void SetDBEngineVersionArn(Aws::String&& value) { m_dBEngineVersionArnHasBeenSet = true; m_dBEngineVersionArn = std::move(value); }
    inline void SetDBEngineVersionArn(const char* value) { m_dBEngineVersionArnHasBeenSet = true; m_dBEngineVersionArn.assign(value); }
    inline DBEngineVersion& WithDBEngineVersionArn(const Aws::String& value) { SetDBEngineVersionArn(value); return *this;}
    inline DBEngineVersion& WithDBEngineVersionArn(Aws::String&& value) { SetDBEngineVersionArn(std::move(value)); return *this;}
    inline DBEngineVersion& WithDBEngineVersionArn(const char* value) { SetDBEngineVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted CEV. This
     * parameter is required for RDS Custom, but optional for Amazon RDS.</p>
     */
    inline const Aws::String& GetKMSKeyId() const{ return m_kMSKeyId; }
    inline bool KMSKeyIdHasBeenSet() const { return m_kMSKeyIdHasBeenSet; }
    inline void SetKMSKeyId(const Aws::String& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = value; }
    inline void SetKMSKeyId(Aws::String&& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = std::move(value); }
    inline void SetKMSKeyId(const char* value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId.assign(value); }
    inline DBEngineVersion& WithKMSKeyId(const Aws::String& value) { SetKMSKeyId(value); return *this;}
    inline DBEngineVersion& WithKMSKeyId(Aws::String&& value) { SetKMSKeyId(std::move(value)); return *this;}
    inline DBEngineVersion& WithKMSKeyId(const char* value) { SetKMSKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the DB engine version.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline DBEngineVersion& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline DBEngineVersion& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }
    inline DBEngineVersion& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}
    inline DBEngineVersion& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}
    inline DBEngineVersion& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }
    inline DBEngineVersion& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the engine version supports Babelfish for Aurora
     * PostgreSQL.</p>
     */
    inline bool GetSupportsBabelfish() const{ return m_supportsBabelfish; }
    inline bool SupportsBabelfishHasBeenSet() const { return m_supportsBabelfishHasBeenSet; }
    inline void SetSupportsBabelfish(bool value) { m_supportsBabelfishHasBeenSet = true; m_supportsBabelfish = value; }
    inline DBEngineVersion& WithSupportsBabelfish(bool value) { SetSupportsBabelfish(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>JSON string that lists the installation files and parameters that RDS Custom
     * uses to create a custom engine version (CEV). RDS Custom applies the patches in
     * the order in which they're listed in the manifest. You can set the Oracle home,
     * Oracle base, and UNIX/Linux user and group using the installation parameters.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-cev.preparing.html#custom-cev.preparing.manifest.fields">JSON
     * fields in the CEV manifest</a> in the <i>Amazon RDS User Guide</i>. </p>
     */
    inline const Aws::String& GetCustomDBEngineVersionManifest() const{ return m_customDBEngineVersionManifest; }
    inline bool CustomDBEngineVersionManifestHasBeenSet() const { return m_customDBEngineVersionManifestHasBeenSet; }
    inline void SetCustomDBEngineVersionManifest(const Aws::String& value) { m_customDBEngineVersionManifestHasBeenSet = true; m_customDBEngineVersionManifest = value; }
    inline void SetCustomDBEngineVersionManifest(Aws::String&& value) { m_customDBEngineVersionManifestHasBeenSet = true; m_customDBEngineVersionManifest = std::move(value); }
    inline void SetCustomDBEngineVersionManifest(const char* value) { m_customDBEngineVersionManifestHasBeenSet = true; m_customDBEngineVersionManifest.assign(value); }
    inline DBEngineVersion& WithCustomDBEngineVersionManifest(const Aws::String& value) { SetCustomDBEngineVersionManifest(value); return *this;}
    inline DBEngineVersion& WithCustomDBEngineVersionManifest(Aws::String&& value) { SetCustomDBEngineVersionManifest(std::move(value)); return *this;}
    inline DBEngineVersion& WithCustomDBEngineVersionManifest(const char* value) { SetCustomDBEngineVersionManifest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB engine version supports Aurora Limitless
     * Database.</p>
     */
    inline bool GetSupportsLimitlessDatabase() const{ return m_supportsLimitlessDatabase; }
    inline bool SupportsLimitlessDatabaseHasBeenSet() const { return m_supportsLimitlessDatabaseHasBeenSet; }
    inline void SetSupportsLimitlessDatabase(bool value) { m_supportsLimitlessDatabaseHasBeenSet = true; m_supportsLimitlessDatabase = value; }
    inline DBEngineVersion& WithSupportsLimitlessDatabase(bool value) { SetSupportsLimitlessDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the engine version supports rotating the server certificate
     * without rebooting the DB instance.</p>
     */
    inline bool GetSupportsCertificateRotationWithoutRestart() const{ return m_supportsCertificateRotationWithoutRestart; }
    inline bool SupportsCertificateRotationWithoutRestartHasBeenSet() const { return m_supportsCertificateRotationWithoutRestartHasBeenSet; }
    inline void SetSupportsCertificateRotationWithoutRestart(bool value) { m_supportsCertificateRotationWithoutRestartHasBeenSet = true; m_supportsCertificateRotationWithoutRestart = value; }
    inline DBEngineVersion& WithSupportsCertificateRotationWithoutRestart(bool value) { SetSupportsCertificateRotationWithoutRestart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the supported CA certificate identifiers.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.SSL.html">Using
     * SSL/TLS to encrypt a connection to a DB instance</a> in the <i>Amazon RDS User
     * Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.SSL.html">
     * Using SSL/TLS to encrypt a connection to a DB cluster</a> in the <i>Amazon
     * Aurora User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedCACertificateIdentifiers() const{ return m_supportedCACertificateIdentifiers; }
    inline bool SupportedCACertificateIdentifiersHasBeenSet() const { return m_supportedCACertificateIdentifiersHasBeenSet; }
    inline void SetSupportedCACertificateIdentifiers(const Aws::Vector<Aws::String>& value) { m_supportedCACertificateIdentifiersHasBeenSet = true; m_supportedCACertificateIdentifiers = value; }
    inline void SetSupportedCACertificateIdentifiers(Aws::Vector<Aws::String>&& value) { m_supportedCACertificateIdentifiersHasBeenSet = true; m_supportedCACertificateIdentifiers = std::move(value); }
    inline DBEngineVersion& WithSupportedCACertificateIdentifiers(const Aws::Vector<Aws::String>& value) { SetSupportedCACertificateIdentifiers(value); return *this;}
    inline DBEngineVersion& WithSupportedCACertificateIdentifiers(Aws::Vector<Aws::String>&& value) { SetSupportedCACertificateIdentifiers(std::move(value)); return *this;}
    inline DBEngineVersion& AddSupportedCACertificateIdentifiers(const Aws::String& value) { m_supportedCACertificateIdentifiersHasBeenSet = true; m_supportedCACertificateIdentifiers.push_back(value); return *this; }
    inline DBEngineVersion& AddSupportedCACertificateIdentifiers(Aws::String&& value) { m_supportedCACertificateIdentifiersHasBeenSet = true; m_supportedCACertificateIdentifiers.push_back(std::move(value)); return *this; }
    inline DBEngineVersion& AddSupportedCACertificateIdentifiers(const char* value) { m_supportedCACertificateIdentifiersHasBeenSet = true; m_supportedCACertificateIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB engine version supports forwarding write operations
     * from reader DB instances to the writer DB instance in the DB cluster. By
     * default, write operations aren't allowed on reader DB instances.</p> <p>Valid
     * for: Aurora DB clusters only</p>
     */
    inline bool GetSupportsLocalWriteForwarding() const{ return m_supportsLocalWriteForwarding; }
    inline bool SupportsLocalWriteForwardingHasBeenSet() const { return m_supportsLocalWriteForwardingHasBeenSet; }
    inline void SetSupportsLocalWriteForwarding(bool value) { m_supportsLocalWriteForwardingHasBeenSet = true; m_supportsLocalWriteForwarding = value; }
    inline DBEngineVersion& WithSupportsLocalWriteForwarding(bool value) { SetSupportsLocalWriteForwarding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB engine version supports zero-ETL integrations with
     * Amazon Redshift.</p>
     */
    inline bool GetSupportsIntegrations() const{ return m_supportsIntegrations; }
    inline bool SupportsIntegrationsHasBeenSet() const { return m_supportsIntegrationsHasBeenSet; }
    inline void SetSupportsIntegrations(bool value) { m_supportsIntegrationsHasBeenSet = true; m_supportsIntegrations = value; }
    inline DBEngineVersion& WithSupportsIntegrations(bool value) { SetSupportsIntegrations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies any Aurora Serverless v2 properties or limits that differ between
     * Aurora engine versions. You can test the values of this attribute when deciding
     * which Aurora version to use in a new or upgraded DB cluster. You can also
     * retrieve the version of an existing DB cluster and check whether that version
     * supports certain Aurora Serverless v2 features before you attempt to use those
     * features. </p>
     */
    inline const ServerlessV2FeaturesSupport& GetServerlessV2FeaturesSupport() const{ return m_serverlessV2FeaturesSupport; }
    inline bool ServerlessV2FeaturesSupportHasBeenSet() const { return m_serverlessV2FeaturesSupportHasBeenSet; }
    inline void SetServerlessV2FeaturesSupport(const ServerlessV2FeaturesSupport& value) { m_serverlessV2FeaturesSupportHasBeenSet = true; m_serverlessV2FeaturesSupport = value; }
    inline void SetServerlessV2FeaturesSupport(ServerlessV2FeaturesSupport&& value) { m_serverlessV2FeaturesSupportHasBeenSet = true; m_serverlessV2FeaturesSupport = std::move(value); }
    inline DBEngineVersion& WithServerlessV2FeaturesSupport(const ServerlessV2FeaturesSupport& value) { SetServerlessV2FeaturesSupport(value); return *this;}
    inline DBEngineVersion& WithServerlessV2FeaturesSupport(ServerlessV2FeaturesSupport&& value) { SetServerlessV2FeaturesSupport(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DBEngineVersion& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DBEngineVersion& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
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

    CustomDBEngineVersionAMI m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_dBEngineMediaType;
    bool m_dBEngineMediaTypeHasBeenSet = false;

    Aws::Vector<CharacterSet> m_supportedCharacterSets;
    bool m_supportedCharacterSetsHasBeenSet = false;

    Aws::Vector<CharacterSet> m_supportedNcharCharacterSets;
    bool m_supportedNcharCharacterSetsHasBeenSet = false;

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

    Aws::Vector<Aws::String> m_supportedEngineModes;
    bool m_supportedEngineModesHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedFeatureNames;
    bool m_supportedFeatureNamesHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_supportsParallelQuery;
    bool m_supportsParallelQueryHasBeenSet = false;

    bool m_supportsGlobalDatabases;
    bool m_supportsGlobalDatabasesHasBeenSet = false;

    Aws::String m_majorEngineVersion;
    bool m_majorEngineVersionHasBeenSet = false;

    Aws::String m_databaseInstallationFilesS3BucketName;
    bool m_databaseInstallationFilesS3BucketNameHasBeenSet = false;

    Aws::String m_databaseInstallationFilesS3Prefix;
    bool m_databaseInstallationFilesS3PrefixHasBeenSet = false;

    Aws::String m_dBEngineVersionArn;
    bool m_dBEngineVersionArnHasBeenSet = false;

    Aws::String m_kMSKeyId;
    bool m_kMSKeyIdHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;

    bool m_supportsBabelfish;
    bool m_supportsBabelfishHasBeenSet = false;

    Aws::String m_customDBEngineVersionManifest;
    bool m_customDBEngineVersionManifestHasBeenSet = false;

    bool m_supportsLimitlessDatabase;
    bool m_supportsLimitlessDatabaseHasBeenSet = false;

    bool m_supportsCertificateRotationWithoutRestart;
    bool m_supportsCertificateRotationWithoutRestartHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedCACertificateIdentifiers;
    bool m_supportedCACertificateIdentifiersHasBeenSet = false;

    bool m_supportsLocalWriteForwarding;
    bool m_supportsLocalWriteForwardingHasBeenSet = false;

    bool m_supportsIntegrations;
    bool m_supportsIntegrationsHasBeenSet = false;

    ServerlessV2FeaturesSupport m_serverlessV2FeaturesSupport;
    bool m_serverlessV2FeaturesSupportHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
