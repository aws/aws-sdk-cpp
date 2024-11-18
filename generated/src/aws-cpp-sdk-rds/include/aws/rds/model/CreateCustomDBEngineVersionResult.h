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
    AWS_RDS_API CreateCustomDBEngineVersionResult();
    AWS_RDS_API CreateCustomDBEngineVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API CreateCustomDBEngineVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The name of the database engine.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline void SetEngine(const Aws::String& value) { m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engine.assign(value); }
    inline CreateCustomDBEngineVersionResult& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the database engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersion.assign(value); }
    inline CreateCustomDBEngineVersionResult& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamily = value; }
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamily = std::move(value); }
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamily.assign(value); }
    inline CreateCustomDBEngineVersionResult& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the database engine.</p>
     */
    inline const Aws::String& GetDBEngineDescription() const{ return m_dBEngineDescription; }
    inline void SetDBEngineDescription(const Aws::String& value) { m_dBEngineDescription = value; }
    inline void SetDBEngineDescription(Aws::String&& value) { m_dBEngineDescription = std::move(value); }
    inline void SetDBEngineDescription(const char* value) { m_dBEngineDescription.assign(value); }
    inline CreateCustomDBEngineVersionResult& WithDBEngineDescription(const Aws::String& value) { SetDBEngineDescription(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithDBEngineDescription(Aws::String&& value) { SetDBEngineDescription(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& WithDBEngineDescription(const char* value) { SetDBEngineDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the database engine version.</p>
     */
    inline const Aws::String& GetDBEngineVersionDescription() const{ return m_dBEngineVersionDescription; }
    inline void SetDBEngineVersionDescription(const Aws::String& value) { m_dBEngineVersionDescription = value; }
    inline void SetDBEngineVersionDescription(Aws::String&& value) { m_dBEngineVersionDescription = std::move(value); }
    inline void SetDBEngineVersionDescription(const char* value) { m_dBEngineVersionDescription.assign(value); }
    inline CreateCustomDBEngineVersionResult& WithDBEngineVersionDescription(const Aws::String& value) { SetDBEngineVersionDescription(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithDBEngineVersionDescription(Aws::String&& value) { SetDBEngineVersionDescription(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& WithDBEngineVersionDescription(const char* value) { SetDBEngineVersionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default character set for new instances of this engine version, if the
     * <code>CharacterSetName</code> parameter of the CreateDBInstance API isn't
     * specified.</p>
     */
    inline const CharacterSet& GetDefaultCharacterSet() const{ return m_defaultCharacterSet; }
    inline void SetDefaultCharacterSet(const CharacterSet& value) { m_defaultCharacterSet = value; }
    inline void SetDefaultCharacterSet(CharacterSet&& value) { m_defaultCharacterSet = std::move(value); }
    inline CreateCustomDBEngineVersionResult& WithDefaultCharacterSet(const CharacterSet& value) { SetDefaultCharacterSet(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithDefaultCharacterSet(CharacterSet&& value) { SetDefaultCharacterSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 image</p>
     */
    inline const CustomDBEngineVersionAMI& GetImage() const{ return m_image; }
    inline void SetImage(const CustomDBEngineVersionAMI& value) { m_image = value; }
    inline void SetImage(CustomDBEngineVersionAMI&& value) { m_image = std::move(value); }
    inline CreateCustomDBEngineVersionResult& WithImage(const CustomDBEngineVersionAMI& value) { SetImage(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithImage(CustomDBEngineVersionAMI&& value) { SetImage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates the source media provider of the AMI based on the
     * usage operation. Applicable for RDS Custom for SQL Server.</p>
     */
    inline const Aws::String& GetDBEngineMediaType() const{ return m_dBEngineMediaType; }
    inline void SetDBEngineMediaType(const Aws::String& value) { m_dBEngineMediaType = value; }
    inline void SetDBEngineMediaType(Aws::String&& value) { m_dBEngineMediaType = std::move(value); }
    inline void SetDBEngineMediaType(const char* value) { m_dBEngineMediaType.assign(value); }
    inline CreateCustomDBEngineVersionResult& WithDBEngineMediaType(const Aws::String& value) { SetDBEngineMediaType(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithDBEngineMediaType(Aws::String&& value) { SetDBEngineMediaType(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& WithDBEngineMediaType(const char* value) { SetDBEngineMediaType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * operation.</p>
     */
    inline const Aws::Vector<CharacterSet>& GetSupportedCharacterSets() const{ return m_supportedCharacterSets; }
    inline void SetSupportedCharacterSets(const Aws::Vector<CharacterSet>& value) { m_supportedCharacterSets = value; }
    inline void SetSupportedCharacterSets(Aws::Vector<CharacterSet>&& value) { m_supportedCharacterSets = std::move(value); }
    inline CreateCustomDBEngineVersionResult& WithSupportedCharacterSets(const Aws::Vector<CharacterSet>& value) { SetSupportedCharacterSets(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithSupportedCharacterSets(Aws::Vector<CharacterSet>&& value) { SetSupportedCharacterSets(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& AddSupportedCharacterSets(const CharacterSet& value) { m_supportedCharacterSets.push_back(value); return *this; }
    inline CreateCustomDBEngineVersionResult& AddSupportedCharacterSets(CharacterSet&& value) { m_supportedCharacterSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the character sets supported by the Oracle DB engine for the
     * <code>NcharCharacterSetName</code> parameter of the
     * <code>CreateDBInstance</code> operation.</p>
     */
    inline const Aws::Vector<CharacterSet>& GetSupportedNcharCharacterSets() const{ return m_supportedNcharCharacterSets; }
    inline void SetSupportedNcharCharacterSets(const Aws::Vector<CharacterSet>& value) { m_supportedNcharCharacterSets = value; }
    inline void SetSupportedNcharCharacterSets(Aws::Vector<CharacterSet>&& value) { m_supportedNcharCharacterSets = std::move(value); }
    inline CreateCustomDBEngineVersionResult& WithSupportedNcharCharacterSets(const Aws::Vector<CharacterSet>& value) { SetSupportedNcharCharacterSets(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithSupportedNcharCharacterSets(Aws::Vector<CharacterSet>&& value) { SetSupportedNcharCharacterSets(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& AddSupportedNcharCharacterSets(const CharacterSet& value) { m_supportedNcharCharacterSets.push_back(value); return *this; }
    inline CreateCustomDBEngineVersionResult& AddSupportedNcharCharacterSets(CharacterSet&& value) { m_supportedNcharCharacterSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline const Aws::Vector<UpgradeTarget>& GetValidUpgradeTarget() const{ return m_validUpgradeTarget; }
    inline void SetValidUpgradeTarget(const Aws::Vector<UpgradeTarget>& value) { m_validUpgradeTarget = value; }
    inline void SetValidUpgradeTarget(Aws::Vector<UpgradeTarget>&& value) { m_validUpgradeTarget = std::move(value); }
    inline CreateCustomDBEngineVersionResult& WithValidUpgradeTarget(const Aws::Vector<UpgradeTarget>& value) { SetValidUpgradeTarget(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithValidUpgradeTarget(Aws::Vector<UpgradeTarget>&& value) { SetValidUpgradeTarget(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& AddValidUpgradeTarget(const UpgradeTarget& value) { m_validUpgradeTarget.push_back(value); return *this; }
    inline CreateCustomDBEngineVersionResult& AddValidUpgradeTarget(UpgradeTarget&& value) { m_validUpgradeTarget.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.</p>
     */
    inline const Aws::Vector<Timezone>& GetSupportedTimezones() const{ return m_supportedTimezones; }
    inline void SetSupportedTimezones(const Aws::Vector<Timezone>& value) { m_supportedTimezones = value; }
    inline void SetSupportedTimezones(Aws::Vector<Timezone>&& value) { m_supportedTimezones = std::move(value); }
    inline CreateCustomDBEngineVersionResult& WithSupportedTimezones(const Aws::Vector<Timezone>& value) { SetSupportedTimezones(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithSupportedTimezones(Aws::Vector<Timezone>&& value) { SetSupportedTimezones(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& AddSupportedTimezones(const Timezone& value) { m_supportedTimezones.push_back(value); return *this; }
    inline CreateCustomDBEngineVersionResult& AddSupportedTimezones(Timezone&& value) { m_supportedTimezones.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportableLogTypes() const{ return m_exportableLogTypes; }
    inline void SetExportableLogTypes(const Aws::Vector<Aws::String>& value) { m_exportableLogTypes = value; }
    inline void SetExportableLogTypes(Aws::Vector<Aws::String>&& value) { m_exportableLogTypes = std::move(value); }
    inline CreateCustomDBEngineVersionResult& WithExportableLogTypes(const Aws::Vector<Aws::String>& value) { SetExportableLogTypes(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithExportableLogTypes(Aws::Vector<Aws::String>&& value) { SetExportableLogTypes(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& AddExportableLogTypes(const Aws::String& value) { m_exportableLogTypes.push_back(value); return *this; }
    inline CreateCustomDBEngineVersionResult& AddExportableLogTypes(Aws::String&& value) { m_exportableLogTypes.push_back(std::move(value)); return *this; }
    inline CreateCustomDBEngineVersionResult& AddExportableLogTypes(const char* value) { m_exportableLogTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the engine version supports exporting the log types
     * specified by ExportableLogTypes to CloudWatch Logs.</p>
     */
    inline bool GetSupportsLogExportsToCloudwatchLogs() const{ return m_supportsLogExportsToCloudwatchLogs; }
    inline void SetSupportsLogExportsToCloudwatchLogs(bool value) { m_supportsLogExportsToCloudwatchLogs = value; }
    inline CreateCustomDBEngineVersionResult& WithSupportsLogExportsToCloudwatchLogs(bool value) { SetSupportsLogExportsToCloudwatchLogs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the database engine version supports read replicas.</p>
     */
    inline bool GetSupportsReadReplica() const{ return m_supportsReadReplica; }
    inline void SetSupportsReadReplica(bool value) { m_supportsReadReplica = value; }
    inline CreateCustomDBEngineVersionResult& WithSupportsReadReplica(bool value) { SetSupportsReadReplica(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedEngineModes() const{ return m_supportedEngineModes; }
    inline void SetSupportedEngineModes(const Aws::Vector<Aws::String>& value) { m_supportedEngineModes = value; }
    inline void SetSupportedEngineModes(Aws::Vector<Aws::String>&& value) { m_supportedEngineModes = std::move(value); }
    inline CreateCustomDBEngineVersionResult& WithSupportedEngineModes(const Aws::Vector<Aws::String>& value) { SetSupportedEngineModes(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithSupportedEngineModes(Aws::Vector<Aws::String>&& value) { SetSupportedEngineModes(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& AddSupportedEngineModes(const Aws::String& value) { m_supportedEngineModes.push_back(value); return *this; }
    inline CreateCustomDBEngineVersionResult& AddSupportedEngineModes(Aws::String&& value) { m_supportedEngineModes.push_back(std::move(value)); return *this; }
    inline CreateCustomDBEngineVersionResult& AddSupportedEngineModes(const char* value) { m_supportedEngineModes.push_back(value); return *this; }
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
    inline void SetSupportedFeatureNames(const Aws::Vector<Aws::String>& value) { m_supportedFeatureNames = value; }
    inline void SetSupportedFeatureNames(Aws::Vector<Aws::String>&& value) { m_supportedFeatureNames = std::move(value); }
    inline CreateCustomDBEngineVersionResult& WithSupportedFeatureNames(const Aws::Vector<Aws::String>& value) { SetSupportedFeatureNames(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithSupportedFeatureNames(Aws::Vector<Aws::String>&& value) { SetSupportedFeatureNames(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& AddSupportedFeatureNames(const Aws::String& value) { m_supportedFeatureNames.push_back(value); return *this; }
    inline CreateCustomDBEngineVersionResult& AddSupportedFeatureNames(Aws::String&& value) { m_supportedFeatureNames.push_back(std::move(value)); return *this; }
    inline CreateCustomDBEngineVersionResult& AddSupportedFeatureNames(const char* value) { m_supportedFeatureNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline CreateCustomDBEngineVersionResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you can use Aurora parallel query with a specific DB engine
     * version.</p>
     */
    inline bool GetSupportsParallelQuery() const{ return m_supportsParallelQuery; }
    inline void SetSupportsParallelQuery(bool value) { m_supportsParallelQuery = value; }
    inline CreateCustomDBEngineVersionResult& WithSupportsParallelQuery(bool value) { SetSupportsParallelQuery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you can use Aurora global databases with a specific DB
     * engine version.</p>
     */
    inline bool GetSupportsGlobalDatabases() const{ return m_supportsGlobalDatabases; }
    inline void SetSupportsGlobalDatabases(bool value) { m_supportsGlobalDatabases = value; }
    inline CreateCustomDBEngineVersionResult& WithSupportsGlobalDatabases(bool value) { SetSupportsGlobalDatabases(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The major engine version of the CEV.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const{ return m_majorEngineVersion; }
    inline void SetMajorEngineVersion(const Aws::String& value) { m_majorEngineVersion = value; }
    inline void SetMajorEngineVersion(Aws::String&& value) { m_majorEngineVersion = std::move(value); }
    inline void SetMajorEngineVersion(const char* value) { m_majorEngineVersion.assign(value); }
    inline CreateCustomDBEngineVersionResult& WithMajorEngineVersion(const Aws::String& value) { SetMajorEngineVersion(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithMajorEngineVersion(Aws::String&& value) { SetMajorEngineVersion(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& WithMajorEngineVersion(const char* value) { SetMajorEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket that contains your database installation
     * files.</p>
     */
    inline const Aws::String& GetDatabaseInstallationFilesS3BucketName() const{ return m_databaseInstallationFilesS3BucketName; }
    inline void SetDatabaseInstallationFilesS3BucketName(const Aws::String& value) { m_databaseInstallationFilesS3BucketName = value; }
    inline void SetDatabaseInstallationFilesS3BucketName(Aws::String&& value) { m_databaseInstallationFilesS3BucketName = std::move(value); }
    inline void SetDatabaseInstallationFilesS3BucketName(const char* value) { m_databaseInstallationFilesS3BucketName.assign(value); }
    inline CreateCustomDBEngineVersionResult& WithDatabaseInstallationFilesS3BucketName(const Aws::String& value) { SetDatabaseInstallationFilesS3BucketName(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithDatabaseInstallationFilesS3BucketName(Aws::String&& value) { SetDatabaseInstallationFilesS3BucketName(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& WithDatabaseInstallationFilesS3BucketName(const char* value) { SetDatabaseInstallationFilesS3BucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 directory that contains the database installation files. If not
     * specified, then no prefix is assumed.</p>
     */
    inline const Aws::String& GetDatabaseInstallationFilesS3Prefix() const{ return m_databaseInstallationFilesS3Prefix; }
    inline void SetDatabaseInstallationFilesS3Prefix(const Aws::String& value) { m_databaseInstallationFilesS3Prefix = value; }
    inline void SetDatabaseInstallationFilesS3Prefix(Aws::String&& value) { m_databaseInstallationFilesS3Prefix = std::move(value); }
    inline void SetDatabaseInstallationFilesS3Prefix(const char* value) { m_databaseInstallationFilesS3Prefix.assign(value); }
    inline CreateCustomDBEngineVersionResult& WithDatabaseInstallationFilesS3Prefix(const Aws::String& value) { SetDatabaseInstallationFilesS3Prefix(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithDatabaseInstallationFilesS3Prefix(Aws::String&& value) { SetDatabaseInstallationFilesS3Prefix(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& WithDatabaseInstallationFilesS3Prefix(const char* value) { SetDatabaseInstallationFilesS3Prefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the custom engine version.</p>
     */
    inline const Aws::String& GetDBEngineVersionArn() const{ return m_dBEngineVersionArn; }
    inline void SetDBEngineVersionArn(const Aws::String& value) { m_dBEngineVersionArn = value; }
    inline void SetDBEngineVersionArn(Aws::String&& value) { m_dBEngineVersionArn = std::move(value); }
    inline void SetDBEngineVersionArn(const char* value) { m_dBEngineVersionArn.assign(value); }
    inline CreateCustomDBEngineVersionResult& WithDBEngineVersionArn(const Aws::String& value) { SetDBEngineVersionArn(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithDBEngineVersionArn(Aws::String&& value) { SetDBEngineVersionArn(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& WithDBEngineVersionArn(const char* value) { SetDBEngineVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted CEV. This
     * parameter is required for RDS Custom, but optional for Amazon RDS.</p>
     */
    inline const Aws::String& GetKMSKeyId() const{ return m_kMSKeyId; }
    inline void SetKMSKeyId(const Aws::String& value) { m_kMSKeyId = value; }
    inline void SetKMSKeyId(Aws::String&& value) { m_kMSKeyId = std::move(value); }
    inline void SetKMSKeyId(const char* value) { m_kMSKeyId.assign(value); }
    inline CreateCustomDBEngineVersionResult& WithKMSKeyId(const Aws::String& value) { SetKMSKeyId(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithKMSKeyId(Aws::String&& value) { SetKMSKeyId(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& WithKMSKeyId(const char* value) { SetKMSKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the DB engine version.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline CreateCustomDBEngineVersionResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagList = value; }
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagList = std::move(value); }
    inline CreateCustomDBEngineVersionResult& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& AddTagList(const Tag& value) { m_tagList.push_back(value); return *this; }
    inline CreateCustomDBEngineVersionResult& AddTagList(Tag&& value) { m_tagList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the engine version supports Babelfish for Aurora
     * PostgreSQL.</p>
     */
    inline bool GetSupportsBabelfish() const{ return m_supportsBabelfish; }
    inline void SetSupportsBabelfish(bool value) { m_supportsBabelfish = value; }
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
    inline const Aws::String& GetCustomDBEngineVersionManifest() const{ return m_customDBEngineVersionManifest; }
    inline void SetCustomDBEngineVersionManifest(const Aws::String& value) { m_customDBEngineVersionManifest = value; }
    inline void SetCustomDBEngineVersionManifest(Aws::String&& value) { m_customDBEngineVersionManifest = std::move(value); }
    inline void SetCustomDBEngineVersionManifest(const char* value) { m_customDBEngineVersionManifest.assign(value); }
    inline CreateCustomDBEngineVersionResult& WithCustomDBEngineVersionManifest(const Aws::String& value) { SetCustomDBEngineVersionManifest(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithCustomDBEngineVersionManifest(Aws::String&& value) { SetCustomDBEngineVersionManifest(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& WithCustomDBEngineVersionManifest(const char* value) { SetCustomDBEngineVersionManifest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB engine version supports Aurora Limitless
     * Database.</p>
     */
    inline bool GetSupportsLimitlessDatabase() const{ return m_supportsLimitlessDatabase; }
    inline void SetSupportsLimitlessDatabase(bool value) { m_supportsLimitlessDatabase = value; }
    inline CreateCustomDBEngineVersionResult& WithSupportsLimitlessDatabase(bool value) { SetSupportsLimitlessDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the engine version supports rotating the server certificate
     * without rebooting the DB instance.</p>
     */
    inline bool GetSupportsCertificateRotationWithoutRestart() const{ return m_supportsCertificateRotationWithoutRestart; }
    inline void SetSupportsCertificateRotationWithoutRestart(bool value) { m_supportsCertificateRotationWithoutRestart = value; }
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
    inline const Aws::Vector<Aws::String>& GetSupportedCACertificateIdentifiers() const{ return m_supportedCACertificateIdentifiers; }
    inline void SetSupportedCACertificateIdentifiers(const Aws::Vector<Aws::String>& value) { m_supportedCACertificateIdentifiers = value; }
    inline void SetSupportedCACertificateIdentifiers(Aws::Vector<Aws::String>&& value) { m_supportedCACertificateIdentifiers = std::move(value); }
    inline CreateCustomDBEngineVersionResult& WithSupportedCACertificateIdentifiers(const Aws::Vector<Aws::String>& value) { SetSupportedCACertificateIdentifiers(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithSupportedCACertificateIdentifiers(Aws::Vector<Aws::String>&& value) { SetSupportedCACertificateIdentifiers(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionResult& AddSupportedCACertificateIdentifiers(const Aws::String& value) { m_supportedCACertificateIdentifiers.push_back(value); return *this; }
    inline CreateCustomDBEngineVersionResult& AddSupportedCACertificateIdentifiers(Aws::String&& value) { m_supportedCACertificateIdentifiers.push_back(std::move(value)); return *this; }
    inline CreateCustomDBEngineVersionResult& AddSupportedCACertificateIdentifiers(const char* value) { m_supportedCACertificateIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB engine version supports forwarding write operations
     * from reader DB instances to the writer DB instance in the DB cluster. By
     * default, write operations aren't allowed on reader DB instances.</p> <p>Valid
     * for: Aurora DB clusters only</p>
     */
    inline bool GetSupportsLocalWriteForwarding() const{ return m_supportsLocalWriteForwarding; }
    inline void SetSupportsLocalWriteForwarding(bool value) { m_supportsLocalWriteForwarding = value; }
    inline CreateCustomDBEngineVersionResult& WithSupportsLocalWriteForwarding(bool value) { SetSupportsLocalWriteForwarding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB engine version supports zero-ETL integrations with
     * Amazon Redshift.</p>
     */
    inline bool GetSupportsIntegrations() const{ return m_supportsIntegrations; }
    inline void SetSupportsIntegrations(bool value) { m_supportsIntegrations = value; }
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
    inline const ServerlessV2FeaturesSupport& GetServerlessV2FeaturesSupport() const{ return m_serverlessV2FeaturesSupport; }
    inline void SetServerlessV2FeaturesSupport(const ServerlessV2FeaturesSupport& value) { m_serverlessV2FeaturesSupport = value; }
    inline void SetServerlessV2FeaturesSupport(ServerlessV2FeaturesSupport&& value) { m_serverlessV2FeaturesSupport = std::move(value); }
    inline CreateCustomDBEngineVersionResult& WithServerlessV2FeaturesSupport(const ServerlessV2FeaturesSupport& value) { SetServerlessV2FeaturesSupport(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithServerlessV2FeaturesSupport(ServerlessV2FeaturesSupport&& value) { SetServerlessV2FeaturesSupport(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateCustomDBEngineVersionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateCustomDBEngineVersionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_engine;

    Aws::String m_engineVersion;

    Aws::String m_dBParameterGroupFamily;

    Aws::String m_dBEngineDescription;

    Aws::String m_dBEngineVersionDescription;

    CharacterSet m_defaultCharacterSet;

    CustomDBEngineVersionAMI m_image;

    Aws::String m_dBEngineMediaType;

    Aws::Vector<CharacterSet> m_supportedCharacterSets;

    Aws::Vector<CharacterSet> m_supportedNcharCharacterSets;

    Aws::Vector<UpgradeTarget> m_validUpgradeTarget;

    Aws::Vector<Timezone> m_supportedTimezones;

    Aws::Vector<Aws::String> m_exportableLogTypes;

    bool m_supportsLogExportsToCloudwatchLogs;

    bool m_supportsReadReplica;

    Aws::Vector<Aws::String> m_supportedEngineModes;

    Aws::Vector<Aws::String> m_supportedFeatureNames;

    Aws::String m_status;

    bool m_supportsParallelQuery;

    bool m_supportsGlobalDatabases;

    Aws::String m_majorEngineVersion;

    Aws::String m_databaseInstallationFilesS3BucketName;

    Aws::String m_databaseInstallationFilesS3Prefix;

    Aws::String m_dBEngineVersionArn;

    Aws::String m_kMSKeyId;

    Aws::Utils::DateTime m_createTime;

    Aws::Vector<Tag> m_tagList;

    bool m_supportsBabelfish;

    Aws::String m_customDBEngineVersionManifest;

    bool m_supportsLimitlessDatabase;

    bool m_supportsCertificateRotationWithoutRestart;

    Aws::Vector<Aws::String> m_supportedCACertificateIdentifiers;

    bool m_supportsLocalWriteForwarding;

    bool m_supportsIntegrations;

    ServerlessV2FeaturesSupport m_serverlessV2FeaturesSupport;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
