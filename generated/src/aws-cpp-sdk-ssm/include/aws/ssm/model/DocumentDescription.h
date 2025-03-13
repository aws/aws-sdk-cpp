/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentHashType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/DocumentStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/DocumentType.h>
#include <aws/ssm/model/DocumentFormat.h>
#include <aws/ssm/model/ReviewStatus.h>
#include <aws/ssm/model/DocumentParameter.h>
#include <aws/ssm/model/PlatformType.h>
#include <aws/ssm/model/Tag.h>
#include <aws/ssm/model/AttachmentInformation.h>
#include <aws/ssm/model/DocumentRequires.h>
#include <aws/ssm/model/ReviewInformation.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes an Amazon Web Services Systems Manager document (SSM document).
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DocumentDescription">AWS
   * API Reference</a></p>
   */
  class DocumentDescription
  {
  public:
    AWS_SSM_API DocumentDescription() = default;
    AWS_SSM_API DocumentDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API DocumentDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SHA1 hash of the document, which you can use for verification.</p>
     */
    inline const Aws::String& GetSha1() const { return m_sha1; }
    inline bool Sha1HasBeenSet() const { return m_sha1HasBeenSet; }
    template<typename Sha1T = Aws::String>
    void SetSha1(Sha1T&& value) { m_sha1HasBeenSet = true; m_sha1 = std::forward<Sha1T>(value); }
    template<typename Sha1T = Aws::String>
    DocumentDescription& WithSha1(Sha1T&& value) { SetSha1(std::forward<Sha1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline const Aws::String& GetHash() const { return m_hash; }
    inline bool HashHasBeenSet() const { return m_hashHasBeenSet; }
    template<typename HashT = Aws::String>
    void SetHash(HashT&& value) { m_hashHasBeenSet = true; m_hash = std::forward<HashT>(value); }
    template<typename HashT = Aws::String>
    DocumentDescription& WithHash(HashT&& value) { SetHash(std::forward<HashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash type of the document. Valid values include <code>Sha256</code> or
     * <code>Sha1</code>.</p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline DocumentHashType GetHashType() const { return m_hashType; }
    inline bool HashTypeHasBeenSet() const { return m_hashTypeHasBeenSet; }
    inline void SetHashType(DocumentHashType value) { m_hashTypeHasBeenSet = true; m_hashType = value; }
    inline DocumentDescription& WithHashType(DocumentHashType value) { SetHashType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SSM document.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DocumentDescription& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the SSM document. This value can differ for each version
     * of the document. If you want to update this value, see
     * <a>UpdateDocument</a>.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    DocumentDescription& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the artifact associated with the document.</p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    DocumentDescription& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services user that created the document.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    DocumentDescription& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the document was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    DocumentDescription& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the SSM document.</p>
     */
    inline DocumentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DocumentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DocumentDescription& WithStatus(DocumentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message returned by Amazon Web Services Systems Manager that explains the
     * <code>Status</code> value. For example, a <code>Failed</code> status might be
     * explained by the <code>StatusInformation</code> message, "The specified S3
     * bucket doesn't exist. Verify that the URL of the S3 bucket is correct."</p>
     */
    inline const Aws::String& GetStatusInformation() const { return m_statusInformation; }
    inline bool StatusInformationHasBeenSet() const { return m_statusInformationHasBeenSet; }
    template<typename StatusInformationT = Aws::String>
    void SetStatusInformation(StatusInformationT&& value) { m_statusInformationHasBeenSet = true; m_statusInformation = std::forward<StatusInformationT>(value); }
    template<typename StatusInformationT = Aws::String>
    DocumentDescription& WithStatusInformation(StatusInformationT&& value) { SetStatusInformation(std::forward<StatusInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    DocumentDescription& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the document. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DocumentDescription& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the parameters for a document.</p>
     */
    inline const Aws::Vector<DocumentParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<DocumentParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<DocumentParameter>>
    DocumentDescription& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = DocumentParameter>
    DocumentDescription& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of operating system (OS) platforms compatible with this SSM
     * document. </p>
     */
    inline const Aws::Vector<PlatformType>& GetPlatformTypes() const { return m_platformTypes; }
    inline bool PlatformTypesHasBeenSet() const { return m_platformTypesHasBeenSet; }
    template<typename PlatformTypesT = Aws::Vector<PlatformType>>
    void SetPlatformTypes(PlatformTypesT&& value) { m_platformTypesHasBeenSet = true; m_platformTypes = std::forward<PlatformTypesT>(value); }
    template<typename PlatformTypesT = Aws::Vector<PlatformType>>
    DocumentDescription& WithPlatformTypes(PlatformTypesT&& value) { SetPlatformTypes(std::forward<PlatformTypesT>(value)); return *this;}
    inline DocumentDescription& AddPlatformTypes(PlatformType value) { m_platformTypesHasBeenSet = true; m_platformTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of document.</p>
     */
    inline DocumentType GetDocumentType() const { return m_documentType; }
    inline bool DocumentTypeHasBeenSet() const { return m_documentTypeHasBeenSet; }
    inline void SetDocumentType(DocumentType value) { m_documentTypeHasBeenSet = true; m_documentType = value; }
    inline DocumentDescription& WithDocumentType(DocumentType value) { SetDocumentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema version.</p>
     */
    inline const Aws::String& GetSchemaVersion() const { return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    template<typename SchemaVersionT = Aws::String>
    void SetSchemaVersion(SchemaVersionT&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::forward<SchemaVersionT>(value); }
    template<typename SchemaVersionT = Aws::String>
    DocumentDescription& WithSchemaVersion(SchemaVersionT&& value) { SetSchemaVersion(std::forward<SchemaVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the document.</p>
     */
    inline const Aws::String& GetLatestVersion() const { return m_latestVersion; }
    inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }
    template<typename LatestVersionT = Aws::String>
    void SetLatestVersion(LatestVersionT&& value) { m_latestVersionHasBeenSet = true; m_latestVersion = std::forward<LatestVersionT>(value); }
    template<typename LatestVersionT = Aws::String>
    DocumentDescription& WithLatestVersion(LatestVersionT&& value) { SetLatestVersion(std::forward<LatestVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default version.</p>
     */
    inline const Aws::String& GetDefaultVersion() const { return m_defaultVersion; }
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }
    template<typename DefaultVersionT = Aws::String>
    void SetDefaultVersion(DefaultVersionT&& value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = std::forward<DefaultVersionT>(value); }
    template<typename DefaultVersionT = Aws::String>
    DocumentDescription& WithDefaultVersion(DefaultVersionT&& value) { SetDefaultVersion(std::forward<DefaultVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document format, either JSON or YAML.</p>
     */
    inline DocumentFormat GetDocumentFormat() const { return m_documentFormat; }
    inline bool DocumentFormatHasBeenSet() const { return m_documentFormatHasBeenSet; }
    inline void SetDocumentFormat(DocumentFormat value) { m_documentFormatHasBeenSet = true; m_documentFormat = value; }
    inline DocumentDescription& WithDocumentFormat(DocumentFormat value) { SetDocumentFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target type which defines the kinds of resources the document can run on.
     * For example, <code>/AWS::EC2::Instance</code>. For a list of valid resource
     * types, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services resource and property types reference</a> in the <i>CloudFormation
     * User Guide</i>. </p>
     */
    inline const Aws::String& GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    template<typename TargetTypeT = Aws::String>
    void SetTargetType(TargetTypeT&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::forward<TargetTypeT>(value); }
    template<typename TargetTypeT = Aws::String>
    DocumentDescription& WithTargetType(TargetTypeT&& value) { SetTargetType(std::forward<TargetTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags, or metadata, that have been applied to the document.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    DocumentDescription& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    DocumentDescription& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details about the document attachments, including names, locations, sizes,
     * and so on.</p>
     */
    inline const Aws::Vector<AttachmentInformation>& GetAttachmentsInformation() const { return m_attachmentsInformation; }
    inline bool AttachmentsInformationHasBeenSet() const { return m_attachmentsInformationHasBeenSet; }
    template<typename AttachmentsInformationT = Aws::Vector<AttachmentInformation>>
    void SetAttachmentsInformation(AttachmentsInformationT&& value) { m_attachmentsInformationHasBeenSet = true; m_attachmentsInformation = std::forward<AttachmentsInformationT>(value); }
    template<typename AttachmentsInformationT = Aws::Vector<AttachmentInformation>>
    DocumentDescription& WithAttachmentsInformation(AttachmentsInformationT&& value) { SetAttachmentsInformation(std::forward<AttachmentsInformationT>(value)); return *this;}
    template<typename AttachmentsInformationT = AttachmentInformation>
    DocumentDescription& AddAttachmentsInformation(AttachmentsInformationT&& value) { m_attachmentsInformationHasBeenSet = true; m_attachmentsInformation.emplace_back(std::forward<AttachmentsInformationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of SSM documents required by a document. For example, an
     * <code>ApplicationConfiguration</code> document requires an
     * <code>ApplicationConfigurationSchema</code> document.</p>
     */
    inline const Aws::Vector<DocumentRequires>& GetRequires() const { return m_requires; }
    inline bool RequiresHasBeenSet() const { return m_requiresHasBeenSet; }
    template<typename RequiresT = Aws::Vector<DocumentRequires>>
    void SetRequires(RequiresT&& value) { m_requiresHasBeenSet = true; m_requires = std::forward<RequiresT>(value); }
    template<typename RequiresT = Aws::Vector<DocumentRequires>>
    DocumentDescription& WithRequires(RequiresT&& value) { SetRequires(std::forward<RequiresT>(value)); return *this;}
    template<typename RequiresT = DocumentRequires>
    DocumentDescription& AddRequires(RequiresT&& value) { m_requiresHasBeenSet = true; m_requires.emplace_back(std::forward<RequiresT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user in your organization who created the document.</p>
     */
    inline const Aws::String& GetAuthor() const { return m_author; }
    inline bool AuthorHasBeenSet() const { return m_authorHasBeenSet; }
    template<typename AuthorT = Aws::String>
    void SetAuthor(AuthorT&& value) { m_authorHasBeenSet = true; m_author = std::forward<AuthorT>(value); }
    template<typename AuthorT = Aws::String>
    DocumentDescription& WithAuthor(AuthorT&& value) { SetAuthor(std::forward<AuthorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the review of a document.</p>
     */
    inline const Aws::Vector<ReviewInformation>& GetReviewInformation() const { return m_reviewInformation; }
    inline bool ReviewInformationHasBeenSet() const { return m_reviewInformationHasBeenSet; }
    template<typename ReviewInformationT = Aws::Vector<ReviewInformation>>
    void SetReviewInformation(ReviewInformationT&& value) { m_reviewInformationHasBeenSet = true; m_reviewInformation = std::forward<ReviewInformationT>(value); }
    template<typename ReviewInformationT = Aws::Vector<ReviewInformation>>
    DocumentDescription& WithReviewInformation(ReviewInformationT&& value) { SetReviewInformation(std::forward<ReviewInformationT>(value)); return *this;}
    template<typename ReviewInformationT = ReviewInformation>
    DocumentDescription& AddReviewInformation(ReviewInformationT&& value) { m_reviewInformationHasBeenSet = true; m_reviewInformation.emplace_back(std::forward<ReviewInformationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the document currently approved for use in the
     * organization.</p>
     */
    inline const Aws::String& GetApprovedVersion() const { return m_approvedVersion; }
    inline bool ApprovedVersionHasBeenSet() const { return m_approvedVersionHasBeenSet; }
    template<typename ApprovedVersionT = Aws::String>
    void SetApprovedVersion(ApprovedVersionT&& value) { m_approvedVersionHasBeenSet = true; m_approvedVersion = std::forward<ApprovedVersionT>(value); }
    template<typename ApprovedVersionT = Aws::String>
    DocumentDescription& WithApprovedVersion(ApprovedVersionT&& value) { SetApprovedVersion(std::forward<ApprovedVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the document that is currently under review.</p>
     */
    inline const Aws::String& GetPendingReviewVersion() const { return m_pendingReviewVersion; }
    inline bool PendingReviewVersionHasBeenSet() const { return m_pendingReviewVersionHasBeenSet; }
    template<typename PendingReviewVersionT = Aws::String>
    void SetPendingReviewVersion(PendingReviewVersionT&& value) { m_pendingReviewVersionHasBeenSet = true; m_pendingReviewVersion = std::forward<PendingReviewVersionT>(value); }
    template<typename PendingReviewVersionT = Aws::String>
    DocumentDescription& WithPendingReviewVersion(PendingReviewVersionT&& value) { SetPendingReviewVersion(std::forward<PendingReviewVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the review.</p>
     */
    inline ReviewStatus GetReviewStatus() const { return m_reviewStatus; }
    inline bool ReviewStatusHasBeenSet() const { return m_reviewStatusHasBeenSet; }
    inline void SetReviewStatus(ReviewStatus value) { m_reviewStatusHasBeenSet = true; m_reviewStatus = value; }
    inline DocumentDescription& WithReviewStatus(ReviewStatus value) { SetReviewStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The classification of a document to help you identify and categorize its
     * use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::Vector<Aws::String>>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::Vector<Aws::String>>
    DocumentDescription& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    template<typename CategoryT = Aws::String>
    DocumentDescription& AddCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category.emplace_back(std::forward<CategoryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value that identifies a document's category.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCategoryEnum() const { return m_categoryEnum; }
    inline bool CategoryEnumHasBeenSet() const { return m_categoryEnumHasBeenSet; }
    template<typename CategoryEnumT = Aws::Vector<Aws::String>>
    void SetCategoryEnum(CategoryEnumT&& value) { m_categoryEnumHasBeenSet = true; m_categoryEnum = std::forward<CategoryEnumT>(value); }
    template<typename CategoryEnumT = Aws::Vector<Aws::String>>
    DocumentDescription& WithCategoryEnum(CategoryEnumT&& value) { SetCategoryEnum(std::forward<CategoryEnumT>(value)); return *this;}
    template<typename CategoryEnumT = Aws::String>
    DocumentDescription& AddCategoryEnum(CategoryEnumT&& value) { m_categoryEnumHasBeenSet = true; m_categoryEnum.emplace_back(std::forward<CategoryEnumT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sha1;
    bool m_sha1HasBeenSet = false;

    Aws::String m_hash;
    bool m_hashHasBeenSet = false;

    DocumentHashType m_hashType{DocumentHashType::NOT_SET};
    bool m_hashTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    DocumentStatus m_status{DocumentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusInformation;
    bool m_statusInformationHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<DocumentParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<PlatformType> m_platformTypes;
    bool m_platformTypesHasBeenSet = false;

    DocumentType m_documentType{DocumentType::NOT_SET};
    bool m_documentTypeHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Aws::String m_latestVersion;
    bool m_latestVersionHasBeenSet = false;

    Aws::String m_defaultVersion;
    bool m_defaultVersionHasBeenSet = false;

    DocumentFormat m_documentFormat{DocumentFormat::NOT_SET};
    bool m_documentFormatHasBeenSet = false;

    Aws::String m_targetType;
    bool m_targetTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<AttachmentInformation> m_attachmentsInformation;
    bool m_attachmentsInformationHasBeenSet = false;

    Aws::Vector<DocumentRequires> m_requires;
    bool m_requiresHasBeenSet = false;

    Aws::String m_author;
    bool m_authorHasBeenSet = false;

    Aws::Vector<ReviewInformation> m_reviewInformation;
    bool m_reviewInformationHasBeenSet = false;

    Aws::String m_approvedVersion;
    bool m_approvedVersionHasBeenSet = false;

    Aws::String m_pendingReviewVersion;
    bool m_pendingReviewVersionHasBeenSet = false;

    ReviewStatus m_reviewStatus{ReviewStatus::NOT_SET};
    bool m_reviewStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Vector<Aws::String> m_categoryEnum;
    bool m_categoryEnumHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
