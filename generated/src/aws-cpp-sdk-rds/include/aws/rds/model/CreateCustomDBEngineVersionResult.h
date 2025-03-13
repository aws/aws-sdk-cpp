/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
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
  class CreateCustomDBEngineVersionResult
  {
  public:
    AWS_RDS_API CreateCustomDBEngineVersionResult() = default;
    AWS_RDS_API CreateCustomDBEngineVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API CreateCustomDBEngineVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The name of the database engine.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    CreateCustomDBEngineVersionResult& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the database engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    CreateCustomDBEngineVersionResult& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const { return m_dBParameterGroupFamily; }
    template<typename DBParameterGroupFamilyT = Aws::String>
    void SetDBParameterGroupFamily(DBParameterGroupFamilyT&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::forward<DBParameterGroupFamilyT>(value); }
    template<typename DBParameterGroupFamilyT = Aws::String>
    CreateCustomDBEngineVersionResult& WithDBParameterGroupFamily(DBParameterGroupFamilyT&& value) { SetDBParameterGroupFamily(std::forward<DBParameterGroupFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the database engine.</p>
     */
    inline const Aws::String& GetDBEngineDescription() const { return m_dBEngineDescription; }
    template<typename DBEngineDescriptionT = Aws::String>
    void SetDBEngineDescription(DBEngineDescriptionT&& value) { m_dBEngineDescriptionHasBeenSet = true; m_dBEngineDescription = std::forward<DBEngineDescriptionT>(value); }
    template<typename DBEngineDescriptionT = Aws::String>
    CreateCustomDBEngineVersionResult& WithDBEngineDescription(DBEngineDescriptionT&& value) { SetDBEngineDescription(std::forward<DBEngineDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the database engine version.</p>
     */
    inline const Aws::String& GetDBEngineVersionDescription() const { return m_dBEngineVersionDescription; }
    template<typename DBEngineVersionDescriptionT = Aws::String>
    void SetDBEngineVersionDescription(DBEngineVersionDescriptionT&& value) { m_dBEngineVersionDescriptionHasBeenSet = true; m_dBEngineVersionDescription = std::forward<DBEngineVersionDescriptionT>(value); }
    template<typename DBEngineVersionDescriptionT = Aws::String>
    CreateCustomDBEngineVersionResult& WithDBEngineVersionDescription(DBEngineVersionDescriptionT&& value) { SetDBEngineVersionDescription(std::forward<DBEngineVersionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default character set for new instances of this engine version, if the
     * <code>CharacterSetName</code> parameter of the CreateDBInstance API isn't
     * specified.</p>
     */
    inline const CharacterSet& GetDefaultCharacterSet() const { return m_defaultCharacterSet; }
    template<typename DefaultCharacterSetT = CharacterSet>
    void SetDefaultCharacterSet(DefaultCharacterSetT&& value) { m_defaultCharacterSetHasBeenSet = true; m_defaultCharacterSet = std::forward<DefaultCharacterSetT>(value); }
    template<typename DefaultCharacterSetT = CharacterSet>
    CreateCustomDBEngineVersionResult& WithDefaultCharacterSet(DefaultCharacterSetT&& value) { SetDefaultCharacterSet(std::forward<DefaultCharacterSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 image</p>
     */
    inline const CustomDBEngineVersionAMI& GetImage() const { return m_image; }
    template<typename ImageT = CustomDBEngineVersionAMI>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = CustomDBEngineVersionAMI>
    CreateCustomDBEngineVersionResult& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates the source media provider of the AMI based on the
     * usage operation. Applicable for RDS Custom for SQL Server.</p>
     */
    inline const Aws::String& GetDBEngineMediaType() const { return m_dBEngineMediaType; }
    template<typename DBEngineMediaTypeT = Aws::String>
    void SetDBEngineMediaType(DBEngineMediaTypeT&& value) { m_dBEngineMediaTypeHasBeenSet = true; m_dBEngineMediaType = std::forward<DBEngineMediaTypeT>(value); }
    template<typename DBEngineMediaTypeT = Aws::String>
    CreateCustomDBEngineVersionResult& WithDBEngineMediaType(DBEngineMediaTypeT&& value) { SetDBEngineMediaType(std::forward<DBEngineMediaTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * operation.</p>
     */
    inline const Aws::Vector<CharacterSet>& GetSupportedCharacterSets() const { return m_supportedCharacterSets; }
    template<typename SupportedCharacterSetsT = Aws::Vector<CharacterSet>>
    void SetSupportedCharacterSets(SupportedCharacterSetsT&& value) { m_supportedCharacterSetsHasBeenSet = true; m_supportedCharacterSets = std::forward<SupportedCharacterSetsT>(value); }
    template<typename SupportedCharacterSetsT = Aws::Vector<CharacterSet>>
    CreateCustomDBEngineVersionResult& WithSupportedCharacterSets(SupportedCharacterSetsT&& value) { SetSupportedCharacterSets(std::forward<SupportedCharacterSetsT>(value)); return *this;}
    template<typename SupportedCharacterSetsT = CharacterSet>
    CreateCustomDBEngineVersionResult& AddSupportedCharacterSets(SupportedCharacterSetsT&& value) { m_supportedCharacterSetsHasBeenSet = true; m_supportedCharacterSets.emplace_back(std::forward<SupportedCharacterSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the character sets supported by the Oracle DB engine for the
     * <code>NcharCharacterSetName</code> parameter of the
     * <code>CreateDBInstance</code> operation.</p>
     */
    inline const Aws::Vector<CharacterSet>& GetSupportedNcharCharacterSets() const { return m_supportedNcharCharacterSets; }
    template<typename SupportedNcharCharacterSetsT = Aws::Vector<CharacterSet>>
    void SetSupportedNcharCharacterSets(SupportedNcharCharacterSetsT&& value) { m_supportedNcharCharacterSetsHasBeenSet = true; m_supportedNcharCharacterSets = std::forward<SupportedNcharCharacterSetsT>(value); }
    template<typename SupportedNcharCharacterSetsT = Aws::Vector<CharacterSet>>
    CreateCustomDBEngineVersionResult& WithSupportedNcharCharacterSets(SupportedNcharCharacterSetsT&& value) { SetSupportedNcharCharacterSets(std::forward<SupportedNcharCharacterSetsT>(value)); return *this;}
    template<typename SupportedNcharCharacterSetsT = CharacterSet>
    CreateCustomDBEngineVersionResult& AddSupportedNcharCharacterSets(SupportedNcharCharacterSetsT&& value) { m_supportedNcharCharacterSetsHasBeenSet = true; m_supportedNcharCharacterSets.emplace_back(std::forward<SupportedNcharCharacterSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline const Aws::Vector<UpgradeTarget>& GetValidUpgradeTarget() const { return m_validUpgradeTarget; }
    template<typename ValidUpgradeTargetT = Aws::Vector<UpgradeTarget>>
    void SetValidUpgradeTarget(ValidUpgradeTargetT&& value) { m_validUpgradeTargetHasBeenSet = true; m_validUpgradeTarget = std::forward<ValidUpgradeTargetT>(value); }
    template<typename ValidUpgradeTargetT = Aws::Vector<UpgradeTarget>>
    CreateCustomDBEngineVersionResult& WithValidUpgradeTarget(ValidUpgradeTargetT&& value) { SetValidUpgradeTarget(std::forward<ValidUpgradeTargetT>(value)); return *this;}
    template<typename ValidUpgradeTargetT = UpgradeTarget>
    CreateCustomDBEngineVersionResult& AddValidUpgradeTarget(ValidUpgradeTargetT&& value) { m_validUpgradeTargetHasBeenSet = true; m_validUpgradeTarget.emplace_back(std::forward<ValidUpgradeTargetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.</p>
     */
    inline const Aws::Vector<Timezone>& GetSupportedTimezones() const { return m_supportedTimezones; }
    template<typename SupportedTimezonesT = Aws::Vector<Timezone>>
    void SetSupportedTimezones(SupportedTimezonesT&& value) { m_supportedTimezonesHasBeenSet = true; m_supportedTimezones = std::forward<SupportedTimezonesT>(value); }
    template<typename SupportedTimezonesT = Aws::Vector<Timezone>>
    CreateCustomDBEngineVersionResult& WithSupportedTimezones(SupportedTimezonesT&& value) { SetSupportedTimezones(std::forward<SupportedTimezonesT>(value)); return *this;}
    template<typename SupportedTimezonesT = Timezone>
    CreateCustomDBEngineVersionResult& AddSupportedTimezones(SupportedTimezonesT&& value) { m_supportedTimezonesHasBeenSet = true; m_supportedTimezones.emplace_back(std::forward<SupportedTimezonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportableLogTypes() const { return m_exportableLogTypes; }
    template<typename ExportableLogTypesT = Aws::Vector<Aws::String>>
    void SetExportableLogTypes(ExportableLogTypesT&& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes = std::forward<ExportableLogTypesT>(value); }
    template<typename ExportableLogTypesT = Aws::Vector<Aws::String>>
    CreateCustomDBEngineVersionResult& WithExportableLogTypes(ExportableLogTypesT&& value) { SetExportableLogTypes(std::forward<ExportableLogTypesT>(value)); return *this;}
    template<typename ExportableLogTypesT = Aws::String>
    CreateCustomDBEngineVersionResult& AddExportableLogTypes(ExportableLogTypesT&& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes.emplace_back(std::forward<ExportableLogTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the engine version supports exporting the log types
     * specified by ExportableLogTypes to CloudWatch Logs.</p>
     */
    inline bool GetSupportsLogExportsToCloudwatchLogs() const { return m_supportsLogExportsToCloudwatchLogs; }
    inline void SetSupportsLogExportsToCloudwatchLogs(bool value) { m_supportsLogExportsToCloudwatchLogsHasBeenSet = true; m_supportsLogExportsToCloudwatchLogs = value; }
    inline CreateCustomDBEngineVersionResult& WithSupportsLogExportsToCloudwatchLogs(bool value) { SetSupportsLogExportsToCloudwatchLogs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the database engine version supports read replicas.</p>
     */
    inline bool GetSupportsReadReplica() const { return m_supportsReadReplica; }
    inline void SetSupportsReadReplica(bool value) { m_supportsReadReplicaHasBeenSet = true; m_supportsReadReplica = value; }
    inline CreateCustomDBEngineVersionResult& WithSupportsReadReplica(bool value) { SetSupportsReadReplica(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedEngineModes() const { return m_supportedEngineModes; }
    template<typename SupportedEngineModesT = Aws::Vector<Aws::String>>
    void SetSupportedEngineModes(SupportedEngineModesT&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes = std::forward<SupportedEngineModesT>(value); }
    template<typename SupportedEngineModesT = Aws::Vector<Aws::String>>
    CreateCustomDBEngineVersionResult& WithSupportedEngineModes(SupportedEngineModesT&& value) { SetSupportedEngineModes(std::forward<SupportedEngineModesT>(value)); return *this;}
    template<typename SupportedEngineModesT = Aws::String>
    CreateCustomDBEngineVersionResult& AddSupportedEngineModes(SupportedEngineModesT&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.emplace_back(std::forward<SupportedEngineModesT>(value)); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetSupportedFeatureNames() const { return m_supportedFeatureNames; }
    template<typename SupportedFeatureNamesT = Aws::Vector<Aws::String>>
    void SetSupportedFeatureNames(SupportedFeatureNamesT&& value) { m_supportedFeatureNamesHasBeenSet = true; m_supportedFeatureNames = std::forward<SupportedFeatureNamesT>(value); }
    template<typename SupportedFeatureNamesT = Aws::Vector<Aws::String>>
    CreateCustomDBEngineVersionResult& WithSupportedFeatureNames(SupportedFeatureNamesT&& value) { SetSupportedFeatureNames(std::forward<SupportedFeatureNamesT>(value)); return *this;}
    template<typename SupportedFeatureNamesT = Aws::String>
    CreateCustomDBEngineVersionResult& AddSupportedFeatureNames(SupportedFeatureNamesT&& value) { m_supportedFeatureNamesHasBeenSet = true; m_supportedFeatureNames.emplace_back(std::forward<SupportedFeatureNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    CreateCustomDBEngineVersionResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you can use Aurora parallel query with a specific DB engine
     * version.</p>
     */
    inline bool GetSupportsParallelQuery() const { return m_supportsParallelQuery; }
    inline void SetSupportsParallelQuery(bool value) { m_supportsParallelQueryHasBeenSet = true; m_supportsParallelQuery = value; }
    inline CreateCustomDBEngineVersionResult& WithSupportsParallelQuery(bool value) { SetSupportsParallelQuery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you can use Aurora global databases with a specific DB
     * engine version.</p>
     */
    inline bool GetSupportsGlobalDatabases() const { return m_supportsGlobalDatabases; }
    inline void SetSupportsGlobalDatabases(bool value) { m_supportsGlobalDatabasesHasBeenSet = true; m_supportsGlobalDatabases = value; }
    inline CreateCustomDBEngineVersionResult& WithSupportsGlobalDatabases(bool value) { SetSupportsGlobalDatabases(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The major engine version of the CEV.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const { return m_majorEngineVersion; }
    template<typename MajorEngineVersionT = Aws::String>
    void SetMajorEngineVersion(MajorEngineVersionT&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::forward<MajorEngineVersionT>(value); }
    template<typename MajorEngineVersionT = Aws::String>
    CreateCustomDBEngineVersionResult& WithMajorEngineVersion(MajorEngineVersionT&& value) { SetMajorEngineVersion(std::forward<MajorEngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket that contains your database installation
     * files.</p>
     */
    inline const Aws::String& GetDatabaseInstallationFilesS3BucketName() const { return m_databaseInstallationFilesS3BucketName; }
    template<typename DatabaseInstallationFilesS3BucketNameT = Aws::String>
    void SetDatabaseInstallationFilesS3BucketName(DatabaseInstallationFilesS3BucketNameT&& value) { m_databaseInstallationFilesS3BucketNameHasBeenSet = true; m_databaseInstallationFilesS3BucketName = std::forward<DatabaseInstallationFilesS3BucketNameT>(value); }
    template<typename DatabaseInstallationFilesS3BucketNameT = Aws::String>
    CreateCustomDBEngineVersionResult& WithDatabaseInstallationFilesS3BucketName(DatabaseInstallationFilesS3BucketNameT&& value) { SetDatabaseInstallationFilesS3BucketName(std::forward<DatabaseInstallationFilesS3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 directory that contains the database installation files. If not
     * specified, then no prefix is assumed.</p>
     */
    inline const Aws::String& GetDatabaseInstallationFilesS3Prefix() const { return m_databaseInstallationFilesS3Prefix; }
    template<typename DatabaseInstallationFilesS3PrefixT = Aws::String>
    void SetDatabaseInstallationFilesS3Prefix(DatabaseInstallationFilesS3PrefixT&& value) { m_databaseInstallationFilesS3PrefixHasBeenSet = true; m_databaseInstallationFilesS3Prefix = std::forward<DatabaseInstallationFilesS3PrefixT>(value); }
    template<typename DatabaseInstallationFilesS3PrefixT = Aws::String>
    CreateCustomDBEngineVersionResult& WithDatabaseInstallationFilesS3Prefix(DatabaseInstallationFilesS3PrefixT&& value) { SetDatabaseInstallationFilesS3Prefix(std::forward<DatabaseInstallationFilesS3PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the custom engine version.</p>
     */
    inline const Aws::String& GetDBEngineVersionArn() const { return m_dBEngineVersionArn; }
    template<typename DBEngineVersionArnT = Aws::String>
    void SetDBEngineVersionArn(DBEngineVersionArnT&& value) { m_dBEngineVersionArnHasBeenSet = true; m_dBEngineVersionArn = std::forward<DBEngineVersionArnT>(value); }
    template<typename DBEngineVersionArnT = Aws::String>
    CreateCustomDBEngineVersionResult& WithDBEngineVersionArn(DBEngineVersionArnT&& value) { SetDBEngineVersionArn(std::forward<DBEngineVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted CEV. This
     * parameter is required for RDS Custom, but optional for Amazon RDS.</p>
     */
    inline const Aws::String& GetKMSKeyId() const { return m_kMSKeyId; }
    template<typename KMSKeyIdT = Aws::String>
    void SetKMSKeyId(KMSKeyIdT&& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = std::forward<KMSKeyIdT>(value); }
    template<typename KMSKeyIdT = Aws::String>
    CreateCustomDBEngineVersionResult& WithKMSKeyId(KMSKeyIdT&& value) { SetKMSKeyId(std::forward<KMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the DB engine version.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    CreateCustomDBEngineVersionResult& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
    template<typename TagListT = Aws::Vector<Tag>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Tag>>
    CreateCustomDBEngineVersionResult& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Tag>
    CreateCustomDBEngineVersionResult& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the engine version supports Babelfish for Aurora
     * PostgreSQL.</p>
     */
    inline bool GetSupportsBabelfish() const { return m_supportsBabelfish; }
    inline void SetSupportsBabelfish(bool value) { m_supportsBabelfishHasBeenSet = true; m_supportsBabelfish = value; }
    inline CreateCustomDBEngineVersionResult& WithSupportsBabelfish(bool value) { SetSupportsBabelfish(value); return *this;}
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
    inline const Aws::String& GetCustomDBEngineVersionManifest() const { return m_customDBEngineVersionManifest; }
    template<typename CustomDBEngineVersionManifestT = Aws::String>
    void SetCustomDBEngineVersionManifest(CustomDBEngineVersionManifestT&& value) { m_customDBEngineVersionManifestHasBeenSet = true; m_customDBEngineVersionManifest = std::forward<CustomDBEngineVersionManifestT>(value); }
    template<typename CustomDBEngineVersionManifestT = Aws::String>
    CreateCustomDBEngineVersionResult& WithCustomDBEngineVersionManifest(CustomDBEngineVersionManifestT&& value) { SetCustomDBEngineVersionManifest(std::forward<CustomDBEngineVersionManifestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB engine version supports Aurora Limitless
     * Database.</p>
     */
    inline bool GetSupportsLimitlessDatabase() const { return m_supportsLimitlessDatabase; }
    inline void SetSupportsLimitlessDatabase(bool value) { m_supportsLimitlessDatabaseHasBeenSet = true; m_supportsLimitlessDatabase = value; }
    inline CreateCustomDBEngineVersionResult& WithSupportsLimitlessDatabase(bool value) { SetSupportsLimitlessDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the engine version supports rotating the server certificate
     * without rebooting the DB instance.</p>
     */
    inline bool GetSupportsCertificateRotationWithoutRestart() const { return m_supportsCertificateRotationWithoutRestart; }
    inline void SetSupportsCertificateRotationWithoutRestart(bool value) { m_supportsCertificateRotationWithoutRestartHasBeenSet = true; m_supportsCertificateRotationWithoutRestart = value; }
    inline CreateCustomDBEngineVersionResult& WithSupportsCertificateRotationWithoutRestart(bool value) { SetSupportsCertificateRotationWithoutRestart(value); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetSupportedCACertificateIdentifiers() const { return m_supportedCACertificateIdentifiers; }
    template<typename SupportedCACertificateIdentifiersT = Aws::Vector<Aws::String>>
    void SetSupportedCACertificateIdentifiers(SupportedCACertificateIdentifiersT&& value) { m_supportedCACertificateIdentifiersHasBeenSet = true; m_supportedCACertificateIdentifiers = std::forward<SupportedCACertificateIdentifiersT>(value); }
    template<typename SupportedCACertificateIdentifiersT = Aws::Vector<Aws::String>>
    CreateCustomDBEngineVersionResult& WithSupportedCACertificateIdentifiers(SupportedCACertificateIdentifiersT&& value) { SetSupportedCACertificateIdentifiers(std::forward<SupportedCACertificateIdentifiersT>(value)); return *this;}
    template<typename SupportedCACertificateIdentifiersT = Aws::String>
    CreateCustomDBEngineVersionResult& AddSupportedCACertificateIdentifiers(SupportedCACertificateIdentifiersT&& value) { m_supportedCACertificateIdentifiersHasBeenSet = true; m_supportedCACertificateIdentifiers.emplace_back(std::forward<SupportedCACertificateIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB engine version supports forwarding write operations
     * from reader DB instances to the writer DB instance in the DB cluster. By
     * default, write operations aren't allowed on reader DB instances.</p> <p>Valid
     * for: Aurora DB clusters only</p>
     */
    inline bool GetSupportsLocalWriteForwarding() const { return m_supportsLocalWriteForwarding; }
    inline void SetSupportsLocalWriteForwarding(bool value) { m_supportsLocalWriteForwardingHasBeenSet = true; m_supportsLocalWriteForwarding = value; }
    inline CreateCustomDBEngineVersionResult& WithSupportsLocalWriteForwarding(bool value) { SetSupportsLocalWriteForwarding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB engine version supports zero-ETL integrations with
     * Amazon Redshift.</p>
     */
    inline bool GetSupportsIntegrations() const { return m_supportsIntegrations; }
    inline void SetSupportsIntegrations(bool value) { m_supportsIntegrationsHasBeenSet = true; m_supportsIntegrations = value; }
    inline CreateCustomDBEngineVersionResult& WithSupportsIntegrations(bool value) { SetSupportsIntegrations(value); return *this;}
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
    inline const ServerlessV2FeaturesSupport& GetServerlessV2FeaturesSupport() const { return m_serverlessV2FeaturesSupport; }
    template<typename ServerlessV2FeaturesSupportT = ServerlessV2FeaturesSupport>
    void SetServerlessV2FeaturesSupport(ServerlessV2FeaturesSupportT&& value) { m_serverlessV2FeaturesSupportHasBeenSet = true; m_serverlessV2FeaturesSupport = std::forward<ServerlessV2FeaturesSupportT>(value); }
    template<typename ServerlessV2FeaturesSupportT = ServerlessV2FeaturesSupport>
    CreateCustomDBEngineVersionResult& WithServerlessV2FeaturesSupport(ServerlessV2FeaturesSupportT&& value) { SetServerlessV2FeaturesSupport(std::forward<ServerlessV2FeaturesSupportT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateCustomDBEngineVersionResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
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

    bool m_supportsLogExportsToCloudwatchLogs{false};
    bool m_supportsLogExportsToCloudwatchLogsHasBeenSet = false;

    bool m_supportsReadReplica{false};
    bool m_supportsReadReplicaHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedEngineModes;
    bool m_supportedEngineModesHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedFeatureNames;
    bool m_supportedFeatureNamesHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_supportsParallelQuery{false};
    bool m_supportsParallelQueryHasBeenSet = false;

    bool m_supportsGlobalDatabases{false};
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

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;

    bool m_supportsBabelfish{false};
    bool m_supportsBabelfishHasBeenSet = false;

    Aws::String m_customDBEngineVersionManifest;
    bool m_customDBEngineVersionManifestHasBeenSet = false;

    bool m_supportsLimitlessDatabase{false};
    bool m_supportsLimitlessDatabaseHasBeenSet = false;

    bool m_supportsCertificateRotationWithoutRestart{false};
    bool m_supportsCertificateRotationWithoutRestartHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedCACertificateIdentifiers;
    bool m_supportedCACertificateIdentifiersHasBeenSet = false;

    bool m_supportsLocalWriteForwarding{false};
    bool m_supportsLocalWriteForwardingHasBeenSet = false;

    bool m_supportsIntegrations{false};
    bool m_supportsIntegrationsHasBeenSet = false;

    ServerlessV2FeaturesSupport m_serverlessV2FeaturesSupport;
    bool m_serverlessV2FeaturesSupportHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
