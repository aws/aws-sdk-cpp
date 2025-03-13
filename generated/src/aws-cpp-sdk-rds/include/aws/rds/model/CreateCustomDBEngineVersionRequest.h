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
    AWS_RDS_API CreateCustomDBEngineVersionRequest() = default;

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
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    CreateCustomDBEngineVersionRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your CEV. The name format is 19.<i>customized_string</i>. For
     * example, a valid CEV name is <code>19.my_cev1</code>. This setting is required
     * for RDS Custom for Oracle, but optional for Amazon RDS. The combination of
     * <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Region.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    CreateCustomDBEngineVersionRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Amazon S3 bucket that contains database installation files for
     * your CEV. For example, a valid bucket name is
     * <code>my-custom-installation-files</code>.</p>
     */
    inline const Aws::String& GetDatabaseInstallationFilesS3BucketName() const { return m_databaseInstallationFilesS3BucketName; }
    inline bool DatabaseInstallationFilesS3BucketNameHasBeenSet() const { return m_databaseInstallationFilesS3BucketNameHasBeenSet; }
    template<typename DatabaseInstallationFilesS3BucketNameT = Aws::String>
    void SetDatabaseInstallationFilesS3BucketName(DatabaseInstallationFilesS3BucketNameT&& value) { m_databaseInstallationFilesS3BucketNameHasBeenSet = true; m_databaseInstallationFilesS3BucketName = std::forward<DatabaseInstallationFilesS3BucketNameT>(value); }
    template<typename DatabaseInstallationFilesS3BucketNameT = Aws::String>
    CreateCustomDBEngineVersionRequest& WithDatabaseInstallationFilesS3BucketName(DatabaseInstallationFilesS3BucketNameT&& value) { SetDatabaseInstallationFilesS3BucketName(std::forward<DatabaseInstallationFilesS3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 directory that contains the database installation files for
     * your CEV. For example, a valid bucket name is <code>123456789012/cev1</code>. If
     * this setting isn't specified, no prefix is assumed.</p>
     */
    inline const Aws::String& GetDatabaseInstallationFilesS3Prefix() const { return m_databaseInstallationFilesS3Prefix; }
    inline bool DatabaseInstallationFilesS3PrefixHasBeenSet() const { return m_databaseInstallationFilesS3PrefixHasBeenSet; }
    template<typename DatabaseInstallationFilesS3PrefixT = Aws::String>
    void SetDatabaseInstallationFilesS3Prefix(DatabaseInstallationFilesS3PrefixT&& value) { m_databaseInstallationFilesS3PrefixHasBeenSet = true; m_databaseInstallationFilesS3Prefix = std::forward<DatabaseInstallationFilesS3PrefixT>(value); }
    template<typename DatabaseInstallationFilesS3PrefixT = Aws::String>
    CreateCustomDBEngineVersionRequest& WithDatabaseInstallationFilesS3Prefix(DatabaseInstallationFilesS3PrefixT&& value) { SetDatabaseInstallationFilesS3Prefix(std::forward<DatabaseInstallationFilesS3PrefixT>(value)); return *this;}
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
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    CreateCustomDBEngineVersionRequest& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
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
    inline const Aws::String& GetKMSKeyId() const { return m_kMSKeyId; }
    inline bool KMSKeyIdHasBeenSet() const { return m_kMSKeyIdHasBeenSet; }
    template<typename KMSKeyIdT = Aws::String>
    void SetKMSKeyId(KMSKeyIdT&& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = std::forward<KMSKeyIdT>(value); }
    template<typename KMSKeyIdT = Aws::String>
    CreateCustomDBEngineVersionRequest& WithKMSKeyId(KMSKeyIdT&& value) { SetKMSKeyId(std::forward<KMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of your CEV.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateCustomDBEngineVersionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline const Aws::String& GetManifest() const { return m_manifest; }
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }
    template<typename ManifestT = Aws::String>
    void SetManifest(ManifestT&& value) { m_manifestHasBeenSet = true; m_manifest = std::forward<ManifestT>(value); }
    template<typename ManifestT = Aws::String>
    CreateCustomDBEngineVersionRequest& WithManifest(ManifestT&& value) { SetManifest(std::forward<ManifestT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateCustomDBEngineVersionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateCustomDBEngineVersionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of a CEV to use as a source for creating a new CEV. You can specify a
     * different Amazon Machine Imagine (AMI) by using either <code>Source</code> or
     * <code>UseAwsProvidedLatestImage</code>. You can't specify a different JSON
     * manifest when you specify
     * <code>SourceCustomDbEngineVersionIdentifier</code>.</p>
     */
    inline const Aws::String& GetSourceCustomDbEngineVersionIdentifier() const { return m_sourceCustomDbEngineVersionIdentifier; }
    inline bool SourceCustomDbEngineVersionIdentifierHasBeenSet() const { return m_sourceCustomDbEngineVersionIdentifierHasBeenSet; }
    template<typename SourceCustomDbEngineVersionIdentifierT = Aws::String>
    void SetSourceCustomDbEngineVersionIdentifier(SourceCustomDbEngineVersionIdentifierT&& value) { m_sourceCustomDbEngineVersionIdentifierHasBeenSet = true; m_sourceCustomDbEngineVersionIdentifier = std::forward<SourceCustomDbEngineVersionIdentifierT>(value); }
    template<typename SourceCustomDbEngineVersionIdentifierT = Aws::String>
    CreateCustomDBEngineVersionRequest& WithSourceCustomDbEngineVersionIdentifier(SourceCustomDbEngineVersionIdentifierT&& value) { SetSourceCustomDbEngineVersionIdentifier(std::forward<SourceCustomDbEngineVersionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to use the latest service-provided Amazon Machine Image
     * (AMI) for the CEV. If you specify <code>UseAwsProvidedLatestImage</code>, you
     * can't also specify <code>ImageId</code>.</p>
     */
    inline bool GetUseAwsProvidedLatestImage() const { return m_useAwsProvidedLatestImage; }
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

    bool m_useAwsProvidedLatestImage{false};
    bool m_useAwsProvidedLatestImageHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
