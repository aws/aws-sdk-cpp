/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class CreateCustomDBEngineVersionRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateCustomDBEngineVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomDBEngineVersion"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The database engine. RDS Custom for Oracle supports the following values:</p>
     * <ul> <li> <p> <code>custom-oracle-ee</code> </p> </li> <li> <p>
     * <code>custom-oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>custom-oracle-se2</code> </p> </li> <li> <p>
     * <code>custom-oracle-se2-cdb</code> </p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline CreateCustomDBEngineVersionRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your CEV. The name format is 19.<i>customized_string</i>. For
     * example, a valid CEV name is <code>19.my_cev1</code>. This setting is required
     * for RDS Custom for Oracle, but optional for Amazon RDS. The combination of
     * <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Region.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline CreateCustomDBEngineVersionRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Amazon S3 bucket that contains database installation files for
     * your CEV. For example, a valid bucket name is
     * <code>my-custom-installation-files</code>.</p>
     */
    inline const Aws::String& GetDatabaseInstallationFilesS3BucketName() const{ return m_databaseInstallationFilesS3BucketName; }
    inline bool DatabaseInstallationFilesS3BucketNameHasBeenSet() const { return m_databaseInstallationFilesS3BucketNameHasBeenSet; }
    inline void SetDatabaseInstallationFilesS3BucketName(const Aws::String& value) { m_databaseInstallationFilesS3BucketNameHasBeenSet = true; m_databaseInstallationFilesS3BucketName = value; }
    inline void SetDatabaseInstallationFilesS3BucketName(Aws::String&& value) { m_databaseInstallationFilesS3BucketNameHasBeenSet = true; m_databaseInstallationFilesS3BucketName = std::move(value); }
    inline void SetDatabaseInstallationFilesS3BucketName(const char* value) { m_databaseInstallationFilesS3BucketNameHasBeenSet = true; m_databaseInstallationFilesS3BucketName.assign(value); }
    inline CreateCustomDBEngineVersionRequest& WithDatabaseInstallationFilesS3BucketName(const Aws::String& value) { SetDatabaseInstallationFilesS3BucketName(value); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithDatabaseInstallationFilesS3BucketName(Aws::String&& value) { SetDatabaseInstallationFilesS3BucketName(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithDatabaseInstallationFilesS3BucketName(const char* value) { SetDatabaseInstallationFilesS3BucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 directory that contains the database installation files for
     * your CEV. For example, a valid bucket name is <code>123456789012/cev1</code>. If
     * this setting isn't specified, no prefix is assumed.</p>
     */
    inline const Aws::String& GetDatabaseInstallationFilesS3Prefix() const{ return m_databaseInstallationFilesS3Prefix; }
    inline bool DatabaseInstallationFilesS3PrefixHasBeenSet() const { return m_databaseInstallationFilesS3PrefixHasBeenSet; }
    inline void SetDatabaseInstallationFilesS3Prefix(const Aws::String& value) { m_databaseInstallationFilesS3PrefixHasBeenSet = true; m_databaseInstallationFilesS3Prefix = value; }
    inline void SetDatabaseInstallationFilesS3Prefix(Aws::String&& value) { m_databaseInstallationFilesS3PrefixHasBeenSet = true; m_databaseInstallationFilesS3Prefix = std::move(value); }
    inline void SetDatabaseInstallationFilesS3Prefix(const char* value) { m_databaseInstallationFilesS3PrefixHasBeenSet = true; m_databaseInstallationFilesS3Prefix.assign(value); }
    inline CreateCustomDBEngineVersionRequest& WithDatabaseInstallationFilesS3Prefix(const Aws::String& value) { SetDatabaseInstallationFilesS3Prefix(value); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithDatabaseInstallationFilesS3Prefix(Aws::String&& value) { SetDatabaseInstallationFilesS3Prefix(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithDatabaseInstallationFilesS3Prefix(const char* value) { SetDatabaseInstallationFilesS3Prefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Machine Image (AMI). For RDS Custom for SQL Server, an
     * AMI ID is required to create a CEV. For RDS Custom for Oracle, the default is
     * the most recent AMI available, but you can specify an AMI ID that was used in a
     * different Oracle CEV. Find the AMIs used by your CEVs by calling the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_DescribeDBEngineVersions.html">DescribeDBEngineVersions</a>
     * operation.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline CreateCustomDBEngineVersionRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted CEV. A symmetric
     * encryption KMS key is required for RDS Custom, but optional for Amazon RDS.</p>
     * <p>If you have an existing symmetric encryption KMS key in your account, you can
     * use it with RDS Custom. No further action is necessary. If you don't already
     * have a symmetric encryption KMS key in your account, follow the instructions in
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html#create-symmetric-cmk">
     * Creating a symmetric encryption KMS key</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p> <p>You can choose the same symmetric
     * encryption key when you create a CEV and a DB instance, or choose different
     * keys.</p>
     */
    inline const Aws::String& GetKMSKeyId() const{ return m_kMSKeyId; }
    inline bool KMSKeyIdHasBeenSet() const { return m_kMSKeyIdHasBeenSet; }
    inline void SetKMSKeyId(const Aws::String& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = value; }
    inline void SetKMSKeyId(Aws::String&& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = std::move(value); }
    inline void SetKMSKeyId(const char* value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId.assign(value); }
    inline CreateCustomDBEngineVersionRequest& WithKMSKeyId(const Aws::String& value) { SetKMSKeyId(value); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithKMSKeyId(Aws::String&& value) { SetKMSKeyId(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithKMSKeyId(const char* value) { SetKMSKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of your CEV.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateCustomDBEngineVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CEV manifest, which is a JSON document that describes the installation
     * .zip files stored in Amazon S3. Specify the name/value pairs in a file or a
     * quoted string. RDS Custom applies the patches in the order in which they are
     * listed.</p> <p>The following JSON fields are valid:</p> <dl>
     * <dt>MediaImportTemplateVersion</dt> <dd> <p>Version of the CEV manifest. The
     * date is in the format <code>YYYY-MM-DD</code>.</p> </dd>
     * <dt>databaseInstallationFileNames</dt> <dd> <p>Ordered list of installation
     * files for the CEV.</p> </dd> <dt>opatchFileNames</dt> <dd> <p>Ordered list of
     * OPatch installers used for the Oracle DB engine.</p> </dd>
     * <dt>psuRuPatchFileNames</dt> <dd> <p>The PSU and RU patches for this CEV.</p>
     * </dd> <dt>OtherPatchFileNames</dt> <dd> <p>The patches that are not in the list
     * of PSU and RU patches. Amazon RDS applies these patches after applying the PSU
     * and RU patches.</p> </dd> </dl> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-cev.html#custom-cev.preparing.manifest">
     * Creating the CEV manifest</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline const Aws::String& GetManifest() const{ return m_manifest; }
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }
    inline void SetManifest(const Aws::String& value) { m_manifestHasBeenSet = true; m_manifest = value; }
    inline void SetManifest(Aws::String&& value) { m_manifestHasBeenSet = true; m_manifest = std::move(value); }
    inline void SetManifest(const char* value) { m_manifestHasBeenSet = true; m_manifest.assign(value); }
    inline CreateCustomDBEngineVersionRequest& WithManifest(const Aws::String& value) { SetManifest(value); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithManifest(Aws::String&& value) { SetManifest(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithManifest(const char* value) { SetManifest(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateCustomDBEngineVersionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateCustomDBEngineVersionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of a CEV to use as a source for creating a new CEV. You can specify a
     * different Amazon Machine Imagine (AMI) by using either <code>Source</code> or
     * <code>UseAwsProvidedLatestImage</code>. You can't specify a different JSON
     * manifest when you specify
     * <code>SourceCustomDbEngineVersionIdentifier</code>.</p>
     */
    inline const Aws::String& GetSourceCustomDbEngineVersionIdentifier() const{ return m_sourceCustomDbEngineVersionIdentifier; }
    inline bool SourceCustomDbEngineVersionIdentifierHasBeenSet() const { return m_sourceCustomDbEngineVersionIdentifierHasBeenSet; }
    inline void SetSourceCustomDbEngineVersionIdentifier(const Aws::String& value) { m_sourceCustomDbEngineVersionIdentifierHasBeenSet = true; m_sourceCustomDbEngineVersionIdentifier = value; }
    inline void SetSourceCustomDbEngineVersionIdentifier(Aws::String&& value) { m_sourceCustomDbEngineVersionIdentifierHasBeenSet = true; m_sourceCustomDbEngineVersionIdentifier = std::move(value); }
    inline void SetSourceCustomDbEngineVersionIdentifier(const char* value) { m_sourceCustomDbEngineVersionIdentifierHasBeenSet = true; m_sourceCustomDbEngineVersionIdentifier.assign(value); }
    inline CreateCustomDBEngineVersionRequest& WithSourceCustomDbEngineVersionIdentifier(const Aws::String& value) { SetSourceCustomDbEngineVersionIdentifier(value); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithSourceCustomDbEngineVersionIdentifier(Aws::String&& value) { SetSourceCustomDbEngineVersionIdentifier(std::move(value)); return *this;}
    inline CreateCustomDBEngineVersionRequest& WithSourceCustomDbEngineVersionIdentifier(const char* value) { SetSourceCustomDbEngineVersionIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to use the latest service-provided Amazon Machine Image
     * (AMI) for the CEV. If you specify <code>UseAwsProvidedLatestImage</code>, you
     * can't also specify <code>ImageId</code>.</p>
     */
    inline bool GetUseAwsProvidedLatestImage() const{ return m_useAwsProvidedLatestImage; }
    inline bool UseAwsProvidedLatestImageHasBeenSet() const { return m_useAwsProvidedLatestImageHasBeenSet; }
    inline void SetUseAwsProvidedLatestImage(bool value) { m_useAwsProvidedLatestImageHasBeenSet = true; m_useAwsProvidedLatestImage = value; }
    inline CreateCustomDBEngineVersionRequest& WithUseAwsProvidedLatestImage(bool value) { SetUseAwsProvidedLatestImage(value); return *this;}
    ///@}
  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_databaseInstallationFilesS3BucketName;
    bool m_databaseInstallationFilesS3BucketNameHasBeenSet = false;

    Aws::String m_databaseInstallationFilesS3Prefix;
    bool m_databaseInstallationFilesS3PrefixHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_kMSKeyId;
    bool m_kMSKeyIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_manifest;
    bool m_manifestHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_sourceCustomDbEngineVersionIdentifier;
    bool m_sourceCustomDbEngineVersionIdentifierHasBeenSet = false;

    bool m_useAwsProvidedLatestImage;
    bool m_useAwsProvidedLatestImageHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
